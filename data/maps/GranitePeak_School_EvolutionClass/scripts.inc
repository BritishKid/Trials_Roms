GranitePeak_School_EvolutionClass_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDE_EVOLUTION_ROOM
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

GranitePeak_School_EvolutionClass_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDE_EVOLUTION_ROOM
	return


GranitePeak_EvolutionClass_Teacher::
	lockall
	faceplayer
	goto_if_unset FLAG_GET_SCHOOL_EEVEE, GranitePeak_EvolutionClass_Teacher_3
GranitePeak_EvolutionClass_Teacher_1:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 5
	goto_if_eq GranitePeak_EvolutionClass_Teacher_7
GranitePeak_EvolutionClass_Teacher_6:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_EvolutionClass_Teacher_10
GranitePeak_EvolutionClass_Teacher_9:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_EvolutionClass_Teacher_13
GranitePeak_EvolutionClass_Teacher_12:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto_if_lt GranitePeak_EvolutionClass_Teacher_16
GranitePeak_EvolutionClass_Teacher_15:
	releaseall
	return

GranitePeak_EvolutionClass_Teacher_2:
	call GranitePeak_GivePlayer_Eevee
	goto GranitePeak_EvolutionClass_Teacher_1

GranitePeak_EvolutionClass_Teacher_3:
	goto_if_set FLAG_EVOLUTION_PATCH_EARNT, GranitePeak_EvolutionClass_Teacher_2
	goto GranitePeak_EvolutionClass_Teacher_1

GranitePeak_EvolutionClass_Teacher_7:
	msgbox GranitePeak_EvolutionClass_Teacher_Text_0
	goto GranitePeak_EvolutionClass_Teacher_6

GranitePeak_EvolutionClass_Teacher_10:
	call EvolutionTest
	goto GranitePeak_EvolutionClass_Teacher_9

GranitePeak_EvolutionClass_Teacher_13:
	msgbox GranitePeak_EvolutionClass_Teacher_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_EvolutionClass_Teacher_19
GranitePeak_EvolutionClass_Teacher_18:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_EvolutionClass_Teacher_21
	goto GranitePeak_EvolutionClass_Teacher_12

GranitePeak_EvolutionClass_Teacher_16:
	msgbox GranitePeak_EvolutionClass_Teacher_Text_7
	msgbox GranitePeak_EvolutionClass_Teacher_Text_8
	goto GranitePeak_EvolutionClass_Teacher_15

GranitePeak_EvolutionClass_Teacher_19:
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 4
	msgbox GranitePeak_EvolutionClass_Teacher_Text_2
	applymovement 1, Movement_TeacherSurprised
	waitmovement 1
	addobject 5
	setobjectxy 5, 5, 10
	applymovement 5, Movement_MoveUpFive
	waitmovement 5
	addobject 6
	setobjectxy 6, 6, 10
	applymovement 6, Movement_MoveUpFive
	waitmovement 6
	applymovement 5, Movement_Bounce
	msgbox GranitePeak_EvolutionClass_Teacher_Text_3
	applymovement 6, Movement_Bounce
	msgbox GranitePeak_EvolutionClass_Teacher_Text_4
	msgbox GranitePeak_EvolutionClass_Teacher_Text_5
	call EvolutionTest
	goto GranitePeak_EvolutionClass_Teacher_18

GranitePeak_EvolutionClass_Teacher_21:
	msgbox GranitePeak_EvolutionClass_Teacher_Text_6
	goto GranitePeak_EvolutionClass_Teacher_12


EvolutionTest::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
	msgbox EvolutionTest_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_3
EvolutionTest_1:
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_7
	return

EvolutionTest_2:
	applymovement 5, Movement_Bounce
	waitmovement 5
	msgbox EvolutionTest_Text_1
	applymovement 6, Movement_Bounce
	waitmovement 6
	msgbox EvolutionTest_Text_2
	msgbox EvolutionTest_Text_3
	msgbox EvolutionTest_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_12
EvolutionTest_10:
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_16
	goto EvolutionTest_1

EvolutionTest_3:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_2
	goto EvolutionTest_1

EvolutionTest_6:
	applymovement 5, Movement_Bounce
	waitmovement 5
	msgbox EvolutionTest_Text_1
	msgbox EvolutionTest_Text_13
	msgbox EvolutionTest_Text_14
	call FailedEvolutionTest
	return

EvolutionTest_7:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_6
	return

EvolutionTest_11:
	applymovement 5, Movement_Bounce
	waitmovement 5
	msgbox EvolutionTest_Text_5
	msgbox EvolutionTest_Text_6
	msgbox EvolutionTest_Text_7
	msgbox EvolutionTest_Text_8, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EvolutionTest_21
