GranitePeakTown_School_EvolutionRoom_MapScripts::
# 2 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeakTown_School_EvolutionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeakTown_School_EvolutionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setflag FLAG_HIDE_EVOLUTION_ROOM
# 4 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeakTown_School_EvolutionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GranitePeakTown_School_EvolutionRoom_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	clearflag FLAG_HIDE_EVOLUTION_ROOM
	return


GranitePeakSChool_EvolutionClass_Teacher::
# 14 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	lockall
# 15 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	faceplayer
# 16 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	checkitem ITEM_EVOLUTION_PATCH, 1
# 17 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	goto_if_unset FLAG_GET_SCHOOL_EEVEE, GranitePeakSChool_EvolutionClass_Teacher_3
GranitePeakSChool_EvolutionClass_Teacher_1:
# 20 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 5
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_7
GranitePeakSChool_EvolutionClass_Teacher_6:
# 23 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_10
GranitePeakSChool_EvolutionClass_Teacher_9:
# 26 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 3
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_13
GranitePeakSChool_EvolutionClass_Teacher_12:
# 56 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	releaseall
	return

GranitePeakSChool_EvolutionClass_Teacher_2:
# 18 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call GranitePeak_GivePlayer_Eevee
	goto GranitePeakSChool_EvolutionClass_Teacher_1

GranitePeakSChool_EvolutionClass_Teacher_3:
# 17 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_2
	goto GranitePeakSChool_EvolutionClass_Teacher_1

GranitePeakSChool_EvolutionClass_Teacher_7:
# 21 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_0
	goto GranitePeakSChool_EvolutionClass_Teacher_6

GranitePeakSChool_EvolutionClass_Teacher_10:
# 24 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	goto GranitePeakSchool_EvolutionTest
	goto GranitePeakSChool_EvolutionClass_Teacher_9

GranitePeakSChool_EvolutionClass_Teacher_13:
# 27 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_1, MSGBOX_YESNO
# 28 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_16
GranitePeakSChool_EvolutionClass_Teacher_15:
# 51 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakSChool_EvolutionClass_Teacher_18
	goto GranitePeakSChool_EvolutionClass_Teacher_12

GranitePeakSChool_EvolutionClass_Teacher_16:
# 29 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 4
# 30 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_2
# 31 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 1, Movement_GranitePeakSchool_TeacherSurprised
# 32 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_TeacherSurprised
# 33 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 34 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	addobject 5
# 35 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	addobject 6
# 36 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setobjectxy 6, 6, 10
# 37 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setobjectxy 5, 5, 10
# 38 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_MoveNPCEvolutionRoomUp
# 39 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_MoveNPCEvolutionRoomUp
# 40 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 41 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_NPCBounce
# 42 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 43 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_3
# 44 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_NPCBounce
# 45 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 46 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_4
# 47 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_GranitePeakSchool_FaceTeacher
# 48 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 49 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	goto GranitePeakSchool_EvolutionTest
	goto GranitePeakSChool_EvolutionClass_Teacher_15

GranitePeakSChool_EvolutionClass_Teacher_18:
# 52 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_5
	goto GranitePeakSChool_EvolutionClass_Teacher_12


GranitePeakSchool_EvolutionTest::
# 60 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 61 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_0, MSGBOX_YESNO
# 62 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakSchool_EvolutionTest_3
GranitePeakSchool_EvolutionTest_1:
# 95 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakSchool_EvolutionTest_7
	return

GranitePeakSchool_EvolutionTest_2:
# 63 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_NPCBounce
# 64 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 65 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_1
# 66 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_NPCBounce
# 67 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 68 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_2
# 69 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_3
# 70 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_4, MSGBOX_YESNO
# 71 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakSchool_EvolutionTest_12
GranitePeakSchool_EvolutionTest_10:
# 87 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakSchool_EvolutionTest_16
	goto GranitePeakSchool_EvolutionTest_1

GranitePeakSchool_EvolutionTest_3:
# 62 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_2
	goto GranitePeakSchool_EvolutionTest_1

GranitePeakSchool_EvolutionTest_6:
# 96 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_NPCBounce
# 97 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 98 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_1
# 99 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_13
# 100 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_14
# 101 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call FailedEvolutionTest
	return

GranitePeakSchool_EvolutionTest_7:
# 95 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_6
	return

GranitePeakSchool_EvolutionTest_11:
# 72 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_NPCBounce
# 73 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 74 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_5
# 75 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_6
# 76 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_7
# 77 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_8, MSGBOX_YESNO
# 78 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakSchool_EvolutionTest_21
GranitePeakSchool_EvolutionTest_19:
# 82 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakSchool_EvolutionTest_25
	goto GranitePeakSchool_EvolutionTest_10

GranitePeakSchool_EvolutionTest_12:
# 71 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_11
	goto GranitePeakSchool_EvolutionTest_10

