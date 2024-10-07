GranitePeak_School_EvolutionClass_MapScripts::
# 2 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setflag FLAG_HIDE_EVOLUTION_ROOM
# 4 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	clearflag FLAG_HIDE_EVOLUTION_ROOM
	return


GranitePeak_EvolutionClass_Teacher::
# 11 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	lockall
# 12 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	faceplayer
# 14 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	goto_if_unset FLAG_GET_SCHOOL_EEVEE, GranitePeak_EvolutionClass_Teacher_3
GranitePeak_EvolutionClass_Teacher_1:
# 17 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 5
	goto_if_eq GranitePeak_EvolutionClass_Teacher_7
GranitePeak_EvolutionClass_Teacher_6:
# 20 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_EvolutionClass_Teacher_10
GranitePeak_EvolutionClass_Teacher_9:
# 23 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_EvolutionClass_Teacher_13
GranitePeak_EvolutionClass_Teacher_12:
# 49 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto_if_lt GranitePeak_EvolutionClass_Teacher_16
GranitePeak_EvolutionClass_Teacher_15:
# 53 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	releaseall
	return

GranitePeak_EvolutionClass_Teacher_2:
# 15 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call GranitePeak_GivePlayer_Eevee
	goto GranitePeak_EvolutionClass_Teacher_1

GranitePeak_EvolutionClass_Teacher_3:
# 14 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	goto_if_set FLAG_EVOLUTION_PATCH_EARNT, GranitePeak_EvolutionClass_Teacher_2
	goto GranitePeak_EvolutionClass_Teacher_1

GranitePeak_EvolutionClass_Teacher_7:
# 18 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_0
	goto GranitePeak_EvolutionClass_Teacher_6

GranitePeak_EvolutionClass_Teacher_10:
# 21 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call EvolutionTest
	goto GranitePeak_EvolutionClass_Teacher_9

GranitePeak_EvolutionClass_Teacher_13:
# 24 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_1, MSGBOX_YESNO
# 25 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EvolutionClass_Teacher_19
GranitePeak_EvolutionClass_Teacher_18:
# 45 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_EvolutionClass_Teacher_21
	goto GranitePeak_EvolutionClass_Teacher_12

GranitePeak_EvolutionClass_Teacher_16:
# 50 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_7
# 51 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_8
	goto GranitePeak_EvolutionClass_Teacher_15

GranitePeak_EvolutionClass_Teacher_19:
# 26 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 4
# 27 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_2
# 28 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 1, Movement_TeacherSurprised
# 29 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 1
# 30 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	addobject 5
# 31 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setobjectxy 5, 5, 10
# 32 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_MoveUpFive
# 33 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 34 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	addobject 6
# 35 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setobjectxy 6, 6, 10
# 36 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_MoveUpFive
# 37 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 6
# 38 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Bounce
# 39 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_3
# 40 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_Bounce
# 41 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_4
# 42 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_5
# 43 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call EvolutionTest
	goto GranitePeak_EvolutionClass_Teacher_18

GranitePeak_EvolutionClass_Teacher_21:
# 46 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_6
	goto GranitePeak_EvolutionClass_Teacher_12


EvolutionTest::
# 57 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 58 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_0, MSGBOX_YESNO
# 59 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_3
EvolutionTest_1:
# 92 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_7
	return

EvolutionTest_2:
# 60 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Bounce
# 61 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 62 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_1
# 63 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_Bounce
# 64 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 6
# 65 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_2
# 66 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_3
# 67 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_4, MSGBOX_YESNO
# 68 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_12
EvolutionTest_10:
# 84 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_16
	goto EvolutionTest_1

EvolutionTest_3:
# 59 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_2
	goto EvolutionTest_1

EvolutionTest_6:
# 93 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Bounce
# 94 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 95 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_1
# 96 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_13
# 97 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_14
# 98 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call FailedEvolutionTest
	return

EvolutionTest_7:
# 92 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_6
	return

EvolutionTest_11:
# 69 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Bounce
# 70 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 71 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_5
# 72 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_6
# 73 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_7
# 74 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_8, MSGBOX_YESNO
# 75 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_21
EvolutionTest_19:
# 79 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_25
	goto EvolutionTest_10

EvolutionTest_12:
# 68 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_11
	goto EvolutionTest_10

EvolutionTest_15:
# 85 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_Bounce
# 86 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 6
# 87 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_11
# 88 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_12
# 89 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call FailedEvolutionTest
	goto EvolutionTest_1

EvolutionTest_16:
# 84 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_15
	goto EvolutionTest_1

EvolutionTest_20:
# 76 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_9
# 77 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call FailedEvolutionTest
	goto EvolutionTest_19

