GranitePeakTown_SchoolHall_MapScripts::
# 2 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GranitePeakTown_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

GranitePeakTown_SchoolHall_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	map_script_2 VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 1, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge
# 4 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	map_script_2 VAR_SCHOOL_TEAM_RESET, 5, GranitePeak_BattleDomeLobby_EventScript_LostChallenge
	.2byte 0


GranitePeak_EventScript_EvolutionClassroomDoor::
# 9 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 10 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_EvolutionClassroomDoor_Text_0, MSGBOX_YESNO
# 11 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_EvolutionClassroomDoor_2
GranitePeak_EventScript_EvolutionClassroomDoor_1:
# 14 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_EvolutionClassroomDoor_2:
# 12 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_SCHOOL_EVOLUTION_ROOM, 5, 10
	goto GranitePeak_EventScript_EvolutionClassroomDoor_1


GranitePeak_EventScript_ItemClassroomDoor::
# 18 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 19 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_ItemClassroomDoor_Text_0, MSGBOX_YESNO
# 20 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_ItemClassroomDoor_2
GranitePeak_EventScript_ItemClassroomDoor_1:
# 23 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_ItemClassroomDoor_2:
# 21 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_SCHOOL_ITEMS_ROOM, 5, 10
	goto GranitePeak_EventScript_ItemClassroomDoor_1


GranitePeak_EventScript_MovesClassroomDoor::
# 27 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 28 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_MovesClassroomDoor_Text_0, MSGBOX_YESNO
# 29 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_MovesClassroomDoor_2
GranitePeak_EventScript_MovesClassroomDoor_1:
# 32 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_MovesClassroomDoor_2:
# 30 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_SCHOOL_MOVE_ROOM, 5, 10
	goto GranitePeak_EventScript_MovesClassroomDoor_1


GranitePeak_EventScript_AbilitiesClassroomDoor::
# 36 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 37 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_EventScript_AbilitiesClassroomDoor_Text_0, MSGBOX_YESNO
# 38 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EventScript_AbilitiesClassroomDoor_2
GranitePeak_EventScript_AbilitiesClassroomDoor_1:
# 41 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_AbilitiesClassroomDoor_2:
# 39 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_SCHOOL_ABILITY_ROOM, 5, 10
	goto GranitePeak_EventScript_AbilitiesClassroomDoor_1


GranitePeakTown_School_EventScript_EnterRight::
# 45 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 46 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_EventScript_EnterRight_Text_0
# 47 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_MovePlayerLeftOnce
# 48 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 49 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakSchool_Mat_TrophyCase
# 50 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakTown_School_EventScript_EnterLeft::
# 54 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 55 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_EventScript_EnterRight_Text_0
# 56 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakSchool_Mat_TrophyCase
# 57 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakSchool_Mat_TrophyCase::
# 61 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_MovePlayerToMat
# 62 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 63 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatFaceDown
# 64 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 65 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_0
# 66 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_1
# 67 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatExclamation
# 68 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 69 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakSchool_Mat_TrophyCase_Text_2
# 70 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	trainerbattle_no_intro TRAINERSCHOOLHALL_MAT1, SchoolHall_Mat_Outro
# 71 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call SchoolHall_Mat_Beaten
	return


SchoolHall_Mat_Beaten::
# 75 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_0
# 76 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_1
# 77 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox SchoolHall_Mat_Beaten_Text_2
# 78 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_MatMovesRooms
# 79 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitmovement 1
# 80 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	playse SE_DOOR
# 81 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	removeobject 1
# 82 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MAT_SCHOOL_HALL
# 83 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_HIDE_MOVES_ROOM
# 84 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_MAT_STATE, 1
# 85 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	clearflag FLAG_HIDE_MAT_CORALPORT
# 87 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call Increase_Trainers_Beaten
	return


GranitePeakTown_School_TrophyCase::
# 91 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 92 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_0
# 93 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_1
# 94 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_TrophyCase_Text_2
# 96 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


