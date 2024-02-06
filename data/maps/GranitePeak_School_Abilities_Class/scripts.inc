GranitePeak_School_Abilities_Class_MapScripts::
	.byte 0


GranitePeak_AbilityClass_Teacher::
	lockall
	compare VAR_ABILITY_ROOM_STUDENTS, 2
	goto_if_le GranitePeak_AbilityClass_Teacher_2
GranitePeak_AbilityClass_Teacher_1:
	compare VAR_ABILITY_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_AbilityClass_Teacher_5
GranitePeak_AbilityClass_Teacher_4:
	compare VAR_ABILITY_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_AbilityClass_Teacher_8
GranitePeak_AbilityClass_Teacher_7:
	releaseall
	return

GranitePeak_AbilityClass_Teacher_2:
	msgbox GranitePeak_AbilityClass_Teacher_Text_0
	msgbox GranitePeak_AbilityClass_Teacher_Text_1
	goto GranitePeak_AbilityClass_Teacher_1

GranitePeak_AbilityClass_Teacher_5:
	msgbox GranitePeak_AbilityClass_Teacher_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_AbilityClass_Teacher_11
GranitePeak_AbilityClass_Teacher_10:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_AbilityClass_Teacher_13
	goto GranitePeak_AbilityClass_Teacher_4

GranitePeak_AbilityClass_Teacher_8:
	msgbox GranitePeak_AbilityClass_Teacher_Text_5
	goto GranitePeak_AbilityClass_Teacher_7

GranitePeak_AbilityClass_Teacher_11:
	msgbox GranitePeak_AbilityClass_Teacher_Text_3
	call GranitePeak_School_Ability_Quiz
	goto GranitePeak_AbilityClass_Teacher_10

GranitePeak_AbilityClass_Teacher_13:
	msgbox GranitePeak_AbilityClass_Teacher_Text_4
	goto GranitePeak_AbilityClass_Teacher_4


GranitePeak_School_Ability_Quiz::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
	msgbox GranitePeak_School_Ability_Quiz_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_3
GranitePeak_School_Ability_Quiz_1:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_7
	return

GranitePeak_School_Ability_Quiz_2:
	msgbox GranitePeak_School_Ability_Quiz_Text_1
	msgbox GranitePeak_School_Ability_Quiz_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_12
GranitePeak_School_Ability_Quiz_10:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_16
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_3:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_2
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_6:
	msgbox GranitePeak_School_Ability_Quiz_Text_9
	call GranitePeak_School_AbilityQuiz_Failed
	return

GranitePeak_School_Ability_Quiz_7:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_6
	return

GranitePeak_School_Ability_Quiz_11:
	msgbox GranitePeak_School_Ability_Quiz_Text_3
	msgbox GranitePeak_School_Ability_Quiz_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_21
GranitePeak_School_Ability_Quiz_19:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_25
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_12:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_11
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_15:
	msgbox GranitePeak_School_Ability_Quiz_Text_8
	call GranitePeak_School_AbilityQuiz_Failed
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_16:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_15
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_20:
	msgbox GranitePeak_School_Ability_Quiz_Text_5
	msgbox GranitePeak_School_Ability_Quiz_Text_6
	call GranitePeak_School_AbilityQuiz_Passed
	goto GranitePeak_School_Ability_Quiz_19

GranitePeak_School_Ability_Quiz_21:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_20
	goto GranitePeak_School_Ability_Quiz_19

GranitePeak_School_Ability_Quiz_24:
	msgbox GranitePeak_School_Ability_Quiz_Text_7
	call GranitePeak_School_AbilityQuiz_Failed
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_25:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_24
	goto GranitePeak_School_Ability_Quiz_10


GranitePeak_School_AbilityQuiz_Passed::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	setvar VAR_ABILITY_ROOM_STUDENTS, 4
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_0
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_ABILITY_PATCH_EARNT
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_1
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_ABILITY_CAPSULE, 2
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_2
	return


GranitePeak_School_AbilityQuiz_Failed::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	msgbox GranitePeak_School_AbilityQuiz_Failed_Text_0
	return


GranitePeak_AbilityClass_Boy1::
	trainerbattle_single TRAINER_ABILITYBOY1, AbilityBoy1_Intro, AbilityBoy1_Outro, AbilityStudent_Beaten
	msgbox PostBattle_AbilityBoy1, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy2::
	trainerbattle_single TRAINER_ABILITYBOY2, AbilityBoy2_Intro, AbilityBoy2_Outro, AbilityStudent_Beaten
	msgbox PostBattle_AbilityBoy2, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy3::
	trainerbattle_single TRAINER_ABILITYBOY3, AbilityBoy3_Intro, AbilityBoy3_Outro, AbilityStudent_Beaten
	msgbox PostBattle_AbilityBoy3, MSGBOX_AUTOCLOSE
	return


