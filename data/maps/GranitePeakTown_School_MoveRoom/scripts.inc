GranitePeakTown_School_MoveRoom_MapScripts::
	.byte 0


GranitePeakTown_School_MoveClass_Teacher::
# 5 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	lockall
# 6 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 2
	goto_if_le GranitePeakTown_School_MoveClass_Teacher_2
GranitePeakTown_School_MoveClass_Teacher_1:
# 10 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 3
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_5
GranitePeakTown_School_MoveClass_Teacher_4:
# 31 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 4
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_8
GranitePeakTown_School_MoveClass_Teacher_7:
# 41 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 5
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_14
GranitePeakTown_School_MoveClass_Teacher_13:
# 44 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	releaseall
	return

GranitePeakTown_School_MoveClass_Teacher_2:
# 7 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_0
# 8 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_1
	goto GranitePeakTown_School_MoveClass_Teacher_1

GranitePeakTown_School_MoveClass_Teacher_5:
# 11 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_2, MSGBOX_YESNO
# 12 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_11
GranitePeakTown_School_MoveClass_Teacher_10:
# 27 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_19
	goto GranitePeakTown_School_MoveClass_Teacher_4

GranitePeakTown_School_MoveClass_Teacher_8:
# 32 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_7, MSGBOX_YESNO
# 33 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_17
GranitePeakTown_School_MoveClass_Teacher_16:
# 37 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_MoveClass_Teacher_21
	goto GranitePeakTown_School_MoveClass_Teacher_7

GranitePeakTown_School_MoveClass_Teacher_11:
# 13 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_3
# 14 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_4, MSGBOX_AUTOCLOSE
# 15 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised_MoveClass
# 16 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	applymovement 4, Movement_Surprised_MoveClass
# 18 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	waitmovement 4
# 19 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	addobject 5
# 20 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setobjectxy 5, 6, 10
# 21 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	applymovement 5, Movement_MatAppearing_MoveClass
# 22 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	waitmovement 5
# 23 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 4
# 24 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_5, MSGBOX_AUTOCLOSE
# 25 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_Move_Quiz
	goto GranitePeakTown_School_MoveClass_Teacher_10

GranitePeakTown_School_MoveClass_Teacher_14:
# 42 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_8
	goto GranitePeakTown_School_MoveClass_Teacher_13

GranitePeakTown_School_MoveClass_Teacher_17:
# 34 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_3, MSGBOX_AUTOCLOSE
# 35 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_Move_Quiz
	goto GranitePeakTown_School_MoveClass_Teacher_16

GranitePeakTown_School_MoveClass_Teacher_19:
# 28 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_6
	goto GranitePeakTown_School_MoveClass_Teacher_4

GranitePeakTown_School_MoveClass_Teacher_21:
# 38 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeakTown_School_MoveClass_Teacher_Text_6
	goto GranitePeakTown_School_MoveClass_Teacher_7


GranitePeak_School_Move_Quiz::
# 48 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 49 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_0, MSGBOX_YESNO
# 50 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_3
GranitePeak_School_Move_Quiz_1:
# 80 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_7
	return

GranitePeak_School_Move_Quiz_2:
# 52 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_1
# 53 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_2
# 54 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_3, MSGBOX_YESNO
# 55 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_12
GranitePeak_School_Move_Quiz_10:
# 73 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_16
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_3:
# 50 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_2
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_6:
# 82 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_14
# 83 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_15
# 84 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	return

GranitePeak_School_Move_Quiz_7:
# 80 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_6
	return

GranitePeak_School_Move_Quiz_11:
# 56 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_4
# 57 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_5
# 58 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_6, MSGBOX_YESNO
# 59 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_21
GranitePeak_School_Move_Quiz_19:
# 66 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_25
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_12:
# 55 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_11
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_15:
# 75 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_12
# 76 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_13
# 77 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_16:
# 73 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_15
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_20:
# 61 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_7
# 62 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_8
# 63 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_9
# 64 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_MoveQuiz_Passsed
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_21:
# 59 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_20
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_24:
# 68 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_10
# 69 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_11
# 70 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_25:
# 66 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_24
	goto GranitePeak_School_Move_Quiz_10


