GranitePeakTown_School_AbilityRoom_MapScripts::
	.byte 0


GranitePeakTown_School_AbilityClass_Teacher::
# 5 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	lockall
# 6 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 2
	goto_if_le GranitePeakTown_School_AbilityClass_Teacher_2
GranitePeakTown_School_AbilityClass_Teacher_1:
# 10 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 3
	goto_if_eq GranitePeakTown_School_AbilityClass_Teacher_5
GranitePeakTown_School_AbilityClass_Teacher_4:
# 21 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 4
	goto_if_eq GranitePeakTown_School_AbilityClass_Teacher_8
GranitePeakTown_School_AbilityClass_Teacher_7:
# 24 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	releaseall
	return

GranitePeakTown_School_AbilityClass_Teacher_2:
# 7 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_0
# 8 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_1
	goto GranitePeakTown_School_AbilityClass_Teacher_1

GranitePeakTown_School_AbilityClass_Teacher_5:
# 12 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_2, MSGBOX_YESNO
# 13 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_AbilityClass_Teacher_11
GranitePeakTown_School_AbilityClass_Teacher_10:
# 17 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_AbilityClass_Teacher_13
	goto GranitePeakTown_School_AbilityClass_Teacher_4

GranitePeakTown_School_AbilityClass_Teacher_8:
# 22 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_5
	goto GranitePeakTown_School_AbilityClass_Teacher_7

GranitePeakTown_School_AbilityClass_Teacher_11:
# 14 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_3
# 15 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call GranitePeakTown_School_Ability_Quiz
	goto GranitePeakTown_School_AbilityClass_Teacher_10

GranitePeakTown_School_AbilityClass_Teacher_13:
# 18 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityClass_Teacher_Text_4
	goto GranitePeakTown_School_AbilityClass_Teacher_4


GranitePeakTown_School_Ability_Quiz::
# 28 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 29 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_0, MSGBOX_YESNO
# 30 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Ability_Quiz_3
GranitePeakTown_School_Ability_Quiz_1:
# 55 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Ability_Quiz_7
	return

GranitePeakTown_School_Ability_Quiz_2:
# 32 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_1
# 33 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_2, MSGBOX_YESNO
# 34 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Ability_Quiz_12
GranitePeakTown_School_Ability_Quiz_10:
# 49 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Ability_Quiz_16
	goto GranitePeakTown_School_Ability_Quiz_1

GranitePeakTown_School_Ability_Quiz_3:
# 30 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_2
	goto GranitePeakTown_School_Ability_Quiz_1

GranitePeakTown_School_Ability_Quiz_6:
# 57 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_9
# 58 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call GranitePeakTown_School_AbilityQuiz_Failed
	return

GranitePeakTown_School_Ability_Quiz_7:
# 55 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_6
	return

GranitePeakTown_School_Ability_Quiz_11:
# 35 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_3
# 36 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_4, MSGBOX_YESNO
# 37 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Ability_Quiz_21
GranitePeakTown_School_Ability_Quiz_19:
# 43 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Ability_Quiz_25
	goto GranitePeakTown_School_Ability_Quiz_10

GranitePeakTown_School_Ability_Quiz_12:
# 34 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_11
	goto GranitePeakTown_School_Ability_Quiz_10

GranitePeakTown_School_Ability_Quiz_15:
# 51 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_8
# 52 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call GranitePeakTown_School_AbilityQuiz_Failed
	goto GranitePeakTown_School_Ability_Quiz_1

GranitePeakTown_School_Ability_Quiz_16:
# 49 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_15
	goto GranitePeakTown_School_Ability_Quiz_1

GranitePeakTown_School_Ability_Quiz_20:
# 39 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_5
# 40 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_6
# 41 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call GranitePeakTown_School_AbilityQuiz_Passed
	goto GranitePeakTown_School_Ability_Quiz_19

GranitePeakTown_School_Ability_Quiz_21:
# 37 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_20
	goto GranitePeakTown_School_Ability_Quiz_19

GranitePeakTown_School_Ability_Quiz_24:
# 45 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_Ability_Quiz_Text_7
# 46 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call GranitePeakTown_School_AbilityQuiz_Failed
	goto GranitePeakTown_School_Ability_Quiz_10

GranitePeakTown_School_Ability_Quiz_25:
# 43 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Ability_Quiz_24
	goto GranitePeakTown_School_Ability_Quiz_10


GranitePeakTown_School_AbilityQuiz_Passed::
# 63 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 64 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	setvar VAR_ABILITY_ROOM_STUDENTS, 4
# 65 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityQuiz_Passed_Text_0
# 66 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	giveitem ITEM_ABILITIES_PATCH, 1
# 68 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityQuiz_Passed_Text_1
# 69 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 2
# 70 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityQuiz_Passed_Text_2
	return


