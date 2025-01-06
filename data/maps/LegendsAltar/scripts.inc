LegendsAltar_MapScripts::
	.byte 0


LegendsAltar_AdamantOrb::
# 5 "data/maps/LegendsAltar/scripts.pory"
	lockall
# 6 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 7 "data/maps/LegendsAltar/scripts.pory"
	releaseall
	return


LegendsAltar_GriseousOrb::
# 11 "data/maps/LegendsAltar/scripts.pory"
	lockall
# 12 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 13 "data/maps/LegendsAltar/scripts.pory"
	releaseall
	return


LegendsAltar_LustrousOrb::
# 17 "data/maps/LegendsAltar/scripts.pory"
	lockall
# 18 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 19 "data/maps/LegendsAltar/scripts.pory"
	releaseall
	return


LegendsAltar_LegendsPlate::
# 23 "data/maps/LegendsAltar/scripts.pory"
	lockall
# 24 "data/maps/LegendsAltar/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_2
LegendsAltar_LegendsPlate_1:
# 32 "data/maps/LegendsAltar/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_5
LegendsAltar_LegendsPlate_4:
# 35 "data/maps/LegendsAltar/scripts.pory"
	releaseall
	return

LegendsAltar_LegendsPlate_2:
# 25 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_LegendsPlate_Text_0
# 26 "data/maps/LegendsAltar/scripts.pory"
	giveitem ITEM_LEGENDS_PLATE
# 27 "data/maps/LegendsAltar/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/LegendsAltar/scripts.pory"
	setflag FLAG_LEGENDS_PLATE_FOUND
	goto LegendsAltar_LegendsPlate_1

LegendsAltar_LegendsPlate_5:
# 33 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_LegendsPlate_Text_1
	goto LegendsAltar_LegendsPlate_4


LegendsAltar_AdamantOrb_Text_0:
# 6 "data/maps/LegendsAltar/scripts.pory"
	.string "There seems to be a hole in the altar$"

LegendsAltar_LegendsPlate_Text_0:
# 25 "data/maps/LegendsAltar/scripts.pory"
	.string "There seems to be a plate radiating\n"
	.string "warmth on the altar$"

LegendsAltar_LegendsPlate_Text_1:
# 33 "data/maps/LegendsAltar/scripts.pory"
	.string "There is a large gap from where you took\n"
	.string "the Legends Plate$"