GranitePeakTown_School_MatLostID::
# 100 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 101 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_set FLAG_MAT_ID, GranitePeakTown_School_MatLostID_2
GranitePeakTown_School_MatLostID_1:
# 104 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_MAT_ID, GranitePeakTown_School_MatLostID_5
GranitePeakTown_School_MatLostID_4:
# 108 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakTown_School_MatLostID_2:
# 102 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_MatLostID_Text_0
	goto GranitePeakTown_School_MatLostID_1

GranitePeakTown_School_MatLostID_5:
# 105 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_School_MatLostID_Text_1
# 106 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_MAT_ID
	goto GranitePeakTown_School_MatLostID_4


GranitePeakTown_SchoolTournament_Teacher::
# 115 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 116 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	faceplayer
# 117 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_CAN_ACCESS_SCHOOL_TOURNAMENT, GranitePeakTown_SchoolTournament_Teacher_2
GranitePeakTown_SchoolTournament_Teacher_1:
# 149 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_set FLAG_CAN_ACCESS_SCHOOL_TOURNAMENT, GranitePeakTown_SchoolTournament_Teacher_5
GranitePeakTown_SchoolTournament_Teacher_4:
# 167 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeakTown_SchoolTournament_Teacher_2:
# 118 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_0
# 119 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	checkitem ITEM_EVOLUTION_PATCH, 1
# 120 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_8
# 125 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_2
# 126 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	checkitem ITEM_MOVES_PATCH, 1
# 127 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_14
# 132 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_4
# 133 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	checkitem ITEM_ITEMS_PATCH, 1
# 134 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_19
# 139 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_6
# 140 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	checkitem ITEM_ABILITIES_PATCH, 1
# 141 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_25
# 146 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_8
# 147 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_CAN_ACCESS_SCHOOL_TOURNAMENT
	goto GranitePeakTown_SchoolTournament_Teacher_1

GranitePeakTown_SchoolTournament_Teacher_5:
# 150 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_9, MSGBOX_YESNO
# 151 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_11
GranitePeakTown_SchoolTournament_Teacher_10:
# 154 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_SchoolTournament_Teacher_16
	goto GranitePeakTown_SchoolTournament_Teacher_4

GranitePeakTown_SchoolTournament_Teacher_8:
# 121 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_1
# 122 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	end

GranitePeakTown_SchoolTournament_Teacher_11:
# 152 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_10
	goto GranitePeakTown_SchoolTournament_Teacher_10

GranitePeakTown_SchoolTournament_Teacher_14:
# 128 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_3
# 129 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	end

GranitePeakTown_SchoolTournament_Teacher_16:
# 155 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	getpartysize
# 156 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	compare VAR_RESULT, DOME_BATTLE_PARTY_SIZE
	goto_if_le GranitePeakTown_SchoolTournament_Teacher_21
# 163 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_11
	goto GranitePeakTown_SchoolTournament_Teacher_4

GranitePeakTown_SchoolTournament_Teacher_19:
# 135 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_5
# 136 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	end

GranitePeakTown_SchoolTournament_Teacher_21:
# 158 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_FRONTIER_FACILITY, FRONTIER_FACILITY_DOME
# 159 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_FRONTIER_BATTLE_MODE, FRONTIER_MODE_SINGLES
# 160 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome
	goto GranitePeakTown_SchoolTournament_Teacher_4

GranitePeakTown_SchoolTournament_Teacher_25:
# 142 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_Teacher_Text_7
# 143 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	end


GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome::
# 172 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_2
# 174 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_3
# 176 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_4
# 178 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_5
# 181 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT_LEVEL, 50
GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_1:
# 184 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 185 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_LVL_MODE
# 186 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8006, FRONTIER_LVL_50
# 187 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special CallFrontierUtilFunc
# 188 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakTown_SchoolTournamentLobby_EventScript_SaveBeforeChallenge
	return

GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_2:
# 173 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT_LEVEL, 22
	goto GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_1

GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_3:
# 175 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT_LEVEL, 28
	goto GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_1

GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_4:
# 177 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT_LEVEL, 35
	goto GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_1

GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_5:
# 179 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TOURNAMENT_LEVEL, 40
	goto GranitePeakTown_BattleDomeLobby_EventScript_AttendantWelcome_1


GranitePeakTown_SchoolTournamentLobby_EventScript_SaveBeforeChallenge::
# 192 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 0
# 193 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_INIT
# 194 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 195 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	closemessage
# 196 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	delay 2
# 197 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 255
# 198 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_INIT_TRAINERS
# 199 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 200 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakTown_SchoolTournament_EventScript_EnterChallenge
	return


GranitePeakTown_SchoolTournament_EventScript_EnterChallenge::
# 204 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SET_TRAINERS
# 205 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special CallBattleDomeFunction
# 206 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_TOURNAMENT_WAITING_ROOM, 6, 8
# 207 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_TEMP_0, 0
# 208 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	waitstate
	end


GranitePeak_BattleDomeLobby_EventScript_BeatChallenge::
# 215 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 216 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 217 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_CURRENT_SCHOOL_TOURNAMENT_STATE, 0
# 218 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0
# 219 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TEAM_RESET, 0
# 220 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_set FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1:
# 237 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_TRAINER_TOURNAMENT_WON, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4:
# 246 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_2:
# 222 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE02_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8
# 224 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9
# 226 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE04_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10
# 228 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	goto_if_unset FLAG_BADGE05_GET, GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11
# 231 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 10000
GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7:
# 233 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakTown_SchoolTournament_MintPrizeSelection
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_1

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_5:
# 238 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setflag FLAG_TRAINER_TOURNAMENT_WON
# 239 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1
# 240 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	givedecoration DECOR_SILVER_SHIELD
# 243 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 7500
# 244 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	call GranitePeakTown_SchoolTournament_MintPrizeSelection
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_4

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_8:
# 223 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 5000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_9:
# 225 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 6000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_10:
# 227 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 7000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_11:
# 229 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	addmoney 8000
	goto GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_7


GranitePeakTown_SchoolTournament_MintPrizeSelection::
# 262 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeakTown_SchoolTournament_MintPrizeSelection_Text_0
# 263 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_ADAMANT_MINT
# 264 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_MODEST_MINT
# 265 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_BOLD_MINT
# 266 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_CALM_MINT
# 267 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_JOLLY_MINT
# 268 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	giveitem ITEM_TIMID_MINT
	return


GranitePeak_BattleDomeLobby_EventScript_LostChallenge::
# 273 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	lockall
# 274 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_SCHOOL_TEAM_RESET, 0
# 275 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
# 276 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	msgbox GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0
# 277 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_PARTY_ORDER
# 278 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	setvar VAR_0x8005, FRONTIER_PARTY_SIZE
# 279 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special CallFrontierUtilFunc
# 280 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	frontier_checkairshow
# 281 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	special HealPlayerParty
# 282 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	releaseall
	return


# 286 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MovePlayerLeftOnce:
# 287 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
	step_end

# 290 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MovePlayerToMat:
# 291 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_up
	step_end

# 294 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatFaceDown:
# 295 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	face_down
	step_end

# 298 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatExclamation:
# 299 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	emote_exclamation_mark
	step_end

# 302 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
Movement_GranitePeakSchool_MatMovesRooms:
# 303 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 304 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 305 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 306 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 307 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	walk_left
# 308 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	face_up
	step_end

GranitePeak_EventScript_EvolutionClassroomDoor_Text_0:
# 10 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Evolution Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_ItemClassroomDoor_Text_0:
# 19 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Item Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_MovesClassroomDoor_Text_0:
# 28 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Moves Class\n"
	.string "Do you want to enter?$"

GranitePeak_EventScript_AbilitiesClassroomDoor_Text_0:
# 37 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Abilities Class\n"
	.string "Do you want to enter?$"

GranitePeakTown_School_EventScript_EnterRight_Text_0:
# 46 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "So many amazing trainers came from this\n"
	.string "school, just look at all the names that\l"
	.string "have won the school Pokémon\l"
	.string "tournament.$"

