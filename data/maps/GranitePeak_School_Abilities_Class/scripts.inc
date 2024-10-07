GranitePeak_School_Abilities_Class_MapScripts::
	.byte 0


GranitePeak_AbilityClass_Teacher::
# 5 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	lockall
# 6 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 2
	goto_if_le GranitePeak_AbilityClass_Teacher_2
GranitePeak_AbilityClass_Teacher_1:
# 10 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_AbilityClass_Teacher_5
GranitePeak_AbilityClass_Teacher_4:
# 21 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_AbilityClass_Teacher_8
GranitePeak_AbilityClass_Teacher_7:
# 24 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	releaseall
	return

GranitePeak_AbilityClass_Teacher_2:
# 7 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_0
# 8 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_1
	goto GranitePeak_AbilityClass_Teacher_1

GranitePeak_AbilityClass_Teacher_5:
# 12 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_2, MSGBOX_YESNO
# 13 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_AbilityClass_Teacher_11
GranitePeak_AbilityClass_Teacher_10:
# 17 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_AbilityClass_Teacher_13
	goto GranitePeak_AbilityClass_Teacher_4

GranitePeak_AbilityClass_Teacher_8:
# 22 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_5
	goto GranitePeak_AbilityClass_Teacher_7

GranitePeak_AbilityClass_Teacher_11:
# 14 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_3
# 15 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call GranitePeak_School_Ability_Quiz
	goto GranitePeak_AbilityClass_Teacher_10

GranitePeak_AbilityClass_Teacher_13:
# 18 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_AbilityClass_Teacher_Text_4
	goto GranitePeak_AbilityClass_Teacher_4


GranitePeak_School_Ability_Quiz::
# 28 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 29 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_0, MSGBOX_YESNO
# 30 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_3
GranitePeak_School_Ability_Quiz_1:
# 55 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_7
	return

GranitePeak_School_Ability_Quiz_2:
# 32 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_1
# 33 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_2, MSGBOX_YESNO
# 34 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_12
GranitePeak_School_Ability_Quiz_10:
# 49 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_16
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_3:
# 30 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_2
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_6:
# 57 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_9
# 58 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call GranitePeak_School_AbilityQuiz_Failed
	return

GranitePeak_School_Ability_Quiz_7:
# 55 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_6
	return

GranitePeak_School_Ability_Quiz_11:
# 35 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_3
# 36 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_4, MSGBOX_YESNO
# 37 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Ability_Quiz_21
GranitePeak_School_Ability_Quiz_19:
# 43 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Ability_Quiz_25
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_12:
# 34 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_11
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_15:
# 51 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_8
# 52 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call GranitePeak_School_AbilityQuiz_Failed
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_16:
# 49 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_15
	goto GranitePeak_School_Ability_Quiz_1

GranitePeak_School_Ability_Quiz_20:
# 39 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_5
# 40 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_6
# 41 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call GranitePeak_School_AbilityQuiz_Passed
	goto GranitePeak_School_Ability_Quiz_19

GranitePeak_School_Ability_Quiz_21:
# 37 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_20
	goto GranitePeak_School_Ability_Quiz_19

GranitePeak_School_Ability_Quiz_24:
# 45 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_Ability_Quiz_Text_7
# 46 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call GranitePeak_School_AbilityQuiz_Failed
	goto GranitePeak_School_Ability_Quiz_10

GranitePeak_School_Ability_Quiz_25:
# 43 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Ability_Quiz_24
	goto GranitePeak_School_Ability_Quiz_10


GranitePeak_School_AbilityQuiz_Passed::
# 63 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 64 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_ABILITY_ROOM_STUDENTS, 4
# 65 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_0
# 66 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 67 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setflag FLAG_ABILITY_PATCH_EARNT
# 68 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_ABILITY_PATCH
# 69 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_1
# 70 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	giveitem ITEM_ABILITY_CAPSULE, 2
# 72 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_AbilityQuiz_Passed_Text_2
	return


GranitePeak_School_AbilityQuiz_Failed::
# 76 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 77 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox GranitePeak_School_AbilityQuiz_Failed_Text_0
	return


GranitePeak_AbilityClass_Boy1::
# 81 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY1, AbilityBoy1_Intro, AbilityBoy1_Outro, AbilityStudent_Beaten
# 82 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox PostBattle_AbilityBoy1, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy2::
# 86 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY2, AbilityBoy2_Intro, AbilityBoy2_Outro, AbilityStudent_Beaten
# 87 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox PostBattle_AbilityBoy2, MSGBOX_AUTOCLOSE
	return


