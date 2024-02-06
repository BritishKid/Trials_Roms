WaterfallCave_MapScripts::
	.byte 0


WaterfallCave_BlackBelt1::
	lock
	msgbox WaterfallCave_BlackBelt1_Text_0
	release
	return


WaterfallCave_BlackBelt3::
	lock
	msgbox WaterfallCave_BlackBelt3_Text_0
	release
	return


WaterfallCave_BlackBelt2::
	lock
	goto_if_unset FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_2
WaterfallCave_BlackBelt2_1:
	goto_if_set FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS, WaterfallCave_BlackBelt2_5
WaterfallCave_BlackBelt2_4:
	release
	return

WaterfallCave_BlackBelt2_2:
	msgbox WaterfallCave_BlackBelt2_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_BlackBelt2_7
	msgbox WaterfallCave_BlackBelt2_Text_3
	goto WaterfallCave_BlackBelt2_1

WaterfallCave_BlackBelt2_5:
	call WaterfallCave_Accept_MasterChallenge
	goto WaterfallCave_BlackBelt2_4

WaterfallCave_BlackBelt2_7:
	msgbox WaterfallCave_BlackBelt2_Text_1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_WaterfallCave_PreparePlayer
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox WaterfallCave_BlackBelt2_Text_2
	applymovement 1, Movement_WaterfallCave_BlackBelt1Prepare
	waitmovement 1
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_1, Waterfallcave_Blackbelt1_Outro
	call WaterfallCave_BlackBelt1_Beaten
	goto WaterfallCave_BlackBelt2_1


WaterfallCave_BlackBelt1_Beaten::
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_0
	applymovement 1, Movement_WaterfallCave_Blackbelt1_Return
	waitmovement 1
	msgbox WaterfallCave_BlackBelt1_Beaten_Text_1
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Prepare
	waitmovement 3
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_3, Waterfallcave_Blackbelt3_Outro
	call WaterfallCave_BlackBelt3_Beaten
	return


WaterfallCave_BlackBelt3_Beaten::
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_0
	applymovement 3, Movement_WaterfallCave_Blackbelt3_Return
	waitmovement 3
	msgbox WaterfallCave_BlackBelt3_Beaten_Text_1
	applymovement 2, Movement_WaterfallCave_Blackbelt2_Prepare
	waitmovement 2
	trainerbattle_no_intro TRAINER_WATERFALL_CAVE_BLACKBELT_2, Waterfallcave_Blackbelt2_Outro
	call WaterfallCave_BlackBelt2_Beaten
	return


WaterfallCave_BlackBelt2_Beaten::
	setflag FLAG_BEATEN_WATERFALLCAVE_BLACKBELTS
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_0
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_1
	msgbox WaterfallCave_BlackBelt2_Beaten_Text_2
	call WaterfallCave_Accept_MasterChallenge
	return


WaterfallCave_Accept_MasterChallenge::
	msgbox WaterfallCave_Accept_MasterChallenge_Text_0
	compare VAR_RESULT, YES
	goto_if_eq WaterfallCave_Accept_MasterChallenge_2
	msgbox WaterfallCave_Accept_MasterChallenge_Text_2
WaterfallCave_Accept_MasterChallenge_1:
	releaseall
	return

WaterfallCave_Accept_MasterChallenge_2:
	msgbox WaterfallCave_Accept_MasterChallenge_Text_1
	fadescreen FADE_TO_BLACK
	warp MAP_WATERFALL_CAVE_PRE_BREAK, 6, 4
	goto WaterfallCave_Accept_MasterChallenge_1


Movement_WaterfallCave_Blackbelt2_Prepare:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_Blackbelt3_Return:
	walk_up
	walk_up
	walk_up
	face_down
	step_end

Movement_WaterfallCave_Blackbelt3_Prepare:
	walk_down
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_Blackbelt1_Return:
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	face_down
	step_end

Movement_WaterfallCave_BlackBelt1Prepare:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	face_left
	step_end

Movement_WaterfallCave_PreparePlayer:
	walk_down
	walk_down
	walk_left
	walk_left
	face_right
	step_end

WaterfallCave_BlackBelt1_Text_0:
	.string "Hi shrimp, you think you're tough enough\n"
	.string "to take us?$"

WaterfallCave_BlackBelt3_Text_0:
	.string "We've been training in here with our\n"
	.string "master for years.$"

WaterfallCave_BlackBelt2_Text_0:
	.string "Welcome to our waterfall. We are\n"
	.string "training here to unlock the full\l"
	.string "potential of our Pokemon. Do you want\l"
	.string "to join us in some battles?$"

WaterfallCave_BlackBelt2_Text_1:
	.string "Very good, go prepare yourself for\n"
	.string "battle.$"

WaterfallCave_BlackBelt2_Text_2:
	.string "Prepare yourself for the first\n"
	.string "challenge$"

WaterfallCave_BlackBelt2_Text_3:
	.string "Maybe another time then.$"

WaterfallCave_BlackBelt1_Beaten_Text_0:
	.string "Very good$"

WaterfallCave_BlackBelt1_Beaten_Text_1:
	.string "Don't let up time for your second\n"
	.string "challenge$"

WaterfallCave_BlackBelt3_Beaten_Text_0:
	.string "Congratulations$"

WaterfallCave_BlackBelt3_Beaten_Text_1:
	.string "You're incredible, but now prepare\n"
	.string "yourself for me$"

WaterfallCave_BlackBelt2_Beaten_Text_0:
	.string "You managed to beat all of us! We\n"
	.string "thought you might have beaten a few\l"
	.string "Pokemon but not this$"

WaterfallCave_BlackBelt2_Beaten_Text_1:
	.string "We think you could take on our Master.\n"
	.string "We train he in hopes to one day beat his\l"
	.string "challenge and recieve his prize but we\l"
	.string "never get close.$"

WaterfallCave_BlackBelt2_Beaten_Text_2:
	.string "You definately seem strong enough to\n"
	.string "beat him.$"

WaterfallCave_Accept_MasterChallenge_Text_0:
	.string "Would you like to challenge our Master?$"

WaterfallCave_Accept_MasterChallenge_Text_1:
	.string "Fantastic lets go$"

WaterfallCave_Accept_MasterChallenge_Text_2:
	.string "Okay no problem, come back when you are\n"
	.string "ready.$"

Waterfallcave_Blackbelt1_Outro::
	.string "Just incredible$"

Waterfallcave_Blackbelt2_Outro::
	.string "Just incredible$"

Waterfallcave_Blackbelt3_Outro::
	.string "Just incredible$"
