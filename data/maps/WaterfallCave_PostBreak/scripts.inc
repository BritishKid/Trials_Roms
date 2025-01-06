WaterfallCave_PostBreak_MapScripts::
	.byte 0


WaterfallCave_PostBreak_BackDown::
# 4 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	lock
# 5 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	msgbox WaterfallCave_PostBreak_BackDown_Text_0, MSGBOX_YESNO
# 6 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_PostBreak_BackDown_2
WaterfallCave_PostBreak_BackDown_1:
# 9 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	release
	return

WaterfallCave_PostBreak_BackDown_2:
# 7 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	warp MAP_WATERFALL_CAVE_SUB_BASEMENT, 15, 19
	goto WaterfallCave_PostBreak_BackDown_1


WaterfallCave_PostBreak_BackDown_Text_0:
# 5 "data/maps/WaterfallCave_PostBreak/scripts.pory"
	.string "It leads back deeper into the cave, do\n"
	.string "you want to go down?$"
