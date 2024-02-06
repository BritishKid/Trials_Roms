GranitePeak_SchoolHall_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GranitePeak_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GranitePeak_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
	map_script_2 VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge
	map_script_2 VAR_SCHOOL_TEAM_RESET, 5, GranitePeak_BattleDomeLobby_EventScript_LostChallenge
	.2byte 0


GranitePeak_BattleDomeLobby_EventScript_BeatChallenge::
	lockall
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	setvar VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 0
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0
	setvar VAR_SCHOOL_TEAM_RESET, 0
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1:
	goto_if_unset FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4:
	releaseall
	end

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2:
	addmoney 5000
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1
	waitmessage
	multichoice 21, 6, MULTI_NATURE_MINT_SELECTION, TRUE
	switch VAR_RESULT
	case 0, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8
	case 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9
	case 2, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10
	case 3, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11
	case 4, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_12
	case 5, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_13
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5:
	setflag FLAG_TRAINER_TOURNAMENT_WON
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_2
	givedecoration DECOR_SILVER_SHIELD
	addmoney 7500
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1
	waitmessage
	multichoice 21, 6, MULTI_NATURE_MINT_SELECTION, TRUE
	switch VAR_RESULT
	case 0, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_15
	case 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_16
	case 2, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_17
	case 3, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_18
	case 4, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_19
	case 5, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_20
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8:
	goto School_AdamantMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9:
	goto School_BoldMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10:
	goto School_ModestMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11:
	goto School_CalmMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_12:
	goto School_TimidMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_13:
	goto School_JollyMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_15:
	goto School_AdamantMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_16:
	goto School_BoldMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_17:
	goto School_ModestMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_18:
	goto School_CalmMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_19:
	goto School_TimidMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_20:
	goto School_JollyMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4


GranitePeak_BattleDomeLobby_EventScript_LostChallenge::
	lockall
	setvar VAR_SCHOOL_TEAM_RESET, 0
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	msgbox GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
	special CallFrontierUtilFunc
	frontier_checkairshow
	special HealPlayerParty
	releaseall
	end


GranitePeakEvolutionClassroomDoor::
	lockall
	msgbox GranitePeakEvolutionClassroomDoor_Text_0
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakEvolutionClassroomDoor_2
GranitePeakEvolutionClassroomDoor_1:
	releaseall
	return

GranitePeakEvolutionClassroomDoor_2:
	warp MAP_GRANITE_PEAK_SCHOOL_EVOLUTION_CLASS, 5, 10
	goto GranitePeakEvolutionClassroomDoor_1


GranitePeakItemsClassroomDoor::
	lockall
	msgbox GranitePeakItemsClassroomDoor_Text_0
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakItemsClassroomDoor_2
GranitePeakItemsClassroomDoor_1:
	releaseall
	return

GranitePeakItemsClassroomDoor_2:
	warp MAP_GRANITE_PEAK_SCHOOL_ITEMS_CLASS, 5, 10
	goto GranitePeakItemsClassroomDoor_1


GranitePeakMovesClassroomDoor::
	lockall
	msgbox GranitePeakMovesClassroomDoor_Text_0
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakMovesClassroomDoor_2
GranitePeakMovesClassroomDoor_1:
	releaseall
	return

GranitePeakMovesClassroomDoor_2:
	warp MAP_GRANITE_PEAK_SCHOOL_MOVES, 5, 10
	goto GranitePeakMovesClassroomDoor_1


GranitePeakAbilitiesClassroomDoor::
	lockall
	msgbox GranitePeakAbilitiesClassroomDoor_Text_0
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakAbilitiesClassroomDoor_2
GranitePeakAbilitiesClassroomDoor_1:
	releaseall
	return

GranitePeakAbilitiesClassroomDoor_2:
	warp MAP_GRANITE_PEAK_SCHOOL_ABILITIES_CLASS, 5, 10
	goto GranitePeakAbilitiesClassroomDoor_1


