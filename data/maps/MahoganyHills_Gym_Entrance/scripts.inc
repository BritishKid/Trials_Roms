MahoganyHills_Gym_Entrance_MapScripts::
	.byte 0


EventScript_MahoganyHills_MeetRob::
	lockall
	msgbox EventScript_MahoganyHills_MeetRob_Text_0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 1
	setobjectxy 1, 16, 20
	applymovement 1, Movement_MahoganyHills_Robert_Approaches
	waitmovement 1
	msgbox EventScript_MahoganyHills_MeetRob_Text_1
	clearflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
	compare VAR_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_MahoganyHills_MeetRob_2
	msgbox EventScript_MahoganyHills_MeetRob_Text_4
	call EventScript_MahoganyHills_RobertMoves
EventScript_MahoganyHills_MeetRob_1:
	releaseall
	return

EventScript_MahoganyHills_MeetRob_2:
	msgbox EventScript_MahoganyHills_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_MahoganyHills_MeetRob_5
	msgbox EventScript_MahoganyHills_MeetRob_Text_3
	call EventScript_MahoganyHills_RobertMoves
	goto EventScript_MahoganyHills_MeetRob_1

EventScript_MahoganyHills_MeetRob_5:
	trainerbattle_single TRAINER_FIRST_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_MahoganyHills_RobertBeaten
	goto EventScript_MahoganyHills_MeetRob_1


EventScript_MahoganyHills_RobertBeaten::
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_0
	giveitem ITEM_ABILITY_PATCH, 1
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_1
	compare VAR_ROBERT_STATE, 0
	goto_if_eq EventScript_MahoganyHills_RobertBeaten_2
EventScript_MahoganyHills_RobertBeaten_1:
	setvar VAR_ROBERT_STATE, 2
	setflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
	releaseall
	return

EventScript_MahoganyHills_RobertBeaten_2:
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_2
	call EventScript_MahoganyHills_RobertLeaves
	goto EventScript_MahoganyHills_RobertBeaten_1


EventScript_MahoganyHills_RobertMoves::
	applymovement 1, Movement_MahoganyHills_Robert_Moves
	waitmovement 1
	setobjectxy 1, 18, 16
	setvar VAR_ROBERT_STATE, 1
	return


EventScript_MahoganyHills_RobertLeaves::
	applymovement 1, Movement_MahoganyHills_Robert_Leaves
	waitmovement 1
	return


EventScript_MahoganyHills_Robert_FindLater::
	compare VAR_ROBERT_STATE, 1
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_2
EventScript_MahoganyHills_Robert_FindLater_1:
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_5
EventScript_MahoganyHills_Robert_FindLater_4:
	releaseall
	return

EventScript_MahoganyHills_Robert_FindLater_2:
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_0
	compare VAR_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_MahoganyHills_Robert_FindLater_7
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_2
	goto EventScript_MahoganyHills_Robert_FindLater_1

EventScript_MahoganyHills_Robert_FindLater_5:
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_3
	goto EventScript_MahoganyHills_Robert_FindLater_4

EventScript_MahoganyHills_Robert_FindLater_7:
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_10
	goto EventScript_MahoganyHills_Robert_FindLater_1

EventScript_MahoganyHills_Robert_FindLater_10:
	trainerbattle_single TRAINER_FIRST_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_MahoganyHills_RobertBeaten
	goto EventScript_MahoganyHills_Robert_FindLater_1


Gym1_Sign::
	lockall
	msgbox Gym1_Sign_Text_0
	releaseall
	return


Movement_MahoganyHills_Robert_ExclamationMark:
	emote_exclamation_mark
	step_end

Movement_MahoganyHills_Robert_Approaches:
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_MahoganyHills_Robert_Leaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_MahoganyHills_Robert_Moves:
	walk_right
	walk_right
	face_down
	step_end

EventScript_MahoganyHills_MeetRob_Text_0:
	.string "So it's you!$"

EventScript_MahoganyHills_MeetRob_Text_1:
	.string "I've been hearing word of a new training\n"
	.string "beating everyone.$"

EventScript_MahoganyHills_MeetRob_Text_2:
	.string "It must be you, everyones been saying\n"
	.string "about how you destroy them in battle.\p"
	.string "Well how about it, care to show me how\n"
	.string "strong you are?$"

EventScript_MahoganyHills_MeetRob_Text_3:
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_MahoganyHills_MeetRob_Text_4:
	.string "But no it's not you, you're not the one\n"
	.string "they are talking about.\p"
	.string "If you find out who's been winning\n"
	.string "against all the trainers around here\l"
	.string "please come find me so I can see how\l"
	.string "strong they are.$"

EventScript_MahoganyHills_RobertBeaten_Text_0:
	.string "Wow you're incredible, here take this!$"

EventScript_MahoganyHills_RobertBeaten_Text_1:
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_MahoganyHills_RobertBeaten_Text_2:
	.string "Anyway I'll catch you later!$"

EventScript_MahoganyHills_Robert_FindLater_Text_0:
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_MahoganyHills_Robert_FindLater_Text_1:
	.string "I've heard you've been winning alot of\n"
	.string "battles.\p"
	.string "But do you think you're good enough to\n"
	.string "beat me?$"

EventScript_MahoganyHills_Robert_FindLater_Text_2:
	.string "I'm still trying to find that strong\n"
	.string "trainer$"

EventScript_MahoganyHills_Robert_FindLater_Text_3:
	.string "I'll train some more and beat you by the\n"
	.string "Coral gym.$"

Gym1_Sign_Text_0:
	.string "Mahogany Gym: Can you handle the sharp\n"
	.string "talons in the wind$"

MahoganyHills_Robert_Intro::
	.string "Prepare yourself, I won't hold back$"

MahoganyHills_Robert_Outro::
	.string "Just incredible!$"
