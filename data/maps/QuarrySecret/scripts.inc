QuarrySecret_MapScripts::
	.byte 0


QuarrySecret_MetalPlate::
	lock
	msgbox QuarrySecret_MetalPlate_Text_0
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, QuarrySecret_MetalPlate_3
QuarrySecret_MetalPlate_1:
	goto_if_set FLAG_ALEX_INSECT_PLATE, QuarrySecret_MetalPlate_8
QuarrySecret_MetalPlate_6:
	release
	return

QuarrySecret_MetalPlate_2:
	msgbox QuarrySecret_MetalPlate_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq QuarrySecret_MetalPlate_11
	goto QuarrySecret_MetalPlate_1

QuarrySecret_MetalPlate_3:
	goto_if_unset FLAG_IRON_PLATE_FOUND, QuarrySecret_MetalPlate_2
	goto QuarrySecret_MetalPlate_1

QuarrySecret_MetalPlate_7:
	msgbox QuarrySecret_MetalPlate_Text_2
	goto QuarrySecret_MetalPlate_6

QuarrySecret_MetalPlate_8:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, QuarrySecret_MetalPlate_7
	goto QuarrySecret_MetalPlate_6

QuarrySecret_MetalPlate_11:
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	warp MAP_LOST_PLATES, 6, 12
	goto QuarrySecret_MetalPlate_1


QuarrySecret_MetalPlate_Text_0:
	.string "There is a carving of many steel like\n"
	.string "Pokémon crawling over a plate.$"

QuarrySecret_MetalPlate_Text_1:
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

QuarrySecret_MetalPlate_Text_2:
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
