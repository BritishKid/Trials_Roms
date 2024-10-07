GranitePeak_SchoolHall_MapScripts::
# 2 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GranitePeak_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GranitePeak_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	map_script_2 VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge
# 4 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	map_script_2 VAR_SCHOOL_TEAM_RESET, 5, GranitePeak_BattleDomeLobby_EventScript_LostChallenge
	.2byte 0


GranitePeak_BattleDomeLobby_EventScript_BeatChallenge::
# 9 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 10 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 11 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 0
# 12 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0
# 14 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TEAM_RESET, 0
# 21 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1:
# 51 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4:
# 70 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	end

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2:
# 23 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8
# 26 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9
# 29 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10
# 32 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11
# 36 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 10000
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7:
# 38 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1
# 39 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmessage
# 40 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	multichoice 21, 6, MULTI_NATURE_MINT_SELECTION, TRUE
# 41 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	switch VAR_RESULT
# 42 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 0, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_25
# 43 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_26
# 44 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 2, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_27
# 45 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 3, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_28
# 46 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 4, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_29
# 47 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 5, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_30
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5:
# 52 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setflag FLAG_TRAINER_TOURNAMENT_WON
# 53 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_2
# 54 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 55 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_TOURNAMENT
# 56 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	questmenu QUEST_MENU_COMPLETE_QUEST, QUEST_SCHOOL_TOURNAMENT
# 57 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 7500
# 58 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1
# 59 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmessage
# 60 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	multichoice 21, 6, MULTI_NATURE_MINT_SELECTION, TRUE
# 61 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	switch VAR_RESULT
# 62 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 0, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_18
# 63 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_19
# 64 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 2, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_20
# 65 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 3, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_21
# 66 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 4, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_22
# 67 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	case 5, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_23
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8:
# 24 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 5000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9:
# 27 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 6000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10:
# 30 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 7000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11:
# 33 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	addmoney 8000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_18:
# 62 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_AdamantMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_19:
# 63 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_BoldMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_20:
# 64 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_ModestMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_21:
# 65 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_CalmMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_22:
# 66 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_TimidMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_23:
# 67 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_JollyMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_25:
# 42 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_AdamantMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_26:
# 43 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_BoldMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_27:
# 44 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_ModestMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_28:
# 45 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_CalmMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_29:
# 46 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_TimidMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_30:
# 47 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto School_JollyMint
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1


GranitePeak_BattleDomeLobby_EventScript_LostChallenge::
# 75 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 76 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TEAM_RESET, 0
# 77 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 78 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0
# 80 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 81 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 82 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special CallFrontierUtilFunc
# 84 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	frontier_checkairshow
# 88 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special HealPlayerParty
# 103 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	end


GranitePeakEvolutionClassroomDoor::
# 108 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 109 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakEvolutionClassroomDoor_Text_0
# 110 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
# 111 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakEvolutionClassroomDoor_2
GranitePeakEvolutionClassroomDoor_1:
# 114 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakEvolutionClassroomDoor_2:
# 112 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_SCHOOL_EVOLUTION_CLASS, 5, 10
	goto GranitePeakEvolutionClassroomDoor_1


GranitePeakItemsClassroomDoor::
# 118 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 119 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakItemsClassroomDoor_Text_0
# 120 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
# 121 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakItemsClassroomDoor_2
GranitePeakItemsClassroomDoor_1:
# 124 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakItemsClassroomDoor_2:
# 122 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_SCHOOL_ITEMS_CLASS, 5, 10
	goto GranitePeakItemsClassroomDoor_1


GranitePeakMovesClassroomDoor::
# 128 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 129 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakMovesClassroomDoor_Text_0
# 130 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
# 131 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakMovesClassroomDoor_2
GranitePeakMovesClassroomDoor_1:
# 134 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakMovesClassroomDoor_2:
# 132 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_SCHOOL_MOVES, 5, 10
	goto GranitePeakMovesClassroomDoor_1


GranitePeakAbilitiesClassroomDoor::
# 138 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 139 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakAbilitiesClassroomDoor_Text_0
# 140 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeakEvolutionClassroomDoor_Text_1, MSGBOX_YESNO
# 141 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakAbilitiesClassroomDoor_2
GranitePeakAbilitiesClassroomDoor_1:
# 144 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakAbilitiesClassroomDoor_2:
# 142 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_SCHOOL_ABILITIES_CLASS, 5, 10
	goto GranitePeakAbilitiesClassroomDoor_1


Petalburgcity_School_Enter_Right::
# 148 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 149 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox Petalburgcity_School_Enter_Right_Text_0
# 150 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MovePlayerLeftOnce
# 151 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 152 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call PetaburgCity_School_Mat_TrophyCase
# 153 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


Petalburgcity_School_Enter_Left::
# 157 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 158 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox Petalburgcity_School_Enter_Right_Text_0
# 159 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call PetaburgCity_School_Mat_TrophyCase
# 160 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


