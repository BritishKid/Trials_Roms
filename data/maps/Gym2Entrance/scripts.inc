Gym2Entrance_MapScripts::
	.byte 0


Gym2Entrance_JerichoBattle::
# 5 "data/maps/Gym2Entrance/scripts.pory"
	trainerbattle_single GYM2ENTRANCE_JERICHO, Jericho_Intro, Jericho_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Gym2Entrance/scripts.pory"
	msgbox Jericho_PostBattle, MSGBOX_AUTOCLOSE
	end


Gym2_Sign::
# 11 "data/maps/Gym2Entrance/scripts.pory"
	lockall
# 12 "data/maps/Gym2Entrance/scripts.pory"
	msgbox Gym2_Sign_Text_0
# 13 "data/maps/Gym2Entrance/scripts.pory"
	lockall
	return


EventScript_Gym2_MeetRob::
# 17 "data/maps/Gym2Entrance/scripts.pory"
	lockall
# 18 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_0
# 19 "data/maps/Gym2Entrance/scripts.pory"
	removeobject 2
# 20 "data/maps/Gym2Entrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_Robert_ExclamationMark
# 21 "data/maps/Gym2Entrance/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 22 "data/maps/Gym2Entrance/scripts.pory"
	addobject 2
# 23 "data/maps/Gym2Entrance/scripts.pory"
	setobjectxy 2, 18, 13
# 24 "data/maps/Gym2Entrance/scripts.pory"
	applymovement 2, Movement_Gym2_Robert_Approaches
# 25 "data/maps/Gym2Entrance/scripts.pory"
	waitmovement 2
# 26 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_1
# 27 "data/maps/Gym2Entrance/scripts.pory"
	clearflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
# 28 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_MeetRob_2
# 38 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_4
# 39 "data/maps/Gym2Entrance/scripts.pory"
	call EventScript_Gym2_RobertMoves
EventScript_Gym2_MeetRob_1:
# 41 "data/maps/Gym2Entrance/scripts.pory"
	releaseall
	return

EventScript_Gym2_MeetRob_2:
# 29 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
# 30 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_MeetRob_5
# 34 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_3
# 35 "data/maps/Gym2Entrance/scripts.pory"
	call EventScript_Gym2_RobertMoves
	goto EventScript_Gym2_MeetRob_1

EventScript_Gym2_MeetRob_5:
# 31 "data/maps/Gym2Entrance/scripts.pory"
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_MeetRob_1


EventScript_Gym2_RobertBeaten::
# 45 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_0
# 46 "data/maps/Gym2Entrance/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 47 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_1
# 48 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_Gym2_RobertBeaten_2
EventScript_Gym2_RobertBeaten_1:
# 52 "data/maps/Gym2Entrance/scripts.pory"
	setvar VAR_ROBERT_STATE, 4
# 53 "data/maps/Gym2Entrance/scripts.pory"
	setflag FLAG_HIDE_SECOND_ENCOUNTER_ROB
# 54 "data/maps/Gym2Entrance/scripts.pory"
	releaseall
	return

EventScript_Gym2_RobertBeaten_2:
# 49 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_RobertBeaten_Text_2
# 50 "data/maps/Gym2Entrance/scripts.pory"
	call EventScript_Gym2_RobertLeaves
	goto EventScript_Gym2_RobertBeaten_1


EventScript_Gym2_RobertMoves::
# 58 "data/maps/Gym2Entrance/scripts.pory"
	applymovement 2, Movement_Gym2_RobertMoves
# 59 "data/maps/Gym2Entrance/scripts.pory"
	waitmovement 2
# 60 "data/maps/Gym2Entrance/scripts.pory"
	setobjectxy 2, 20, 7
# 61 "data/maps/Gym2Entrance/scripts.pory"
	setvar VAR_ROBERT_STATE, 3
	return


EventScript_Gym2_RobertLeaves::
# 65 "data/maps/Gym2Entrance/scripts.pory"
	applymovement 2, Movement_Gym2_RobertLeaves
