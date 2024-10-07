CreepyForest1_MapScripts::
	.byte 0


hauntedGirlStep1::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised_MoveClass
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 30
	applymovement 1, Movement_CreepyGirl_FaceDown
	waitmovement 1
	delay 30
	call creepygirlending
	releaseall
	return


hauntedGirlStep2::
	lockall
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, 2
	goto_if_eq hauntedGirlStep2_2
hauntedGirlStep2_1:
	releaseall
	return

hauntedGirlStep2_2:
	fadescreen FADE_TO_BLACK
	msgbox hauntedGirlStep2_Text_0
	clearflag FLAG_CREEPY_WOODS_1
	warp MAP_CREEPY_FOREST2, 1, 10
	goto hauntedGirlStep2_1


creepygirlending::
	delay 30
	applymovement 1, Movement_Creepygirl_Right
	waitmovement 1
	delay 60
	removeobject 1
	setflag FLAG_CREEPY_WOODS_1
	fadescreen FADE_TO_BLACK
	msgbox creepygirlending_Text_0
	fadescreen FADE_FROM_BLACK
	setvar VAR_CREEPY_WOODS_STATE, 1
	releaseall
	return


Movement_PlayerSurprised_HauntedWoods:
	face_up
	emote_question_mark
	step_end

Movement_CreepyGirl_FaceDown:
	face_down
	emote_exclamation_mark
	step_end

Movement_Creepygirl_Right:
	face_right
	step_end

hauntedGirlStep2_Text_0:
	.string "IT BROUGHT ME HERE SO WE COULD PLAY$"

creepygirlending_Text_0:
	.string "IT'S TOO LATE TO HELP ME$"
