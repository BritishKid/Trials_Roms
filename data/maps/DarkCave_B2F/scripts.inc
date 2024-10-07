DarkCave_B2F_MapScripts::
	.byte 0


DarkCave_Rock_Plate_Script::
# 4 "data/maps/DarkCave_B2F/scripts.pory"
	lock
# 5 "data/maps/DarkCave_B2F/scripts.pory"
	msgbox DarkCave_Rock_Plate_Script_Text_0
# 6 "data/maps/DarkCave_B2F/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, DarkCave_Rock_Plate_Script_3
DarkCave_Rock_Plate_Script_1:
# 18 "data/maps/DarkCave_B2F/scripts.pory"
	goto_if_set FLAG_ALEX_INSECT_PLATE, DarkCave_Rock_Plate_Script_8
DarkCave_Rock_Plate_Script_6:
# 21 "data/maps/DarkCave_B2F/scripts.pory"
	release
	return

DarkCave_Rock_Plate_Script_2:
# 7 "data/maps/DarkCave_B2F/scripts.pory"
	msgbox DarkCave_Rock_Plate_Script_Text_1, MSGBOX_YESNO
# 8 "data/maps/DarkCave_B2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DarkCave_Rock_Plate_Script_11
	goto DarkCave_Rock_Plate_Script_1

DarkCave_Rock_Plate_Script_3:
# 6 "data/maps/DarkCave_B2F/scripts.pory"
	goto_if_unset FLAG_ROCK_PLATE_FOUND, DarkCave_Rock_Plate_Script_2
	goto DarkCave_Rock_Plate_Script_1

DarkCave_Rock_Plate_Script_7:
# 19 "data/maps/DarkCave_B2F/scripts.pory"
	msgbox DarkCave_Rock_Plate_Script_Text_2
	goto DarkCave_Rock_Plate_Script_6

DarkCave_Rock_Plate_Script_8:
# 18 "data/maps/DarkCave_B2F/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, DarkCave_Rock_Plate_Script_7
	goto DarkCave_Rock_Plate_Script_6

DarkCave_Rock_Plate_Script_11:
# 9 "data/maps/DarkCave_B2F/scripts.pory"
	setvar VAR_0x8004, 1
# 10 "data/maps/DarkCave_B2F/scripts.pory"
	setvar VAR_0x8005, 1
# 11 "data/maps/DarkCave_B2F/scripts.pory"
	setvar VAR_0x8006, 8
# 12 "data/maps/DarkCave_B2F/scripts.pory"
	setvar VAR_0x8007, 0
# 13 "data/maps/DarkCave_B2F/scripts.pory"
	special ShakeCamera
# 14 "data/maps/DarkCave_B2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/DarkCave_B2F/scripts.pory"
	warp MAP_LOST_PLATES, 20, 12
	goto DarkCave_Rock_Plate_Script_1


DarkCave_Rock_Plate_Script_Text_0:
# 5 "data/maps/DarkCave_B2F/scripts.pory"
	.string "There is a carving of many rock like\n"
	.string "Pokémon crawling over a plate.$"

DarkCave_Rock_Plate_Script_Text_1:
# 7 "data/maps/DarkCave_B2F/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

DarkCave_Rock_Plate_Script_Text_2:
# 19 "data/maps/DarkCave_B2F/scripts.pory"
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
