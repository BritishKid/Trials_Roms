GranitePeak_School_Moves_MapScripts::
	.byte 0


Granite_Peak_School_MoveClass_Teacher::
# 5 "data/maps/GranitePeak_School_Moves/scripts.pory"
	lockall
# 6 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 2
	goto_if_le Granite_Peak_School_MoveClass_Teacher_2
Granite_Peak_School_MoveClass_Teacher_1:
# 10 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 3
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_5
Granite_Peak_School_MoveClass_Teacher_4:
# 31 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 4
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_8
Granite_Peak_School_MoveClass_Teacher_7:
# 41 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 5
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_14
Granite_Peak_School_MoveClass_Teacher_13:
# 44 "data/maps/GranitePeak_School_Moves/scripts.pory"
	releaseall
	return

Granite_Peak_School_MoveClass_Teacher_2:
# 7 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_0
# 8 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_1
	goto Granite_Peak_School_MoveClass_Teacher_1

Granite_Peak_School_MoveClass_Teacher_5:
# 11 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_2, MSGBOX_YESNO
# 12 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_11
Granite_Peak_School_MoveClass_Teacher_10:
# 27 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_19
	goto Granite_Peak_School_MoveClass_Teacher_4

Granite_Peak_School_MoveClass_Teacher_8:
# 32 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_7, MSGBOX_YESNO
# 33 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_17
Granite_Peak_School_MoveClass_Teacher_16:
# 37 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_21
	goto Granite_Peak_School_MoveClass_Teacher_7

Granite_Peak_School_MoveClass_Teacher_11:
# 13 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_3
# 14 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_4, MSGBOX_AUTOCLOSE
# 15 "data/maps/GranitePeak_School_Moves/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised_MoveClass
# 16 "data/maps/GranitePeak_School_Moves/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/GranitePeak_School_Moves/scripts.pory"
	applymovement 4, Movement_Surprised_MoveClass
# 18 "data/maps/GranitePeak_School_Moves/scripts.pory"
	waitmovement 4
# 19 "data/maps/GranitePeak_School_Moves/scripts.pory"
	addobject 5
# 20 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setobjectxy 5, 6, 10
# 21 "data/maps/GranitePeak_School_Moves/scripts.pory"
	applymovement 5, Movement_MatAppearing_MoveClass
# 22 "data/maps/GranitePeak_School_Moves/scripts.pory"
	waitmovement 5
# 23 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 4
# 24 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_5, MSGBOX_AUTOCLOSE
# 25 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_Move_Quiz
	goto Granite_Peak_School_MoveClass_Teacher_10

Granite_Peak_School_MoveClass_Teacher_14:
# 42 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_8
	goto Granite_Peak_School_MoveClass_Teacher_13

Granite_Peak_School_MoveClass_Teacher_17:
# 34 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_3, MSGBOX_AUTOCLOSE
# 35 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_Move_Quiz
	goto Granite_Peak_School_MoveClass_Teacher_16

Granite_Peak_School_MoveClass_Teacher_19:
# 28 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_6
	goto Granite_Peak_School_MoveClass_Teacher_4

Granite_Peak_School_MoveClass_Teacher_21:
# 38 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_6
	goto Granite_Peak_School_MoveClass_Teacher_7


GranitePeak_School_Move_Quiz::
# 48 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 49 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_0, MSGBOX_YESNO
# 50 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_3
GranitePeak_School_Move_Quiz_1:
# 80 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_7
	return

GranitePeak_School_Move_Quiz_2:
# 52 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_1
# 53 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_2
# 54 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_3, MSGBOX_YESNO
# 55 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_12
GranitePeak_School_Move_Quiz_10:
# 73 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_16
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_3:
# 50 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_2
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_6:
# 82 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_14
# 83 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_15
# 84 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	return

GranitePeak_School_Move_Quiz_7:
# 80 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_6
	return

GranitePeak_School_Move_Quiz_11:
# 56 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_4
# 57 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_5
# 58 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_6, MSGBOX_YESNO
# 59 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_21
GranitePeak_School_Move_Quiz_19:
# 66 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_25
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_12:
# 55 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_11
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_15:
# 75 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_12
# 76 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_13
# 77 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_16:
# 73 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_15
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_20:
# 61 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_7
# 62 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_8
# 63 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_9
# 64 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_MoveQuiz_Passsed
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_21:
# 59 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_20
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_24:
# 68 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_10
# 69 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Move_Quiz_Text_11
# 70 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_25:
# 66 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_24
	goto GranitePeak_School_Move_Quiz_10


GranitePeak_School_MoveQuiz_Failed::
# 89 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Failed_Text_0
# 90 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 91 "data/maps/GranitePeak_School_Moves/scripts.pory"
	releaseall
	return


