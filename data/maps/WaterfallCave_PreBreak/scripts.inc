WaterfallCave_PreBreak_MapScripts::
	.byte 0


WaterfallCave_PreBreak_BlackBelt::
# 5 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	lock
# 6 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	msgbox WaterfallCave_PreBreak_BlackBelt_Text_0
# 7 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	release
	return


WaterfallCave_Master_PreBreak::
# 11 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	lock
# 12 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	msgbox WaterfallCave_Master_PreBreak_Text_0
# 13 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_EXPERT, Waterfallcave_Expert_Outro
# 14 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	call WaterfallCave_Master_Beaten
# 15 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	release
	return


WaterfallCave_Master_Beaten::
# 19 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	msgbox WaterfallCave_Master_Beaten_Text_0
# 20 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	setvar VAR_WATERFALL_CAVE_STATE, 2
# 21 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	addvar VAR_DOJOS_CLEARED, 1
# 22 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_Shock
# 23 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 25 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	setvar VAR_0x8004, 1
# 26 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	setvar VAR_0x8005, 1
# 27 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	setvar VAR_0x8006, 8
# 28 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	setvar VAR_0x8007, 0
# 29 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	special ShakeCamera
# 30 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	fadescreen FADE_TO_BLACK
# 31 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	msgbox WaterfallCave_Master_Beaten_Text_1
# 32 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	warp MAP_WATERFALL_CAVE_SUB_BASEMENT, 5, 5
	return


# 37 "data/maps/WaterfallCave_PreBreak/scripts.pory"
Movement_WaterfallCave_Shock:
# 38 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	emote_exclamation_mark
	step_end

WaterfallCave_PreBreak_BlackBelt_Text_0:
# 6 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	.string "Best of luck!$"

WaterfallCave_Master_PreBreak_Text_0:
# 12 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	.string "So you're the one who's manage to beat\n"
	.string "my pupils. You've done very well, but now\l"
	.string "are you able to defeat me?$"

WaterfallCave_Master_Beaten_Text_0:
# 19 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	.string "You've done very well! I haven't had to\n"
	.string "fight that hard in a long time. It felt\l"
	.string "like the entire earth was shaking$"

WaterfallCave_Master_Beaten_Text_1:
# 31 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	.string "The floor collapses beneath you$"

Waterfallcave_Expert_Outro::
# 43 "data/maps/WaterfallCave_PreBreak/scripts.pory"
	.string "You've really proved yourself$"
