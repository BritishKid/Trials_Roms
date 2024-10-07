Granite_Peak_School_ItemsClass_MapScripts::
	.byte 0


GranitePeak_ItemClass_Teacher::
# 5 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	lockall
# 6 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 2
	goto_if_le GranitePeak_ItemClass_Teacher_2
GranitePeak_ItemClass_Teacher_1:
# 10 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_ItemClass_Teacher_5
GranitePeak_ItemClass_Teacher_4:
# 21 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_ItemClass_Teacher_8
GranitePeak_ItemClass_Teacher_7:
# 24 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	releaseall
	return

GranitePeak_ItemClass_Teacher_2:
# 7 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_0
# 8 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_1
	goto GranitePeak_ItemClass_Teacher_1

GranitePeak_ItemClass_Teacher_5:
# 12 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_2, MSGBOX_YESNO
# 13 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_ItemClass_Teacher_11
GranitePeak_ItemClass_Teacher_10:
# 17 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_ItemClass_Teacher_13
	goto GranitePeak_ItemClass_Teacher_4

GranitePeak_ItemClass_Teacher_8:
# 22 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_5
	goto GranitePeak_ItemClass_Teacher_7

GranitePeak_ItemClass_Teacher_11:
# 14 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_3
# 15 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call GranitePeak_School_Item_Quiz
	goto GranitePeak_ItemClass_Teacher_10

GranitePeak_ItemClass_Teacher_13:
# 18 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_ItemClass_Teacher_Text_4
	goto GranitePeak_ItemClass_Teacher_4


GranitePeak_School_Item_Quiz::
# 28 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 29 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_0, MSGBOX_YESNO
# 30 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_3
GranitePeak_School_Item_Quiz_1:
# 55 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_7
	return

GranitePeak_School_Item_Quiz_2:
# 32 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_1
# 33 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_2, MSGBOX_YESNO
# 34 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_12
GranitePeak_School_Item_Quiz_10:
# 49 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_16
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_3:
# 30 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_2
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_6:
# 57 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_9
# 58 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call GranitePeak_School_ItemQuiz_Failed
	return

GranitePeak_School_Item_Quiz_7:
# 55 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_6
	return

GranitePeak_School_Item_Quiz_11:
# 35 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_3
# 36 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_4, MSGBOX_YESNO
# 37 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_21
GranitePeak_School_Item_Quiz_19:
# 43 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_25
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_12:
# 34 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_11
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_15:
# 51 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_8
# 52 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call GranitePeak_School_ItemQuiz_Failed
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_16:
# 49 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_15
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_20:
# 39 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_5
# 40 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_6
# 41 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call GranitePeak_School_ItemQuiz_Passsed
	goto GranitePeak_School_Item_Quiz_19

GranitePeak_School_Item_Quiz_21:
# 37 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_20
	goto GranitePeak_School_Item_Quiz_19

GranitePeak_School_Item_Quiz_24:
# 45 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_Item_Quiz_Text_7
# 46 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call GranitePeak_School_ItemQuiz_Failed
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_25:
# 43 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_24
	goto GranitePeak_School_Item_Quiz_10


GranitePeak_School_ItemQuiz_Failed::
# 63 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 64 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_ItemQuiz_Failed_Text_0
	return


GranitePeak_School_ItemQuiz_Passsed::
# 68 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 69 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_ITEM_ROOM_STUDENTS, 4
# 70 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_0
# 71 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 72 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setflag FLAG_ITEM_PATCH_EARNT
# 73 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SCHOOL_ITEM_PATCH
# 74 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_1
# 75 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 76 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	switch VAR_STARTER_MON
# 77 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	case 0, GranitePeak_School_ItemQuiz_Passsed_3
# 79 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	case 1, GranitePeak_School_ItemQuiz_Passsed_4
# 81 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	case 2, GranitePeak_School_ItemQuiz_Passsed_5
GranitePeak_School_ItemQuiz_Passsed_1:
# 84 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	giveitem ITEM_ELECTRIC_GEM, 1
# 85 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_2
	return

GranitePeak_School_ItemQuiz_Passsed_3:
# 78 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	giveitem ITEM_GRASS_GEM, 1
	goto GranitePeak_School_ItemQuiz_Passsed_1

GranitePeak_School_ItemQuiz_Passsed_4:
# 80 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	giveitem ITEM_FIRE_GEM, 1
	goto GranitePeak_School_ItemQuiz_Passsed_1

GranitePeak_School_ItemQuiz_Passsed_5:
# 82 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	giveitem ITEM_WATER_GEM, 1
	goto GranitePeak_School_ItemQuiz_Passsed_1


