EmberDunesGym_MapScripts::
	.byte 0


Gym4_Sign::
	lockall
	msgbox Gym4_Sign_Text_0
	releaseall
	return


EventScript_Gym4_MeetRob_Right::
	lockall
	msgbox EventScript_Gym4_MeetRob_Right_Text_0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 1
	setobjectxy 1, 11, 13
	applymovement 1, Movement_Gym2_Robert_Approaches
	waitmovement 1
	msgbox EventScript_Gym4_MeetRob_Right_Text_1
	clearflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_MeetRob_Right_2
	msgbox EventScript_Gym4_MeetRob_Right_Text_4
	call EventScript_Gym4_RobertMoves_Right
EventScript_Gym4_MeetRob_Right_1:
	releaseall
	return

EventScript_Gym4_MeetRob_Right_2:
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_MeetRob_Right_5
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
	call EventScript_Gym4_RobertMoves_Right
	goto EventScript_Gym4_MeetRob_Right_1

EventScript_Gym4_MeetRob_Right_5:
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym4_RobertBeaten
	goto EventScript_Gym4_MeetRob_Right_1


EventScript_Gym4_MeetRob_Left::
	lockall
	msgbox EventScript_Gym4_MeetRob_Right_Text_0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 1
	setobjectxy 1, 10, 13
	applymovement 1, Movement_Gym2_Robert_Approaches
	waitmovement 1
	msgbox EventScript_Gym4_MeetRob_Right_Text_1
	clearflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_MeetRob_Left_2
	msgbox EventScript_Gym4_MeetRob_Right_Text_4
	call EventScript_Gym4_RobertMoves_Left
EventScript_Gym4_MeetRob_Left_1:
	releaseall
	return

EventScript_Gym4_MeetRob_Left_2:
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_MeetRob_Left_5
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
	call EventScript_Gym4_RobertMoves_Left
	goto EventScript_Gym4_MeetRob_Left_1

EventScript_Gym4_MeetRob_Left_5:
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym4_RobertBeaten
	goto EventScript_Gym4_MeetRob_Left_1


EventScript_Gym4_RobertBeaten::
	msgbox EventScript_Gym4_RobertBeaten_Text_0
	giveitem ITEM_ABILITY_PATCH, 1
	msgbox EventScript_Gym4_RobertBeaten_Text_1
	compare VAR_ROBERT_STATE, 6
	goto_if_eq EventScript_Gym4_RobertBeaten_2
EventScript_Gym4_RobertBeaten_1:
	setvar VAR_ROBERT_STATE, 8
	setflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
	releaseall
	return

EventScript_Gym4_RobertBeaten_2:
	msgbox EventScript_Gym4_RobertBeaten_Text_2
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym4_RobertBeaten_1


EventScript_Gym4_RobertMoves_Right::
	applymovement 1, Movement_Gym4_RobertMoves_Right
	waitmovement 1
	setobjectxy 1, 12, 7
	setvar VAR_ROBERT_STATE, 7
	return


EventScript_Gym4_RobertMoves_Left::
	applymovement 1, Movement_Gym4_RobertMoves_Left
	waitmovement 1
	setobjectxy 1, 12, 7
	setvar VAR_ROBERT_STATE, 7
	return


EventScript_Gym4_Robert_FindLater::
	compare VAR_ROBERT_STATE, 7
	goto_if_eq EventScript_Gym4_Robert_FindLater_2
EventScript_Gym4_Robert_FindLater_1:
	compare VAR_ROBERT_STATE, 8
	goto_if_eq EventScript_Gym4_Robert_FindLater_5
EventScript_Gym4_Robert_FindLater_4:
	releaseall
	return

EventScript_Gym4_Robert_FindLater_2:
	msgbox EventScript_Gym4_Robert_FindLater_Text_0
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_Robert_FindLater_7
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_5:
	msgbox EventScript_Gym4_Robert_FindLater_Text_1
	goto EventScript_Gym4_Robert_FindLater_4

EventScript_Gym4_Robert_FindLater_7:
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_Robert_FindLater_10
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_10:
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym4_Robert_FindLater_1


Movement_Gym4_RobertMoves_Right:
	walk_right
	walk_up
	face_down
	step_end

Movement_Gym4_RobertMoves_Left:
	walk_right
	walk_right
	walk_up
	face_down
	step_end

Gym4_Sign_Text_0:
	.string "Ember Gym: Bone chilling under the sun$"

EventScript_Gym4_MeetRob_Right_Text_0:
	.string "You made it!$"

EventScript_Gym4_MeetRob_Right_Text_1:
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym4_MeetRob_Right_Text_2:
	.string "Are you ready to go again?$"

EventScript_Gym4_MeetRob_Right_Text_3:
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym4_MeetRob_Right_Text_4:
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym4_RobertBeaten_Text_0:
	.string "Wow you're incredible, here take this!$"

EventScript_Gym4_RobertBeaten_Text_1:
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym4_RobertBeaten_Text_2:
	.string "Anyway I'll catch you later!$"

EventScript_Gym4_Robert_FindLater_Text_0:
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym4_Robert_FindLater_Text_1:
	.string "I'll train some more and beat you by the\n"
	.string "next gym.$"