AbilityStudent_Beaten::
	compare VAR_ABILITY_ROOM_STUDENTS, 2
	goto_if_eq AbilityStudent_Beaten_2
AbilityStudent_Beaten_1:
	compare VAR_ABILITY_ROOM_STUDENTS, 1
	goto_if_eq AbilityStudent_Beaten_5
AbilityStudent_Beaten_4:
	compare VAR_ABILITY_ROOM_STUDENTS, 0
	goto_if_eq AbilityStudent_Beaten_7
	return

AbilityStudent_Beaten_2:
	setvar VAR_ABILITY_ROOM_STUDENTS, 3
	goto AbilityStudent_Beaten_1

AbilityStudent_Beaten_5:
	setvar VAR_ABILITY_ROOM_STUDENTS, 2
	goto AbilityStudent_Beaten_4

AbilityStudent_Beaten_7:
	setvar VAR_ABILITY_ROOM_STUDENTS, 1
	return


GranitePeak_AbilityClass_Teacher_Text_0:
	.string "Abilities are what make some Pokemon\n"
	.string "stronger than others.$"

GranitePeak_AbilityClass_Teacher_Text_1:
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeak_AbilityClass_Teacher_Text_2:
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_AbilityClass_Teacher_Text_3:
	.string "Fantastic let's begin.$"

GranitePeak_AbilityClass_Teacher_Text_4:
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeak_AbilityClass_Teacher_Text_5:
	.string "Getting the right ability can often\n"
	.string "make the difference.$"

GranitePeak_School_Ability_Quiz_Text_0:
	.string "Question 1.\n"
	.string "When Pokemon evolve they always keep\l"
	.string "their ability?$"

GranitePeak_School_Ability_Quiz_Text_1:
	.string "Correct! Well done$"

GranitePeak_School_Ability_Quiz_Text_2:
	.string "Question 2.\n"
	.string "Abilities like blaze apply their boost\l"
	.string "when under 50% HP?$"

GranitePeak_School_Ability_Quiz_Text_3:
	.string "Correct! The boost isn't applied until\n"
	.string "the user is under 1/3 of their HP.$"

GranitePeak_School_Ability_Quiz_Text_4:
	.string "Okay Final Question\n"
	.string "Abilities are only useful in battle?$"

GranitePeak_School_Ability_Quiz_Text_5:
	.string "That's right! Some abilities have field\n"
	.string "effects.$"

GranitePeak_School_Ability_Quiz_Text_6:
	.string "Incredible! You passed with ease$"

GranitePeak_School_Ability_Quiz_Text_7:
	.string "Sorry that isn't correct.$"

GranitePeak_School_Ability_Quiz_Text_8:
	.string "That's Incorrect.$"

GranitePeak_School_Ability_Quiz_Text_9:
	.string "Sorry that's wrong, sometimes Pokemon\n"
	.string "don't share abilities with their\l"
	.string "evolutions.$"

GranitePeak_School_AbilityQuiz_Passed_Text_0:
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_AbilityQuiz_Passed_Text_1:
	.string "I think you should also have these!$"

GranitePeak_School_AbilityQuiz_Passed_Text_2:
	.string "Good luck collecting the other patches$"

GranitePeak_School_AbilityQuiz_Failed_Text_0:
	.string "Talk to some students and reach some resources. Then come back and try again$"

AbilityBoy1_Intro::
	.string "Abilities can allow pokemon to gain new\n"
	.string "resitences or immunities$"

AbilityBoy1_Outro::
	.string "You've brought me back to ground$"

PostBattle_AbilityBoy1::
	.string "Abilities like Levitate can give\n"
	.string "immunities to ground, others like Storm\l"
	.string "Drain also boost stats.$"

AbilityBoy2_Intro::
	.string "The right weather or terrarain can\n"
	.string "boost certain moves$"

AbilityBoy2_Outro::
	.string "It must be raining on my face$"

PostBattle_AbilityBoy2::
	.string "Certain abilities or moves only work\n"
	.string "under weather or$"

AbilityBoy3_Intro::
	.string "I love using abilities to slow down my\n"
	.string "opponents$"

AbilityBoy3_Outro::
	.string "Not making contact does stop me$"

PostBattle_AbilityBoy3::
	.string "Some abilities can cause issues to your\n"
	.string "opponent when they make contact.$"