GranitePeak_AbilityClass_Boy3::
# 91 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	trainerbattle_single TRAINER_ABILITYBOY3, AbilityBoy3_Intro, AbilityBoy3_Outro, AbilityStudent_Beaten
# 92 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	msgbox PostBattle_AbilityBoy3, MSGBOX_AUTOCLOSE
	return


AbilityStudent_Beaten::
# 97 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 2
	goto_if_eq AbilityStudent_Beaten_2
AbilityStudent_Beaten_1:
# 100 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 1
	goto_if_eq AbilityStudent_Beaten_5
AbilityStudent_Beaten_4:
# 103 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	compare VAR_ABILITY_ROOM_STUDENTS, 0
	goto_if_eq AbilityStudent_Beaten_8
AbilityStudent_Beaten_7:
# 106 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	call Increase_Trainers_Beaten
	return

AbilityStudent_Beaten_2:
# 98 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_ABILITY_ROOM_STUDENTS, 3
	goto AbilityStudent_Beaten_1

AbilityStudent_Beaten_5:
# 101 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_ABILITY_ROOM_STUDENTS, 2
	goto AbilityStudent_Beaten_4

AbilityStudent_Beaten_8:
# 104 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	setvar VAR_ABILITY_ROOM_STUDENTS, 1
	goto AbilityStudent_Beaten_7


GranitePeak_AbilityClass_Teacher_Text_0:
# 7 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Abilities are what make some Pokémon\n"
	.string "stronger than others.$"

GranitePeak_AbilityClass_Teacher_Text_1:
# 8 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeak_AbilityClass_Teacher_Text_2:
# 12 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_AbilityClass_Teacher_Text_3:
# 14 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Fantastic let's begin.$"

GranitePeak_AbilityClass_Teacher_Text_4:
# 18 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeak_AbilityClass_Teacher_Text_5:
# 22 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Getting the right ability can often\n"
	.string "make the difference.$"

GranitePeak_School_Ability_Quiz_Text_0:
# 29 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Question 1.\n"
	.string "When Pokémon evolve they always keep\l"
	.string "their ability?$"

GranitePeak_School_Ability_Quiz_Text_1:
# 32 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Correct! Well done$"

GranitePeak_School_Ability_Quiz_Text_2:
# 33 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Question 2.\n"
	.string "Abilities like blaze apply their boost\l"
	.string "when under 50% HP?$"

GranitePeak_School_Ability_Quiz_Text_3:
# 35 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Correct! The boost isn't applied until\n"
	.string "the user is under 1/3 of their HP.$"

GranitePeak_School_Ability_Quiz_Text_4:
# 36 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Okay Final Question\n"
	.string "Abilities are only useful in battle?$"

GranitePeak_School_Ability_Quiz_Text_5:
# 39 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "That's right! Some abilities have field\n"
	.string "effects.$"

GranitePeak_School_Ability_Quiz_Text_6:
# 40 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Incredible! You passed with ease$"

GranitePeak_School_Ability_Quiz_Text_7:
# 45 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Sorry that isn't correct.$"

GranitePeak_School_Ability_Quiz_Text_8:
# 51 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "That's Incorrect.$"

GranitePeak_School_Ability_Quiz_Text_9:
# 57 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Sorry that's wrong, sometimes Pokémon\n"
	.string "don't share abilities with their\l"
	.string "evolutions.$"

GranitePeak_School_AbilityQuiz_Passed_Text_0:
# 65 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_AbilityQuiz_Passed_Text_1:
# 69 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "I think you should also have these!$"

GranitePeak_School_AbilityQuiz_Passed_Text_2:
# 72 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Good luck collecting the other patches$"

GranitePeak_School_AbilityQuiz_Failed_Text_0:
# 77 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Talk to some students and reach some resources. Then come back and try again$"

AbilityBoy1_Intro::
# 111 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Abilities can allow Pokémon to gain new\n"
	.string "resitences or immunities$"

AbilityBoy1_Outro::
# 115 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "You've brought me back to ground$"

PostBattle_AbilityBoy1::
# 119 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Abilities like Levitate can give\n"
	.string "immunities to ground, others like Storm\l"
	.string "Drain also boost stats.$"

AbilityBoy2_Intro::
# 124 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "The right weather or terrarain can\n"
	.string "boost certain moves$"

AbilityBoy2_Outro::
# 128 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "It must be raining on my face$"

PostBattle_AbilityBoy2::
# 132 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Certain abilities or moves only work\n"
	.string "under weather or$"

AbilityBoy3_Intro::
# 137 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "I love using abilities to slow down my\n"
	.string "opponents$"

AbilityBoy3_Outro::
# 141 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Not making contact does stop me$"

PostBattle_AbilityBoy3::
# 145 "data/maps/GranitePeak_School_Abilities_Class/scripts.pory"
	.string "Some abilities can cause issues to your\n"
	.string "opponent when they make contact.$"
