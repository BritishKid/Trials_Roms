Gym2Entrance_MapScripts::
	.byte 0


Gym2Entrance_JerichoBattle::
	trainerbattle_single GYM2ENTRANCE_JERICHO, Jericho_Intro, Jericho_Outro, Increase_Trainers_Beaten
	msgbox Jericho_PostBattle, MSGBOX_AUTOCLOSE
	end


Gym2_Sign::
	lockall
	msgbox Gym2_Sign_Text_0
	lockall
	return


EventScript_Gym2_MeetRob::
	lockall
	msgbox EventScript_Gym2_MeetRob_Text_0
	removeobject 2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 2
	setobjectxy 2, 18, 13
	applymovement 2, Movement_Gym2_Robert_Approaches
	waitmovement 2
	msgbox EventScript_Gym2_MeetRob_Text_1
	clearflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_MeetRob_2
	msgbox EventScript_Gym2_MeetRob_Text_4
	call EventScript_Gym2_RobertMoves
EventScript_Gym2_MeetRob_1:
	releaseall
	return

EventScript_Gym2_MeetRob_2:
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_MeetRob_5
	msgbox EventScript_Gym2_MeetRob_Text_3
	call EventScript_Gym2_RobertMoves
	goto EventScript_Gym2_MeetRob_1

EventScript_Gym2_MeetRob_5:
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_MeetRob_1


EventScript_Gym2_RobertBeaten::
	msgbox EventScript_Gym2_RobertBeaten_Text_0
	giveitem ITEM_ABILITY_PATCH, 1
	msgbox EventScript_Gym2_RobertBeaten_Text_1
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_Gym2_RobertBeaten_2
EventScript_Gym2_RobertBeaten_1:
	setvar VAR_ROBERT_STATE, 4
	setflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
	releaseall
	return

EventScript_Gym2_RobertBeaten_2:
	msgbox EventScript_Gym2_RobertBeaten_Text_2
	call EventScript_Gym2_RobertLeaves
	goto EventScript_Gym2_RobertBeaten_1


EventScript_Gym2_RobertMoves::
	applymovement 2, Movement_Gym2_RobertMoves
	waitmovement 2
	setobjectxy 2, 20, 7
	setvar VAR_ROBERT_STATE, 3
	return


EventScript_Gym2_RobertLeaves::
	applymovement 2, Movement_Gym2_RobertLeaves
	waitmovement 2
	return


EventScript_Gym2_Robert_FindLater::
	compare VAR_ROBERT_STATE, 3
	goto_if_eq EventScript_Gym2_Robert_FindLater_2
EventScript_Gym2_Robert_FindLater_1:
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_Gym2_Robert_FindLater_5
EventScript_Gym2_Robert_FindLater_4:
	releaseall
	return

EventScript_Gym2_Robert_FindLater_2:
	msgbox EventScript_Gym2_Robert_FindLater_Text_0
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_Robert_FindLater_7
	msgbox EventScript_Gym2_MeetRob_Text_3
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_5:
	msgbox EventScript_Gym2_Robert_FindLater_Text_1
	goto EventScript_Gym2_Robert_FindLater_4

EventScript_Gym2_Robert_FindLater_7:
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_Robert_FindLater_10
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_10:
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_Robert_FindLater_1


Movement_Gym2_Robert_Approaches:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Gym2_RobertMoves:
	walk_right
	walk_right
	walk_up
	face_down
	step_end

Movement_Gym2_RobertLeaves:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Gym2_Sign_Text_0:
	.string "Coral Gym: Can you handle the powerful\n"
	.string "torrent of the sea$"

EventScript_Gym2_MeetRob_Text_0:
	.string "You made it!$"

EventScript_Gym2_MeetRob_Text_1:
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym2_MeetRob_Text_2:
	.string "Are you ready to go again?$"

EventScript_Gym2_MeetRob_Text_3:
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym2_MeetRob_Text_4:
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym2_RobertBeaten_Text_0:
	.string "Wow you're incredible, here take this!$"

EventScript_Gym2_RobertBeaten_Text_1:
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym2_RobertBeaten_Text_2:
	.string "Anyway I'll catch you later!$"

EventScript_Gym2_Robert_FindLater_Text_0:
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym2_Robert_FindLater_Text_1:
	.string "I'll train some more and beat you by the\n"
	.string "Hemlock gym.$"

Jericho_Intro::
	.string "Boo!$"

Jericho_Outro::
	.string "Gotta go fast$"

Jericho_PostBattle::
	.string "Gotta keep running, gotta keep fast$"
