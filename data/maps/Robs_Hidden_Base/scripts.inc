Robs_Hidden_Base_MapScripts::
	.byte 0


FrontPageRob_Hidden_Base_EventScript_PC::
# 4 "data/maps/Robs_Hidden_Base/scripts.pory"
	lockall
# 5 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_PC_Text_0
# 6 "data/maps/Robs_Hidden_Base/scripts.pory"
	releaseall
	return


FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll::
# 10 "data/maps/Robs_Hidden_Base/scripts.pory"
	lockall
# 11 "data/maps/Robs_Hidden_Base/scripts.pory"
	faceplayer
# 12 "data/maps/Robs_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_FOUND_MUDKIP_DOLL, FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2
# 20 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1:
# 22 "data/maps/Robs_Hidden_Base/scripts.pory"
	releaseall
	return

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2:
# 13 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
# 14 "data/maps/Robs_Hidden_Base/scripts.pory"
	adddecoration DECOR_MUDKIP_DOLL
# 15 "data/maps/Robs_Hidden_Base/scripts.pory"
	setflag FLAG_FOUND_MUDKIP_DOLL
# 17 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1
	goto FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1


FrontPageRob_HiddenBase_EventScript_Battle::
# 26 "data/maps/Robs_Hidden_Base/scripts.pory"
	trainerbattle_single TRAINER_FRONTPAGEROB_SECRET_BASE, FrontPageRob_Intro, FrontPageRob_Outro, FrontPageRob_Beaten
# 27 "data/maps/Robs_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_2
FrontPageRob_HiddenBase_EventScript_Battle_1:
# 30 "data/maps/Robs_Hidden_Base/scripts.pory"
	goto_if_set FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_5
FrontPageRob_HiddenBase_EventScript_Battle_4:
# 34 "data/maps/Robs_Hidden_Base/scripts.pory"
	release
# 35 "data/maps/Robs_Hidden_Base/scripts.pory"
	waitmessage
	end

FrontPageRob_HiddenBase_EventScript_Battle_2:
# 28 "data/maps/Robs_Hidden_Base/scripts.pory"
	call Rob_GivesHonege
	goto FrontPageRob_HiddenBase_EventScript_Battle_1

FrontPageRob_HiddenBase_EventScript_Battle_5:
# 31 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox PostBattle_FrontPageRob, MSGBOX_AUTOCLOSE
	goto FrontPageRob_HiddenBase_EventScript_Battle_4


FrontPageRob_Beaten::
# 40 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox Beat_FrontPageRob, MSGBOX_AUTOCLOSE
# 41 "data/maps/Robs_Hidden_Base/scripts.pory"
	call Rob_GivesHonege
# 42 "data/maps/Robs_Hidden_Base/scripts.pory"
	release
	return


Rob_GivesHonege::
# 46 "data/maps/Robs_Hidden_Base/scripts.pory"
	lock
# 47 "data/maps/Robs_Hidden_Base/scripts.pory"
	showmonpic SPECIES_HONEDGE, 10, 3
# 48 "data/maps/Robs_Hidden_Base/scripts.pory"
	givemon SPECIES_HONEDGE, 5
# 49 "data/maps/Robs_Hidden_Base/scripts.pory"
	setflag FLAG_FRONTPAGEROB_GAVE_HONEGE
# 50 "data/maps/Robs_Hidden_Base/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 51 "data/maps/Robs_Hidden_Base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rob_GivesHonege_1
# 55 "data/maps/Robs_Hidden_Base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rob_GivesHonege_2
# 60 "data/maps/Robs_Hidden_Base/scripts.pory"
	hidemonpic
# 61 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox Rob_GivesHonege_Text_1
	return

Rob_GivesHonege_1:
# 52 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox Rob_GivesHonege_Text_0
# 53 "data/maps/Robs_Hidden_Base/scripts.pory"
	call NicknamePartyMon
	return

Rob_GivesHonege_2:
# 56 "data/maps/Robs_Hidden_Base/scripts.pory"
	msgbox Rob_GivesHonege_Text_0
# 57 "data/maps/Robs_Hidden_Base/scripts.pory"
	call NicknameBoxMon
	return


FrontPageRob_Hidden_Base_EventScript_PC_Text_0:
# 5 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "Thank you to FrontPageRob for the\n"
	.string "support in making this game!$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0:
# 13 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "It's FrontPageRob's Mudkip Doll$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1:
# 17 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "You've unlocked the Mudkip Doll for\n"
	.string "your secret base$"

Rob_GivesHonege_Text_0:
# 52 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "Recieved Honedge$"

Rob_GivesHonege_Text_1:
# 61 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

FrontPageRob_Intro::
# 66 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "Physics puns are no joke. It's a\n"
	.string "relatively dark matter$"

FrontPageRob_Outro::
# 70 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "Clearly I've been studying frequency\n"
	.string "too much, now my brain Hertz$"

PostBattle_FrontPageRob::
# 74 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "$"

Beat_FrontPageRob::
# 78 "data/maps/Robs_Hidden_Base/scripts.pory"
	.string "Well that didn't go right. Here take this\n"
	.string "sword I found$"