EvolutionTest_21:
# 75 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_20
	goto EvolutionTest_19

EvolutionTest_24:
# 80 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox EvolutionTest_Text_10
# 81 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call CompletedEvolutionTest
	goto EvolutionTest_10

EvolutionTest_25:
# 79 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_24
	goto EvolutionTest_10


CompletedEvolutionTest::
# 103 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 104 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox CompletedEvolutionTest_Text_0
# 105 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 106 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox CompletedEvolutionTest_Text_1
# 107 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_EvolutionClass_Teacher_Text_0
# 108 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 5
# 109 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setflag FLAG_EVOLUTION_PATCH_EARNT
# 110 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_EVOLUTION_PATCH
# 111 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Bounce
# 112 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 113 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox CompletedEvolutionTest_Text_2
# 114 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 5, Movement_Leaves_Room
# 115 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 5
# 116 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	removeobject 5
# 117 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_Bounce
# 118 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 6
# 119 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	applymovement 6, Movement_Leaves_Room
# 120 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	waitmovement 6
# 121 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	removeobject 6
# 122 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call GranitePeak_GivePlayer_Eevee
# 123 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	releaseall
	return


FailedEvolutionTest::
# 127 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox FailedEvolutionTest_Text_0
# 128 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 129 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	releaseall
	return


GranitePeak_EvolutionClass_Boy1::
# 133 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONBOY1, EvolutionBoy1_Intro, EvolutionBoy1_Outro, EvolutionStudent_Beaten
# 134 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox PostBattle_EvolutionBoy1, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Boy2::
# 139 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONBOY2, EvolutionBoy2_Intro, EvolutionBoy2_Outro, EvolutionStudent_Beaten
# 140 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox PostBattle_EvolutionBoy2, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Girl::
# 145 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	trainerbattle_single TRAINER_EVOLUTIONGIRL, EvolutionGirl_Intro, EvolutionGirl_Outro, EvolutionStudent_Beaten
# 146 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox PostBattle_EvolutionGirl, MSGBOX_AUTOCLOSE
	end


GranitePeak_GivePlayer_Eevee::
# 151 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	showmonpic SPECIES_EEVEE, 10, 3
# 152 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	givemon SPECIES_EEVEE, 5
# 153 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 154 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GranitePeak_GivePlayer_Eevee_2
# 158 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GranitePeak_GivePlayer_Eevee_3
# 163 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	hidemonpic
# 164 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_1
GranitePeak_GivePlayer_Eevee_1:
# 166 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setflag FLAG_GET_SCHOOL_EEVEE
	return

GranitePeak_GivePlayer_Eevee_2:
# 155 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_0
# 156 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call NicknamePartyMon
	goto GranitePeak_GivePlayer_Eevee_1

GranitePeak_GivePlayer_Eevee_3:
# 159 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	msgbox GranitePeak_GivePlayer_Eevee_Text_0
# 160 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call NicknameBoxMon
	goto GranitePeak_GivePlayer_Eevee_1


EvolutionStudent_Beaten::
# 170 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto_if_eq EvolutionStudent_Beaten_2
EvolutionStudent_Beaten_1:
# 173 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 1
	goto_if_eq EvolutionStudent_Beaten_5
EvolutionStudent_Beaten_4:
# 176 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	compare VAR_EVOLUTION_ROOM_STUDENTS, 0
	goto_if_eq EvolutionStudent_Beaten_8
EvolutionStudent_Beaten_7:
# 179 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	call Increase_Trainers_Beaten
	return

EvolutionStudent_Beaten_2:
# 171 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 3
	goto EvolutionStudent_Beaten_1

EvolutionStudent_Beaten_5:
# 174 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto EvolutionStudent_Beaten_4

EvolutionStudent_Beaten_8:
# 177 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 1
	goto EvolutionStudent_Beaten_7


# 184 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
Movement_TeacherSurprised:
# 185 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	emote_exclamation_mark
	step_end

# 188 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
Movement_MoveUpFive:
# 189 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_up
# 190 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_up
# 191 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_up
# 192 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_up
# 193 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_up
	step_end

# 196 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
Movement_Bounce:
# 197 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	jump_in_place_up
	step_end

# 200 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
Movement_Leaves_Room:
# 201 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_down
# 202 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_down
# 203 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_down
# 204 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_down
# 205 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	walk_fast_down
	step_end

GranitePeak_EvolutionClass_Teacher_Text_0:
# 18 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeak_EvolutionClass_Teacher_Text_1:
# 24 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_EvolutionClass_Teacher_Text_2:
# 27 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "HANG ON!$"

