LegendsAltar_MapScripts::
	.byte 0


LegendsAltar_AdamantOrb::
	lock
	msgbox LegendsAltar_AdamantOrb_Text_0
	release
	return


LegendsAltar_GriseousOrb::
	lock
	msgbox LegendsAltar_AdamantOrb_Text_0
	release
	return


LegendsAltar_LustrousOrb::
	lock
	msgbox LegendsAltar_AdamantOrb_Text_0
	release
	return


LegendsAltar_LegendsPlate::
	lock
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_2
LegendsAltar_LegendsPlate_1:
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, LegendsAltar_LegendsPlate_5
LegendsAltar_LegendsPlate_4:
	release
	return

LegendsAltar_LegendsPlate_2:
	msgbox LegendsAltar_LegendsPlate_Text_0
	giveitem ITEM_LEGENDS_PLATE
	playfanfare MUS_OBTAIN_ITEM
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_LEGENDS_PLATE
	setflag FLAG_LEGENDS_PLATE_FOUND
	setvar VAR_PLATE_QUEST_STATE, 3
	goto LegendsAltar_LegendsPlate_1

LegendsAltar_LegendsPlate_5:
	msgbox LegendsAltar_LegendsPlate_Text_1
	goto LegendsAltar_LegendsPlate_4


LegendsAltar_AdamantOrb_Text_0:
	.string "There seems to be a hole in the altar$"

LegendsAltar_LegendsPlate_Text_0:
	.string "There seems to be a plate radiating\n"
	.string "warmth on the altar$"

LegendsAltar_LegendsPlate_Text_1:
	.string "There is a large gap from where you took\n"
	.string "the Legends Plate$"
