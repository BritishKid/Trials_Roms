GranitePeak_School_Moves_MapScripts::
	.byte 0


Granite_Peak_School_MoveClass_Teacher::
	lockall
	compare VAR_MOVE_ROOM_STUDENTS, 2
	goto_if_le Granite_Peak_School_MoveClass_Teacher_2
Granite_Peak_School_MoveClass_Teacher_1:
	compare VAR_MOVE_ROOM_STUDENTS, 3
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_5
Granite_Peak_School_MoveClass_Teacher_4:
	compare VAR_MOVE_ROOM_STUDENTS, 4
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_8
Granite_Peak_School_MoveClass_Teacher_7:
	compare VAR_MOVE_ROOM_STUDENTS, 5
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_14
Granite_Peak_School_MoveClass_Teacher_13:
	releaseall
	return

Granite_Peak_School_MoveClass_Teacher_2:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_0
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_1
	goto Granite_Peak_School_MoveClass_Teacher_1

Granite_Peak_School_MoveClass_Teacher_5:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_11
Granite_Peak_School_MoveClass_Teacher_10:
	compare VAR_RESULT, NO
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_19
	goto Granite_Peak_School_MoveClass_Teacher_4

Granite_Peak_School_MoveClass_Teacher_8:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_7, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_17
Granite_Peak_School_MoveClass_Teacher_16:
	compare VAR_RESULT, NO
	goto_if_eq Granite_Peak_School_MoveClass_Teacher_21
	goto Granite_Peak_School_MoveClass_Teacher_7

Granite_Peak_School_MoveClass_Teacher_11:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_3
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_4, MSGBOX_AUTOCLOSE
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Surprised_MoveClass
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 4, Movement_Surprised_MoveClass
	waitmovement 4
	addobject 5
	setobjectxy 5, 6, 10
	applymovement 5, Movement_MatAppearing_MoveClass
	waitmovement 5
	setvar VAR_MOVE_ROOM_STUDENTS, 4
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_5, MSGBOX_AUTOCLOSE
	call GranitePeak_School_Move_Quiz
	goto Granite_Peak_School_MoveClass_Teacher_10

Granite_Peak_School_MoveClass_Teacher_14:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_8
	goto Granite_Peak_School_MoveClass_Teacher_13

Granite_Peak_School_MoveClass_Teacher_17:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_3, MSGBOX_AUTOCLOSE
	call GranitePeak_School_Move_Quiz
	goto Granite_Peak_School_MoveClass_Teacher_16

Granite_Peak_School_MoveClass_Teacher_19:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_6
	goto Granite_Peak_School_MoveClass_Teacher_4

Granite_Peak_School_MoveClass_Teacher_21:
	msgbox Granite_Peak_School_MoveClass_Teacher_Text_6
	goto Granite_Peak_School_MoveClass_Teacher_7


GranitePeak_School_Move_Quiz::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
	msgbox GranitePeak_School_Move_Quiz_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_3
GranitePeak_School_Move_Quiz_1:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_7
	return

GranitePeak_School_Move_Quiz_2:
	msgbox GranitePeak_School_Move_Quiz_Text_1
	msgbox GranitePeak_School_Move_Quiz_Text_2
	msgbox GranitePeak_School_Move_Quiz_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_12
GranitePeak_School_Move_Quiz_10:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_16
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_3:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_2
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_6:
	msgbox GranitePeak_School_Move_Quiz_Text_14
	msgbox GranitePeak_School_Move_Quiz_Text_15
	call GranitePeak_School_MoveQuiz_Failed
	return

GranitePeak_School_Move_Quiz_7:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_6
	return

GranitePeak_School_Move_Quiz_11:
	msgbox GranitePeak_School_Move_Quiz_Text_4
	msgbox GranitePeak_School_Move_Quiz_Text_5
	msgbox GranitePeak_School_Move_Quiz_Text_6, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Move_Quiz_21
GranitePeak_School_Move_Quiz_19:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Move_Quiz_25
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_12:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_11
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_15:
	msgbox GranitePeak_School_Move_Quiz_Text_12
	msgbox GranitePeak_School_Move_Quiz_Text_13
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_16:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_15
	goto GranitePeak_School_Move_Quiz_1

