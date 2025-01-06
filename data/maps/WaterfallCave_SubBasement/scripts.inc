WaterfallCave_SubBasement_MapScripts::
	.byte 0


WatefallCave_SubBasement_LegendsDoor::
# 5 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	lockall
# 6 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_2
WatefallCave_SubBasement_LegendsDoor_1:
# 12 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	checkitem ITEM_HISTORY_BOOK, 1
# 13 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq WatefallCave_SubBasement_LegendsDoor_5
WatefallCave_SubBasement_LegendsDoor_4:
# 16 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WatefallCave_SubBasement_LegendsDoor_11
WatefallCave_SubBasement_LegendsDoor_9:
# 23 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	releaseall
	return

WatefallCave_SubBasement_LegendsDoor_2:
# 7 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_0, MSGBOX_YESNO
# 8 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WatefallCave_SubBasement_LegendsDoor_7
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_5:
# 14 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_1
	goto WatefallCave_SubBasement_LegendsDoor_4

WatefallCave_SubBasement_LegendsDoor_7:
# 9 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_10:
# 17 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_2
# 18 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_3
# 19 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_4
# 20 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_5
# 21 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_9

WatefallCave_SubBasement_LegendsDoor_11:
# 16 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_10
	goto WatefallCave_SubBasement_LegendsDoor_9


EnterLegendsAltar::
# 28 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8004, 1
# 29 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8005, 1
# 30 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8006, 8
# 31 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8007, 0
# 32 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	special ShakeCamera
# 33 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	warp MAP_LEGENDS_ALTAR, 14, 26
# 35 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	release
	return


WatefallCave_SubBasement_LegendsDoor_Text_0:
# 7 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "Do you want to travel to the altar?$"

WatefallCave_SubBasement_LegendsDoor_Text_1:
# 14 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "There seems to be a lot of writing\n"
	.string "carved on the wall, but you can't\l"
	.string "understand it.$"

WatefallCave_SubBasement_LegendsDoor_Text_2:
# 17 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "There seems to be some ancient text\n"
	.string "carved on the wall, you get out the book\l"
	.string "Alex gave you to try and translate it.$"

WatefallCave_SubBasement_LegendsDoor_Text_3:
# 18 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "ARCEUS - CREATOR OF ALL - MASTER OF\n"
	.string "EVERYTHING$"

WatefallCave_SubBasement_LegendsDoor_Text_4:
# 19 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "WHEN HUMAN AND POKEMON ARE BONDED\n"
	.string "TOGETHER YOU MAY ENTER$"

WatefallCave_SubBasement_LegendsDoor_Text_5:
# 20 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "You get out a Pokémon from their ball\n"
	.string "and you both tough the wall$"
