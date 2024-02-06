ShayminEncounterGrotto_MapScripts::
	.byte 0


ShayminGrottoTriggerLeaving_DoesPlayerHaveGracideaFlower::
	lockall
	warp MAP_SHAYMIN_GROTTO, 2, 1
	releaseall
	return


ShayminEncounter::
	lockall
	compare VAR_ROUTE_SHAYMIN_PROGRESS, 1
	goto_if_eq ShayminEncounter_2
ShayminEncounter_1:
	compare VAR_ROUTE_SHAYMIN_PROGRESS, 2
	goto_if_eq ShayminEncounter_5
ShayminEncounter_4:
	releaseall
	return

ShayminEncounter_2:
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_SHAYMIN, 50, ITEM_SITRUS_BERRY
	dowildbattle
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
	setwildbattle SPECIES_SHAYMIN_SKY, 50, ITEM_YACHE_BERRY
	dowildbattle
	setvar VAR_ROUTE_SHAYMIN_PROGRESS, 2
	goto ShayminEncounter_1

ShayminEncounter_5:
	givemon SPECIES_SHAYMIN, 30
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShayminEncounter_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShayminEncounter_9
	msgbox ShayminEncounter_Text_2
ShayminEncounter_7:
	setvar VAR_ROUTE_SHAYMIN_PROGRESS, 3
	setflag FLAG_SHAYMIN_BEATEN
	goto ShayminEncounter_4

ShayminEncounter_8:
	msgbox ShayminEncounter_Text_0
	call NicknamePartyMon
	goto ShayminEncounter_7

ShayminEncounter_9:
	msgbox ShayminEncounter_Text_1
	call NicknameBoxMonShaymin
	goto ShayminEncounter_7


NicknameBoxMonShaymin::
	msgbox NicknameBoxMonShaymin_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMonShaymin_2
NicknameBoxMonShaymin_1:
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMonShaymin_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMonShaymin_1


ShayminEncounter_Text_0:
	.string "SHAYMIN JOINED YOUR PARTY$"

ShayminEncounter_Text_1:
	.string "SHAYMIN WENT INTO YOUR BOX$"

ShayminEncounter_Text_2:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

NicknameBoxMonShaymin_Text_0:
	.string "Give it a nickname?$"