GranitePeak_School_Move_Quiz_20:
	msgbox GranitePeak_School_Move_Quiz_Text_7
	msgbox GranitePeak_School_Move_Quiz_Text_8
	msgbox GranitePeak_School_Move_Quiz_Text_9
	call GranitePeak_School_MoveQuiz_Passsed
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_21:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_20
	goto GranitePeak_School_Move_Quiz_19

GranitePeak_School_Move_Quiz_24:
	msgbox GranitePeak_School_Move_Quiz_Text_10
	msgbox GranitePeak_School_Move_Quiz_Text_11
	call GranitePeak_School_MoveQuiz_Failed
	goto GranitePeak_School_Move_Quiz_10

GranitePeak_School_Move_Quiz_25:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Move_Quiz_24
	goto GranitePeak_School_Move_Quiz_10


GranitePeak_School_MoveQuiz_Failed::
	msgbox GranitePeak_School_MoveQuiz_Failed_Text_0
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	releaseall
	return


GranitePeak_School_MoveQuiz_Passsed::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_1
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_2
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_3
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM27
	setvar VAR_MOVE_ROOM_STUDENTS, 5
	setflag FLAG_MOVE_PATCH_EARNT
	msgbox GranitePeak_School_MoveQuiz_Passsed_Text_4, MSGBOX_AUTOCLOSE
	applymovement 5, Movement_Mat_Leaves
	removeobject 5
	setflag FLAG_HIDE_MOVES_ROOM
	releaseall
	return


GranitePeak_School_Mat_Move_Room::
	lockall
	msgbox GranitePeak_School_Mat_Move_Room_Text_0
	releaseall
	return


GranitePeak_MoveClass_Girl1::
	trainerbattle_single TRAINER_MOVEGIRL1, MoveGirl1_Intro, MoveGirl1_Outro, MoveStudent_Beaten
	msgbox PostBattle_MoveGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Girl2::
	trainerbattle_single TRAINER_MOVEGIRL2, MoveGirl2_Intro, MoveGirl2_Outro, MoveStudent_Beaten
	msgbox PostBattle_MoveGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_MoveClass_Boy::
	trainerbattle_single TRAINER_MOVEBOY, MoveBoy_Intro, MoveBoy_Outro, MoveStudent_Beaten
	msgbox PostBattle_MoveBoy, MSGBOX_AUTOCLOSE
	return


MoveStudent_Beaten::
	compare VAR_MOVE_ROOM_STUDENTS, 2
	goto_if_eq MoveStudent_Beaten_2
MoveStudent_Beaten_1:
	compare VAR_MOVE_ROOM_STUDENTS, 1
	goto_if_eq MoveStudent_Beaten_5
MoveStudent_Beaten_4:
	compare VAR_MOVE_ROOM_STUDENTS, 0
	goto_if_eq MoveStudent_Beaten_7
	return

MoveStudent_Beaten_2:
	setvar VAR_MOVE_ROOM_STUDENTS, 3
	goto MoveStudent_Beaten_1

MoveStudent_Beaten_5:
	setvar VAR_MOVE_ROOM_STUDENTS, 2
	goto MoveStudent_Beaten_4

MoveStudent_Beaten_7:
	setvar VAR_MOVE_ROOM_STUDENTS, 1
	return


Movement_Surprised_MoveClass:
	emote_exclamation_mark
	step_end

Movement_MatAppearing_MoveClass:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_Mat_Leaves:
	jump_in_place_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

Granite_Peak_School_MoveClass_Teacher_Text_0:
	.string "Making sure your Pokémon has the right\n"
	.string "moves is very important. A mix of strong\l"
	.string "attacking moves, a range of types and\l"
	.string "status could go a long way.$"

Granite_Peak_School_MoveClass_Teacher_Text_1:
	.string "Speak to some of my students and laern\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

Granite_Peak_School_MoveClass_Teacher_Text_2:
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

Granite_Peak_School_MoveClass_Teacher_Text_3:
	.string "Fantastic let's begin.$"

Granite_Peak_School_MoveClass_Teacher_Text_4:
	.string "WAIT I'M READY TO!$"

Granite_Peak_School_MoveClass_Teacher_Text_5:
	.string "Thanks for waiting. I'm ready to take\n"
	.string "the quiz. I'll only need one more patch\l"
	.string "after this!$"

