QuarrySecret_MapScripts::
	.byte 0


QuarrySecret_MetalPlate::
# 5 "data/maps/QuarrySecret/scripts.pory"
	lock
# 6 "data/maps/QuarrySecret/scripts.pory"
	msgbox QuarrySecret_MetalPlate_Text_0
# 7 "data/maps/QuarrySecret/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, QuarrySecret_MetalPlate_3
QuarrySecret_MetalPlate_1:
# 19 "data/maps/QuarrySecret/scripts.pory"
	goto_if_set FLAG_ALEX_INSECT_PLATE, QuarrySecret_MetalPlate_8
QuarrySecret_MetalPlate_6:
# 22 "data/maps/QuarrySecret/scripts.pory"
	release
	return

QuarrySecret_MetalPlate_2:
# 8 "data/maps/QuarrySecret/scripts.pory"
	msgbox QuarrySecret_MetalPlate_Text_1, MSGBOX_YESNO
# 9 "data/maps/QuarrySecret/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq QuarrySecret_MetalPlate_11
	goto QuarrySecret_MetalPlate_1

QuarrySecret_MetalPlate_3:
# 7 "data/maps/QuarrySecret/scripts.pory"
	goto_if_unset FLAG_IRON_PLATE_FOUND, QuarrySecret_MetalPlate_2
	goto QuarrySecret_MetalPlate_1

QuarrySecret_MetalPlate_7:
# 20 "data/maps/QuarrySecret/scripts.pory"
	msgbox QuarrySecret_MetalPlate_Text_2
	goto QuarrySecret_MetalPlate_6

QuarrySecret_MetalPlate_8:
# 19 "data/maps/QuarrySecret/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, QuarrySecret_MetalPlate_7
	goto QuarrySecret_MetalPlate_6

QuarrySecret_MetalPlate_11:
# 10 "data/maps/QuarrySecret/scripts.pory"
	setvar VAR_0x8004, 1
# 11 "data/maps/QuarrySecret/scripts.pory"
	setvar VAR_0x8005, 1
# 12 "data/maps/QuarrySecret/scripts.pory"
	setvar VAR_0x8006, 8
# 13 "data/maps/QuarrySecret/scripts.pory"
	setvar VAR_0x8007, 0
# 14 "data/maps/QuarrySecret/scripts.pory"
	special ShakeCamera
# 15 "data/maps/QuarrySecret/scripts.pory"
	fadescreen FADE_TO_BLACK
# 16 "data/maps/QuarrySecret/scripts.pory"
	warp MAP_LOST_PLATES, 6, 12
	goto QuarrySecret_MetalPlate_1


QuarrySecret_MetalPlate_Text_0:
# 6 "data/maps/QuarrySecret/scripts.pory"
	.string "There is a carving of many steel like\n"
	.string "Pokémon crawling over a plate.$"

QuarrySecret_MetalPlate_Text_1:
# 8 "data/maps/QuarrySecret/scripts.pory"
	.string "Do you want to put the LEGENDS PLATE in\n"
	.string "the slot?$"

QuarrySecret_MetalPlate_Text_2:
# 20 "data/maps/QuarrySecret/scripts.pory"
	.string "There seems to be a slot for something.\n"
	.string "Maybe it's the Plate Key which Alex\l"
	.string "mentioned$"