GranitePeak_EvolutionClass_Teacher_Text_3:
# 39 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "We want to take part to!$"

GranitePeak_EvolutionClass_Teacher_Text_4:
# 41 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Yeah! I want to win the tournament so I\n"
	.string "need these patches.$"

GranitePeak_EvolutionClass_Teacher_Text_5:
# 42 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Okay very well, let's test all three of\n"
	.string "you then$"

GranitePeak_EvolutionClass_Teacher_Text_6:
# 46 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Okay dear, come back when you're ready.$"

GranitePeak_EvolutionClass_Teacher_Text_7:
# 50 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Pokémon can evolve in many different\n"
	.string "ways. Some use stones, some evolve\l"
	.string "after battle experience and others\l"
	.string "evolve from their surrounding area.$"

GranitePeak_EvolutionClass_Teacher_Text_8:
# 51 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "You've still got some studying to do\n"
	.string "before I can give you your patch.$"

EvolutionTest_Text_0:
# 58 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Question 1. Eevee is the only Pokémon\n"
	.string "with multiple evolutions?$"

EvolutionTest_Text_1:
# 62 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "What about Wurmple!$"

EvolutionTest_Text_2:
# 65 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "And Snorunt$"

EvolutionTest_Text_3:
# 66 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "That's correct many Pokémon other than\n"
	.string "Eevee can evolve in different ways.$"

EvolutionTest_Text_4:
# 67 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Question 2. Are there any Pokémon that\n"
	.string "can evolve twice at once?$"

EvolutionTest_Text_5:
# 71 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Nincada!$"

EvolutionTest_Text_6:
# 72 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "That's correct, Nincada evolves into\n"
	.string "both Shedinja and Ninjask$"

EvolutionTest_Text_7:
# 73 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "You're doing great, okay final question$"

EvolutionTest_Text_8:
# 74 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Do some Pokémon only evolve through\n"
	.string "trade?$"

EvolutionTest_Text_9:
# 76 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "I'm sorry that's wrong. Keep reading up\n"
	.string "on evolution and you'll get there$"

EvolutionTest_Text_10:
# 80 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Correct with the discovery of a Link\n"
	.string "Stone you no longer have to trade\l"
	.string "certain Pokémon.$"

EvolutionTest_Text_11:
# 87 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "That's stupid how can a Pokémon evolve\n"
	.string "into two Pokémon?$"

EvolutionTest_Text_12:
# 88 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "I'm sorry that's incorrect. Keep\n"
	.string "learning then come back and try again.$"

EvolutionTest_Text_13:
# 96 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Correct, Eevee is just one of many$"

EvolutionTest_Text_14:
# 97 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Maybe you should study some more and\n"
	.string "try again.$"

CompletedEvolutionTest_Text_0:
# 104 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

CompletedEvolutionTest_Text_1:
# 106 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Recieved Evolution Patch. This shows\n"
	.string "you've passed the class.$"

CompletedEvolutionTest_Text_2:
# 113 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Bet you're happy I was here, I carried\n"
	.string "you through that.$"

FailedEvolutionTest_Text_0:
# 127 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

GranitePeak_GivePlayer_Eevee_Text_0:
# 155 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Recieved Eevee$"

GranitePeak_GivePlayer_Eevee_Text_1:
# 164 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

EvolutionBoy1_Intro::
# 209 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Did you know Pokémon can learn move\n"
	.string "faster by not being evolved.$"

EvolutionBoy1_Outro::
# 213 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "It can help make a Pokémon stronger.$"

PostBattle_EvolutionBoy1::
# 217 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Some evolution lines can only learn\n"
	.string "moves before they evolve.$"

EvolutionBoy2_Intro::
# 221 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "You can use some items to evolve\n"
	.string "Pokémon, but did you know some items\l"
	.string "can be used to stop evolution or make\l"
	.string "non evolved Pokémon stronger.$"

EvolutionBoy2_Outro::
# 225 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Wow, I thought they would be\n"
	.string "unstoppable.$"

PostBattle_EvolutionBoy2::
# 229 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Eviolite is an incredible item that\n"
	.string "improves defence on Pokémon that can\l"
	.string "evolve.$"

EvolutionGirl_Intro::
# 233 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Some Pokémon can evolve in many\n"
	.string "different ways.$"

EvolutionGirl_Outro::
# 237 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "Losing doesn't help them evolve though.$"

PostBattle_EvolutionGirl::
# 241 "data/maps/GranitePeak_School_EvolutionClass/scripts.pory"
	.string "A Pokémon can complete change\n"
	.string "depending on how it evolves.$"