EvolutionTest_19:
	compare VAR_RESULT, NO
	goto_if_eq EvolutionTest_25
	goto EvolutionTest_10

EvolutionTest_12:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_11
	goto EvolutionTest_10

EvolutionTest_15:
	applymovement 6, Movement_Bounce
	waitmovement 6
	msgbox EvolutionTest_Text_11
	msgbox EvolutionTest_Text_12
	call FailedEvolutionTest
	goto EvolutionTest_1

EvolutionTest_16:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_15
	goto EvolutionTest_1

EvolutionTest_20:
	msgbox EvolutionTest_Text_9
	call FailedEvolutionTest
	goto EvolutionTest_19

EvolutionTest_21:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_20
	goto EvolutionTest_19

EvolutionTest_24:
	msgbox EvolutionTest_Text_10
	call CompletedEvolutionTest
	goto EvolutionTest_10

EvolutionTest_25:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq EvolutionTest_24
	goto EvolutionTest_10


CompletedEvolutionTest::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	msgbox CompletedEvolutionTest_Text_0
	playfanfare MUS_OBTAIN_ITEM
	msgbox CompletedEvolutionTest_Text_1
	msgbox GranitePeak_EvolutionClass_Teacher_Text_0
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 5
	setflag FLAG_EVOLUTION_PATCH_EARNT
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_EVOLUTION_PATCH
	applymovement 5, Movement_Bounce
	waitmovement 5
	msgbox CompletedEvolutionTest_Text_2
	applymovement 5, Movement_Leaves_Room
	waitmovement 5
	removeobject 5
	applymovement 6, Movement_Bounce
	waitmovement 6
	applymovement 6, Movement_Leaves_Room
	waitmovement 6
	removeobject 6
	call GranitePeak_GivePlayer_Eevee
	releaseall
	return


FailedEvolutionTest::
	msgbox FailedEvolutionTest_Text_0
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	releaseall
	return


GranitePeak_EvolutionClass_Boy1::
	trainerbattle_single TRAINER_EVOLUTIONBOY1, EvolutionBoy1_Intro, EvolutionBoy1_Outro, EvolutionStudent_Beaten
	msgbox PostBattle_EvolutionBoy1, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Boy2::
	trainerbattle_single TRAINER_EVOLUTIONBOY2, EvolutionBoy2_Intro, EvolutionBoy2_Outro, EvolutionStudent_Beaten
	msgbox PostBattle_EvolutionBoy2, MSGBOX_AUTOCLOSE
	end


GranitePeak_EvolutionClass_Girl::
	trainerbattle_single TRAINER_EVOLUTIONGIRL, EvolutionGirl_Intro, EvolutionGirl_Outro, EvolutionStudent_Beaten
	msgbox PostBattle_EvolutionGirl, MSGBOX_AUTOCLOSE
	end


GranitePeak_GivePlayer_Eevee::
	showmonpic SPECIES_EEVEE, 10, 3
	givemon SPECIES_EEVEE, 5
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq GranitePeak_GivePlayer_Eevee_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq GranitePeak_GivePlayer_Eevee_3
	hidemonpic
	msgbox GranitePeak_GivePlayer_Eevee_Text_1
GranitePeak_GivePlayer_Eevee_1:
	setflag FLAG_GET_SCHOOL_EEVEE
	return

GranitePeak_GivePlayer_Eevee_2:
	msgbox GranitePeak_GivePlayer_Eevee_Text_0
	call NicknamePartyMon
	goto GranitePeak_GivePlayer_Eevee_1

GranitePeak_GivePlayer_Eevee_3:
	msgbox GranitePeak_GivePlayer_Eevee_Text_0
	call NicknameBoxMon
	goto GranitePeak_GivePlayer_Eevee_1


EvolutionStudent_Beaten::
	compare VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto_if_eq EvolutionStudent_Beaten_2
EvolutionStudent_Beaten_1:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 1
	goto_if_eq EvolutionStudent_Beaten_5
EvolutionStudent_Beaten_4:
	compare VAR_EVOLUTION_ROOM_STUDENTS, 0
	goto_if_eq EvolutionStudent_Beaten_8
EvolutionStudent_Beaten_7:
	call Increase_Trainers_Beaten
	return

EvolutionStudent_Beaten_2:
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 3
	goto EvolutionStudent_Beaten_1

EvolutionStudent_Beaten_5:
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 2
	goto EvolutionStudent_Beaten_4

EvolutionStudent_Beaten_8:
	setvar VAR_EVOLUTION_ROOM_STUDENTS, 1
	goto EvolutionStudent_Beaten_7


Movement_TeacherSurprised:
	emote_exclamation_mark
	step_end

Movement_MoveUpFive:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_Bounce:
	jump_in_place_up
	step_end

