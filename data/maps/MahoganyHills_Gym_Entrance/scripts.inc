MahoganyHills_Gym_Entrance_MapScripts::
	.byte 0


EventScript_MahoganyHills_MeetRob::
# 5 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_MeetRob_Text_0
# 7 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	removeobject 1
# 8 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
# 9 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 10 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	addobject 1
# 11 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	setobjectxy 1, 16, 20
# 12 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	applymovement 1, Movement_MahoganyHills_Robert_Approaches
# 13 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	waitmovement 1
# 14 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_MeetRob_Text_1
# 15 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	clearflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
# 16 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_MahoganyHills_MeetRob_2
# 26 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_MeetRob_Text_4
# 27 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	call EventScript_MahoganyHills_RobertMoves
EventScript_MahoganyHills_MeetRob_1:
# 29 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	releaseall
	return

EventScript_MahoganyHills_MeetRob_2:
# 17 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_MeetRob_Text_2, MSGBOX_YESNO
# 18 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_MahoganyHills_MeetRob_5
# 22 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_MeetRob_Text_3
# 23 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	call EventScript_MahoganyHills_RobertMoves
	goto EventScript_MahoganyHills_MeetRob_1

EventScript_MahoganyHills_MeetRob_5:
# 19 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	trainerbattle_single TRAINER_FIRST_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_MahoganyHills_RobertBeaten
	goto EventScript_MahoganyHills_MeetRob_1


EventScript_MahoganyHills_RobertBeaten::
# 33 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_0
# 34 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 35 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_1
# 36 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 0
	goto_if_eq EventScript_MahoganyHills_RobertBeaten_2
EventScript_MahoganyHills_RobertBeaten_1:
# 40 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	setvar VAR_ROBERT_STATE, 2
# 41 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	setflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
# 42 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	releaseall
	return

EventScript_MahoganyHills_RobertBeaten_2:
# 37 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_RobertBeaten_Text_2
# 38 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	call EventScript_MahoganyHills_RobertLeaves
	goto EventScript_MahoganyHills_RobertBeaten_1


EventScript_MahoganyHills_RobertMoves::
# 46 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	applymovement 1, Movement_MahoganyHills_Robert_Moves
# 47 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	waitmovement 1
# 48 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	setobjectxy 1, 18, 16
# 49 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	setvar VAR_ROBERT_STATE, 1
	return


EventScript_MahoganyHills_RobertLeaves::
# 53 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	applymovement 1, Movement_MahoganyHills_Robert_Leaves
# 54 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	waitmovement 1
	return


EventScript_MahoganyHills_Robert_FindLater::
# 58 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 1
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_2
EventScript_MahoganyHills_Robert_FindLater_1:
# 69 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_5
EventScript_MahoganyHills_Robert_FindLater_4:
# 72 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	releaseall
	return

EventScript_MahoganyHills_Robert_FindLater_2:
# 59 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_0
# 60 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_MahoganyHills_Robert_FindLater_7
# 66 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_2
	goto EventScript_MahoganyHills_Robert_FindLater_1

EventScript_MahoganyHills_Robert_FindLater_5:
# 70 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_3
	goto EventScript_MahoganyHills_Robert_FindLater_4

EventScript_MahoganyHills_Robert_FindLater_7:
# 61 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox EventScript_MahoganyHills_Robert_FindLater_Text_1, MSGBOX_YESNO
# 62 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_MahoganyHills_Robert_FindLater_10
	goto EventScript_MahoganyHills_Robert_FindLater_1

EventScript_MahoganyHills_Robert_FindLater_10:
# 63 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	trainerbattle_single TRAINER_FIRST_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_MahoganyHills_RobertBeaten
	goto EventScript_MahoganyHills_Robert_FindLater_1


Gym1_Sign::
# 76 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	lockall
# 77 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	msgbox Gym1_Sign_Text_0
# 78 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	releaseall
	return


# 83 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
Movement_MahoganyHills_Robert_ExclamationMark:
# 84 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	emote_exclamation_mark
	step_end

# 87 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
Movement_MahoganyHills_Robert_Approaches:
# 88 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_up
# 89 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_up
# 90 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_up
# 91 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_up
	step_end

# 94 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
Movement_MahoganyHills_Robert_Leaves:
# 95 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
# 96 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
# 97 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
# 98 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
# 99 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
# 100 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_down
	step_end

# 103 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
Movement_MahoganyHills_Robert_Moves:
# 104 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_right
# 105 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	walk_right
# 106 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	face_down
	step_end

EventScript_MahoganyHills_MeetRob_Text_0:
# 6 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "So it's you!$"

EventScript_MahoganyHills_MeetRob_Text_1:
# 14 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "I've been hearing word of a new training\n"
	.string "beating everyone.$"

EventScript_MahoganyHills_MeetRob_Text_2:
# 17 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "It must be you, everyones been saying\n"
	.string "about how you destroy them in battle.\p"
	.string "Well how about it, care to show me how\n"
	.string "strong you are?$"

EventScript_MahoganyHills_MeetRob_Text_3:
# 22 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_MahoganyHills_MeetRob_Text_4:
# 26 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "But no it's not you, you're not the one\n"
	.string "they are talking about.\p"
	.string "If you find out who's been winning\n"
	.string "against all the trainers around here\l"
	.string "please come find me so I can see how\l"
	.string "strong they are.$"

EventScript_MahoganyHills_RobertBeaten_Text_0:
# 33 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_MahoganyHills_RobertBeaten_Text_1:
# 35 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_MahoganyHills_RobertBeaten_Text_2:
# 37 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_MahoganyHills_Robert_FindLater_Text_0:
# 59 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_MahoganyHills_Robert_FindLater_Text_1:
# 61 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "I've heard you've been winning alot of\n"
	.string "battles.\p"
	.string "But do you think you're good enough to\n"
	.string "beat me?$"

EventScript_MahoganyHills_Robert_FindLater_Text_2:
# 66 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "I'm still trying to find that strong\n"
	.string "trainer$"

EventScript_MahoganyHills_Robert_FindLater_Text_3:
# 70 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "Coral gym.$"

Gym1_Sign_Text_0:
# 77 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Mahogany Gym: Can you handle the sharp\n"
	.string "talons in the wind$"

MahoganyHills_Robert_Intro::
# 110 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Prepare yourself, I won't hold back$"

MahoganyHills_Robert_Outro::
# 114 "data/maps/MahoganyHills_Gym_Entrance/scripts.pory"
	.string "Just incredible!$"
