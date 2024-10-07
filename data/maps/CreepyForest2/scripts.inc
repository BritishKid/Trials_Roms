CreepyForest2_MapScripts::
	.byte 0


hauntedGirlStep3::
# 4 "data/maps/CreepyForest2/scripts.pory"
	lockall
# 5 "data/maps/CreepyForest2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprisedRight_HauntedWoods
# 6 "data/maps/CreepyForest2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 7 "data/maps/CreepyForest2/scripts.pory"
	delay 30
# 8 "data/maps/CreepyForest2/scripts.pory"
	applymovement 1, Movement_CreepyGirlShock_FaceLeft
# 9 "data/maps/CreepyForest2/scripts.pory"
	waitmovement 1
# 10 "data/maps/CreepyForest2/scripts.pory"
	delay 30
# 11 "data/maps/CreepyForest2/scripts.pory"
	call creepygirlendingarea2
# 12 "data/maps/CreepyForest2/scripts.pory"
	releaseall
	return


creepygirlendingarea2::
# 16 "data/maps/CreepyForest2/scripts.pory"
	delay 30
# 17 "data/maps/CreepyForest2/scripts.pory"
	applymovement 1, Movement_CreepygirlDirectionPoint_Up
# 18 "data/maps/CreepyForest2/scripts.pory"
	waitmovement 1
# 19 "data/maps/CreepyForest2/scripts.pory"
	delay 60
# 20 "data/maps/CreepyForest2/scripts.pory"
	removeobject 1
# 21 "data/maps/CreepyForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/CreepyForest2/scripts.pory"
	msgbox creepygirlendingarea2_Text_0
# 23 "data/maps/CreepyForest2/scripts.pory"
	setflag FLAG_CREEPY_WOODS_1
# 24 "data/maps/CreepyForest2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 25 "data/maps/CreepyForest2/scripts.pory"
	setvar VAR_CREEPY_WOODS_STATE, 2
# 26 "data/maps/CreepyForest2/scripts.pory"
	releaseall
	return


hauntedGirlStep4::
# 30 "data/maps/CreepyForest2/scripts.pory"
	lockall
# 31 "data/maps/CreepyForest2/scripts.pory"
	specialvar VAR_RESULT, GetPlayerFacingDirection
# 32 "data/maps/CreepyForest2/scripts.pory"
	compare VAR_RESULT, 5
	goto_if_eq hauntedGirlStep4_2
hauntedGirlStep4_1:
# 40 "data/maps/CreepyForest2/scripts.pory"
	releaseall
	return

hauntedGirlStep4_2:
# 33 "data/maps/CreepyForest2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 34 "data/maps/CreepyForest2/scripts.pory"
	msgbox hauntedGirlStep4_Text_0
# 35 "data/maps/CreepyForest2/scripts.pory"
	setwildbattle SPECIES_DRIFLOON, 35, ITEM_SITRUS_BERRY, SPECIES_DRIFLOON, 35, ITEM_SITRUS_BERRY
# 36 "data/maps/CreepyForest2/scripts.pory"
	call doWildbattleCreepy
# 37 "data/maps/CreepyForest2/scripts.pory"
	clearflag FLAG_CREEPY_WOODS_1
	goto hauntedGirlStep4_1


doWildbattleCreepy::
# 44 "data/maps/CreepyForest2/scripts.pory"
	dowildbattle
	return


# 48 "data/maps/CreepyForest2/scripts.pory"
Movement_PlayerSurprisedRight_HauntedWoods:
# 49 "data/maps/CreepyForest2/scripts.pory"
	face_right
# 50 "data/maps/CreepyForest2/scripts.pory"
	emote_question_mark
	step_end

# 53 "data/maps/CreepyForest2/scripts.pory"
Movement_CreepyGirlShock_FaceLeft:
# 54 "data/maps/CreepyForest2/scripts.pory"
	face_left
# 55 "data/maps/CreepyForest2/scripts.pory"
	emote_exclamation_mark
	step_end

# 58 "data/maps/CreepyForest2/scripts.pory"
Movement_CreepygirlDirectionPoint_Up:
# 59 "data/maps/CreepyForest2/scripts.pory"
	face_up
	step_end

creepygirlendingarea2_Text_0:
# 22 "data/maps/CreepyForest2/scripts.pory"
	.string "LEAVE! HE WILL TAKE YOU TO$"

hauntedGirlStep4_Text_0:
# 34 "data/maps/CreepyForest2/scripts.pory"
	.string "HE WILL SEND THEM TO PROTECT ME$"
