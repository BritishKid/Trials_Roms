Nathans_Hidden_Base_MapScripts::
	.byte 0


Nathans_Computer::
	lockall
	msgbox Nathans_Computer_Text_0
	releaseall
	return


Battle_NathanSecretBase::
	goto_if_unset FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_2
Battle_NathanSecretBase_1:
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_6
Battle_NathanSecretBase_4:
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_11
Battle_NathanSecretBase_9:
	release
	waitmessage
	end

Battle_NathanSecretBase_2:
	trainerbattle_single TRAINER_NATHAN_ROUTE_1B_SECRET_BASE, Nathan_Intro, Nathan_Outro, Nathan_Beaten
	goto Battle_NathanSecretBase_1

Battle_NathanSecretBase_5:
	call Nathan_Gives_Dwebble
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_6:
	goto_if_unset FLAG_NATHAN_GAVE_DWEBBLE, Battle_NathanSecretBase_5
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_10:
	msgbox PostBattle_Nathan, MSGBOX_AUTOCLOSE
	goto Battle_NathanSecretBase_9

Battle_NathanSecretBase_11:
	goto_if_set FLAG_NATHAN_GAVE_DWEBBLE, Battle_NathanSecretBase_10
	goto Battle_NathanSecretBase_9


Nathan_Beaten::
	msgbox Beat_Nathan, MSGBOX_AUTOCLOSE
	setflag FLAG_NATHAN_BEATEN
	call Nathan_Gives_Dwebble
	release
	return


NicknamePartyMon1b::
	msgbox NicknamePartyMon1b_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon1b_1
	return

NicknamePartyMon1b_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


Nathan_Gives_Dwebble::
	lock
	showmonpic SPECIES_DWEBBLE, 10, 3
	givemon SPECIES_DWEBBLE, 5
	setflag FLAG_NATHAN_GAVE_DWEBBLE
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Nathan_Gives_Dwebble_1
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Nathan_Gives_Dwebble_2
	hidemonpic
	msgbox Nathan_Gives_Dwebble_Text_1
	return

Nathan_Gives_Dwebble_1:
	msgbox Nathan_Gives_Dwebble_Text_0
	call NicknamePartyMon
	return

Nathan_Gives_Dwebble_2:
	msgbox Nathan_Gives_Dwebble_Text_0
	call NicknameBoxMon
	return


Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll::
	lockall
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_GULPIN, Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_2
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0
Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_1:
	releaseall
	return

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_2:
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0
	adddecoration DECOR_GULPIN_DOLL
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_GULPIN
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_1
	goto Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_1


Nathans_Computer_Text_0:
	.string "Thank you to Nathan for watching the\n"
	.string "streams and helping create the game!$"

NicknamePartyMon1b_Text_0:
	.string "Give it a nickname?$"

Nathan_Gives_Dwebble_Text_0:
	.string "Recieved Dwebble$"

Nathan_Gives_Dwebble_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0:
	.string "It's Nathan's Gulpin Doll$"

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_1:
	.string "You've unlocked the CHIKORITA Doll for\n"
	.string "your secret base$"

Nathan_Intro::
	.string "I found this pokemon in a far away land!\n"
	.string "It's so cool.$"

Nathan_Outro::
	.string "How did you manage that?$"

Beat_Nathan::
	.string "That was amazing, here have one\n"
	.string "yourself$"

PostBattle_Nathan::
	.string "I love Dwebble and Crustle. They are\n"
	.string "amazing.$"
