Nathans_Hidden_Base_MapScripts::
	.byte 0


Nathans_Computer::
# 4 "data/maps/Nathans_Hidden_Base/scripts.pory"
	lockall
# 5 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathans_Computer_Text_0
# 6 "data/maps/Nathans_Hidden_Base/scripts.pory"
	releaseall
	return


Battle_NathanSecretBase::
# 10 "data/maps/Nathans_Hidden_Base/scripts.pory"
	lockall
# 11 "data/maps/Nathans_Hidden_Base/scripts.pory"
	faceplayer
# 12 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_2
Battle_NathanSecretBase_1:
# 15 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_6
Battle_NathanSecretBase_4:
# 18 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_set FLAG_NATHAN_BEATEN, Battle_NathanSecretBase_11
Battle_NathanSecretBase_9:
# 22 "data/maps/Nathans_Hidden_Base/scripts.pory"
	release
# 23 "data/maps/Nathans_Hidden_Base/scripts.pory"
	waitmessage
	end

Battle_NathanSecretBase_2:
# 13 "data/maps/Nathans_Hidden_Base/scripts.pory"
	trainerbattle_single TRAINER_NATHAN_ROUTE_1B_SECRET_BASE, Nathan_Intro, Nathan_Outro, Nathan_Beaten
	goto Battle_NathanSecretBase_1

Battle_NathanSecretBase_5:
# 16 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call Nathan_Gives_Dwebble
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_6:
# 15 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_NATHAN_GAVE_DWEBBLE, Battle_NathanSecretBase_5
	goto Battle_NathanSecretBase_4

Battle_NathanSecretBase_10:
# 19 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox PostBattle_Nathan, MSGBOX_AUTOCLOSE
	goto Battle_NathanSecretBase_9

Battle_NathanSecretBase_11:
# 18 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_set FLAG_NATHAN_GAVE_DWEBBLE, Battle_NathanSecretBase_10
	goto Battle_NathanSecretBase_9


Nathan_Beaten::
# 28 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Beat_Nathan, MSGBOX_AUTOCLOSE
# 29 "data/maps/Nathans_Hidden_Base/scripts.pory"
	setflag FLAG_NATHAN_BEATEN
# 30 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call Nathan_Gives_Dwebble
# 31 "data/maps/Nathans_Hidden_Base/scripts.pory"
	release
	return


NicknamePartyMon1b::
# 35 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox NicknamePartyMon1b_Text_0, MSGBOX_YESNO
# 36 "data/maps/Nathans_Hidden_Base/scripts.pory"
	hidemonpic
# 37 "data/maps/Nathans_Hidden_Base/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon1b_1
	return

NicknamePartyMon1b_1:
# 38 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 39 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


Nathan_Gives_Dwebble::
# 44 "data/maps/Nathans_Hidden_Base/scripts.pory"
	lock
# 45 "data/maps/Nathans_Hidden_Base/scripts.pory"
	showmonpic SPECIES_DWEBBLE, 10, 3
# 46 "data/maps/Nathans_Hidden_Base/scripts.pory"
	givemon SPECIES_DWEBBLE, 5
# 47 "data/maps/Nathans_Hidden_Base/scripts.pory"
	setflag FLAG_NATHAN_GAVE_DWEBBLE
# 48 "data/maps/Nathans_Hidden_Base/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/Nathans_Hidden_Base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Nathan_Gives_Dwebble_1
# 53 "data/maps/Nathans_Hidden_Base/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Nathan_Gives_Dwebble_2
# 58 "data/maps/Nathans_Hidden_Base/scripts.pory"
	hidemonpic
# 59 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_1
	return

Nathan_Gives_Dwebble_1:
# 50 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_0
# 51 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call NicknamePartyMon
	return

Nathan_Gives_Dwebble_2:
# 54 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathan_Gives_Dwebble_Text_0
# 55 "data/maps/Nathans_Hidden_Base/scripts.pory"
	call NicknameBoxMon
	return


Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll::
# 65 "data/maps/Nathans_Hidden_Base/scripts.pory"
	lockall
# 66 "data/maps/Nathans_Hidden_Base/scripts.pory"
	goto_if_unset FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_GULPIN, Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_2
# 74 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0
Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_1:
# 76 "data/maps/Nathans_Hidden_Base/scripts.pory"
	releaseall
	return

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_2:
# 67 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0
# 68 "data/maps/Nathans_Hidden_Base/scripts.pory"
	adddecoration DECOR_GULPIN_DOLL
# 69 "data/maps/Nathans_Hidden_Base/scripts.pory"
	setflag FLAG_HIDDEN_BASE_COLLECTABLE_FOUND_GULPIN
# 70 "data/maps/Nathans_Hidden_Base/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GULPIN_DOLL
# 71 "data/maps/Nathans_Hidden_Base/scripts.pory"
	msgbox Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_1
	goto Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_1


Nathans_Computer_Text_0:
# 5 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "Thank you to Nathan for watching the\n"
	.string "streams and helping create the game!$"

NicknamePartyMon1b_Text_0:
# 35 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "Give it a nickname?$"

Nathan_Gives_Dwebble_Text_0:
# 50 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "Recieved Dwebble$"

Nathan_Gives_Dwebble_Text_1:
# 59 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_0:
# 67 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "It's Nathan's Gulpin Doll$"

Nathans_Hidden_Base_EventScript_Find_ChikoritaDoll_Text_1:
# 71 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "You've unlocked the GULPIN Doll for\n"
	.string "your secret base$"

Nathan_Intro::
# 80 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "I found this Pokémon in a far away land!\n"
	.string "It's so cool.$"

Nathan_Outro::
# 84 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "How did you manage that?$"

Beat_Nathan::
# 88 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "That was amazing, here have one\n"
	.string "yourself$"

PostBattle_Nathan::
# 92 "data/maps/Nathans_Hidden_Base/scripts.pory"
	.string "I love Dwebble and Crustle. They are\n"
	.string "amazing.$"
