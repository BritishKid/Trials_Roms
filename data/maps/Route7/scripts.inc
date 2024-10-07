Route7_MapScripts::
	.byte 0


marienieEncounter::
# 5 "data/maps/Route7/scripts.pory"
	lock
# 6 "data/maps/Route7/scripts.pory"
	setwildbattle SPECIES_MAREANIE, 15
# 7 "data/maps/Route7/scripts.pory"
	dowildbattle
# 8 "data/maps/Route7/scripts.pory"
	release
	return


Route7_Pyukumuku_Clean_Up_1::
# 12 "data/maps/Route7/scripts.pory"
	lock
# 13 "data/maps/Route7/scripts.pory"
	msgbox Route7_Pyukumuku_Clean_Up_1_Text_0
# 14 "data/maps/Route7/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/Route7/scripts.pory"
	msgbox Route7_Pyukumuku_Clean_Up_1_Text_1
# 16 "data/maps/Route7/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 17 "data/maps/Route7/scripts.pory"
	removeobject 4
# 18 "data/maps/Route7/scripts.pory"
	setflag FLAG_CLEANED_UP_ROUTE7_PYUKUMUKU_1
# 19 "data/maps/Route7/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 20 "data/maps/Route7/scripts.pory"
	release
	return


Route7_IslandBoat::
# 24 "data/maps/Route7/scripts.pory"
	lockall
# 25 "data/maps/Route7/scripts.pory"
	faceplayer
# 26 "data/maps/Route7/scripts.pory"
	msgbox Route7_IslandBoat_Text_0, MSGBOX_YESNO
# 27 "data/maps/Route7/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route7_IslandBoat_2
Route7_IslandBoat_1:
# 30 "data/maps/Route7/scripts.pory"
	releaseall
	return

Route7_IslandBoat_2:
# 28 "data/maps/Route7/scripts.pory"
	warp MAP_CORAL_PORT_PORT, 8, 11
	goto Route7_IslandBoat_1


IncrementNumber_Pyukumukus_Saved::
# 37 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 9
	goto_if_eq IncrementNumber_Pyukumukus_Saved_2
IncrementNumber_Pyukumukus_Saved_1:
# 40 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 8
	goto_if_eq IncrementNumber_Pyukumukus_Saved_5
IncrementNumber_Pyukumukus_Saved_4:
# 43 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 7
	goto_if_eq IncrementNumber_Pyukumukus_Saved_8
IncrementNumber_Pyukumukus_Saved_7:
# 46 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 6
	goto_if_eq IncrementNumber_Pyukumukus_Saved_11
IncrementNumber_Pyukumukus_Saved_10:
# 49 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 5
	goto_if_eq IncrementNumber_Pyukumukus_Saved_14
IncrementNumber_Pyukumukus_Saved_13:
# 52 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 4
	goto_if_eq IncrementNumber_Pyukumukus_Saved_17
IncrementNumber_Pyukumukus_Saved_16:
# 55 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 3
	goto_if_eq IncrementNumber_Pyukumukus_Saved_20
IncrementNumber_Pyukumukus_Saved_19:
# 58 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 2
	goto_if_eq IncrementNumber_Pyukumukus_Saved_23
IncrementNumber_Pyukumukus_Saved_22:
# 61 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 1
	goto_if_eq IncrementNumber_Pyukumukus_Saved_26
IncrementNumber_Pyukumukus_Saved_25:
# 64 "data/maps/Route7/scripts.pory"
	compare VAR_PYUKUMUKUS_SAVED, 0
	goto_if_eq IncrementNumber_Pyukumukus_Saved_28
	return

IncrementNumber_Pyukumukus_Saved_2:
# 38 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 10
	goto IncrementNumber_Pyukumukus_Saved_1

IncrementNumber_Pyukumukus_Saved_5:
# 41 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 9
	goto IncrementNumber_Pyukumukus_Saved_4

IncrementNumber_Pyukumukus_Saved_8:
# 44 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 8
	goto IncrementNumber_Pyukumukus_Saved_7

IncrementNumber_Pyukumukus_Saved_11:
# 47 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 7
	goto IncrementNumber_Pyukumukus_Saved_10

IncrementNumber_Pyukumukus_Saved_14:
# 50 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 6
	goto IncrementNumber_Pyukumukus_Saved_13

IncrementNumber_Pyukumukus_Saved_17:
# 53 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 5
	goto IncrementNumber_Pyukumukus_Saved_16

IncrementNumber_Pyukumukus_Saved_20:
# 56 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 4
	goto IncrementNumber_Pyukumukus_Saved_19

IncrementNumber_Pyukumukus_Saved_23:
# 59 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 3
	goto IncrementNumber_Pyukumukus_Saved_22

IncrementNumber_Pyukumukus_Saved_26:
# 62 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 2
	goto IncrementNumber_Pyukumukus_Saved_25

IncrementNumber_Pyukumukus_Saved_28:
# 65 "data/maps/Route7/scripts.pory"
	setvar VAR_PYUKUMUKUS_SAVED, 1
	return


Route7_Pyukumuku_Clean_Up_1_Text_0:
# 13 "data/maps/Route7/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route7_Pyukumuku_Clean_Up_1_Text_1:
# 15 "data/maps/Route7/scripts.pory"
	.string "SPLASH$"

Route7_IslandBoat_Text_0:
# 26 "data/maps/Route7/scripts.pory"
	.string "Would you like to travel to Island 1?$"