Granite_Peak_School_MoveClass_Teacher_Text_6:
	.string "No problem dear. Come back when you are\n"
	.string "ready.$"

Granite_Peak_School_MoveClass_Teacher_Text_7:
	.string "Ready to try the test again?$"

Granite_Peak_School_MoveClass_Teacher_Text_8:
	.string "Knowing what different moves can do\n"
	.string "will help you become the very best.$"

GranitePeak_School_Move_Quiz_Text_0:
	.string "Question 1.\n"
	.string "STAB will boost a moves power by 1.3x?$"

GranitePeak_School_Move_Quiz_Text_1:
	.string "That's false it's 50% stronger!$"

GranitePeak_School_Move_Quiz_Text_2:
	.string "That's right it will be 1.5x.$"

GranitePeak_School_Move_Quiz_Text_3:
	.string "Question 2.\n"
	.string "Flying Press counts as two types?$"

GranitePeak_School_Move_Quiz_Text_4:
	.string "It acts as both a Fighting and Flying\n"
	.string "type move!$"

GranitePeak_School_Move_Quiz_Text_5:
	.string "Correct! It kets you have double the\n"
	.string "attack choice with one single move\l"
	.string "slot.$"

GranitePeak_School_Move_Quiz_Text_6:
	.string "Okay Final Question\n"
	.string "Grass Pokemon are immune to Powder\l"
	.string "moves?$"

GranitePeak_School_Move_Quiz_Text_7:
	.string "Grass, Overcoat and pokemon with\n"
	.string "Safety Goggles$"

GranitePeak_School_Move_Quiz_Text_8:
	.string "That's correct, there are lots of ways\n"
	.string "to be immune to powder moves.$"

GranitePeak_School_Move_Quiz_Text_9:
	.string "Good job to you both!$"

GranitePeak_School_Move_Quiz_Text_10:
	.string "Of course not, only Pokemon with the\n"
	.string "Overcoat ability are immune.$"

GranitePeak_School_Move_Quiz_Text_11:
	.string "Not quite, but you're close. Keep\n"
	.string "learning you'll get there.$"

GranitePeak_School_Move_Quiz_Text_12:
	.string "How can a move have two types?$"

GranitePeak_School_Move_Quiz_Text_13:
	.string "Take a look into Hawlucha, it's got some\n"
	.string "incredible moves.$"

GranitePeak_School_Move_Quiz_Text_14:
	.string "It's twice as strong$"

GranitePeak_School_Move_Quiz_Text_15:
	.string "That's Incorrect. Only Adaptability\n"
	.string "Pokemon will gain twice the power$"

GranitePeak_School_MoveQuiz_Failed_Text_0:
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

GranitePeak_School_MoveQuiz_Passsed_Text_0:
	.string "Congratulations to you both you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_MoveQuiz_Passsed_Text_1:
	.string "Recieved Move Patch. This shows you've\n"
	.string "passed the class.$"

GranitePeak_School_MoveQuiz_Passsed_Text_2:
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeak_School_MoveQuiz_Passsed_Text_3:
	.string "Take this TM as well$"

GranitePeak_School_MoveQuiz_Passsed_Text_4:
	.string "One more to go and then I can win the\n"
	.string "tournament$"

GranitePeak_School_Mat_Move_Room_Text_0:
	.string "I've learnt so much to improve my team!$"

MoveGirl1_Intro::
	.string "The right move is very important! I\n"
	.string "using them to stop the opponent from\l"
	.string "hitting back hard$"

MoveGirl1_Outro::
	.string "I just going to switch out of this\n"
	.string "class.$"

PostBattle_MoveGirl1::
	.string "Switch out moves allow you to keep\n"
	.string "momentum going.$"

MoveGirl2_Intro::
	.string "I've worked out the perfect technique\n"
	.string "to win every fight.$"

MoveGirl2_Outro::
	.string "I just need more Pokémon to fill it out.$"

PostBattle_MoveGirl2::
	.string "I'll become unstoppable I just need to\n"
	.string "catch more Pokémon.$"

MoveBoy_Intro::
	.string "Can't win if you're asleep!$"

MoveBoy_Outro::
	.string "Right, Okay....$"

PostBattle_MoveBoy::
	.string "I need to find a mushroom Pokémon so I\n"
	.string "can use Spore.$"
