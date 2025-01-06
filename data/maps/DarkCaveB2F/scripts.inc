DarkCaveB2F_MapScripts::
	.byte 0


DarkCave_StonePlate_Script::
# 5 "data/maps/DarkCaveB2F/scripts.pory"
	lockall
# 6 "data/maps/DarkCaveB2F/scripts.pory"
	msgbox DarkCave_StonePlate_Script_Text_0
# 7 "data/maps/DarkCaveB2F/scripts.pory"
	checkitem ITEM_STONE_PLATE
# 8 "data/maps/DarkCaveB2F/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, DarkCave_StonePlate_Script_3
DarkCave_StonePlate_Script_1:
# 20 "data/maps/DarkCaveB2F/scripts.pory"
	compare VAR_PLATEQUEST_STATE, 2
	goto_if_eq DarkCave_StonePlate_Script_7
	return

DarkCave_StonePlate_Script_2:
# 9 "data/maps/DarkCaveB2F/scripts.pory"
	msgbox DarkCave_StonePlate_Script_Text_1, MSGBOX_YESNO
# 10 "data/maps/DarkCaveB2F/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq DarkCave_StonePlate_Script_10
	goto DarkCave_StonePlate_Script_1

DarkCave_StonePlate_Script_3:
# 8 "data/maps/DarkCaveB2F/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq DarkCave_StonePlate_Script_2
	goto DarkCave_StonePlate_Script_1

DarkCave_StonePlate_Script_6:
# 21 "data/maps/DarkCaveB2F/scripts.pory"
	msgbox DarkCave_StonePlate_Script_Text_2
	return

DarkCave_StonePlate_Script_7:
# 20 "data/maps/DarkCaveB2F/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, DarkCave_StonePlate_Script_6
	return

DarkCave_StonePlate_Script_10:
# 11 "data/maps/DarkCaveB2F/scripts.pory"
	setvar VAR_0x8004, 1
# 12 "data/maps/DarkCaveB2F/scripts.pory"
	setvar VAR_0x8005, 1
# 13 "data/maps/DarkCaveB2F/scripts.pory"
	setvar VAR_0x8006, 8
# 14 "data/maps/DarkCaveB2F/scripts.pory"
	setvar VAR_0x8007, 0
# 15 "data/maps/DarkCaveB2F/scripts.pory"
	special ShakeCamera
# 16 "data/maps/DarkCaveB2F/scripts.pory"
	fadescreen FADE_TO_BLACK
# 17 "data/maps/DarkCaveB2F/scripts.pory"
	warp MAP_HIDDEN_GROTTO_LOST_PLATES_1, 21, 13
	goto DarkCave_StonePlate_Script_1


DarkCave_StonePlate_Script_Text_0:
# 6 "data/maps/DarkCaveB2F/scripts.pory"
	.string "There is a carving of many rock like\n"
	.string "Pokémon crawling over a plate.$"

DarkCave_StonePlate_Script_Text_1:
# 9 "data/maps/DarkCaveB2F/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE\n"
	.string "into the slot?$"

DarkCave_StonePlate_Script_Text_2:
# 21 "data/maps/DarkCaveB2F/scripts.pory"
	.string "There seems to be a slot in the wall for\n"
	.string "something. Maybe it's that Key Alex\l"
	.string "spoke about.$"
