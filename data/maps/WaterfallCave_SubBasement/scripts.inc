WaterfallCave_SubBasement_MapScripts::
	.byte 0


WatefallCave_SubBasement_LegendsDoor::
	lock
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_2
WatefallCave_SubBasement_LegendsDoor_1:
	goto_if_unset FLAG_ALEX_INSECT_PLATE, WatefallCave_SubBasement_LegendsDoor_5
WatefallCave_SubBasement_LegendsDoor_4:
	goto_if_set FLAG_ALEX_INSECT_PLATE, WatefallCave_SubBasement_LegendsDoor_11
WatefallCave_SubBasement_LegendsDoor_9:
	release
	return

WatefallCave_SubBasement_LegendsDoor_2:
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WatefallCave_SubBasement_LegendsDoor_7
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_5:
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_1
	goto WatefallCave_SubBasement_LegendsDoor_4

WatefallCave_SubBasement_LegendsDoor_7:
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_10:
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_2
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_3
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_4
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_5
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_9

WatefallCave_SubBasement_LegendsDoor_11:
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_10
	goto WatefallCave_SubBasement_LegendsDoor_9


EnterLegendsAltar::
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	warp MAP_LEGENDS_ALTAR, 14, 26
	release
	return


FirstMaster_Fallen::
	lockall
	msgbox FirstMaster_Fallen_Text_0
	msgbox FirstMaster_Fallen_Text_1
	releaseall
	return


WatefallCave_SubBasement_LegendsDoor_Text_0:
	.string "Do you want to travel to the altar?$"

WatefallCave_SubBasement_LegendsDoor_Text_1:
	.string "There seems to be a lot of writing\n"
	.string "carved on the wall, but you can't\l"
	.string "understand it.$"

WatefallCave_SubBasement_LegendsDoor_Text_2:
	.string "There seems to be some ancient text\n"
	.string "carved on the wall, you get out the book\l"
	.string "Alex gave you to try and translate it.$"

WatefallCave_SubBasement_LegendsDoor_Text_3:
	.string "ARCEUS - CREATOR OF ALL - MASTER OF\n"
	.string "EVERYTHING$"

WatefallCave_SubBasement_LegendsDoor_Text_4:
	.string "WHEN HUMAN AND POKEMON ARE BONDED\n"
	.string "TOGETHER YOU MAY ENTER$"

WatefallCave_SubBasement_LegendsDoor_Text_5:
	.string "You get out a Pokémon from their ball\n"
	.string "and you both tough the wall$"

FirstMaster_Fallen_Text_0:
	.string "....$"

FirstMaster_Fallen_Text_1:
	.string "The floor collapsed? How are we going\n"
	.string "to get out of here?$"