GranitePeakSchool_Mat_TrophyCase_Text_0:
# 65 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "One day my name will be on there!$"

GranitePeakSchool_Mat_TrophyCase_Text_1:
# 66 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Hi, I'm Mat and I'm going to be the very\n"
	.string "best!$"

GranitePeakSchool_Mat_TrophyCase_Text_2:
# 69 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Oh you're a trainer. Let me show you how\n"
	.string "good the future school champion is!\p"
	.string "I won't hold back!$"

SchoolHall_Mat_Beaten_Text_0:
# 75 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "I still have a lot to learn a but this\n"
	.string "school is the best place for me to be.$"

SchoolHall_Mat_Beaten_Text_1:
# 76 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "If I complete all four classes and get\n"
	.string "their patches I can take part and win\l"
	.string "the school tournament.$"

SchoolHall_Mat_Beaten_Text_2:
# 77 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Let's get going!$"

GranitePeakTown_School_TrophyCase_Text_0:
# 92 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's the Granite Peak School Trainer\n"
	.string "Trophy.$"

GranitePeakTown_School_TrophyCase_Text_1:
# 93 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's got all the previous winners\n"
	.string "etched into it...$"

GranitePeakTown_School_TrophyCase_Text_2:
# 94 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Jordan$"

GranitePeakTown_School_MatLostID_Text_0:
# 102 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It's empty$"

GranitePeakTown_School_MatLostID_Text_1:
# 105 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You find someones student ID in the\n"
	.string "pot:\n"
	.string "It belongs to Mat$"

GranitePeakTown_SchoolTournament_Teacher_Text_0:
# 118 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "If you wish to take part in the\n"
	.string "tournament you must have first\l"
	.string "completed every class.$"

GranitePeakTown_SchoolTournament_Teacher_Text_1:
# 121 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You still need to complete the\n"
	.string "Evolution test.$"

GranitePeakTown_SchoolTournament_Teacher_Text_2:
# 125 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Good job on passing the Evolution test.$"

GranitePeakTown_SchoolTournament_Teacher_Text_3:
# 128 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You still need to complete the Moves\n"
	.string "test.$"

GranitePeakTown_SchoolTournament_Teacher_Text_4:
# 132 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Brilliant you have completed the Moves\n"
	.string "test$"

GranitePeakTown_SchoolTournament_Teacher_Text_5:
# 135 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You still need to complete the Items\n"
	.string "test.$"

GranitePeakTown_SchoolTournament_Teacher_Text_6:
# 139 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Great, you also completed the Items\n"
	.string "test$"

GranitePeakTown_SchoolTournament_Teacher_Text_7:
# 142 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "You still need to complete the Abiliy\n"
	.string "test.$"

GranitePeakTown_SchoolTournament_Teacher_Text_8:
# 146 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Evolution test as well, fantastic job!$"

GranitePeakTown_SchoolTournament_Teacher_Text_9:
# 150 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "It looks like you can take part, would\n"
	.string "you like to?$"

GranitePeakTown_SchoolTournament_Teacher_Text_10:
# 152 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Come back when you wish to give it a go.$"

GranitePeakTown_SchoolTournament_Teacher_Text_11:
# 163 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Sorry you can't enter with more than 3\n"
	.string "Pokémon.$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_0:
# 218 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Congratulations you managed to beat\n"
	.string "the others! It was incredible to watch!$"

GranitePeak_BattleDomeLobby_EventScript_BeatChallenge_Text_1:
# 239 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "For your succes in the tournament take\n"
	.string "this trophy!$"

GranitePeakTown_SchoolTournament_MintPrizeSelection_Text_0:
# 262 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Also take each of these.$"

GranitePeak_BattleDomeLobby_EventScript_LostChallenge_Text_0:
# 276 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Nice try, better luck next time.$"

SchoolHall_Mat_Outro::
# 313 "data/maps/GranitePeakTown_SchoolHall/scripts.pory"
	.string "Okay I guess I'm not ready yet.$"