GranitePeak_School_MoveQuiz_Passsed::
# 95 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 96 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_0
# 97 "data/maps/GranitePeak_School_Moves/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 98 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_1
# 99 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_2
# 100 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_3
# 101 "data/maps/GranitePeak_School_Moves/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 102 "data/maps/GranitePeak_School_Moves/scripts.pory"
	giveitem ITEM_TM27
# 103 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 5
# 104 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setflag FLAG_MOVE_PATCH_EARNT
# 105 "data/maps/GranitePeak_School_Moves/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_MOVE_PATCH
# 106 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_4, MSGBOX_AUTOCLOSE
# 107 "data/maps/GranitePeak_School_Moves/scripts.pory"
	applymovement 5, Movement_Mat_Leaves
# 108 "data/maps/GranitePeak_School_Moves/scripts.pory"
	removeobject 5
# 109 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setflag FLAG_HIDE_MOVES_ROOM
# 110 "data/maps/GranitePeak_School_Moves/scripts.pory"
	releaseall
	return


GranitePeak_School_Mat_Move_Room::
# 114 "data/maps/GranitePeak_School_Moves/scripts.pory"
	lockall
# 115 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox GranitePeak_School_Mat_Move_Room_Text_0
# 116 "data/maps/GranitePeak_School_Moves/scripts.pory"
	releaseall
	return


GranitePeak_MoveClass_Girl1::
# 121 "data/maps/GranitePeak_School_Moves/scripts.pory"
	trainerbattle_single TRAINER_MOVEGIRL1, MoveGirl1_Intro, MoveGirl1_Outro, MoveStudent_Beaten
# 122 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox PostBattle_MoveGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Girl2::
# 127 "data/maps/GranitePeak_School_Moves/scripts.pory"
	trainerbattle_single TRAINER_MOVEGIRL2, MoveGirl2_Intro, MoveGirl2_Outro, MoveStudent_Beaten
# 128 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox PostBattle_MoveGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Boy::
# 133 "data/maps/GranitePeak_School_Moves/scripts.pory"
	trainerbattle_single TRAINER_MOVEBOY, MoveBoy_Intro, MoveBoy_Outro, MoveStudent_Beaten
# 134 "data/maps/GranitePeak_School_Moves/scripts.pory"
	msgbox PostBattle_MoveBoy, MSGBOX_AUTOCLOSE
	return


MoveStudent_Beaten::
# 138 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 2
	goto_if_eq MoveStudent_Beaten_2
MoveStudent_Beaten_1:
# 141 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 1
	goto_if_eq MoveStudent_Beaten_5
MoveStudent_Beaten_4:
# 144 "data/maps/GranitePeak_School_Moves/scripts.pory"
	compare VAR_MOVE_ROOM_STUDENTS, 0
	goto_if_eq MoveStudent_Beaten_8
MoveStudent_Beaten_7:
# 147 "data/maps/GranitePeak_School_Moves/scripts.pory"
	call Increase_Trainers_Beaten
	return

MoveStudent_Beaten_2:
# 139 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 3
	goto MoveStudent_Beaten_1

MoveStudent_Beaten_5:
# 142 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 2
	goto MoveStudent_Beaten_4

MoveStudent_Beaten_8:
# 145 "data/maps/GranitePeak_School_Moves/scripts.pory"
	setvar VAR_MOVE_ROOM_STUDENTS, 1
	goto MoveStudent_Beaten_7


# 151 "data/maps/GranitePeak_School_Moves/scripts.pory"
Movement_Surprised_MoveClass:
# 152 "data/maps/GranitePeak_School_Moves/scripts.pory"
	emote_exclamation_mark
	step_end

# 155 "data/maps/GranitePeak_School_Moves/scripts.pory"
Movement_MatAppearing_MoveClass:
# 156 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_up
# 157 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_up
# 158 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_up
# 159 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_up
# 160 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_up
	step_end

# 163 "data/maps/GranitePeak_School_Moves/scripts.pory"
Movement_Mat_Leaves:
# 164 "data/maps/GranitePeak_School_Moves/scripts.pory"
	jump_in_place_down
# 165 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_down
# 166 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_down
# 167 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_down
# 168 "data/maps/GranitePeak_School_Moves/scripts.pory"
	walk_fast_down
	step_end

Granite_Peak_School_MoveClass_Teacher_Text_0:
# 7 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Making sure your Pokémon has the right\n"
	.string "moves is very important. A mix of strong\l"
	.string "attacking moves, a range of types and\l"
	.string "status could go a long way.$"

Granite_Peak_School_MoveClass_Teacher_Text_1:
# 8 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Speak to some of my students and laern\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

Granite_Peak_School_MoveClass_Teacher_Text_2:
# 11 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

Granite_Peak_School_MoveClass_Teacher_Text_3:
# 13 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Fantastic let's begin.$"

