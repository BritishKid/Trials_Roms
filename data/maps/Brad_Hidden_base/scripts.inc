Brad_Hidden_base_MapScripts::
	.byte 0


VictoryRoad_Brad_SwabluDoll::
# 4 "data/maps/Brad_Hidden_base/scripts.pory"
	lockall
# 5 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_SWABLU, VictoryRoad_Brad_SwabluDoll_2
# 13 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox VictoryRoad_Brad_SwabluDoll_Text_0
VictoryRoad_Brad_SwabluDoll_1:
# 15 "data/maps/Brad_Hidden_base/scripts.pory"
	releaseall
	return

VictoryRoad_Brad_SwabluDoll_2:
# 6 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox VictoryRoad_Brad_SwabluDoll_Text_0
# 7 "data/maps/Brad_Hidden_base/scripts.pory"
	givedecoration DECOR_SWABLU_DOLL
# 8 "data/maps/Brad_Hidden_base/scripts.pory"
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_SWABLU
# 9 "data/maps/Brad_Hidden_base/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SWABLU_DOLL
# 10 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox VictoryRoad_Brad_SwabluDoll_Text_1
	goto VictoryRoad_Brad_SwabluDoll_1


VictoryRoad_Brad_EventScript_Battle::
# 19 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_unset FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_2
VictoryRoad_Brad_EventScript_Battle_1:
# 22 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_set FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_6
VictoryRoad_Brad_EventScript_Battle_4:
# 25 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_set FLAG_BRAD_BEATEN, VictoryRoad_Brad_EventScript_Battle_11
VictoryRoad_Brad_EventScript_Battle_9:
# 28 "data/maps/Brad_Hidden_base/scripts.pory"
	release
# 29 "data/maps/Brad_Hidden_base/scripts.pory"
	waitmessage
	end

VictoryRoad_Brad_EventScript_Battle_2:
# 20 "data/maps/Brad_Hidden_base/scripts.pory"
	trainerbattle_single TRAINER_BRAD_HIDDEN_BASE, Brad_HiddenBase_Intro, Brad_HiddenBase_Outro, FrontPageRob_Beaten
	goto VictoryRoad_Brad_EventScript_Battle_1

VictoryRoad_Brad_EventScript_Battle_5:
# 23 "data/maps/Brad_Hidden_base/scripts.pory"
	call Brad_Gives_Axew
	goto VictoryRoad_Brad_EventScript_Battle_4

VictoryRoad_Brad_EventScript_Battle_6:
# 22 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_unset FLAG_BRAD_GIVES_SHINY_AXEW, VictoryRoad_Brad_EventScript_Battle_5
	goto VictoryRoad_Brad_EventScript_Battle_4

VictoryRoad_Brad_EventScript_Battle_10:
# 26 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox Brad_HiddenBase_PostBattle, MSGBOX_AUTOCLOSE
	goto VictoryRoad_Brad_EventScript_Battle_9

VictoryRoad_Brad_EventScript_Battle_11:
# 25 "data/maps/Brad_Hidden_base/scripts.pory"
	goto_if_set FLAG_BRAD_GIVES_SHINY_AXEW, VictoryRoad_Brad_EventScript_Battle_10
	goto VictoryRoad_Brad_EventScript_Battle_9


VictoryRoad_Brad_Beaten::
# 34 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox Beat_FrontPageRob, MSGBOX_AUTOCLOSE
# 35 "data/maps/Brad_Hidden_base/scripts.pory"
	setflag FLAG_BRAD_BEATEN
# 36 "data/maps/Brad_Hidden_base/scripts.pory"
	call Brad_Gives_Axew
# 37 "data/maps/Brad_Hidden_base/scripts.pory"
	release
	return


Brad_Gives_Axew::
# 41 "data/maps/Brad_Hidden_base/scripts.pory"
	lock
# 42 "data/maps/Brad_Hidden_base/scripts.pory"
	setflag P_FLAG_FORCE_SHINY
# 43 "data/maps/Brad_Hidden_base/scripts.pory"
	showmonpic SPECIES_AXEW, 10, 3
# 44 "data/maps/Brad_Hidden_base/scripts.pory"
	givemon SPECIES_AXEW, 5
# 45 "data/maps/Brad_Hidden_base/scripts.pory"
	setflag FLAG_BRAD_GIVES_SHINY_AXEW
# 46 "data/maps/Brad_Hidden_base/scripts.pory"
	clearflag P_FLAG_FORCE_SHINY
# 47 "data/maps/Brad_Hidden_base/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 48 "data/maps/Brad_Hidden_base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Brad_Gives_Axew_1
# 52 "data/maps/Brad_Hidden_base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Brad_Gives_Axew_2
# 57 "data/maps/Brad_Hidden_base/scripts.pory"
	hidemonpic
# 58 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox Brad_Gives_Axew_Text_1
	return

Brad_Gives_Axew_1:
# 49 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox Brad_Gives_Axew_Text_0
# 50 "data/maps/Brad_Hidden_base/scripts.pory"
	call NicknamePartyMon
	return

Brad_Gives_Axew_2:
# 53 "data/maps/Brad_Hidden_base/scripts.pory"
	msgbox Brad_Gives_Axew_Text_0
# 54 "data/maps/Brad_Hidden_base/scripts.pory"
	call NicknameBoxMon
	return


VictoryRoad_Brad_SwabluDoll_Text_0:
# 6 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "It's Brad's Swablu Doll$"

VictoryRoad_Brad_SwabluDoll_Text_1:
# 10 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "You've unlocked the Swablu Doll for\n"
	.string "your secret base$"

Brad_Gives_Axew_Text_0:
# 49 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "Recieved Axew$"

Brad_Gives_Axew_Text_1:
# 58 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Brad_HiddenBase_Intro::
# 65 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "Let's show the elite four who the\n"
	.string "strongest trainers really are!$"

Brad_HiddenBase_Outro::
# 69 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "Go ahead and become the champ!$"

Brad_HiddenBase_PostBattle::
# 73 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "$"

Brad_Beaten_Text::
# 77 "data/maps/Brad_Hidden_base/scripts.pory"
	.string "Here take this awesome Pokémon, it\n"
	.string "should help you with the Elite 4$"