GranitePeakTown_School_AbilityQuiz_Failed::
# 74 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 75 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox GranitePeakTown_School_AbilityQuiz_Failed_Text_0
	return


GranitePeak_AbilityClass_Boy1::
# 79 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY1, AbilityBoy1_Intro, AbilityBoy1_Outro, AbilityStudent_Beaten
# 80 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox PostBattle_AbilityBoy1, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy2::
# 84 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY2, AbilityBoy2_Intro, AbilityBoy2_Outro, AbilityStudent_Beaten
# 85 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox PostBattle_AbilityBoy2, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy3::
# 89 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY3, AbilityBoy3_Intro, AbilityBoy3_Outro, AbilityStudent_Beaten
# 90 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	msgbox PostBattle_AbilityBoy3, MSGBOX_AUTOCLOSE
	return


AbilityStudent_Beaten::
# 95 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	addvar VAR_ABILITY_ROOM_STUDENTS, 1
# 96 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	call Increase_Trainers_Beaten
	return


GranitePeakTown_School_AbilityClass_Teacher_Text_0:
# 7 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Abilities are what make some Pokémon\n"
	.string "stronger than others.$"

GranitePeakTown_School_AbilityClass_Teacher_Text_1:
# 8 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeakTown_School_AbilityClass_Teacher_Text_2:
# 12 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeakTown_School_AbilityClass_Teacher_Text_3:
# 14 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Fantastic let's begin.$"

GranitePeakTown_School_AbilityClass_Teacher_Text_4:
# 18 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeakTown_School_AbilityClass_Teacher_Text_5:
# 22 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Getting the right ability can often\n"
	.string "make the difference.$"

GranitePeakTown_School_Ability_Quiz_Text_0:
# 29 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Question 1.\n"
	.string "When Pokémon evolve they always keep\l"
	.string "their ability?$"

GranitePeakTown_School_Ability_Quiz_Text_1:
# 32 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Correct! Well done$"

GranitePeakTown_School_Ability_Quiz_Text_2:
# 33 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Question 2.\n"
	.string "Abilities like blaze apply their boost\l"
	.string "when under 50% HP?$"

GranitePeakTown_School_Ability_Quiz_Text_3:
# 35 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Correct! The boost isn't applied until\n"
	.string "the user is under 1/3 of their HP.$"

GranitePeakTown_School_Ability_Quiz_Text_4:
# 36 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Okay Final Question\n"
	.string "Abilities are only useful in battle?$"

GranitePeakTown_School_Ability_Quiz_Text_5:
# 39 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "That's right! Some abilities have field\n"
	.string "effects.$"

GranitePeakTown_School_Ability_Quiz_Text_6:
# 40 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Incredible! You passed with ease$"

GranitePeakTown_School_Ability_Quiz_Text_7:
# 45 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Sorry that isn't correct.$"

GranitePeakTown_School_Ability_Quiz_Text_8:
# 51 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "That's Incorrect.$"

GranitePeakTown_School_Ability_Quiz_Text_9:
# 57 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Sorry that's wrong, sometimes Pokémon\n"
	.string "don't share abilities with their\l"
	.string "evolutions.$"

GranitePeakTown_School_AbilityQuiz_Passed_Text_0:
# 65 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

GranitePeakTown_School_AbilityQuiz_Passed_Text_1:
# 68 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "I think you should also have these!$"

GranitePeakTown_School_AbilityQuiz_Passed_Text_2:
# 70 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Good luck collecting the other patches$"

GranitePeakTown_School_AbilityQuiz_Failed_Text_0:
# 75 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Talk to some students and reach some resources. Then come back and try again$"

AbilityBoy1_Intro::
# 101 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Abilities can allow Pokémon to gain new\n"
	.string "resitences or immunities$"

AbilityBoy1_Outro::
# 105 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "You've brought me back to ground$"

PostBattle_AbilityBoy1::
# 109 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Abilities like Levitate can give\n"
	.string "immunities to ground, others like Storm\l"
	.string "Drain also boost stats.$"

AbilityBoy2_Intro::
# 114 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "The right weather or terrarain can\n"
	.string "boost certain moves$"

AbilityBoy2_Outro::
# 118 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "It must be raining on my face$"

PostBattle_AbilityBoy2::
# 122 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Certain abilities or moves only work\n"
	.string "under weather or$"

AbilityBoy3_Intro::
# 127 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "I love using abilities to slow down my\n"
	.string "opponents$"

AbilityBoy3_Outro::
# 131 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Not making contact does stop me$"

PostBattle_AbilityBoy3::
# 135 "data/maps/GranitePeakTown_School_AbilityRoom/scripts.pory"
	.string "Some abilities can cause issues to your\n"
	.string "opponent when they make contact.$"
