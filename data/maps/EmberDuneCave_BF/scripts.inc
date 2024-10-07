EmberDuneCave_BF_MapScripts::
	.byte 0


EmberDuneCave_EarthPlate_Script::
	lock
	msgbox EmberDuneCave_EarthPlate_Script_Text_0
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_3
EmberDuneCave_EarthPlate_Script_1:
	goto_if_set FLAG_ALEX_INSECT_PLATE, EmberDuneCave_EarthPlate_Script_8
EmberDuneCave_EarthPlate_Script_6:
	release
	return

EmberDuneCave_EarthPlate_Script_2:
	msgbox EmberDuneCave_EarthPlate_Script_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EmberDuneCave_EarthPlate_Script_11
	goto EmberDuneCave_EarthPlate_Script_1

EmberDuneCave_EarthPlate_Script_3:
	goto_if_unset FLAG_EARTH_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_2
	goto EmberDuneCave_EarthPlate_Script_1

EmberDuneCave_EarthPlate_Script_7:
	msgbox EmberDuneCave_EarthPlate_Script_Text_2
	goto EmberDuneCave_EarthPlate_Script_6

EmberDuneCave_EarthPlate_Script_8:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, EmberDuneCave_EarthPlate_Script_7
	goto EmberDuneCave_EarthPlate_Script_6

EmberDuneCave_EarthPlate_Script_11:
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	warp MAP_LOST_PLATES, 6, 12
	goto EmberDuneCave_EarthPlate_Script_1


EmberDuneCave_EarthPlate_Script_Text_0:
	.string "There is a carving of many rock like\n"
	.string "Pokémon crawling over a plate.$"

EmberDuneCave_EarthPlate_Script_Text_1:
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

EmberDuneCave_EarthPlate_Script_Text_2:
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
