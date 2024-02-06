WaterfallCave_PreBreak_MapScripts::
	.byte 0


WaterfallCave_PreBreak_BlackBelt::
	lock
	msgbox WaterfallCave_PreBreak_BlackBelt_Text_0
	release
	return


WaterfallCave_Master_PreBreak::
	lock
	msgbox WaterfallCave_Master_PreBreak_Text_0
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_EXPERT, Waterfallcave_Expert_Outro
	call WaterfallCave_Master_Beaten
	release
	return


WaterfallCave_Master_Beaten::
	msgbox WaterfallCave_Master_Beaten_Text_0
	setflag FLAG_WATERFALL_CAVE_CLEARED
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_Shock
	waitmovement OBJ_EVENT_ID_PLAYER
	setvar VAR_0x8004, 1
	setvar VAR_0x8005, 1
	setvar VAR_0x8006, 8
	setvar VAR_0x8007, 0
	special ShakeCamera
	fadescreen FADE_TO_BLACK
	msgbox WaterfallCave_Master_Beaten_Text_1
	warp MAP_WATERFALL_CAVE_SUB_BASEMENT, 5, 5
	return


Movement_WaterfallCave_Shock:
	emote_exclamation_mark
	step_end

WaterfallCave_PreBreak_BlackBelt_Text_0:
	.string "Best of luck!$"

WaterfallCave_Master_PreBreak_Text_0:
	.string "So you're the one who's manage to beat\n"
	.string "my pupils. You've done very well, but now\l"
	.string "are you able to defeat me?$"

WaterfallCave_Master_Beaten_Text_0:
	.string "You've done very well! I haven't had to\n"
	.string "fight that hard in a long time. It felt\l"
	.string "like the entire earth was shaking$"

WaterfallCave_Master_Beaten_Text_1:
	.string "The floor collapses beneath you$"

Waterfallcave_Expert_Outro::
	.string "You've really proved yourself$"
