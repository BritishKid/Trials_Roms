LegendsAltar_MapScripts::
	.byte 0


LegendsAltar_AdamantOrb::
# 4 "data/maps/LegendsAltar/scripts.pory"
	lock
# 5 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 6 "data/maps/LegendsAltar/scripts.pory"
	release
	return


LegendsAltar_GriseousOrb::
# 10 "data/maps/LegendsAltar/scripts.pory"
	lock
# 11 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 12 "data/maps/LegendsAltar/scripts.pory"
	release
	return


LegendsAltar_LustrousOrb::
# 16 "data/maps/LegendsAltar/scripts.pory"
	lock
# 17 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_AdamantOrb_Text_0
# 18 "data/maps/LegendsAltar/scripts.pory"
	release
	return


LegendsAltar_LegendsPlate::
# 22 "data/maps/LegendsAltar/scripts.pory"
	lock
# 23 "data/maps/LegendsAltar/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_2
LegendsAltar_LegendsPlate_1:
# 31 "data/maps/LegendsAltar/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_5
LegendsAltar_LegendsPlate_4:
# 34 "data/maps/LegendsAltar/scripts.pory"
	release
	return

LegendsAltar_LegendsPlate_2:
# 24 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_LegendsPlate_Text_0
# 25 "data/maps/LegendsAltar/scripts.pory"
	giveitem ITEM_LEGENDS_PLATE
# 26 "data/maps/LegendsAltar/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 27 "data/maps/LegendsAltar/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_LEGENDS_PLATE
# 28 "data/maps/LegendsAltar/scripts.pory"
	setflag FLAG_LEGENDS_PLATE_FOUND
# 29 "data/maps/LegendsAltar/scripts.pory"
	setvar VAR_PLATE_QUEST_STATE, 3
	goto LegendsAltar_LegendsPlate_1

LegendsAltar_LegendsPlate_5:
# 32 "data/maps/LegendsAltar/scripts.pory"
	msgbox LegendsAltar_LegendsPlate_Text_1
	goto LegendsAltar_LegendsPlate_4


LegendsAltar_AdamantOrb_Text_0:
# 5 "data/maps/LegendsAltar/scripts.pory"
	.string "There seems to be a hole in the altar$"

LegendsAltar_LegendsPlate_Text_0:
# 24 "data/maps/LegendsAltar/scripts.pory"
	.string "There seems to be a plate radiating\n"
	.string "warmth on the altar$"

LegendsAltar_LegendsPlate_Text_1:
# 32 "data/maps/LegendsAltar/scripts.pory"
	.string "There is a large gap from where you took\n"
	.string "the Legends Plate$"
