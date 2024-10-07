WaterfallCave_SubBasement_MapScripts::
	.byte 0


WatefallCave_SubBasement_LegendsDoor::
# 4 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	lock
# 5 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_set FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_2
WatefallCave_SubBasement_LegendsDoor_1:
# 11 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_unset FLAG_ALEX_INSECT_PLATE, WatefallCave_SubBasement_LegendsDoor_5
WatefallCave_SubBasement_LegendsDoor_4:
# 14 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_set FLAG_ALEX_INSECT_PLATE, WatefallCave_SubBasement_LegendsDoor_11
WatefallCave_SubBasement_LegendsDoor_9:
# 21 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	release
	return

WatefallCave_SubBasement_LegendsDoor_2:
# 6 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_0, MSGBOX_YESNO
# 7 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WatefallCave_SubBasement_LegendsDoor_7
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_5:
# 12 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_1
	goto WatefallCave_SubBasement_LegendsDoor_4

WatefallCave_SubBasement_LegendsDoor_7:
# 8 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_1

WatefallCave_SubBasement_LegendsDoor_10:
# 15 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_2
# 16 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_3
# 17 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_4
# 18 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox WatefallCave_SubBasement_LegendsDoor_Text_5
# 19 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	call EnterLegendsAltar
	goto WatefallCave_SubBasement_LegendsDoor_9

WatefallCave_SubBasement_LegendsDoor_11:
# 14 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	goto_if_unset FLAG_LEGENDS_PLATE_FOUND, WatefallCave_SubBasement_LegendsDoor_10
	goto WatefallCave_SubBasement_LegendsDoor_9


EnterLegendsAltar::
# 25 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8004, 1
# 26 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8005, 1
# 27 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8006, 8
# 28 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	setvar VAR_0x8007, 0
# 29 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	special ShakeCamera
# 30 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	warp MAP_LEGENDS_ALTAR, 14, 26
# 32 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	release
	return


FirstMaster_Fallen::
# 36 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	lockall
# 37 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox FirstMaster_Fallen_Text_0
# 38 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	msgbox FirstMaster_Fallen_Text_1
# 39 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	releaseall
	return


WatefallCave_SubBasement_LegendsDoor_Text_0:
# 6 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "Do you want to travel to the altar?$"

WatefallCave_SubBasement_LegendsDoor_Text_1:
# 12 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "There seems to be a lot of writing\n"
	.string "carved on the wall, but you can't\l"
	.string "understand it.$"

WatefallCave_SubBasement_LegendsDoor_Text_2:
# 15 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "There seems to be some ancient text\n"
	.string "carved on the wall, you get out the book\l"
	.string "Alex gave you to try and translate it.$"

WatefallCave_SubBasement_LegendsDoor_Text_3:
# 16 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "ARCEUS - CREATOR OF ALL - MASTER OF\n"
	.string "EVERYTHING$"

WatefallCave_SubBasement_LegendsDoor_Text_4:
# 17 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "WHEN HUMAN AND POKEMON ARE BONDED\n"
	.string "TOGETHER YOU MAY ENTER$"

WatefallCave_SubBasement_LegendsDoor_Text_5:
# 18 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "You get out a Pokémon from their ball\n"
	.string "and you both tough the wall$"

FirstMaster_Fallen_Text_0:
# 37 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "....$"

FirstMaster_Fallen_Text_1:
# 38 "data/maps/WaterfallCave_SubBasement/scripts.pory"
	.string "The floor collapsed? How are we going\n"
	.string "to get out of here?$"
