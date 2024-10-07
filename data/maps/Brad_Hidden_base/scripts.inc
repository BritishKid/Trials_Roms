Brad_Hidden_base_MapScripts::
	.byte 0


VictoryRoad_Brad_SwabluDoll::
	lockall
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_SWABLU, VictoryRoad_Brad_SwabluDoll_2
	msgbox VictoryRoad_Brad_SwabluDoll_Text_0
VictoryRoad_Brad_SwabluDoll_1:
	releaseall
	return

VictoryRoad_Brad_SwabluDoll_2:
	msgbox VictoryRoad_Brad_SwabluDoll_Text_0
	givedecoration DECOR_SWABLU_DOLL
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_SWABLU
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SWABLU_DOLL
	msgbox VictoryRoad_Brad_SwabluDoll_Text_1
	goto VictoryRoad_Brad_SwabluDoll_1


VictoryRoad_Brad_EventScript_Battle::
	goto_if_unset FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_2
VictoryRoad_Brad_EventScript_Battle_1:
	goto_if_set FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_6
VictoryRoad_Brad_EventScript_Battle_4:
	goto_if_set FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_11
VictoryRoad_Brad_EventScript_Battle_9:
	release
	waitmessage
	end

VictoryRoad_Brad_EventScript_Battle_2:
	trainerbattle_single TRAINER_BRAD_HIDDEN_BASE, Brad_HiddenBase_Intro, Brad_HiddenBase_Outro, FrontPageRob_Beaten
	goto VictoryRoad_Brad_EventScript_Battle_1

VictoryRoad_Brad_EventScript_Battle_5:
	call Brad_Gives_Axew
	goto VictoryRoad_Brad_EventScript_Battle_4

VictoryRoad_Brad_EventScript_Battle_6:
	goto_if_unset FLAG_BRAD_GIVES_SHINY_AXEW, VictoryRoad_Brad_EventScript_Battle_5
	goto VictoryRoad_Brad_EventScript_Battle_4

VictoryRoad_Brad_EventScript_Battle_10:
	msgbox Brad_HiddenBase_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Brad_EventScript_Battle_9

VictoryRoad_Brad_EventScript_Battle_11:
	goto_if_set FLAG_BRAD_GIVES_SHINY_AXEW, VictoryRoad_Brad_EventScript_Battle_10
	goto VictoryRoad_Brad_EventScript_Battle_9


VictoryRoad_Brad_Beaten::
	msgbox Beat_FrontPageRob, MSGBOX_AUTOCLOSE
	setflag FLAG_BRAD_BEATEN
	call Brad_Gives_Axew
	release
	return


Brad_Gives_Axew::
	lock
	setflag P_FLAG_FORCE_SHINY
	showmonpic SPECIES_AXEW, 10, 3
	givemon SPECIES_AXEW, 5
	setflag FLAG_BRAD_GIVES_SHINY_AXEW
	clearflag P_FLAG_FORCE_SHINY
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Brad_Gives_Axew_1
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Brad_Gives_Axew_2
	hidemonpic
	msgbox Brad_Gives_Axew_Text_1
	return

Brad_Gives_Axew_1:
	msgbox Brad_Gives_Axew_Text_0
	call NicknamePartyMon
	return

Brad_Gives_Axew_2:
	msgbox Brad_Gives_Axew_Text_0
	call NicknameBoxMon
	return


VictoryRoad_Brad_SwabluDoll_Text_0:
	.string "It's Brad's Swablu Doll$"

VictoryRoad_Brad_SwabluDoll_Text_1:
	.string "You've unlocked the Swablu Doll for\n"
	.string "your secret base$"

Brad_Gives_Axew_Text_0:
	.string "Recieved Axew$"

Brad_Gives_Axew_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Brad_HiddenBase_Intro::
	.string "Let's show the elite four who the\n"
	.string "strongest trainers really are!$"

Brad_HiddenBase_Outro::
	.string "Go ahead and become the champ!$"

Brad_HiddenBase_PostBattle::
	.string "$"

Brad_Beaten_Text::
	.string "Here take this awesome Pokémon, it\n"
	.string "should help you with the Elite 4$"
