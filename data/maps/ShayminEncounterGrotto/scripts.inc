ShayminEncounterGrotto_MapScripts::
	.byte 0


ShayminGrottoTriggerLeaving_DoesPlayerHaveGracideaFlower::
# 4 "data/maps/ShayminEncounterGrotto/scripts.pory"
	lockall
# 5 "data/maps/ShayminEncounterGrotto/scripts.pory"
	warp MAP_SHAYMIN_GROTTO, 2, 1
# 6 "data/maps/ShayminEncounterGrotto/scripts.pory"
	releaseall
	return


ShayminEncounter::
# 11 "data/maps/ShayminEncounterGrotto/scripts.pory"
	lockall
# 12 "data/maps/ShayminEncounterGrotto/scripts.pory"
	compare VAR_ROUTE_SHAYMIN_PROGRESS, 1
	goto_if_eq ShayminEncounter_2
ShayminEncounter_1:
# 22 "data/maps/ShayminEncounterGrotto/scripts.pory"
	compare VAR_ROUTE_SHAYMIN_PROGRESS, 2
	goto_if_eq ShayminEncounter_5
ShayminEncounter_4:
# 40 "data/maps/ShayminEncounterGrotto/scripts.pory"
	releaseall
	return

ShayminEncounter_2:
# 13 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 14 "data/maps/ShayminEncounterGrotto/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 15 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setwildbattle SPECIES_SHAYMIN, 50, ITEM_SITRUS_BERRY
# 16 "data/maps/ShayminEncounterGrotto/scripts.pory"
	dowildbattle
# 17 "data/maps/ShayminEncounterGrotto/scripts.pory"
	settotemboost 1, 1, 1, 1, 1, 1, 1, 1
# 18 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setwildbattle SPECIES_SHAYMIN_SKY, 50, ITEM_YACHE_BERRY
# 19 "data/maps/ShayminEncounterGrotto/scripts.pory"
	dowildbattle
# 20 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setvar VAR_ROUTE_SHAYMIN_PROGRESS, 2
	goto ShayminEncounter_1

ShayminEncounter_5:
# 23 "data/maps/ShayminEncounterGrotto/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 24 "data/maps/ShayminEncounterGrotto/scripts.pory"
	givemon SPECIES_SHAYMIN, 30
# 25 "data/maps/ShayminEncounterGrotto/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 26 "data/maps/ShayminEncounterGrotto/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq ShayminEncounter_8
# 30 "data/maps/ShayminEncounterGrotto/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq ShayminEncounter_9
# 35 "data/maps/ShayminEncounterGrotto/scripts.pory"
	msgbox ShayminEncounter_Text_2
ShayminEncounter_7:
# 37 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setvar VAR_ROUTE_SHAYMIN_PROGRESS, 3
# 38 "data/maps/ShayminEncounterGrotto/scripts.pory"
	setflag FLAG_SHAYMIN_BEATEN
	goto ShayminEncounter_4

ShayminEncounter_8:
# 27 "data/maps/ShayminEncounterGrotto/scripts.pory"
	msgbox ShayminEncounter_Text_0
# 28 "data/maps/ShayminEncounterGrotto/scripts.pory"
	call NicknamePartyMon
	goto ShayminEncounter_7

ShayminEncounter_9:
# 31 "data/maps/ShayminEncounterGrotto/scripts.pory"
	msgbox ShayminEncounter_Text_1
# 32 "data/maps/ShayminEncounterGrotto/scripts.pory"
	call NicknameBoxMonShaymin
	goto ShayminEncounter_7


NicknameBoxMonShaymin::
# 44 "data/maps/ShayminEncounterGrotto/scripts.pory"
	msgbox NicknameBoxMonShaymin_Text_0, MSGBOX_YESNO
# 45 "data/maps/ShayminEncounterGrotto/scripts.pory"
	hidemonpic
# 46 "data/maps/ShayminEncounterGrotto/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMonShaymin_2
NicknameBoxMonShaymin_1:
# 49 "data/maps/ShayminEncounterGrotto/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMonShaymin_2:
# 47 "data/maps/ShayminEncounterGrotto/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMonShaymin_1


ShayminEncounter_Text_0:
# 27 "data/maps/ShayminEncounterGrotto/scripts.pory"
	.string "SHAYMIN JOINED YOUR PARTY$"

ShayminEncounter_Text_1:
# 31 "data/maps/ShayminEncounterGrotto/scripts.pory"
	.string "SHAYMIN WENT INTO YOUR BOX$"

ShayminEncounter_Text_2:
# 35 "data/maps/ShayminEncounterGrotto/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

NicknameBoxMonShaymin_Text_0:
# 44 "data/maps/ShayminEncounterGrotto/scripts.pory"
	.string "Give it a nickname?$"
