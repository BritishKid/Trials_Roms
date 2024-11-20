GranitePeakTown_TournamentWaitingRoom_MapScripts::
# 2 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, GranitePeakTown_TournamentWaitingRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
# 5 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, GranitePeakTown_TournamentWaitingRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE
	.byte 0

GranitePeakTown_TournamentWaitingRoom_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 3 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	map_script_2 VAR_TEMP_0, 0, GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom
	.2byte 0

GranitePeakTown_TournamentWaitingRoom_MapScripts_MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE:
# 6 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	map_script_2 VAR_TEMP_1, 0, GranitePeak_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth
	.2byte 0


GranitePeak_BattleDomePreBattleRoom_EventScript_TurnPlayerNorth::
# 11 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_TEMP_1, 1
# 12 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom::
# 16 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	compare VAR_0x8006, 1
	goto_if_eq GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom_2
GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom_1:
# 20 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 21 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	lockall
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom_2:
# 17 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_ReturnFromBattle
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_EnterRoom_1


GranitePeak_BattleDomePreBattleRoom_EventScript_ReturnFromBattle::
# 26 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_TEMP_0, 1
# 27 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_Text_0, MSGBOX_DEFAULT
# 32 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special HealPlayerParty
# 33 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage
# 34 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 35 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	dome_showstatictourneytree
# 36 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitstate
# 37 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage::
# 42 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	switch VAR_RESULT
# 43 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_ROUND2, GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_2
# 44 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_SEMIFINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_3
# 45 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_FINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_4
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_2:
# 43 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_Round1Complete
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_3:
# 44 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_Round2Complete
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_RoundCompleteMessage_4:
# 45 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_SemifinalsComplete
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound::
# 50 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage
# 51 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitmessage
# 52 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	multichoice 16, 0, MULTI_TOURNEY_NO_RECORD, TRUE
# 53 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_2
GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1:
# 56 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	switch VAR_RESULT
# 57 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case 0, GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5
# 58 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case 1, GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6
# 59 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case 2, GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7
# 60 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case 3, GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8
# 62 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case MULTI_B_PRESSED, GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_9
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_2:
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_1

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_5:
# 57 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_6:
# 58 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowTourneyTree
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_7:
# 59 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ContinueChallenge
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_8:
# 60 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound_9:
# 62 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge::
# 67 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_Text_0, MSGBOX_YESNO
# 68 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2
GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_1:
# 71 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	switch VAR_RESULT
# 72 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case NO, GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_5
# 73 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case YES, GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_6
# 74 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case MULTI_B_PRESSED, GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_7
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_2:
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_1

GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_5:
# 72 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_6:
# 73 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_PauseChallenge
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_7:
# 74 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return


GranitePeak_BattleDomeBattleRoom_EventScript_WarpToLobbyLost::
# 99 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_SET_DATA
# 100 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_CHALLENGE_STATUS
# 101 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8006, CHALLENGE_STATUS_LOST
# 102 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallFrontierUtilFunc
# 104 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomeBattleRoom_EventScript_WarpToLobby
	return


GranitePeak_BattleDomeBattleRoom_EventScript_WarpToLobby::
# 108 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	copyvar VAR_RESULT, VAR_FRONTIER_BATTLE_MODE
# 109 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	warp MAP_GRANITE_PEAK_TOWN_SCHOOL_HALL, 8, 3
# 110 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitstate
	end


GranitePeak_BattleDomePreBattleRoom_EventScript_PauseChallenge::
# 115 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_PauseChallenge_Text_0
# 116 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitmessage
# 117 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SAVE
# 118 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8005, CHALLENGE_STATUS_PAUSED
# 119 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallBattleDomeFunction
# 121 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	playse SE_SAVE
# 122 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitse
# 123 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 124 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	frontier_reset
	end


GranitePeak_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo::
# 129 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo_Text_0, MSGBOX_DEFAULT
# 130 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 131 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SHOW_OPPONENT_INFO
# 132 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallBattleDomeFunction
# 134 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitstate
# 135 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ShowTourneyTree::
# 139 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage
# 140 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 141 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SHOW_TOURNEY_TREE
# 142 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallBattleDomeFunction
# 144 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitstate
# 145 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_AskReadyForNextRound
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage::
# 149 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_DATA
# 150 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_BATTLE_NUM
# 151 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallFrontierUtilFunc
# 153 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	switch VAR_RESULT
# 154 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_ROUND1, GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_3
# 155 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_ROUND2, GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_4
# 156 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_SEMIFINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_5
# 157 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_FINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_6
GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1:
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_3:
# 154 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound1
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_4:
# 155 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound2
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_5:
# 156 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_6:
# 157 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInFinals
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ShowRoundMessage_1


GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound1::
# 163 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound1_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound2::
# 168 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound2_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals::
# 172 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInFinals::
# 176 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInFinals_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ContinueChallenge::
# 184 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	fadescreen FADE_TO_BLACK
# 185 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	call BattleFrontier_EventScript_GetLvlMode
# 186 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	copyvar VAR_0x8004, VAR_RESULT
# 187 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8005, DOME_BATTLE_PARTY_SIZE
# 194 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, BATTLE_DOME_FUNC_SET_DATA
# 196 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8006, 0xFFFF
# 197 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallBattleDomeFunction
# 200 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	dome_setopponent
# 201 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Text_0, MSGBOX_DEFAULT
# 202 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	closemessage
# 203 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	warp MAP_BATTLE_FRONTIER_BATTLE_DOME_BATTLE_ROOM, 9, 5
# 204 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_TEMP_0, 0
# 205 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	waitstate
	end


GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage::
# 211 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8004, FRONTIER_UTIL_FUNC_GET_DATA
# 212 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	setvar VAR_0x8005, FRONTIER_DATA_BATTLE_NUM
# 213 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	special CallFrontierUtilFunc
# 215 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	switch VAR_RESULT
# 216 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_ROUND1, GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_3
# 217 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_ROUND2, GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_4
# 218 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_SEMIFINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_5
# 219 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	case DOME_FINAL, GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_6
GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1:
	return

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_3:
# 216 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound1
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_4:
# 217 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound2
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_5:
# 218 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_6:
# 219 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForFinals
	goto GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForNextRoundMessage_1


GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForFinals::
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound1::
# 239 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound1_Text_0
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound2::
# 244 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound2_Text_0
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals::
# 249 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals_Text_0
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_Round1Complete::
# 258 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_Round1Complete_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_Round2Complete::
# 264 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_Round2Complete_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_SemifinalsComplete::
# 269 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox GranitePeak_BattleDomePreBattleRoom_EventScript_Round2Complete_Text_0, MSGBOX_DEFAULT
	return


what::
# 274 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	msgbox what_Text_0, MSGBOX_DEFAULT
	return


GranitePeak_BattleDomePreBattleRoom_EventScript_ReturnFromBattle_Text_0:
# 27 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Thank you for competing!$"

GranitePeak_BattleDomePreBattleRoom_EventScript_AskPauseChallenge_Text_0:
# 67 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Would you like to leave? Your progress\n"
	.string "will be lost.$"

GranitePeak_BattleDomePreBattleRoom_EventScript_PauseChallenge_Text_0:
# 115 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "I am saving your data.\n"
	.string "Please wait.$"

GranitePeak_BattleDomePreBattleRoom_EventScript_ShowOpponentInfo_Text_0:
# 129 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "{PLAYER}'s next opponent\n"
	.string "is this TRAINER.$"

GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound1_Text_0:
# 163 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "The tournament is in the 1st round.$"

GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInRound2_Text_0:
# 168 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "The tournament is in the 2nd round.$"

GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInSemifinals_Text_0:
# 172 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "The tournament is in the semifinals$"

GranitePeak_BattleDomePreBattleRoom_EventScript_TourneyInFinals_Text_0:
# 176 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "The tournament is up to the final$"

GranitePeak_BattleDomePreBattleRoom_EventScript_ContinueChallenge_Text_0:
# 201 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Let's go!$"

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound1_Text_0:
# 239 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Your 1st-round match is next.\n"
	.string "Are you ready?$"

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForRound2_Text_0:
# 244 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Your 2nd-round match is next.\n"
	.string "Are you ready?$"

GranitePeak_BattleDomePreBattleRoom_EventScript_ReadyForSemifinals_Text_0:
# 249 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "Your semifinal match is next.\n"
	.string "Are you ready?$"

GranitePeak_BattleDomePreBattleRoom_EventScript_Round1Complete_Text_0:
# 258 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "All 1st-round matches have been\n completed.\p These are the teams that advanced!$"

GranitePeak_BattleDomePreBattleRoom_EventScript_Round2Complete_Text_0:
# 264 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "All 2nd-round matches have been\n completed.\p These are the teams that advanced!$"

what_Text_0:
# 274 "data/maps/GranitePeakTown_TournamentWaitingRoom/scripts.pory"
	.string "All semifinal matches have been\n completed.\p These are the teams that advanced!$"
