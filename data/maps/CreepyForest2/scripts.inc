CreepyForest2_MapScripts::
	.byte 0


hauntedGirlStep3::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprisedRight_HauntedWoods
	waitmovement OBJ_EVENT_ID_PLAYER
	delay 30
	applymovement 1, Movement_CreepyGirlShock_FaceLeft
	waitmovement 1
	delay 30
	call creepygirlendingarea2
	releaseall
	return


creepygirlendingarea2::
	delay 30
	applymovement 1, Movement_CreepygirlDirectionPoint_Up
	waitmovement 1
	delay 60
	removeobject 1
	fadescreen FADE_TO_BLACK
	msgbox creepygirlendingarea2_Text_0
	setflag FLAG_CREEPY_WOODS_1
	fadescreen FADE_FROM_BLACK
	setvar VAR_CREEPY_WOODS_STATE, 2
	releaseall
	return


hauntedGirlStep4::
	lockall
	specialvar VAR_RESULT, GetPlayerFacingDirection
	compare VAR_RESULT, 5
	goto_if_eq hauntedGirlStep4_2
hauntedGirlStep4_1:
	releaseall
	return

hauntedGirlStep4_2:
	fadescreen FADE_TO_BLACK
	msgbox hauntedGirlStep4_Text_0
	setwildbattle SPECIES_DRIFLOON, 35, ITEM_SITRUS_BERRY, SPECIES_DRIFLOON, 35, ITEM_SITRUS_BERRY
	call doWildbattleCreepy
	clearflag FLAG_CREEPY_WOODS_1
	goto hauntedGirlStep4_1


doWildbattleCreepy::
	dowildbattle
	return


Movement_PlayerSurprisedRight_HauntedWoods:
	face_right
	emote_question_mark
	step_end

Movement_CreepyGirlShock_FaceLeft:
	face_left
	emote_exclamation_mark
	step_end

Movement_CreepygirlDirectionPoint_Up:
	face_up
	step_end

creepygirlendingarea2_Text_0:
	.string "LEAVE! HE WILL TAKE YOU TO$"

hauntedGirlStep4_Text_0:
	.string "HE WILL SEND THEM TO PROTECT ME$"