# 66 "data/maps/Gym2Entrance/scripts.pory"
	waitmovement 2
	return


EventScript_Gym2_Robert_FindLater::
# 70 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 3
	goto_if_eq EventScript_Gym2_Robert_FindLater_2
EventScript_Gym2_Robert_FindLater_1:
# 81 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_Gym2_Robert_FindLater_5
EventScript_Gym2_Robert_FindLater_4:
# 84 "data/maps/Gym2Entrance/scripts.pory"
	releaseall
	return

EventScript_Gym2_Robert_FindLater_2:
# 71 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_Robert_FindLater_Text_0
# 72 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 30
	goto_if_ge EventScript_Gym2_Robert_FindLater_7
# 78 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_3
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_5:
# 82 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_Robert_FindLater_Text_1
	goto EventScript_Gym2_Robert_FindLater_4

EventScript_Gym2_Robert_FindLater_7:
# 73 "data/maps/Gym2Entrance/scripts.pory"
	msgbox EventScript_Gym2_MeetRob_Text_2, MSGBOX_YESNO
# 74 "data/maps/Gym2Entrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym2_Robert_FindLater_10
	goto EventScript_Gym2_Robert_FindLater_1

EventScript_Gym2_Robert_FindLater_10:
# 75 "data/maps/Gym2Entrance/scripts.pory"
	trainerbattle_single TRAINER_SECOND_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym2_Robert_FindLater_1


# 102 "data/maps/Gym2Entrance/scripts.pory"
Movement_Gym2_Robert_Approaches:
# 103 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
# 104 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
# 105 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
# 106 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
# 107 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
	step_end

# 110 "data/maps/Gym2Entrance/scripts.pory"
Movement_Gym2_RobertMoves:
# 111 "data/maps/Gym2Entrance/scripts.pory"
	walk_right
# 112 "data/maps/Gym2Entrance/scripts.pory"
	walk_right
# 113 "data/maps/Gym2Entrance/scripts.pory"
	walk_up
# 114 "data/maps/Gym2Entrance/scripts.pory"
	face_down
	step_end

# 117 "data/maps/Gym2Entrance/scripts.pory"
Movement_Gym2_RobertLeaves:
# 118 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
# 119 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
# 120 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
# 121 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
# 122 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
# 123 "data/maps/Gym2Entrance/scripts.pory"
	walk_down
	step_end

Gym2_Sign_Text_0:
# 12 "data/maps/Gym2Entrance/scripts.pory"
	.string "Coral Gym: Can you handle the powerful\n"
	.string "torrent of the sea$"

EventScript_Gym2_MeetRob_Text_0:
# 18 "data/maps/Gym2Entrance/scripts.pory"
	.string "You made it!$"

EventScript_Gym2_MeetRob_Text_1:
# 26 "data/maps/Gym2Entrance/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym2_MeetRob_Text_2:
# 29 "data/maps/Gym2Entrance/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym2_MeetRob_Text_3:
# 34 "data/maps/Gym2Entrance/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym2_MeetRob_Text_4:
# 38 "data/maps/Gym2Entrance/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym2_RobertBeaten_Text_0:
# 45 "data/maps/Gym2Entrance/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym2_RobertBeaten_Text_1:
# 47 "data/maps/Gym2Entrance/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym2_RobertBeaten_Text_2:
# 49 "data/maps/Gym2Entrance/scripts.pory"
	.string "Anyway I'll catch you later!$"

EventScript_Gym2_Robert_FindLater_Text_0:
# 71 "data/maps/Gym2Entrance/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym2_Robert_FindLater_Text_1:
# 82 "data/maps/Gym2Entrance/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "Hemlock gym.$"

Jericho_Intro::
# 89 "data/maps/Gym2Entrance/scripts.pory"
	.string "Boo!$"

Jericho_Outro::
# 93 "data/maps/Gym2Entrance/scripts.pory"
	.string "Gotta go fast$"

Jericho_PostBattle::
# 97 "data/maps/Gym2Entrance/scripts.pory"
	.string "Gotta keep running, gotta keep fast$"