PetaburgCity_School_Mat_TrophyCase::
# 164 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MovePlayerToMat
# 165 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 166 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	applymovement 1, Movement_MatFaceDown
# 167 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmovement 1
# 168 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_0
# 169 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_1
# 170 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	applymovement 1, Movement_MatExclamation
# 171 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmovement 1
# 172 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox PetaburgCity_School_Mat_TrophyCase_Text_2
# 173 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	trainerbattle_single TRAINER_SCHOOLHALL_MAT1, Mat_Intro, Mat_Outro, Mat_Beaten
	return


Mat_Beaten::
# 177 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox Mat_Beaten_Text_0
# 178 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox Mat_Beaten_Text_1
# 179 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox Mat_Beaten_Text_2
# 180 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	applymovement 1, Movement_MatIntoMoveRoom
# 181 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitmovement 1
# 182 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	removeobject 1
# 183 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MAT_SCHOOL_HALL
# 184 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MOVES_ROOM
# 185 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_MAT_STATE, 1
# 186 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	clearflag FLAG_HIDE_MAT_MEGA_MANSION
# 187 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SCHOOL_TOURNAMENT
# 188 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call Increase_Trainers_Beaten
	return


GranitePeak_School_TrophyCase::
# 192 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 193 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TrophyCase_Text_0
# 194 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TrophyCase_Text_1
# 195 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TrophyCase_Text_2
# 197 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeak_School_TournamentTeacher_Hallway::
# 201 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lock
# 202 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	faceplayer
# 203 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_ABILITY_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_5
GranitePeak_School_TournamentTeacher_Hallway_3:
# 226 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_4
GranitePeak_School_TournamentTeacher_Hallway_1:
# 228 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	release
	end

GranitePeak_School_TournamentTeacher_Hallway_2:
# 205 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_0
# 206 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_1, MSGBOX_YESNO
# 207 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_TournamentTeacher_Hallway_11
# 222 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_3
	goto GranitePeak_School_TournamentTeacher_Hallway_1

GranitePeak_School_TournamentTeacher_Hallway_4:
# 204 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_MOVE_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_8
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_5:
# 203 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_EVOLUTION_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_4
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_8:
# 204 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_ITEM_PATCH_EARNT, GranitePeak_School_TournamentTeacher_Hallway_2
	goto GranitePeak_School_TournamentTeacher_Hallway_3

GranitePeak_School_TournamentTeacher_Hallway_11:
# 209 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	getpartysize
# 210 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	compare VAR_RESULT, DOME_BATTLE_PARTY_SIZE
	goto_if_le GranitePeak_School_TournamentTeacher_Hallway_14
# 217 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox GranitePeak_School_TournamentTeacher_Hallway_Text_2
	goto GranitePeak_School_TournamentTeacher_Hallway_1

GranitePeak_School_TournamentTeacher_Hallway_14:
# 211 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 212 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 213 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto GranitePeak_BattleDomeLobby_EventScript_AttendantWelcome
	goto GranitePeak_School_TournamentTeacher_Hallway_1


GranitePeak_BattleDomeLobby_EventScript_AttendantWelcome::
# 234 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge
	return


GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge::
# 240 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_2
# 243 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_3
# 246 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_4
# 249 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_5
# 253 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar FRONTIER_MAX_LEVEL_50, 50
GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_1:
# 257 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 258 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_LVL_MODE
# 259 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8006, FRONTIER_LVL_50
# 260 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special CallFrontierUtilFunc
# 261 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call GranitePeak_BattleDomeLobby_EventScript_SaveBeforeChallenge
	return

GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_2:
# 241 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar FRONTIER_MAX_LEVEL_50, 22
	goto GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_1

GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_3:
# 244 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar FRONTIER_MAX_LEVEL_50, 28
	goto GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_1

GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_4:
# 247 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar FRONTIER_MAX_LEVEL_50, 35
	goto GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_1

GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_5:
# 250 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar FRONTIER_MAX_LEVEL_50, 40
	goto GranitePeak_BattleDomeLobby_EventScript_TryEnterChallenge_1


GranitePeak_BattleDomeLobby_EventScript_SaveBeforeChallenge::
# 265 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 0
# 267 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_INIT
# 268 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 270 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	closemessage
# 273 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	delay 2
# 274 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 255
# 276 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_INIT_TRAINERS
# 277 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 279 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	call GranitePeak_BattleDomeLobby_EventScript_EnterChallenge
	return


GranitePeak_BattleDomeLobby_EventScript_EnterChallenge::
# 285 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SET_TRAINERS
# 286 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 289 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOURNAMENT_WAITING_ROOM, 6, 8
# 290 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 0
# 291 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	waitstate
	end


School_AdamantMint::
# 296 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 297 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


School_BoldMint::
# 302 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 303 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


School_ModestMint::
# 308 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 309 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


School_CalmMint::
# 314 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_CALM_MINT
# 315 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


School_TimidMint::
# 320 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_TIMID_MINT
# 321 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


