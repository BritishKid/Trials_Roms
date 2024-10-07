Route7_MapScripts::
	.byte 0


marienieEncounter::
	lock
	setwildbattle SPECIES_MAREANIE, 15
	dowildbattle
	release
	return


Route7_Pyukumuku_Clean_Up_1::
	lock
	msgbox Route7_Pyukumuku_Clean_Up_1_Text_0
	fadescreen FADE_TO_BLACK
	msgbox Route7_Pyukumuku_Clean_Up_1_Text_1
	fadescreen FADE_FROM_BLACK
	removeobject 4
	setflag FLAG_CLEANED_UP_ROUTE7_PYUKUMUKU_1
	call IncrementNumber_Pyukumukus_Saved
	release
	return


Route7_IslandBoat::
	lockall
	faceplayer
	msgbox Route7_IslandBoat_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route7_IslandBoat_2
Route7_IslandBoat_1:
	releaseall
	return

Route7_IslandBoat_2:
	warp MAP_CORAL_PORT_PORT, 8, 11
	goto Route7_IslandBoat_1


IncrementNumber_Pyukumukus_Saved::
	compare VAR_PYUKUMUKUS_SAVED, 9
	goto_if_eq IncrementNumber_Pyukumukus_Saved_2
IncrementNumber_Pyukumukus_Saved_1:
	compare VAR_PYUKUMUKUS_SAVED, 8
	goto_if_eq IncrementNumber_Pyukumukus_Saved_5
IncrementNumber_Pyukumukus_Saved_4:
	compare VAR_PYUKUMUKUS_SAVED, 7
	goto_if_eq IncrementNumber_Pyukumukus_Saved_8
IncrementNumber_Pyukumukus_Saved_7:
	compare VAR_PYUKUMUKUS_SAVED, 6
	goto_if_eq IncrementNumber_Pyukumukus_Saved_11
IncrementNumber_Pyukumukus_Saved_10:
	compare VAR_PYUKUMUKUS_SAVED, 5
	goto_if_eq IncrementNumber_Pyukumukus_Saved_14
IncrementNumber_Pyukumukus_Saved_13:
	compare VAR_PYUKUMUKUS_SAVED, 4
	goto_if_eq IncrementNumber_Pyukumukus_Saved_17
IncrementNumber_Pyukumukus_Saved_16:
	compare VAR_PYUKUMUKUS_SAVED, 3
	goto_if_eq IncrementNumber_Pyukumukus_Saved_20
IncrementNumber_Pyukumukus_Saved_19:
	compare VAR_PYUKUMUKUS_SAVED, 2
	goto_if_eq IncrementNumber_Pyukumukus_Saved_23
IncrementNumber_Pyukumukus_Saved_22:
	compare VAR_PYUKUMUKUS_SAVED, 1
	goto_if_eq IncrementNumber_Pyukumukus_Saved_26
IncrementNumber_Pyukumukus_Saved_25:
	compare VAR_PYUKUMUKUS_SAVED, 0
	goto_if_eq IncrementNumber_Pyukumukus_Saved_28
	return

IncrementNumber_Pyukumukus_Saved_2:
	setvar VAR_PYUKUMUKUS_SAVED, 10
	goto IncrementNumber_Pyukumukus_Saved_1

IncrementNumber_Pyukumukus_Saved_5:
	setvar VAR_PYUKUMUKUS_SAVED, 9
	goto IncrementNumber_Pyukumukus_Saved_4

IncrementNumber_Pyukumukus_Saved_8:
	setvar VAR_PYUKUMUKUS_SAVED, 8
	goto IncrementNumber_Pyukumukus_Saved_7

IncrementNumber_Pyukumukus_Saved_11:
	setvar VAR_PYUKUMUKUS_SAVED, 7
	goto IncrementNumber_Pyukumukus_Saved_10

IncrementNumber_Pyukumukus_Saved_14:
	setvar VAR_PYUKUMUKUS_SAVED, 6
	goto IncrementNumber_Pyukumukus_Saved_13

IncrementNumber_Pyukumukus_Saved_17:
	setvar VAR_PYUKUMUKUS_SAVED, 5
	goto IncrementNumber_Pyukumukus_Saved_16

IncrementNumber_Pyukumukus_Saved_20:
	setvar VAR_PYUKUMUKUS_SAVED, 4
	goto IncrementNumber_Pyukumukus_Saved_19

IncrementNumber_Pyukumukus_Saved_23:
	setvar VAR_PYUKUMUKUS_SAVED, 3
	goto IncrementNumber_Pyukumukus_Saved_22

IncrementNumber_Pyukumukus_Saved_26:
	setvar VAR_PYUKUMUKUS_SAVED, 2
	goto IncrementNumber_Pyukumukus_Saved_25

IncrementNumber_Pyukumukus_Saved_28:
	setvar VAR_PYUKUMUKUS_SAVED, 1
	return


Route7_Pyukumuku_Clean_Up_1_Text_0:
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route7_Pyukumuku_Clean_Up_1_Text_1:
	.string "SPLASH$"

Route7_IslandBoat_Text_0:
	.string "Would you like to travel to Island 1?$"