Petalburgcity_School_Enter_Right::
	lockall
	msgbox Petalburgcity_School_Enter_Right_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MovePlayerLeftOnce
	waitmovement OBJ_EVENT_ID_PLAYER
	call PetaburgCity_School_Mat_TrophyCase
	releaseall
	return


Petalburgcity_School_Enter_Left::
	lockall
	msgbox Petalburgcity_School_Enter_Right_Text_0
	call PetaburgCity_School_Mat_TrophyCase
	releaseall
	return


PetaburgCity_School_Mat_TrophyCase::
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MovePlayerToMat
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 1, Movement_MatFaceDown
	waitmovement 1
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_0
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_1
	applymovement 1, Movement_MatExclamation
	waitmovement 1
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_2
	trainerbattle_single TRAINER_SCHOOLHALL_MAT1, Mat_Intro, Mat_Outro, Mat_Beaten
	return


Mat_Beaten::
	msgbox Mat_Beaten_Text_0
	msgbox Mat_Beaten_Text_1
	msgbox Mat_Beaten_Text_2
	applymovement 1, Movement_MatIntoMoveRoom
	waitmovement 1
	removeobject 1
	setflag FLAG_HIDE_MAT_SCHOOL_HALL
	setflag FLAG_HIDE_MOVES_ROOM
	setvar VAR_ENTERED_SCHOOL, 1
	return


GranitePeak_School_TrophyCase::
	lockall
	msgbox GranitePeak_School_TrophyCase_Text_0
	msgbox GranitePeak_School_TrophyCase_Text_1
	msgbox GranitePeak_School_TrophyCase_Text_2
	releaseall
	return


GranitePeak_School_TournamentTeacher_Hallway::
	lock
	faceplayer
	goto_if_set FLAG_ABILITY_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_5
GranitePeak_School_TournamentTeacher_Hallway_3:
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_4
GranitePeak_School_TournamentTeacher_Hallway_1:
	release
	end

GranitePeak_School_TournamentTeacher_Hallway_2:
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_0
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_TournamentTeacher_Hallway_11
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_3
	goto GranitePeak_School_TournamentTeacher_Hallway_1

GranitePeak_School_TournamentTeacher_Hallway_4:
	goto_if_set FLAG_MOVE_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_8
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_5:
	goto_if_set FLAG_EVOLUTION_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_4
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_8:
	goto_if_set FLAG_ITEM_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_2
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_11:
	getpartysize
	compare VAR_RESULT, DOME_BATTLE_PARTY_SIZE
	goto_if_le GranitePeak_School_TournamentTeacher_Hallway_14
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_2
	goto GranitePeak_School_TournamentTeacher_Hallway_1

GranitePeak_School_TournamentTeacher_Hallway_14:
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
	goto GranitePeak_BattleDomeLobby_EventScript_AttendantWelcome
	goto GranitePeak_School_TournamentTeacher_Hallway_1


GranitePeak_BattleDomeLobby_EventScript_AttendantWelcome::
	call GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge
	return


GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge::
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
	setvar VAR_0x8005, FRONTIER_DATA_LVL_MODE
	setvar VAR_0x8006, FRONTIER_LVL_50
	special CallFrontierUtilFunc
	call GranitePeak_BattleDomeLobby_EventScript_SaveBeforeChallenge
	return


GranitePeak_BattleDomeLobby_EventScript_SaveBeforeChallenge::
	setvar VAR_TEMP_0, 0
	dome_init
	closemessage
	delay 2
	setvar VAR_TEMP_0, 255
	dome_inittrainers
	call GranitePeak_BattleDomeLobby_EventScript_EnterChallenge
	return


GranitePeak_BattleDomeLobby_EventScript_EnterChallenge::
	dome_settrainers
	warp MAP_GRANITE_PEAK_TOURNAMENT_WAITING_ROOM, 6, 8
	setvar VAR_TEMP_0, 0
	waitstate
	end


