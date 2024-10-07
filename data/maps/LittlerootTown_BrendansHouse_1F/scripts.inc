BrendansHouse_1F_MapScripts::
	.byte 0


# 3 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_MOM, 1
# 4 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL_MOM, 4
# 5 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
.set LOCALID_RIVAL, 7
# 6 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 7 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_MapScripts::
# 8 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LittlerootTown_BrendansHouse_1F_OnTransition
# 9 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LittlerootTown_BrendansHouse_1F_OnFrame
# 10 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.byte 0
# 11 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 12 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 13 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_SetMovingBoxes::
# 14 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 4, METATILE_BrendansMaysHouse_MovingBox_Open, TRUE
# 15 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 5, 2, METATILE_BrendansMaysHouse_MovingBox_Closed, TRUE
# 16 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 17 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 18 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_CheckShowShoesManual::
# 19 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	checkplayergender
# 20 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto_if_eq VAR_RESULT, MALE, LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual
# 21 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 22 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 23 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_ShowRunningShoesManual::
# 24 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setmetatile 3, 7, METATILE_BrendansMaysHouse_BookOnTable, TRUE
# 25 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 26 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 27 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnTransition:
# 28 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor
# 29 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs
# 30 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV
# 31 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 32 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 33 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToStairs::
# 34 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 8, 4
# 35 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 36 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 37 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 38 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToTV::
# 39 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 4, 5
# 40 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 41 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 42 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 43 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MoveMomToDoor::
# 44 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectxyperm LOCALID_MOM, 9, 8
# 45 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setobjectmovementtype LOCALID_MOM, MOVEMENT_TYPE_FACE_UP
# 46 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 47 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 48 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ Many of the below scripts have no gender check because they assume youre in the correct house
# 49 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
@ The below SS Ticket script uses Mays house state by accident(?), but theyre both set identically after the intro
# 50 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_OnFrame:
# 51 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 3, LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn
# 52 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 5, LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock
# 53 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_INTRO_STATE, 6, LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport
# 54 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 1, LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor
# 55 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	map_script_2 VAR_LITTLEROOT_HOUSES_STATE_MAY, 3, PlayersHouse_1F_EventScript_GetSSTicketAndSeeLatiTV
# 56 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.2byte 0
# 57 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 58 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoUpstairsToSetClock::
# 59 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 60 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Text_GoSetTheClock, MSGBOX_DEFAULT
# 61 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	closemessage
# 62 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 63 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitstate
# 64 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 65 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 66 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 67 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 68 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_EnterHouseMovingIn::
# 69 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 70 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 71 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 72 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_EnterHouseMovingIn
# 73 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 74 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 75 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PetalburgGymReport::
# 76 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 77 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, MALE
# 78 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, LOCALID_MOM
# 79 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_PetalburgGymReportMale
# 80 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 81 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 82 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_YoureNewNeighbor::
# 83 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 84 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 85 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_ExclamationMark
# 86 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 87 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, Common_Movement_Delay48
# 88 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 89 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 90 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL_MOM, LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach
# 91 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 92 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	special GetRivalSonDaughterString
# 93 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_BEATEN_PINSIR_BASE
# 94 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_LITTLEROOT_HOUSES_STATE_MAY, 2
# 95 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 96 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 97 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 98 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_RivalMomApproach:
# 99 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_down
# 100 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 101 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 102 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 103 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 104 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 105 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 106 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 107 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_GoSeeRoom::
# 108 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 109 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8004, LOCALID_MOM
# 110 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8005, MALE
# 111 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement VAR_0x8004, Common_Movement_WalkInPlaceFasterLeft
# 112 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 113 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto PlayersHouse_1F_EventScript_MomGoSeeRoom
# 114 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 115 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 116 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival0::
# 117 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 118 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 0
# 119 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 120 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 121 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 122 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival1::
# 123 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 124 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 1
# 125 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 126 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 127 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 128 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival2::
# 129 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	lockall
# 130 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_0x8008, 2
# 131 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	goto LittlerootTown_BrendansHouse_1F_EventScript_MeetRival
# 132 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 133 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 134 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_MeetRival::
# 135 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 136 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 10
# 137 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	addobject LOCALID_RIVAL
# 138 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 139 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_PIN
# 140 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
# 141 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 142 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
# 143 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 144 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_ne VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan
# 145 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
# 146 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0
# 147 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1
# 148 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2
# 149 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 0, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0
# 150 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 1, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1
# 151 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	call_if_eq VAR_0x8008, 2, LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2
# 152 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	playse SE_EXIT
# 153 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	removeobject LOCALID_RIVAL
# 154 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
# 155 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
# 156 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
# 157 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay 30
# 158 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	setvar VAR_QUARRY_STATE, 3
# 159 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	savebgm MUS_DUMMY
# 160 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	fadedefaultbgm
# 161 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	releaseall
# 162 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	end
# 163 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 164 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_PlayerFaceBrendan::
# 165 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 166 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 167 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 168 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 169 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer0::
# 170 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0
# 171 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 172 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 173 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 174 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer1::
# 175 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1
# 176 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 177 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 178 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 179 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanApproachPlayer2::
# 180 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2
# 181 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 182 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 183 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 184 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer0:
# 185 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 186 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 187 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 188 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 189 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 190 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 191 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 192 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 193 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 194 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer1:
# 195 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 196 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 197 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 198 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 199 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 200 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanApproachPlayer2:
# 201 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 202 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 203 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 204 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 205 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 206 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 207 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 208 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 209 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 210 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs0::
# 211 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0
# 212 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0
# 213 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 214 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 215 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 216 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs1::
# 217 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1
# 218 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1
# 219 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 220 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 221 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 222 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_EventScript_BrendanGoUpstairs2::
# 223 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2
# 224 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	applymovement LOCALID_RIVAL, LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2
# 225 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	waitmovement 0
# 226 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	return
# 227 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 228 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit0:
# 229 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 230 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 231 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 232 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 233 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 234 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit1:
# 235 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 236 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 237 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 238 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 239 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 240 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 241 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 242 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 243 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_PlayerWatchBrendanExit2:
# 244 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_16
# 245 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	delay_8
# 246 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 247 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 248 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 249 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs0:
# 250 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 251 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 252 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 253 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 254 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 255 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 256 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 257 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs1:
# 258 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_right
# 259 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_right
# 260 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 261 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 262 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 263 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 264 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 265 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 266 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 267 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 268 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 269 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
LittlerootTown_BrendansHouse_1F_Movement_BrendanGoUpstairs2:
# 270 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_left
# 271 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_left
# 272 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_in_place_faster_up
# 273 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 274 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	walk_up
# 275 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	step_end
# 276 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 277 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsntItNiceInHere:
# 278 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See, {PLAYER}?\n"
# 279 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Isn't it nice in here, too?$"
# 280 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 281 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MoversPokemonGoSetClock:
# 282 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The mover's POKéMON do all the work\n"
# 283 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "of moving us in and cleaning up after.\l"
# 284 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This is so convenient!\p"
# 285 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "{PLAYER}, your room is upstairs.\n"
# 286 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go check it out, dear!\p"
# 287 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD bought you a new clock to mark\n"
# 288 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "our move here.\l"
# 289 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't forget to set it!$"
# 290 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 291 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ArentYouInterestedInRoom:
# 292 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, {PLAYER}?\p"
# 293 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Aren't you interested in seeing your\n"
# 294 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "very own room?$"
# 295 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 296 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoSetTheClock:
# 297 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}.\p"
# 298 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go set the clock in your room, honey.$"
# 299 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 300 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_OhComeQuickly:
# 301 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh! {PLAYER}, {PLAYER}!\n"
# 302 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Quick! Come quickly!$"
# 303 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 304 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_MaybeDadWillBeOn:
# 305 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Look! It's PETALBURG GYM!\n"
# 306 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Maybe DAD will be on!$"
# 307 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 308 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ItsOverWeMissedHim:
# 309 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh… It's over.\p"
# 310 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think DAD was on, but we missed him.\n"
# 311 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Too bad.$"
# 312 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 313 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GoIntroduceYourselfNextDoor:
# 314 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes.\n"
# 315 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "One of DAD's friends lives in town.\p"
# 316 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH is his name.\p"
# 317 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He lives right next door, so you should\n"
# 318 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "go over and introduce yourself.$"
# 319 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 320 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_SeeYouHoney:
# 321 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: See you, honey!$"
# 322 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 323 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DidYouMeetProfBirch:
# 324 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Did you introduce yourself to\n"
# 325 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "PROF. BIRCH?$"
# 326 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 327 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_YouShouldRestABit:
# 328 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: How are you doing, {PLAYER}?\n"
# 329 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You look a little tired.\p"
# 330 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I think you should rest a bit.$"
# 331 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 332 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TakeCareHoney:
# 333 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Take care, honey!$"
# 334 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 335 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_GotDadsBadgeHeresSomethingFromMom:
# 336 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Oh? Did DAD give you that BADGE?\p"
# 337 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Then here's something from your MOM!$"
# 338 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 339 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DontPushYourselfTooHard:
# 340 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Don't push yourself too hard, dear.\n"
# 341 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "You can always come home.\p"
# 342 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Go for it, honey!$"
# 343 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 344 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatAPokenav:
# 345 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: What is that, honey? A POKéNAV?\n"
# 346 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Someone from DEVON gave it to you?\p"
# 347 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Well, honey, how about registering\n"
# 348 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "your mom?\p"
# 349 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "… … …$"
# 350 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 351 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RegisteredMom:
# 352 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Registered MOM\n"
# 353 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "in the POKéNAV.$"
# 354 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 355 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth1:
# 356 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Fugiiiiih!$"
# 357 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 358 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_Vigoroth2:
# 359 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Huggoh, uggo uggo…$"
# 360 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 361 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_ReportFromPetalburgGym:
# 362 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "INTERVIEWER: …We brought you this\n"
# 363 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "report from in front of PETALBURG GYM.$"
# 364 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 365 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TheresAMovieOnTV:
# 366 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There is a movie on TV.\p"
# 367 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Two men are dancing on a big piano\n"
# 368 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "keyboard.\p"
# 369 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Better get going!$"
# 370 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 371 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_RunningShoesManual:
# 372 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's the instruction booklet for the\n"
# 373 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "RUNNING SHOES.\p"
# 374 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Press the B Button to run while\n"
# 375 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "wearing your RUNNING SHOES.\p"
# 376 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "“Lace up your RUNNING SHOES and hit\n"
# 377 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "the road running!”$"
# 378 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 379 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_TicketFromBrineyCameForYou:
# 380 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm?\p"
# 381 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Hey, it's {PLAYER}!\p"
# 382 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "It's been a while since I saw you,\n"
# 383 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "but you look…stronger, somehow.\p"
# 384 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "That's the impression I get.\n"
# 385 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "But your old man hasn't given up yet!\p"
# 386 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "Oh, yes, I have something for you.\n"
# 387 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "This came to you from someone named\l"
# 388 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MR. BRINEY.$"
# 389 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 390 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_PortsInSlateportLilycove:
# 391 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "DAD: Hm, a TICKET for a ferry?\p"
# 392 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "If I recall, there are ferry ports in\n"
# 393 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "SLATEPORT and LILYCOVE.$"
# 394 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 395 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_BetterGetBackToGym:
# 396 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "I'd better get back to PETALBURG GYM.\p"
# 397 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM, thanks for looking after the house\n"
# 398 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while I'm away.$"
# 399 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 400 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_DadShouldStayLonger:
# 401 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: That DAD of yours…\p"
# 402 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He comes home for the first time in a\n"
# 403 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "while, but all he talks about is POKéMON.\p"
# 404 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "He should relax and stay a little longer.$"
# 405 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 406 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_IsThatABreakingStory:
# 407 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Is that a breaking news story?$"
# 408 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 409 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_LatiEmergencyNewsFlash:
# 410 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We bring you this emergency\n"
# 411 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "news flash!\p"
# 412 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "In various HOENN locales, there have\n"
# 413 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "been reports of a BZZT…colored\l"
# 414 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "POKéMON in flight.\p"
# 415 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "The identity of this POKéMON is\n"
# 416 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "currently unknown.\p"
# 417 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "We now return you to the regular\n"
# 418 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "movie program.$"
# 419 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 420 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_WhatColorDidTheySay:
# 421 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: {PLAYER}, did you catch that?\p"
# 422 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "What color did the announcer say\n"
# 423 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "that POKéMON was?$"
# 424 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"

# 425 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
PlayersHouse_1F_Text_StillUnknownPokemon:
# 426 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "MOM: Well, isn't that something!\n"
# 427 "data/maps/LittlerootTown_BrendansHouse_1F/scripts.pory"
	.string "There are still unknown POKéMON.$"
