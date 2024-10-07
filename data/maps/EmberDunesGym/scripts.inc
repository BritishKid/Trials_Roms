EmberDunesGym_MapScripts::
	.byte 0


Gym4_Sign::
# 6 "data/maps/EmberDunesGym/scripts.pory"
	lockall
# 7 "data/maps/EmberDunesGym/scripts.pory"
	msgbox Gym4_Sign_Text_0
# 8 "data/maps/EmberDunesGym/scripts.pory"
	releaseall
	return


EventScript_Gym4_MeetRob_Right::
# 13 "data/maps/EmberDunesGym/scripts.pory"
	lockall
# 14 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_0
# 15 "data/maps/EmberDunesGym/scripts.pory"
	removeobject 1
# 16 "data/maps/EmberDunesGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
# 17 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 18 "data/maps/EmberDunesGym/scripts.pory"
	addobject 1
# 19 "data/maps/EmberDunesGym/scripts.pory"
	setobjectxy 1, 11, 13
# 20 "data/maps/EmberDunesGym/scripts.pory"
	applymovement 1, Movement_Gym2_Robert_Approaches
# 21 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement 1
# 22 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_1
# 23 "data/maps/EmberDunesGym/scripts.pory"
	clearflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
# 24 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_MeetRob_Right_2
# 34 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_4
# 35 "data/maps/EmberDunesGym/scripts.pory"
	call EventScript_Gym4_RobertMoves_Right
EventScript_Gym4_MeetRob_Right_1:
# 37 "data/maps/EmberDunesGym/scripts.pory"
	releaseall
	return

EventScript_Gym4_MeetRob_Right_2:
# 25 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
# 26 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_MeetRob_Right_5
# 30 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
# 31 "data/maps/EmberDunesGym/scripts.pory"
	call EventScript_Gym4_RobertMoves_Right
	goto EventScript_Gym4_MeetRob_Right_1

EventScript_Gym4_MeetRob_Right_5:
# 27 "data/maps/EmberDunesGym/scripts.pory"
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym4_RobertBeaten
	goto EventScript_Gym4_MeetRob_Right_1


EventScript_Gym4_MeetRob_Left::
# 41 "data/maps/EmberDunesGym/scripts.pory"
	lockall
# 42 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_0
# 43 "data/maps/EmberDunesGym/scripts.pory"
	removeobject 1
# 44 "data/maps/EmberDunesGym/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
# 45 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/EmberDunesGym/scripts.pory"
	addobject 1
# 47 "data/maps/EmberDunesGym/scripts.pory"
	setobjectxy 1, 10, 13
# 48 "data/maps/EmberDunesGym/scripts.pory"
	applymovement 1, Movement_Gym2_Robert_Approaches
# 49 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement 1
# 50 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_1
# 51 "data/maps/EmberDunesGym/scripts.pory"
	clearflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
# 52 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_MeetRob_Left_2
# 62 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_4
# 63 "data/maps/EmberDunesGym/scripts.pory"
	call EventScript_Gym4_RobertMoves_Left
EventScript_Gym4_MeetRob_Left_1:
# 65 "data/maps/EmberDunesGym/scripts.pory"
	releaseall
	return

EventScript_Gym4_MeetRob_Left_2:
# 53 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
# 54 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_MeetRob_Left_5
# 58 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
# 59 "data/maps/EmberDunesGym/scripts.pory"
	call EventScript_Gym4_RobertMoves_Left
	goto EventScript_Gym4_MeetRob_Left_1

EventScript_Gym4_MeetRob_Left_5:
# 55 "data/maps/EmberDunesGym/scripts.pory"
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym4_RobertBeaten
	goto EventScript_Gym4_MeetRob_Left_1


EventScript_Gym4_RobertBeaten::
# 69 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_0
# 70 "data/maps/EmberDunesGym/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 71 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_1
# 72 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_ROBERT_STATE, 6
	goto_if_eq EventScript_Gym4_RobertBeaten_2
EventScript_Gym4_RobertBeaten_1:
# 76 "data/maps/EmberDunesGym/scripts.pory"
	setvar VAR_ROBERT_STATE, 8
# 77 "data/maps/EmberDunesGym/scripts.pory"
	setflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
# 78 "data/maps/EmberDunesGym/scripts.pory"
	releaseall
	return

