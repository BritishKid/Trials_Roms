WaterfallCave_PostBreak_MapScripts::
	.byte 0


WaterfallCave_PostBreak_BackDown::
	lock
	msgbox WaterfallCave_PostBreak_BackDown_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_PostBreak_BackDown_2
WaterfallCave_PostBreak_BackDown_1:
	release
	return

WaterfallCave_PostBreak_BackDown_2:
	warp MAP_WATERFALL_CAVE_SUB_BASEMENT, 15, 19
	goto WaterfallCave_PostBreak_BackDown_1


WaterfallCave_PostBreak_BackDown_Text_0:
	.string "It leads back deeper into the cave, do\n"
	.string "you want to go down?$"