GranitePeak_ItemClass_Girl1::
# 90 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL1, ItemGirl1_Intro, ItemGirl1_Outro, ItemStudent_Beaten
# 91 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox PostBattle_ItemGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl2::
# 96 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL2, ItemGirl2_Intro, ItemGirl2_Outro, ItemStudent_Beaten
# 97 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox PostBattle_ItemGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl3::
# 102 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL3, ItemGirl3_Intro, ItemGirl3_Outro, ItemStudent_Beaten
# 103 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	msgbox PostBattle_ItemGirl3, MSGBOX_AUTOCLOSE
	return


ItemStudent_Beaten::
# 107 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 2
	goto_if_eq ItemStudent_Beaten_2
ItemStudent_Beaten_1:
# 110 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 1
	goto_if_eq ItemStudent_Beaten_5
ItemStudent_Beaten_4:
# 113 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 0
	goto_if_eq ItemStudent_Beaten_8
ItemStudent_Beaten_7:
# 116 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	call Increase_Trainers_Beaten
	return

ItemStudent_Beaten_2:
# 108 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_ITEM_ROOM_STUDENTS, 3
	goto ItemStudent_Beaten_1

ItemStudent_Beaten_5:
# 111 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_ITEM_ROOM_STUDENTS, 2
	goto ItemStudent_Beaten_4

ItemStudent_Beaten_8:
# 114 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	setvar VAR_ITEM_ROOM_STUDENTS, 1
	goto ItemStudent_Beaten_7


GranitePeak_ItemClass_Teacher_Text_0:
# 7 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Held items are a very important tool for\n"
	.string "a trainer to use. They can make\l"
	.string "mediocre Pokémon really powerful.$"

GranitePeak_ItemClass_Teacher_Text_1:
# 8 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeak_ItemClass_Teacher_Text_2:
# 12 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_ItemClass_Teacher_Text_3:
# 14 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Fantastic let's begin.$"

GranitePeak_ItemClass_Teacher_Text_4:
# 18 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeak_ItemClass_Teacher_Text_5:
# 22 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Items can change the flow of a battle.$"

GranitePeak_School_Item_Quiz_Text_0:
# 29 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Question 1.\n"
	.string "A Quick Claw will cause a Pokémon to\l"
	.string "always move first?$"

GranitePeak_School_Item_Quiz_Text_1:
# 32 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Correct! Well done$"

GranitePeak_School_Item_Quiz_Text_2:
# 33 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Question 2.\n"
	.string "Held items can harm the holder?$"

GranitePeak_School_Item_Quiz_Text_3:
# 35 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Correct! Sometimes you want to use\n"
	.string "Fling or Trick to give your opponent\l"
	.string "items that could harm them.$"

GranitePeak_School_Item_Quiz_Text_4:
# 36 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Okay Final Question\n"
	.string "A held items benefits are the same for\l"
	.string "all Pokémon?$"

GranitePeak_School_Item_Quiz_Text_5:
# 39 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Yes, some items only work on certain\n"
	.string "Pokémon.$"

GranitePeak_School_Item_Quiz_Text_6:
# 40 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Incredible! You passed with ease$"

GranitePeak_School_Item_Quiz_Text_7:
# 45 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Sorry that's wrong, have a look at\n"
	.string "Farfetch'd and Leeks.$"

GranitePeak_School_Item_Quiz_Text_8:
# 51 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "That's Incorrect. A Poison Barb could\n"
	.string "harm the holder.$"

GranitePeak_School_Item_Quiz_Text_9:
# 57 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "That's Incorrect. Quick Claw just gives\n"
	.string "a chance that to happen.$"

GranitePeak_School_ItemQuiz_Failed_Text_0:
# 64 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Talk to some students and reach some resources. Then come back and try again$"

GranitePeak_School_ItemQuiz_Passsed_Text_0:
# 70 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_ItemQuiz_Passsed_Text_1:
# 74 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "I think you should also have these!$"

GranitePeak_School_ItemQuiz_Passsed_Text_2:
# 85 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Good luck collecting the other patches$"

ItemGirl1_Intro::
# 120 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "You can make a Pokémon hold a berry to\n"
	.string "give the many powerful boosts.$"

ItemGirl1_Outro::
# 124 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "The berry atleast slowed down my loss.$"

PostBattle_ItemGirl1::
# 128 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "The best thing about a berry is you can\n"
	.string "grow more.$"

ItemGirl2_Intro::
# 132 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Some items boost the power of Pokémon\n"
	.string "but make them take damage or stuck on\l"
	.string "one move.$"

ItemGirl2_Outro::
# 136 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "The most powerful items have their\n"
	.string "drawbacks, so you have to use\l"
	.string "correctly.$"

PostBattle_ItemGirl2::
# 140 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "Gems are single use so you better get a\n"
	.string "lot of them$"

ItemGirl3_Intro::
# 143 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "My favourite items give more options to\n"
	.string "my Pokémon$"

ItemGirl3_Outro::
# 147 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "How did you manage to beat me?$"

PostBattle_ItemGirl3::
# 151 "data/maps/Granite_Peak_School_ItemsClass/scripts.pory"
	.string "There are so many items Pokémon can\n"
	.string "use.$"