GranitePeak_School_MoveQuiz_Failed::
# 89 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Failed_Text_0
# 90 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 91 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	releaseall
	return


GranitePeak_School_MoveQuiz_Passsed::
# 95 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 96 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_0
# 97 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	giveitem ITEM_MOVES_PATCH
# 99 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_1
# 100 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_2
# 101 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	giveitem ITEM_TM27
# 103 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 5
# 105 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_3, MSGBOX_AUTOCLOSE
# 106 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	applymovement 5, Movement_Mat_Leaves
# 107 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	removeobject 5
# 108 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	setflag FLAG_HIDE_MOVES_ROOM
# 109 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	releaseall
	return


GranitePeak_School_Mat_Move_Room::
# 113 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	lockall
# 114 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox GranitePeak_School_Mat_Move_Room_Text_0
# 115 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	releaseall
	return


GranitePeak_MoveClass_Girl1::
# 120 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	trainerbattle_single TRAINER_MOVEGIRL1, MoveGirl1_Intro, MoveGirl1_Outro, MoveStudent_Beaten
# 121 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox PostBattle_MoveGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Girl2::
# 126 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	trainerbattle_single TRAINER_MOVEGIRL2, MoveGirl2_Intro, MoveGirl2_Outro, MoveStudent_Beaten
# 127 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox PostBattle_MoveGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Boy::
# 132 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	trainerbattle_single TRAINER_MOVEBOY, MoveBoy_Intro, MoveBoy_Outro, MoveStudent_Beaten
# 133 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	msgbox PostBattle_MoveBoy, MSGBOX_AUTOCLOSE
	return


MoveStudent_Beaten::
# 137 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	addvar VAR_MOVE_ROOM_STUDENTS, 1
# 138 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	call Increase_Trainers_Beaten
	return


# 142 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
Movement_Surprised_MoveClass:
# 143 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	emote_exclamation_mark
	step_end

# 146 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
Movement_MatAppearing_MoveClass:
# 147 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_up
# 148 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_up
# 149 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_up
# 150 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_up
# 151 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_up
	step_end

# 154 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
Movement_Mat_Leaves:
# 155 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	jump_in_place_down
# 156 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_down
# 157 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_down
# 158 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_down
# 159 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	walk_fast_down
	step_end

GranitePeakTown_School_MoveClass_Teacher_Text_0:
# 7 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Making sure your Pokémon has the right\n"
	.string "moves is very important. A mix of strong\l"
	.string "attacking moves, a range of types and\l"
	.string "status could go a long way.$"

GranitePeakTown_School_MoveClass_Teacher_Text_1:
# 8 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Speak to some of my students and laern\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeakTown_School_MoveClass_Teacher_Text_2:
# 11 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeakTown_School_MoveClass_Teacher_Text_3:
# 13 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Fantastic let's begin.$"

GranitePeakTown_School_MoveClass_Teacher_Text_4:
# 14 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "WAIT I'M READY TO!$"

GranitePeakTown_School_MoveClass_Teacher_Text_5:
# 24 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Thanks for waiting. I'm ready to take\n"
	.string "the quiz. I'll only need one more patch\l"
	.string "after this!$"

GranitePeakTown_School_MoveClass_Teacher_Text_6:
# 28 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "No problem dear. Come back when you are\n"
	.string "ready.$"

GranitePeakTown_School_MoveClass_Teacher_Text_7:
# 32 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Ready to try the test again?$"

GranitePeakTown_School_MoveClass_Teacher_Text_8:
# 42 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Knowing what different moves can do\n"
	.string "will help you become the very best.$"

