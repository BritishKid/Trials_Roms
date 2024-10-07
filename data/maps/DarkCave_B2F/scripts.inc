DarkCave_B2F_MapScripts::
	.byte 0


DarkCave_Rock_Plate_Script::
	lock
	msgbox DarkCave_Rock_Plate_Script_Text_0
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, DarkCave_Rock_Plate_Script_3
DarkCave_Rock_Plate_Script_1:
	goto_if_set FLAG_ALEX_INSECT_PLATE, DarkCave_Rock_Plate_Script_8
DarkCave_Rock_Plate_Script_6:
	release
	return

DarkCave_Rock_Plate_Script_2:
	msgbox DarkCave_Rock_Plate_Script_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DarkCave_Rock_Plate_Script_11
	goto DarkCave_Rock_Plate_Script_1

DarkCave_Rock_Plate_Script_3:
	goto_if_unset FLAG_ROCK_PLATE_FOUND, DarkCave_Rock_Plate_Script_2
	goto DarkCave_Rock_Plate_Script_1

DarkCave_Rock_Plate_Script_7:
	msgbox DarkCave_Rock_Plate_Script_Text_2
	goto DarkCave_Rock_Plate_Script_6

DarkCave_Rock_Plate_Script_8:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, DarkCave_Rock_Plate_Script_7
	goto DarkCave_Rock_Plate_Script_6

DarkCave_Rock_Plate_Script_11:
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	warp MAP_LOST_PLATES, 20, 12
	goto DarkCave_Rock_Plate_Script_1


DarkCave_Rock_Plate_Script_Text_0:
	.string "There is a carving of many rock like\n"
	.string "Pokémon crawling over a plate.$"

DarkCave_Rock_Plate_Script_Text_1:
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

DarkCave_Rock_Plate_Script_Text_2:
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