GranitePeakSchool_EvolutionTest_15:
# 88 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_NPCBounce
# 89 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 90 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_11
# 91 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_12
# 92 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call FailedEvolutionTest
	goto GranitePeakSchool_EvolutionTest_1

GranitePeakSchool_EvolutionTest_16:
# 87 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_15
	goto GranitePeakSchool_EvolutionTest_1

GranitePeakSchool_EvolutionTest_20:
# 79 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_9
# 80 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call FailedEvolutionTest
	goto GranitePeakSchool_EvolutionTest_19

GranitePeakSchool_EvolutionTest_21:
# 78 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_20
	goto GranitePeakSchool_EvolutionTest_19

GranitePeakSchool_EvolutionTest_24:
# 83 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSchool_EvolutionTest_Text_10
# 84 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call CompletedEvolutionTest
	goto GranitePeakSchool_EvolutionTest_10

GranitePeakSchool_EvolutionTest_25:
# 82 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakSchool_EvolutionTest_24
	goto GranitePeakSchool_EvolutionTest_10


FailedEvolutionTest::
# 106 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox FailedEvolutionTest_Text_0
# 107 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 108 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	releaseall
	return


CompletedEvolutionTest::
# 113 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 114 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox CompletedEvolutionTest_Text_0
# 115 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	giveitem ITEM_EVOLUTION_PATCH, 1
# 116 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox CompletedEvolutionTest_Text_1
# 117 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeakSChool_EvolutionClass_Teacher_Text_0
# 118 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 5
# 120 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_NPCBounce
# 121 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 122 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox CompletedEvolutionTest_Text_2
# 123 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 5, Movement_GranitePeakSchool_MoveNPCEvolutionRoomDown
# 124 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 5
# 125 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	removeobject 5
# 126 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_NPCBounce
# 127 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 128 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	applymovement 6, Movement_GranitePeakSchool_MoveNPCEvolutionRoomDown
# 129 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	waitmovement 6
# 130 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	removeobject 6
# 131 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call GranitePeak_GivePlayer_Eevee
# 132 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	releaseall
	return


GranitePeak_GivePlayer_Eevee::
# 136 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 137 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	givemon SPECIES_EEVEE, 15
# 138 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 139 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GranitePeak_GivePlayer_Eevee_2
# 142 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GranitePeak_GivePlayer_Eevee_3
# 147 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	hidemonpic
# 148 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_2
GranitePeak_GivePlayer_Eevee_1:
# 150 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	setflag FLAG_GET_SCHOOL_EEVEE
	return

GranitePeak_GivePlayer_Eevee_2:
# 140 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_0
# 141 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call NicknamePartyMon
	goto GranitePeak_GivePlayer_Eevee_1

GranitePeak_GivePlayer_Eevee_3:
# 143 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_1
# 144 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call NicknameBoxMon
	goto GranitePeak_GivePlayer_Eevee_1


GranitePeak_EvolutionClass_Boy1::
# 154 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONBOY1, EvolutionBoy1_Intro, EvolutionBoy1_Outro, EvolutionStudent_Beaten
# 155 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox PostBattle_EvolutionBoy1, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Boy2::
# 160 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONBOY2, EvolutionBoy2_Intro, EvolutionBoy2_Outro, EvolutionStudent_Beaten
# 161 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox PostBattle_EvolutionBoy2, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Girl::
# 166 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONGIRL, EvolutionGirl_Intro, EvolutionGirl_Outro, EvolutionStudent_Beaten
# 167 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	msgbox PostBattle_EvolutionGirl, MSGBOX_AUTOCLOSE
	end


EvolutionStudent_Beaten::
# 172 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	addvar VAR_EVOLUTION_ROOM_STUDENTS, 1
# 173 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	call Increase_Trainers_Beaten
	return


# 215 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
Movement_GranitePeakSchool_TeacherSurprised:
# 216 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	emote_exclamation_mark
# 217 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	face_down
	step_end

# 220 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
Movement_GranitePeakSchool_MoveNPCEvolutionRoomUp:
# 221 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_up
# 222 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_up
# 223 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_up
# 224 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_up
# 225 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_up
	step_end

# 228 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
Movement_GranitePeakSchool_NPCBounce:
# 229 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	jump_in_place_up
	step_end

# 232 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
Movement_GranitePeakSchool_FaceTeacher:
# 233 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	face_right
	step_end

# 236 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
Movement_GranitePeakSchool_MoveNPCEvolutionRoomDown:
# 237 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
# 238 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
# 239 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
# 240 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
# 241 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
# 242 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	walk_fast_down
	step_end

GranitePeakSChool_EvolutionClass_Teacher_Text_0:
# 21 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeakSChool_EvolutionClass_Teacher_Text_1:
# 27 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "It looks like you've learnt alot, are you\n"
	.string "ready for the test?$"

