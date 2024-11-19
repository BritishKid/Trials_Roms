Nathans_Hidden_base_MapScripts::
	.byte 0


Nathans_computer::
# 5 "data/maps/Nathans_Hidden_base/scripts.pory"
	lockall
# 6 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathans_computer_Text_0
# 7 "data/maps/Nathans_Hidden_base/scripts.pory"
	releaseall
	return


Battle_NathanSecretBase::
# 11 "data/maps/Nathans_Hidden_base/scripts.pory"
	lockall
# 12 "data/maps/Nathans_Hidden_base/scripts.pory"
	faceplayer
# 13 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_unset FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_2
Battle_NathanSecretBase_1:
# 16 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_6
Battle_NathanSecretBase_4:
# 19 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_11
Battle_NathanSecretBase_9:
# 23 "data/maps/Nathans_Hidden_base/scripts.pory"
	releaseall
	return

Battle_NathanSecretBase_2:
# 14 "data/maps/Nathans_Hidden_base/scripts.pory"
	trainerbattle_single TRAINER_NATHAN_SECRET_BASE_1, Nathan_Intro, Nathan_Outro, Nathan_Beaten
	goto Battle_NathanSecretBase_1

Battle_NathanSecretBase_5:
# 17 "data/maps/Nathans_Hidden_base/scripts.pory"
	call Nathan_Gives_Dwebble
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_6:
# 16 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_unset FLAG_RECEIVED_DWEBBLE, Battle_NathanSecretBase_5
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_10:
# 20 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox PostBattle_Nathan, MSGBOX_AUTOCLOSE
	goto Battle_NathanSecretBase_9

Battle_NathanSecretBase_11:
# 19 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_set FLAG_RECEIVED_DWEBBLE, Battle_NathanSecretBase_10
	goto Battle_NathanSecretBase_9


Nathan_Beaten::
# 27 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Beat_Nathan, MSGBOX_AUTOCLOSE
# 28 "data/maps/Nathans_Hidden_base/scripts.pory"
	setflag FLAG_NATHAN_BEATEN
# 29 "data/maps/Nathans_Hidden_base/scripts.pory"
	call Nathan_Gives_Dwebble
# 30 "data/maps/Nathans_Hidden_base/scripts.pory"
	release
	return


Nathan_Gives_Dwebble::
# 34 "data/maps/Nathans_Hidden_base/scripts.pory"
	showmonpic SPECIES_DWEBBLE, 10, 3
# 35 "data/maps/Nathans_Hidden_base/scripts.pory"
	givemon SPECIES_DWEBBLE, 5
# 36 "data/maps/Nathans_Hidden_base/scripts.pory"
	setflag FLAG_RECEIVED_DWEBBLE
# 37 "data/maps/Nathans_Hidden_base/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/Nathans_Hidden_base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Nathan_Gives_Dwebble_1
# 42 "data/maps/Nathans_Hidden_base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Nathan_Gives_Dwebble_2
# 47 "data/maps/Nathans_Hidden_base/scripts.pory"
	hidemonpic
# 48 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_1
	return

Nathan_Gives_Dwebble_1:
# 39 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_0
# 40 "data/maps/Nathans_Hidden_base/scripts.pory"
	call NicknamePartyMon
	return

Nathan_Gives_Dwebble_2:
# 43 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_0
# 44 "data/maps/Nathans_Hidden_base/scripts.pory"
	call NicknameBoxMon
	return


NicknamePartyMon::
# 53 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 54 "data/maps/Nathans_Hidden_base/scripts.pory"
	hidemonpic
# 55 "data/maps/Nathans_Hidden_base/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 56 "data/maps/Nathans_Hidden_base/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 57 "data/maps/Nathans_Hidden_base/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 62 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 63 "data/maps/Nathans_Hidden_base/scripts.pory"
	hidemonpic
# 64 "data/maps/Nathans_Hidden_base/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_1
	return

NicknameBoxMon_1:
# 65 "data/maps/Nathans_Hidden_base/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	return


Nathan_HiddenBase_EventScript_GulpinDoll::
# 70 "data/maps/Nathans_Hidden_base/scripts.pory"
	lockall
# 71 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_set FLAG_FOUND_GULPIN_DOLL, Nathan_HiddenBase_EventScript_GulpinDoll_2
Nathan_HiddenBase_EventScript_GulpinDoll_1:
# 74 "data/maps/Nathans_Hidden_base/scripts.pory"
	goto_if_unset FLAG_FOUND_GULPIN_DOLL, Nathan_HiddenBase_EventScript_GulpinDoll_5
Nathan_HiddenBase_EventScript_GulpinDoll_4:
# 80 "data/maps/Nathans_Hidden_base/scripts.pory"
	releaseall
	return

Nathan_HiddenBase_EventScript_GulpinDoll_2:
# 72 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_HiddenBase_EventScript_GulpinDoll_Text_0
	goto Nathan_HiddenBase_EventScript_GulpinDoll_1

Nathan_HiddenBase_EventScript_GulpinDoll_5:
# 75 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_HiddenBase_EventScript_GulpinDoll_Text_0
# 76 "data/maps/Nathans_Hidden_base/scripts.pory"
	adddecoration DECOR_GULPIN_DOLL
# 77 "data/maps/Nathans_Hidden_base/scripts.pory"
	setflag FLAG_FOUND_GULPIN_DOLL
# 78 "data/maps/Nathans_Hidden_base/scripts.pory"
	msgbox Nathan_HiddenBase_EventScript_GulpinDoll_Text_1
	goto Nathan_HiddenBase_EventScript_GulpinDoll_4


Nathans_computer_Text_0:
# 6 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "Thank you to Natrhan for watching the\n"
	.string "streams and helping to create this\l"
	.string "game!$"

Nathan_Gives_Dwebble_Text_0:
# 39 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "Received Dwebble$"

Nathan_Gives_Dwebble_Text_1:
# 48 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and get it soon.$"

NicknamePartyMon_Text_0:
# 53 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "Give it a nickname?$"

Nathan_HiddenBase_EventScript_GulpinDoll_Text_0:
# 72 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "It's Nathan's Gulpin doll.$"

Nathan_HiddenBase_EventScript_GulpinDoll_Text_1:
# 78 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "You've unlocked the GULPIN DOLL for\n"
	.string "your secret base.$"

Nathan_Intro::
# 85 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "I found this Pokémon in a far away land!\n"
	.string "It's so cool.$"

Nathan_Outro::
# 89 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "How did you manage that?$"

Beat_Nathan::
# 93 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "That was amazing, here have one\n"
	.string "yourself$"

PostBattle_Nathan::
# 97 "data/maps/Nathans_Hidden_base/scripts.pory"
	.string "I love Dwebble and Crustle. They are\n"
	.string "amazing.$"