Movement_Leaves_Room:
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	walk_fast_down
	step_end

GranitePeak_EvolutionClass_Teacher_Text_0:
	.string "Remember you need all patches to take\n"
	.string "part in the tournament.$"

GranitePeak_EvolutionClass_Teacher_Text_1:
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_EvolutionClass_Teacher_Text_2:
	.string "HANG ON!$"

GranitePeak_EvolutionClass_Teacher_Text_3:
	.string "We want to take part to!$"

GranitePeak_EvolutionClass_Teacher_Text_4:
	.string "Yeah! I want to win the tournament so I\n"
	.string "need these patches.$"

GranitePeak_EvolutionClass_Teacher_Text_5:
	.string "Okay very well, let's test all three of\n"
	.string "you then$"

GranitePeak_EvolutionClass_Teacher_Text_6:
	.string "Okay dear, come back when you're ready.$"

GranitePeak_EvolutionClass_Teacher_Text_7:
	.string "Pokémon can evolve in many different\n"
	.string "ways. Some use stones, some evolve\l"
	.string "after battle experience and others\l"
	.string "evolve from their surrounding area.$"

GranitePeak_EvolutionClass_Teacher_Text_8:
	.string "You've still got some studying to do\n"
	.string "before I can give you your patch.$"

EvolutionTest_Text_0:
	.string "Question 1. Eevee is the only Pokémon\n"
	.string "with multiple evolutions?$"

EvolutionTest_Text_1:
	.string "What about Wurmple!$"

EvolutionTest_Text_2:
	.string "And Snorunt$"

EvolutionTest_Text_3:
	.string "That's correct many Pokémon other than\n"
	.string "Eevee can evolve in different ways.$"

EvolutionTest_Text_4:
	.string "Question 2. Are there any Pokémon that\n"
	.string "can evolve twice at once?$"

EvolutionTest_Text_5:
	.string "Nincada!$"

EvolutionTest_Text_6:
	.string "That's correct, Nincada evolves into\n"
	.string "both Shedinja and Ninjask$"

EvolutionTest_Text_7:
	.string "You're doing great, okay final question$"

EvolutionTest_Text_8:
	.string "Do some Pokémon only evolve through\n"
	.string "trade?$"

EvolutionTest_Text_9:
	.string "I'm sorry that's wrong. Keep reading up\n"
	.string "on evolution and you'll get there$"

EvolutionTest_Text_10:
	.string "Correct with the discovery of a Link\n"
	.string "Stone you no longer have to trade\l"
	.string "certain Pokémon.$"

EvolutionTest_Text_11:
	.string "That's stupid how can a Pokémon evolve\n"
	.string "into two Pokémon?$"

EvolutionTest_Text_12:
	.string "I'm sorry that's incorrect. Keep\n"
	.string "learning then come back and try again.$"

EvolutionTest_Text_13:
	.string "Correct, Eevee is just one of many$"

EvolutionTest_Text_14:
	.string "Maybe you should study some more and\n"
	.string "try again.$"

CompletedEvolutionTest_Text_0:
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

CompletedEvolutionTest_Text_1:
	.string "Recieved Evolution Patch. This shows\n"
	.string "you've passed the class.$"

CompletedEvolutionTest_Text_2:
	.string "Bet you're happy I was here, I carried\n"
	.string "you through that.$"

FailedEvolutionTest_Text_0:
	.string "There are lots of resources you can use\n"
	.string "to study with.$"

GranitePeak_GivePlayer_Eevee_Text_0:
	.string "Recieved Eevee$"

GranitePeak_GivePlayer_Eevee_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

EvolutionBoy1_Intro::
	.string "Did you know Pokémon can learn move\n"
	.string "faster by not being evolved.$"

EvolutionBoy1_Outro::
	.string "It can help make a Pokémon stronger.$"

PostBattle_EvolutionBoy1::
	.string "Some evolution lines can only learn\n"
	.string "moves before they evolve.$"

EvolutionBoy2_Intro::
	.string "You can use some items to evolve\n"
	.string "Pokémon, but did you know some items\l"
	.string "can be used to stop evolution or make\l"
	.string "non evolved Pokémon stronger.$"

EvolutionBoy2_Outro::
	.string "Wow, I thought they would be\n"
	.string "unstoppable.$"

PostBattle_EvolutionBoy2::
	.string "Eviolite is an incredible item that\n"
	.string "improves defence on Pokémon that can\l"
	.string "evolve.$"

EvolutionGirl_Intro::
	.string "Some Pokémon can evolve in many\n"
	.string "different ways.$"

EvolutionGirl_Outro::
	.string "Losing doesn't help them evolve though.$"

PostBattle_EvolutionGirl::
	.string "A Pokémon can complete change\n"
	.string "depending on how it evolves.$"
