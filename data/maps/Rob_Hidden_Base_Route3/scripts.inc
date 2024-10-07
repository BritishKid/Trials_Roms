Rob_Hidden_Base_Route3_MapScripts::
	.byte 0


FrontPageRob_Hidden_Base_EventScript_PC::
# 5 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	lockall
# 6 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_PC_Text_0
# 7 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	releaseall
	return


FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll::
# 11 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	lockall
# 12 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	faceplayer
# 13 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MUDKIP, FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2
# 21 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1:
# 23 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	releaseall
	return

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2:
# 14 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
# 15 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 16 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MUDKIP
# 17 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_MUDKIP_DOLL
# 18 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1
	goto FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1


FrontPageRob_HiddenBase_EventScript_Battle::
# 27 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_unset FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_2
FrontPageRob_HiddenBase_EventScript_Battle_1:
# 30 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_set FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_6
FrontPageRob_HiddenBase_EventScript_Battle_4:
# 33 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_set FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_11
FrontPageRob_HiddenBase_EventScript_Battle_9:
# 37 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	release
# 38 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	waitmessage
	end

FrontPageRob_HiddenBase_EventScript_Battle_2:
# 28 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	trainerbattle_single TRAINER_FRONTPAGEROB_SECRET_BASE, FrontPageRob_Intro, FrontPageRob_Outro, FrontPageRob_Beaten
	goto FrontPageRob_HiddenBase_EventScript_Battle_1

FrontPageRob_HiddenBase_EventScript_Battle_5:
# 31 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	call Rob_GivesHonege
	goto FrontPageRob_HiddenBase_EventScript_Battle_4

FrontPageRob_HiddenBase_EventScript_Battle_6:
# 30 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_unset FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_5
	goto FrontPageRob_HiddenBase_EventScript_Battle_4

FrontPageRob_HiddenBase_EventScript_Battle_10:
# 34 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox PostBattle_FrontPageRob, MSGBOX_AUTOCLOSE
	goto FrontPageRob_HiddenBase_EventScript_Battle_9

FrontPageRob_HiddenBase_EventScript_Battle_11:
# 33 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	goto_if_set FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_10
	goto FrontPageRob_HiddenBase_EventScript_Battle_9


FrontPageRob_Beaten::
# 43 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox Beat_FrontPageRob, MSGBOX_AUTOCLOSE
# 44 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	setflag FLAG_FRONTPAGEROB_BEATEN
# 45 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	call Rob_GivesHonege
# 46 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	release
	return


Rob_GivesHonege::
# 50 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	lock
# 51 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	showmonpic SPECIES_HONEDGE, 10, 3
# 52 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	givemon SPECIES_HONEDGE, 5
# 53 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	setflag FLAG_FRONTPAGEROB_GAVE_HONEGE
# 54 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 55 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rob_GivesHonege_1
# 59 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rob_GivesHonege_2
# 64 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	hidemonpic
# 65 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox Rob_GivesHonege_Text_1
	return

Rob_GivesHonege_1:
# 56 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox Rob_GivesHonege_Text_0
# 57 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	call NicknamePartyMon
	return

Rob_GivesHonege_2:
# 60 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	msgbox Rob_GivesHonege_Text_0
# 61 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	call NicknameBoxMon
	return


FrontPageRob_Hidden_Base_EventScript_PC_Text_0:
# 6 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "Thank you to FrontPageRob for the\n"
	.string "support in making this game!$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0:
# 14 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "It's FrontPageRob's Mudkip Doll$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1:
# 18 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "You've unlocked the Mudkip Doll for\n"
	.string "your secret base$"

Rob_GivesHonege_Text_0:
# 56 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "Recieved Honedge$"

Rob_GivesHonege_Text_1:
# 65 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

FrontPageRob_Intro::
# 70 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "Physics puns are no joke. It's a\n"
	.string "relatively dark matter$"

FrontPageRob_Outro::
# 74 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "Clearly I've been studying frequency\n"
	.string "too much, now my brain Hertz$"

PostBattle_FrontPageRob::
# 78 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "$"

Beat_FrontPageRob::
# 82 "data/maps/Rob_Hidden_Base_Route3/scripts.pory"
	.string "Well that didn't go right. Here take this\n"
	.string "sword I found$"