GranitePeakSChool_EvolutionClass_Teacher_Text_2:
# 30 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "HANG ON!$"

GranitePeakSChool_EvolutionClass_Teacher_Text_3:
# 43 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "We want to take the test as well!$"

GranitePeakSChool_EvolutionClass_Teacher_Text_4:
# 46 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Yeah! I need these patches so I can win\n"
	.string "the tournament.$"

GranitePeakSChool_EvolutionClass_Teacher_Text_5:
# 52 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Okay, come back when you are ready.$"

GranitePeakSchool_EvolutionTest_Text_0:
# 61 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Question 1. Eevee is the only Pokémon\n"
	.string "with multiple evolutions?$"

GranitePeakSchool_EvolutionTest_Text_1:
# 65 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "What about Wurmple!$"

GranitePeakSchool_EvolutionTest_Text_2:
# 68 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "And Snorunt$"

GranitePeakSchool_EvolutionTest_Text_3:
# 69 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "That's correct many Pokémon other than\n"
	.string "Eevee can evolve in different ways.$"

GranitePeakSchool_EvolutionTest_Text_4:
# 70 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Question 2. Are there any Pokémon that\n"
	.string "can evolve twice at once?$"

GranitePeakSchool_EvolutionTest_Text_5:
# 74 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Nincada!$"

GranitePeakSchool_EvolutionTest_Text_6:
# 75 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "That's correct, Nincada evolves into\n"
	.string "both Shedinja and Ninjask$"

GranitePeakSchool_EvolutionTest_Text_7:
# 76 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "You're doing great, okay final question$"

GranitePeakSchool_EvolutionTest_Text_8:
# 77 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Do some Pokémon only evolve through\n"
	.string "trade?$"

GranitePeakSchool_EvolutionTest_Text_9:
# 79 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "I'm sorry that's wrong. Keep reading up\n"
	.string "on evolution and you'll get there$"

GranitePeakSchool_EvolutionTest_Text_10:
# 83 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Correct with the discovery of a Link\n"
	.string "Stone you no longer have to trade\l"
	.string "certain Pokémon.$"

GranitePeakSchool_EvolutionTest_Text_11:
# 90 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "That's stupid how can a Pokémon evolve\n"
	.string "into two Pokémon?$"

GranitePeakSchool_EvolutionTest_Text_12:
# 91 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "I'm sorry that's incorrect. Keep\n"
	.string "learning then come back and try again.$"

GranitePeakSchool_EvolutionTest_Text_13:
# 99 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Correct, Eevee is just one of many$"

GranitePeakSchool_EvolutionTest_Text_14:
# 100 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Maybe you should study some more and\n"
	.string "try again.$"

FailedEvolutionTest_Text_0:
# 106 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

CompletedEvolutionTest_Text_0:
# 114 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

CompletedEvolutionTest_Text_1:
# 116 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Recieved Evolution Patch. This shows\n"
	.string "you've passed the class.$"

CompletedEvolutionTest_Text_2:
# 122 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Bet you're happy I was here, I carried\n"
	.string "you through that.$"

GranitePeak_GivePlayer_Eevee_Text_0:
# 140 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Recieved Eevee!$"

GranitePeak_GivePlayer_Eevee_Text_1:
# 143 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Recieved Eevee$"

GranitePeak_GivePlayer_Eevee_Text_2:
# 148 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "soon.$"

EvolutionBoy1_Intro::
# 177 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Did you know Pokémon can learn move\n"
	.string "faster by not being evolved.$"

EvolutionBoy1_Outro::
# 181 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "It can help make a Pokémon stronger.$"

PostBattle_EvolutionBoy1::
# 185 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Some evolution lines can only learn\n"
	.string "moves before they evolve.$"

EvolutionBoy2_Intro::
# 189 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "You can use some items to evolve\n"
	.string "Pokémon, but did you know some items\l"
	.string "can be used to stop evolution or make\l"
	.string "non evolved Pokémon stronger.$"

EvolutionBoy2_Outro::
# 193 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Wow, I thought they would be\n"
	.string "unstoppable.$"

PostBattle_EvolutionBoy2::
# 197 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Eviolite is an incredible item that\n"
	.string "improves defence on Pokémon that can\l"
	.string "evolve.$"

EvolutionGirl_Intro::
# 201 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Some Pokémon can evolve in many\n"
	.string "different ways.$"

EvolutionGirl_Outro::
# 205 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "Losing doesn't help them evolve though.$"

PostBattle_EvolutionGirl::
# 209 "data/maps/GranitePeakTown_School_EvolutionRoom/scripts.pory"
	.string "A Pokémon can complete change\n"
	.string "depending on how it evolves.$"
