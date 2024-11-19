GranitePeakTown_SchoolHall_MapScripts::
	.byte 0


GranitePeak_EventScript_EvolutionClassroomDoor::
# 4 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 5 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_EvolutionClassroomDoor_Text_0, MSGBOX_YESNO
# 6 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_EvolutionClassroomDoor_2
GranitePeak_EventScript_EvolutionClassroomDoor_1:
# 9 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_EvolutionClassroomDoor_2:
	goto GranitePeak_EventScript_EvolutionClassroomDoor_1


GranitePeak_EventScript_ItemClassroomDoor::
# 13 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 14 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_ItemClassroomDoor_Text_0, MSGBOX_YESNO
# 15 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_ItemClassroomDoor_2
GranitePeak_EventScript_ItemClassroomDoor_1:
# 18 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_ItemClassroomDoor_2:
	goto GranitePeak_EventScript_ItemClassroomDoor_1


GranitePeak_EventScript_MovesClassroomDoor::
# 22 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 23 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_MovesClassroomDoor_Text_0, MSGBOX_YESNO
# 24 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_MovesClassroomDoor_2
GranitePeak_EventScript_MovesClassroomDoor_1:
# 27 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_MovesClassroomDoor_2:
	goto GranitePeak_EventScript_MovesClassroomDoor_1


GranitePeak_EventScript_AbilitiesClassroomDoor::
# 31 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 32 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_AbilitiesClassroomDoor_Text_0, MSGBOX_YESNO
# 33 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_AbilitiesClassroomDoor_2
GranitePeak_EventScript_AbilitiesClassroomDoor_1:
# 36 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_AbilitiesClassroomDoor_2:
	goto GranitePeak_EventScript_AbilitiesClassroomDoor_1


GranitePeakTown_School_EventScript_EnterRight::
# 40 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 41 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_EventScript_EnterRight_Text_0
# 42 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_MovePlayerLeftOnce
# 43 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakSchool_Mat_TrophyCase
# 45 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakTown_School_EventScript_EnterLeft::
# 49 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 50 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_EventScript_EnterRight_Text_0
# 51 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakSchool_Mat_TrophyCase
# 52 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakSchool_Mat_TrophyCase::
# 56 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_MovePlayerToMat
# 57 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 58 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatFaceDown
# 59 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 60 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_0
# 61 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_1
# 62 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatExclamation
# 63 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 64 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_2
# 65 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	trainerbattle_single TRAINERSCHOOLHALL_MAT1, SchoolHall_Mat_Intro, SchoolHall_Mat_Outro, SchoolHall_Mat_Beaten
	return


SchoolHall_Mat_Beaten::
# 69 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_0
# 70 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_1
# 71 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_2
# 72 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatMovesRooms
# 73 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 75 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	removeobject 1
# 76 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MAT_SCHOOL_HALL
# 77 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MOVES_ROOM
# 78 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_MAT_STATE, 1
# 79 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	clearflag FLAG_HIDE_MAT_MEGA_MANSION
# 81 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call Increase_Trainers_Beaten
	return


GranitePeakTown_School_TrophyCase::
# 85 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 86 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_0
# 87 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_1
# 88 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_2
# 90 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakTown_School_MatLostID::
# 94 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 95 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_set FLAG_MAT_ID, GranitePeakTown_School_MatLostID_2
GranitePeakTown_School_MatLostID_1:
# 98 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_MAT_ID, GranitePeakTown_School_MatLostID_5
GranitePeakTown_School_MatLostID_4:
# 102 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakTown_School_MatLostID_2:
# 96 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_MatLostID_Text_0
	goto GranitePeakTown_School_MatLostID_1

GranitePeakTown_School_MatLostID_5:
# 99 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_MatLostID_Text_1
# 100 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_MAT_ID
	goto GranitePeakTown_School_MatLostID_4


# 108 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MovePlayerLeftOnce:
# 109 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
	step_end

# 112 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MovePlayerToMat:
# 113 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_up
	step_end

# 116 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatFaceDown:
# 117 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	face_down
	step_end

# 120 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatExclamation:
# 121 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 124 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatMovesRooms:
# 125 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 126 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 127 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 128 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 129 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 130 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	face_up
	step_end

GranitePeak_EventScript_EvolutionClassroomDoor_Text_0:
# 5 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Evolution Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_ItemClassroomDoor_Text_0:
# 14 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Item Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_MovesClassroomDoor_Text_0:
# 23 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Moves Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_AbilitiesClassroomDoor_Text_0:
# 32 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Abilities Class\n"
	.string "Do you want to enter?$"

GranitePeakTown_School_EventScript_EnterRight_Text_0:
# 41 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "So many amazing trainers came from this\n"
	.string "school, just look at all the names that\l"
	.string "have won the school Pokémon\l"
	.string "tournament.$"

GranitePeakSchool_Mat_TrophyCase_Text_0:
# 60 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "One day my name will be on there!$"

GranitePeakSchool_Mat_TrophyCase_Text_1:
# 61 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Hi, I'm Mat and I'm going to be the very\n"
	.string "best!$"

GranitePeakSchool_Mat_TrophyCase_Text_2:
# 64 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Oh you're a trainer. Let me show you how\n"
	.string "good the future school champion is!$"

SchoolHall_Mat_Beaten_Text_0:
# 69 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "I still have a lot to learn a but this\n"
	.string "school is the best place for me to be.$"

SchoolHall_Mat_Beaten_Text_1:
# 70 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "If I complete all four classes and get\n"
	.string "their patches I can take part and win\l"
	.string "the school tournament.$"

SchoolHall_Mat_Beaten_Text_2:
# 71 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Let's get going!$"

GranitePeakTown_School_TrophyCase_Text_0:
# 86 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's the Granite Peak School Trainer\n"
	.string "Trophy.$"

GranitePeakTown_School_TrophyCase_Text_1:
# 87 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's got all the previous winners\n"
	.string "etched into it...$"

GranitePeakTown_School_TrophyCase_Text_2:
# 88 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Jordan$"

GranitePeakTown_School_MatLostID_Text_0:
# 96 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's empty$"

GranitePeakTown_School_MatLostID_Text_1:
# 99 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You find someones student ID in the\n"
	.string "pot:\n"
	.string "It belongs to Mat$"

SchoolHall_Mat_Intro::
# 135 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "I won't hold back!$"

SchoolHall_Mat_Outro::
# 139 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Okay I guess I'm not ready yet.$"