GranitePeak_School_Move_Quiz_Text_0:
# 49 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Question 1.\n"
	.string "STAB will boost a moves power by 1.3x?$"

GranitePeak_School_Move_Quiz_Text_1:
# 52 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "That's false it's 50% stronger!$"

GranitePeak_School_Move_Quiz_Text_2:
# 53 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "That's right it will be 1.5x.$"

GranitePeak_School_Move_Quiz_Text_3:
# 54 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Question 2.\n"
	.string "Flying Press counts as two types?$"

GranitePeak_School_Move_Quiz_Text_4:
# 56 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "It acts as both a Fighting and Flying\n"
	.string "type move!$"

GranitePeak_School_Move_Quiz_Text_5:
# 57 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Correct! It kets you have double the\n"
	.string "attack choice with one single move\l"
	.string "slot.$"

GranitePeak_School_Move_Quiz_Text_6:
# 58 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Okay Final Question\n"
	.string "Grass Pokémon are immune to Powder\l"
	.string "moves?$"

GranitePeak_School_Move_Quiz_Text_7:
# 61 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Grass, Overcoat and Pokémon with\n"
	.string "Safety Goggles$"

GranitePeak_School_Move_Quiz_Text_8:
# 62 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "That's correct, there are lots of ways\n"
	.string "to be immune to powder moves.$"

GranitePeak_School_Move_Quiz_Text_9:
# 63 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Good job to you both!$"

GranitePeak_School_Move_Quiz_Text_10:
# 68 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Of course not, only Pokémon with the\n"
	.string "Overcoat ability are immune.$"

GranitePeak_School_Move_Quiz_Text_11:
# 69 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Not quite, but you're close. Keep\n"
	.string "learning you'll get there.$"

GranitePeak_School_Move_Quiz_Text_12:
# 75 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "How can a move have two types?$"

GranitePeak_School_Move_Quiz_Text_13:
# 76 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Take a look into Hawlucha, it's got some\n"
	.string "incredible moves.$"

GranitePeak_School_Move_Quiz_Text_14:
# 82 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "It's twice as strong$"

GranitePeak_School_Move_Quiz_Text_15:
# 83 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "That's Incorrect. Only Adaptability\n"
	.string "Pokémon will gain twice the power$"

GranitePeak_School_MoveQuiz_Failed_Text_0:
# 89 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

GranitePeak_School_MoveQuiz_Passsed_Text_0:
# 96 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Congratulations to you both you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_MoveQuiz_Passsed_Text_1:
# 99 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeak_School_MoveQuiz_Passsed_Text_2:
# 100 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Take this TM as well$"

GranitePeak_School_MoveQuiz_Passsed_Text_3:
# 105 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "One more to go and then I can win the\n"
	.string "tournament$"

GranitePeak_School_Mat_Move_Room_Text_0:
# 114 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I've learnt so much to improve my team!$"

MoveGirl1_Intro::
# 163 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "The right move is very important! I\n"
	.string "using them to stop the opponent from\l"
	.string "hitting back hard$"

MoveGirl1_Outro::
# 167 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I just going to switch out of this\n"
	.string "class.$"

PostBattle_MoveGirl1::
# 171 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Switch out moves allow you to keep\n"
	.string "momentum going.$"

MoveGirl2_Intro::
# 175 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I've worked out the perfect technique\n"
	.string "to win every fight.$"

MoveGirl2_Outro::
# 179 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I just need more Pokémon to fill it out.$"

PostBattle_MoveGirl2::
# 183 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I'll become unstoppable I just need to\n"
	.string "catch more Pokémon.$"

MoveBoy_Intro::
# 187 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Can't win if you're asleep!$"

MoveBoy_Outro::
# 191 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "Right, Okay....$"

PostBattle_MoveBoy::
# 195 "data/maps/GranitePeakTown_School_MoveRoom/scripts.pory"
	.string "I need to find a mushroom Pokémon so I\n"
	.string "can use Spore.$"