School_AdamantMint::
	giveitem ITEM_ADAMANT_MINT
	releaseall
	return


School_BoldMint::
	giveitem ITEM_BOLD_MINT
	releaseall
	return


School_ModestMint::
	giveitem ITEM_MODEST_MINT
	releaseall
	return


School_CalmMint::
	giveitem ITEM_CALM_MINT
	releaseall
	return


School_TimidMint::
	giveitem ITEM_TIMID_MINT
	releaseall
	return


School_JollyMint::
	giveitem ITEM_JOLLY_MINT
	releaseall
	return


Movement_MatExclamation:
	emote_exclamation_mark
	step_end

Movement_MatIntoMoveRoom:
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_MovePlayerLeftOnce:
	walk_left
	step_end

Movement_MovePlayerToMat:
	walk_up
	step_end

Movement_MatFaceDown:
	face_down
	step_end

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0:
	.string "Congratulations you managed to beat\n"
	.string "the others! It was incredible to watch.$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1:
	.string "Select your prize!$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_2:
	.string "For you success in the tournament take\n"
	.string "this trophy!$"

GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0:
	.string "Nice try better luck next time$"

GranitePeakEvolutionClassroomDoor_Text_0:
	.string "Evolution Class$"

GranitePeakEvolutionClassroomDoor_Text_1:
	.string "Do you want to enter?$"

GranitePeakItemsClassroomDoor_Text_0:
	.string "Items Class$"

GranitePeakMovesClassroomDoor_Text_0:
	.string "Moves Class$"

GranitePeakAbilitiesClassroomDoor_Text_0:
	.string "Abilities Class$"

Petalburgcity_School_Enter_Right_Text_0:
	.string "So many amazing trainer came from this\n"
	.string "school, just look at all the names that\l"
	.string "have won the school pokemon\l"
	.string "tournament.$"

PetaburgCity_School_Mat_TrophyCase_Text_0:
	.string "One day my name will be on there!$"

PetaburgCity_School_Mat_TrophyCase_Text_1:
	.string "Hi I'm Mat and I'm going to become the\n"
	.string "very best!$"

PetaburgCity_School_Mat_TrophyCase_Text_2:
	.string "Oh you're a trainer. Let me show you how\n"
	.string "good the future school champion will be.$"

Mat_Beaten_Text_0:
	.string "I still have a lot to learn but this\n"
	.string "school is meant to be the best place to\l"
	.string "learn.$"

Mat_Beaten_Text_1:
	.string "If I complete all four classes and get\n"
	.string "the four patches I can take part and\l"
	.string "win the school tournament.$"

Mat_Beaten_Text_2:
	.string "Let's get going!$"

GranitePeak_School_TrophyCase_Text_0:
	.string "It's the Petalburg School Trainer\n"
	.string "Trophy.$"

GranitePeak_School_TrophyCase_Text_1:
	.string "It's got all the previous winners\n"
	.string "etched into it...$"

GranitePeak_School_TrophyCase_Text_2:
	.string "Pulsar$"

GranitePeak_School_TournamentTeacher_Hallway_Text_0:
	.string "Oh fantastic you've completed all the\n"
	.string "classes and take part in the\l"
	.string "tournament$"

GranitePeak_School_TournamentTeacher_Hallway_Text_1:
	.string "Would you like to take part in the\n"
	.string "tournament?$"

GranitePeak_School_TournamentTeacher_Hallway_Text_2:
	.string "You can't enter with more than 3\n"
	.string "Pokemon$"

GranitePeak_School_TournamentTeacher_Hallway_Text_3:
	.string "Maybe another time then$"

GranitePeak_School_TournamentTeacher_Hallway_Text_4:
	.string "If you would like to join the school\n"
	.string "tournament you will need to complete\l"
	.string "all the classes first$"

Mat_Intro::
	.string "I won't hold out on you!$"

Mat_Outro::
	.string "Okay I guess I'm not ready$"
