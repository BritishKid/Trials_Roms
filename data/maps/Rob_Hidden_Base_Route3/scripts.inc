Rob_Hidden_Base_Route3_MapScripts::
	.byte 0


FrontPageRob_Hidden_Base_EventScript_PC::
	lockall
	msgbox FrontPageRob_Hidden_Base_EventScript_PC_Text_0
	releaseall
	return


FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll::
	lockall
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MUDKIP, FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1:
	releaseall
	return

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_2:
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0
	adddecoration DECOR_MUDKIP_DOLL
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_MUDKIP
	msgbox FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1
	goto FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_1


FrontPageRob_HiddenBase_EventScript_Battle::
	goto_if_unset FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_2
FrontPageRob_HiddenBase_EventScript_Battle_1:
	goto_if_set FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_6
FrontPageRob_HiddenBase_EventScript_Battle_4:
	goto_if_set FLAG_FRONTPAGEROB_BEATEN, FrontPageRob_HiddenBase_EventScript_Battle_11
FrontPageRob_HiddenBase_EventScript_Battle_9:
	release
	waitmessage
	end

FrontPageRob_HiddenBase_EventScript_Battle_2:
	trainerbattle_single TRAINER_FRONTPAGEROB_SECRET_BASE, FrontPageRob_Intro, FrontPageRob_Outro, FrontPageRob_Beaten
	goto FrontPageRob_HiddenBase_EventScript_Battle_1

FrontPageRob_HiddenBase_EventScript_Battle_5:
	call Rob_GivesHonege
	goto FrontPageRob_HiddenBase_EventScript_Battle_4

FrontPageRob_HiddenBase_EventScript_Battle_6:
	goto_if_unset FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_5
	goto FrontPageRob_HiddenBase_EventScript_Battle_4

FrontPageRob_HiddenBase_EventScript_Battle_10:
	msgbox PostBattle_FrontPageRob, MSGBOX_AUTOCLOSE
	goto FrontPageRob_HiddenBase_EventScript_Battle_9

FrontPageRob_HiddenBase_EventScript_Battle_11:
	goto_if_set FLAG_FRONTPAGEROB_GAVE_HONEGE, FrontPageRob_HiddenBase_EventScript_Battle_10
	goto FrontPageRob_HiddenBase_EventScript_Battle_9


FrontPageRob_Beaten::
	msgbox Beat_FrontPageRob, MSGBOX_AUTOCLOSE
	setflag FLAG_FRONTPAGEROB_BEATEN
	call Rob_GivesHonege
	release
	return


Rob_GivesHonege::
	lock
	showmonpic SPECIES_HONEDGE, 10, 3
	givemon SPECIES_HONEDGE, 5
	setflag FLAG_FRONTPAGEROB_GAVE_HONEGE
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Rob_GivesHonege_1
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Rob_GivesHonege_2
	hidemonpic
	msgbox Rob_GivesHonege_Text_1
	return

Rob_GivesHonege_1:
	msgbox Rob_GivesHonege_Text_0
	call NicknamePartyMon
	return

Rob_GivesHonege_2:
	msgbox Rob_GivesHonege_Text_0
	call NicknameBoxMon
	return


FrontPageRob_Hidden_Base_EventScript_PC_Text_0:
	.string "Thank you to FrontPageRob for the\n"
	.string "support making this game!$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_0:
	.string "It's FrontPageRob's Mudkip Doll$"

FrontPageRob_Hidden_Base_EventScript_Find_MagnemiteDoll_Text_1:
	.string "You've unlocked the Mudkip Doll for\n"
	.string "your secret base$"

Rob_GivesHonege_Text_0:
	.string "Recieved Honedge$"

Rob_GivesHonege_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

FrontPageRob_Intro::
	.string "$"

FrontPageRob_Outro::
	.string "$"

PostBattle_FrontPageRob::
	.string "$"

Beat_FrontPageRob::
	.string "You're incredible here have a sword$"