Granite_Peak_School_MoveClass_Teacher_Text_4:
# 14 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "WAIT I'M READY TO!$"

Granite_Peak_School_MoveClass_Teacher_Text_5:
# 24 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Thanks for waiting. I'm ready to take\n"
	.string "the quiz. I'll only need one more patch\l"
	.string "after this!$"

Granite_Peak_School_MoveClass_Teacher_Text_6:
# 28 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "No problem dear. Come back when you are\n"
	.string "ready.$"

Granite_Peak_School_MoveClass_Teacher_Text_7:
# 32 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Ready to try the test again?$"

Granite_Peak_School_MoveClass_Teacher_Text_8:
# 42 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Knowing what different moves can do\n"
	.string "will help you become the very best.$"

GranitePeak_School_Move_Quiz_Text_0:
# 49 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Question 1.\n"
	.string "STAB will boost a moves power by 1.3x?$"

GranitePeak_School_Move_Quiz_Text_1:
# 52 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "That's false it's 50% stronger!$"

GranitePeak_School_Move_Quiz_Text_2:
# 53 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "That's right it will be 1.5x.$"

GranitePeak_School_Move_Quiz_Text_3:
# 54 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Question 2.\n"
	.string "Flying Press counts as two types?$"

GranitePeak_School_Move_Quiz_Text_4:
# 56 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "It acts as both a Fighting and Flying\n"
	.string "type move!$"

GranitePeak_School_Move_Quiz_Text_5:
# 57 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Correct! It kets you have double the\n"
	.string "attack choice with one single move\l"
	.string "slot.$"

GranitePeak_School_Move_Quiz_Text_6:
# 58 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Okay Final Question\n"
	.string "Grass Pokémon are immune to Powder\l"
	.string "moves?$"

GranitePeak_School_Move_Quiz_Text_7:
# 61 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Grass, Overcoat and Pokémon with\n"
	.string "Safety Goggles$"

GranitePeak_School_Move_Quiz_Text_8:
# 62 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "That's correct, there are lots of ways\n"
	.string "to be immune to powder moves.$"

GranitePeak_School_Move_Quiz_Text_9:
# 63 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Good job to you both!$"

GranitePeak_School_Move_Quiz_Text_10:
# 68 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Of course not, only Pokémon with the\n"
	.string "Overcoat ability are immune.$"

GranitePeak_School_Move_Quiz_Text_11:
# 69 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Not quite, but you're close. Keep\n"
	.string "learning you'll get there.$"

GranitePeak_School_Move_Quiz_Text_12:
# 75 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "How can a move have two types?$"

GranitePeak_School_Move_Quiz_Text_13:
# 76 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Take a look into Hawlucha, it's got some\n"
	.string "incredible moves.$"

GranitePeak_School_Move_Quiz_Text_14:
# 82 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "It's twice as strong$"

GranitePeak_School_Move_Quiz_Text_15:
# 83 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "That's Incorrect. Only Adaptability\n"
	.string "Pokémon will gain twice the power$"

GranitePeak_School_MoveQuiz_Failed_Text_0:
# 89 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

GranitePeak_School_MoveQuiz_Passsed_Text_0:
# 96 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Congratulations to you both you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_MoveQuiz_Passsed_Text_1:
# 98 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Recieved Move Patch. This shows you've\n"
	.string "passed the class.$"

GranitePeak_School_MoveQuiz_Passsed_Text_2:
# 99 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeak_School_MoveQuiz_Passsed_Text_3:
# 100 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Take this TM as well$"

GranitePeak_School_MoveQuiz_Passsed_Text_4:
# 106 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "One more to go and then I can win the\n"
	.string "tournament$"

GranitePeak_School_Mat_Move_Room_Text_0:
# 115 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I've learnt so much to improve my team!$"

MoveGirl1_Intro::
# 172 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "The right move is very important! I\n"
	.string "using them to stop the opponent from\l"
	.string "hitting back hard$"

MoveGirl1_Outro::
# 176 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I just going to switch out of this\n"
	.string "class.$"

PostBattle_MoveGirl1::
# 180 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Switch out moves allow you to keep\n"
	.string "momentum going.$"

MoveGirl2_Intro::
# 184 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I've worked out the perfect technique\n"
	.string "to win every fight.$"

MoveGirl2_Outro::
# 188 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I just need more Pokémon to fill it out.$"

PostBattle_MoveGirl2::
# 192 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I'll become unstoppable I just need to\n"
	.string "catch more Pokémon.$"

MoveBoy_Intro::
# 196 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Can't win if you're asleep!$"

MoveBoy_Outro::
# 200 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "Right, Okay....$"

PostBattle_MoveBoy::
# 204 "data/maps/GranitePeak_School_Moves/scripts.pory"
	.string "I need to find a mushroom Pokémon so I\n"
	.string "can use Spore.$"
