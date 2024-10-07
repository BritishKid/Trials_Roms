EmberDuneCave_BF_MapScripts::
	.byte 0


EmberDuneCave_EarthPlate_Script::
# 4 "data/maps/EmberDuneCave_BF/scripts.pory"
	lock
# 5 "data/maps/EmberDuneCave_BF/scripts.pory"
	msgbox EmberDuneCave_EarthPlate_Script_Text_0
# 6 "data/maps/EmberDuneCave_BF/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_3
EmberDuneCave_EarthPlate_Script_1:
# 18 "data/maps/EmberDuneCave_BF/scripts.pory"
	goto_if_set FLAG_ALEX_INSECT_PLATE, EmberDuneCave_EarthPlate_Script_8
EmberDuneCave_EarthPlate_Script_6:
# 21 "data/maps/EmberDuneCave_BF/scripts.pory"
	release
	return

EmberDuneCave_EarthPlate_Script_2:
# 7 "data/maps/EmberDuneCave_BF/scripts.pory"
	msgbox EmberDuneCave_EarthPlate_Script_Text_1, MSGBOX_YESNO
# 8 "data/maps/EmberDuneCave_BF/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EmberDuneCave_EarthPlate_Script_11
	goto EmberDuneCave_EarthPlate_Script_1

EmberDuneCave_EarthPlate_Script_3:
# 6 "data/maps/EmberDuneCave_BF/scripts.pory"
	goto_if_unset FLAG_EARTH_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_2
	goto EmberDuneCave_EarthPlate_Script_1

EmberDuneCave_EarthPlate_Script_7:
# 19 "data/maps/EmberDuneCave_BF/scripts.pory"
	msgbox EmberDuneCave_EarthPlate_Script_Text_2
	goto EmberDuneCave_EarthPlate_Script_6

EmberDuneCave_EarthPlate_Script_8:
# 18 "data/maps/EmberDuneCave_BF/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_7
	goto EmberDuneCave_EarthPlate_Script_6

EmberDuneCave_EarthPlate_Script_11:
# 9 "data/maps/EmberDuneCave_BF/scripts.pory"
	setvar VAR_0x8004, 1
# 10 "data/maps/EmberDuneCave_BF/scripts.pory"
	setvar VAR_0x8005, 1
# 11 "data/maps/EmberDuneCave_BF/scripts.pory"
	setvar VAR_0x8006, 8
# 12 "data/maps/EmberDuneCave_BF/scripts.pory"
	setvar VAR_0x8007, 0
# 13 "data/maps/EmberDuneCave_BF/scripts.pory"
	special ShakeCamera
# 14 "data/maps/EmberDuneCave_BF/scripts.pory"
	fadescreen FADE_TO_BLACK
# 15 "data/maps/EmberDuneCave_BF/scripts.pory"
	warp MAP_LOST_PLATES, 6, 12
	goto EmberDuneCave_EarthPlate_Script_1


EmberDuneCave_EarthPlate_Script_Text_0:
# 5 "data/maps/EmberDuneCave_BF/scripts.pory"
	.string "There is a carving of many rock like\n"
	.string "Pokémon crawling over a plate.$"

EmberDuneCave_EarthPlate_Script_Text_1:
# 7 "data/maps/EmberDuneCave_BF/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

EmberDuneCave_EarthPlate_Script_Text_2:
# 19 "data/maps/EmberDuneCave_BF/scripts.pory"
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