School_JollyMint::
# 326 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 327 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return


MatEasterEgg::
# 332 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	lockall
# 333 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_set FLAG_MAT_ID, MatEasterEgg_2
MatEasterEgg_1:
# 336 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	goto_if_unset FLAG_MAT_ID, MatEasterEgg_5
MatEasterEgg_4:
# 340 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	releaseall
	return

MatEasterEgg_2:
# 334 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox MatEasterEgg_Text_0
	goto MatEasterEgg_1

MatEasterEgg_5:
# 337 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	msgbox MatEasterEgg_Text_1
# 338 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	setflag FLAG_MAT_ID
	goto MatEasterEgg_4


# 345 "data/maps/GranitePeak_SchoolHall/scripts.pory"
Movement_MatExclamation:
# 346 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 349 "data/maps/GranitePeak_SchoolHall/scripts.pory"
Movement_MatIntoMoveRoom:
# 350 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
# 351 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
# 352 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
# 353 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
# 354 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
# 355 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	face_up
	step_end

# 358 "data/maps/GranitePeak_SchoolHall/scripts.pory"
Movement_MovePlayerLeftOnce:
# 359 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_left
	step_end

# 362 "data/maps/GranitePeak_SchoolHall/scripts.pory"
Movement_MovePlayerToMat:
# 363 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	walk_up
	step_end

# 375 "data/maps/GranitePeak_SchoolHall/scripts.pory"
Movement_MatFaceDown:
# 376 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	face_down
	step_end

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0:
# 12 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Congratulations you managed to beat\n"
	.string "the others! It was incredible to watch.$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1:
# 38 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Select your prize!$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_2:
# 53 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "For you success in the tournament take\n"
	.string "this trophy!$"

GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0:
# 78 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Nice try better luck next time$"

GranitePeakEvolutionClassroomDoor_Text_0:
# 109 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Evolution Class$"

GranitePeakEvolutionClassroomDoor_Text_1:
# 110 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Do you want to enter?$"

GranitePeakItemsClassroomDoor_Text_0:
# 119 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Items Class$"

GranitePeakMovesClassroomDoor_Text_0:
# 129 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Moves Class$"

GranitePeakAbilitiesClassroomDoor_Text_0:
# 139 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Abilities Class$"

Petalburgcity_School_Enter_Right_Text_0:
# 149 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "So many amazing trainer came from this\n"
	.string "school, just look at all the names that\l"
	.string "have won the school Pokémon\l"
	.string "tournament.$"

PetaburgCity_School_Mat_TrophyCase_Text_0:
# 168 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "One day my name will be on there!$"

PetaburgCity_School_Mat_TrophyCase_Text_1:
# 169 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Hi I'm Mat and I'm going to become the\n"
	.string "very best!$"

PetaburgCity_School_Mat_TrophyCase_Text_2:
# 172 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Oh you're a trainer. Let me show you how\n"
	.string "good the future school champion will be.$"

Mat_Beaten_Text_0:
# 177 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "I still have a lot to learn but this\n"
	.string "school is meant to be the best place to\l"
	.string "learn.$"

Mat_Beaten_Text_1:
# 178 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "If I complete all four classes and get\n"
	.string "the four patches I can take part and\l"
	.string "win the school tournament.$"

Mat_Beaten_Text_2:
# 179 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Let's get going!$"

GranitePeak_School_TrophyCase_Text_0:
# 193 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "It's the Petalburg School Trainer\n"
	.string "Trophy.$"

GranitePeak_School_TrophyCase_Text_1:
# 194 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "It's got all the previous winners\n"
	.string "etched into it...$"

GranitePeak_School_TrophyCase_Text_2:
# 195 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Pulsar, Jordan$"

GranitePeak_School_TournamentTeacher_Hallway_Text_0:
# 205 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Oh fantastic you've completed all the\n"
	.string "classes and take part in the\l"
	.string "tournament$"

GranitePeak_School_TournamentTeacher_Hallway_Text_1:
# 206 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Would you like to take part in the\n"
	.string "tournament?$"

GranitePeak_School_TournamentTeacher_Hallway_Text_2:
# 217 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "You can't enter with more than 3\n"
	.string "Pokémon$"

GranitePeak_School_TournamentTeacher_Hallway_Text_3:
# 222 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Maybe another time then$"

GranitePeak_School_TournamentTeacher_Hallway_Text_4:
# 226 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "If you would like to join the school\n"
	.string "tournament you will need to complete\l"
	.string "all the classes first$"

MatEasterEgg_Text_0:
# 334 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "It's empty$"

MatEasterEgg_Text_1:
# 337 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "You find someones student ID in the\n"
	.string "pot:\n"
	.string "It belongs to Mat$"

Mat_Intro::
# 367 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "I won't hold out on you!$"

Mat_Outro::
# 371 "data/maps/GranitePeak_SchoolHall/scripts.pory"
	.string "Okay I guess I'm not ready$"
