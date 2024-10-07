CreepyForest1_MapScripts::
	.byte 0


hauntedGirlStep1::
# 4 "data/maps/CreepyForest1/scripts.pory"
	lockall
# 5 "data/maps/CreepyForest1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised_MoveClass
# 6 "data/maps/CreepyForest1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 7 "data/maps/CreepyForest1/scripts.pory"
	delay 30
# 8 "data/maps/CreepyForest1/scripts.pory"
	applymovement 1, Movement_CreepyGirl_FaceDown
# 9 "data/maps/CreepyForest1/scripts.pory"
	waitmovement 1
# 10 "data/maps/CreepyForest1/scripts.pory"
	delay 30
# 11 "data/maps/CreepyForest1/scripts.pory"
	call creepygirlending
# 12 "data/maps/CreepyForest1/scripts.pory"
	releaseall
	return


hauntedGirlStep2::
# 16 "data/maps/CreepyForest1/scripts.pory"
	lockall
# 17 "data/maps/CreepyForest1/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 18 "data/maps/CreepyForest1/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq hauntedGirlStep2_2
hauntedGirlStep2_1:
# 24 "data/maps/CreepyForest1/scripts.pory"
	releaseall
	return

hauntedGirlStep2_2:
# 19 "data/maps/CreepyForest1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 20 "data/maps/CreepyForest1/scripts.pory"
	msgbox hauntedGirlStep2_Text_0
# 21 "data/maps/CreepyForest1/scripts.pory"
	clearflag FLAG_CREEPY_WOODS_1
# 22 "data/maps/CreepyForest1/scripts.pory"
	warp MAP_CREEPY_FOREST2, 1, 10
	goto hauntedGirlStep2_1


creepygirlending::
# 28 "data/maps/CreepyForest1/scripts.pory"
	delay 30
# 29 "data/maps/CreepyForest1/scripts.pory"
	applymovement 1, Movement_Creepygirl_Right
# 30 "data/maps/CreepyForest1/scripts.pory"
	waitmovement 1
# 31 "data/maps/CreepyForest1/scripts.pory"
	delay 60
# 32 "data/maps/CreepyForest1/scripts.pory"
	removeobject 1
# 33 "data/maps/CreepyForest1/scripts.pory"
	setflag FLAG_CREEPY_WOODS_1
# 34 "data/maps/CreepyForest1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/CreepyForest1/scripts.pory"
	msgbox creepygirlending_Text_0
# 36 "data/maps/CreepyForest1/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 37 "data/maps/CreepyForest1/scripts.pory"
	setvar VAR_CREEPY_WOODS_STATE, 1
# 38 "data/maps/CreepyForest1/scripts.pory"
	releaseall
	return


# 43 "data/maps/CreepyForest1/scripts.pory"
Movement_PlayerSurprised_HauntedWoods:
# 44 "data/maps/CreepyForest1/scripts.pory"
	face_up
# 45 "data/maps/CreepyForest1/scripts.pory"
	emote_question_mark
	step_end

# 48 "data/maps/CreepyForest1/scripts.pory"
Movement_CreepyGirl_FaceDown:
# 49 "data/maps/CreepyForest1/scripts.pory"
	face_down
# 50 "data/maps/CreepyForest1/scripts.pory"
	emote_exclamation_mark
	step_end

# 53 "data/maps/CreepyForest1/scripts.pory"
Movement_Creepygirl_Right:
# 54 "data/maps/CreepyForest1/scripts.pory"
	face_right
	step_end

hauntedGirlStep2_Text_0:
# 20 "data/maps/CreepyForest1/scripts.pory"
	.string "IT BROUGHT ME HERE SO WE COULD PLAY$"

creepygirlending_Text_0:
# 35 "data/maps/CreepyForest1/scripts.pory"
	.string "IT'S TOO LATE TO HELP ME$"