EventScript_Gym4_RobertBeaten_2:
# 73 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_2
# 74 "data/maps/EmberDunesGym/scripts.pory"
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym4_RobertBeaten_1


EventScript_Gym4_RobertMoves_Right::
# 82 "data/maps/EmberDunesGym/scripts.pory"
	applymovement 1, Movement_Gym4_RobertMoves_Right
# 83 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement 1
# 84 "data/maps/EmberDunesGym/scripts.pory"
	setobjectxy 1, 12, 7
# 85 "data/maps/EmberDunesGym/scripts.pory"
	setvar VAR_ROBERT_STATE, 7
	return


EventScript_Gym4_RobertMoves_Left::
# 89 "data/maps/EmberDunesGym/scripts.pory"
	applymovement 1, Movement_Gym4_RobertMoves_Left
# 90 "data/maps/EmberDunesGym/scripts.pory"
	waitmovement 1
# 91 "data/maps/EmberDunesGym/scripts.pory"
	setobjectxy 1, 12, 7
# 92 "data/maps/EmberDunesGym/scripts.pory"
	setvar VAR_ROBERT_STATE, 7
	return


EventScript_Gym4_Robert_FindLater::
# 96 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_ROBERT_STATE, 7
	goto_if_eq EventScript_Gym4_Robert_FindLater_2
EventScript_Gym4_Robert_FindLater_1:
# 107 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_ROBERT_STATE, 8
	goto_if_eq EventScript_Gym4_Robert_FindLater_5
EventScript_Gym4_Robert_FindLater_4:
# 110 "data/maps/EmberDunesGym/scripts.pory"
	releaseall
	return

EventScript_Gym4_Robert_FindLater_2:
# 97 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_Robert_FindLater_Text_0
# 98 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_Robert_FindLater_7
# 104 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_3
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_5:
# 108 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_Robert_FindLater_Text_1
	goto EventScript_Gym4_Robert_FindLater_4

EventScript_Gym4_Robert_FindLater_7:
# 99 "data/maps/EmberDunesGym/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Right_Text_2, MSGBOX_YESNO
# 100 "data/maps/EmberDunesGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_Robert_FindLater_10
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_10:
# 101 "data/maps/EmberDunesGym/scripts.pory"
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym4_Robert_FindLater_1


# 115 "data/maps/EmberDunesGym/scripts.pory"
Movement_Gym4_RobertMoves_Right:
# 116 "data/maps/EmberDunesGym/scripts.pory"
	walk_right
# 117 "data/maps/EmberDunesGym/scripts.pory"
	walk_up
# 118 "data/maps/EmberDunesGym/scripts.pory"
	face_down
	step_end

# 121 "data/maps/EmberDunesGym/scripts.pory"
Movement_Gym4_RobertMoves_Left:
# 122 "data/maps/EmberDunesGym/scripts.pory"
	walk_right
# 123 "data/maps/EmberDunesGym/scripts.pory"
	walk_right
# 124 "data/maps/EmberDunesGym/scripts.pory"
	walk_up
# 125 "data/maps/EmberDunesGym/scripts.pory"
	face_down
	step_end

Gym4_Sign_Text_0:
# 7 "data/maps/EmberDunesGym/scripts.pory"
	.string "Ember Gym: Bone chilling under the sun$"

EventScript_Gym4_MeetRob_Right_Text_0:
# 14 "data/maps/EmberDunesGym/scripts.pory"
	.string "You made it!$"

EventScript_Gym4_MeetRob_Right_Text_1:
# 22 "data/maps/EmberDunesGym/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym4_MeetRob_Right_Text_2:
# 25 "data/maps/EmberDunesGym/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym4_MeetRob_Right_Text_3:
# 30 "data/maps/EmberDunesGym/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym4_MeetRob_Right_Text_4:
# 34 "data/maps/EmberDunesGym/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym4_RobertBeaten_Text_0:
# 69 "data/maps/EmberDunesGym/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym4_RobertBeaten_Text_1:
# 71 "data/maps/EmberDunesGym/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym4_RobertBeaten_Text_2:
# 73 "data/maps/EmberDunesGym/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_Gym4_Robert_FindLater_Text_0:
# 97 "data/maps/EmberDunesGym/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym4_Robert_FindLater_Text_1:
# 108 "data/maps/EmberDunesGym/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "next gym.$"
