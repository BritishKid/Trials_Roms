GranitePeakTown_School_ItemsRoom_MapScripts::
	.byte 0


GranitePeakTown_School_ItemRoom_Teacher::
# 5 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	lockall
# 6 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 2
	goto_if_le GranitePeakTown_School_ItemRoom_Teacher_2
GranitePeakTown_School_ItemRoom_Teacher_1:
# 10 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 3
	goto_if_eq GranitePeakTown_School_ItemRoom_Teacher_5
GranitePeakTown_School_ItemRoom_Teacher_4:
# 21 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_ITEM_ROOM_STUDENTS, 4
	goto_if_eq GranitePeakTown_School_ItemRoom_Teacher_8
GranitePeakTown_School_ItemRoom_Teacher_7:
# 24 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	releaseall
	return

GranitePeakTown_School_ItemRoom_Teacher_2:
# 7 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_0
# 8 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_1
	goto GranitePeakTown_School_ItemRoom_Teacher_1

GranitePeakTown_School_ItemRoom_Teacher_5:
# 12 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_2, MSGBOX_YESNO
# 13 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_ItemRoom_Teacher_11
GranitePeakTown_School_ItemRoom_Teacher_10:
# 17 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_ItemRoom_Teacher_13
	goto GranitePeakTown_School_ItemRoom_Teacher_4

GranitePeakTown_School_ItemRoom_Teacher_8:
# 22 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_5
	goto GranitePeakTown_School_ItemRoom_Teacher_7

GranitePeakTown_School_ItemRoom_Teacher_11:
# 14 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_3
# 15 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call GranitePeakTown_School_Item_Quiz
	goto GranitePeakTown_School_ItemRoom_Teacher_10

GranitePeakTown_School_ItemRoom_Teacher_13:
# 18 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemRoom_Teacher_Text_4
	goto GranitePeakTown_School_ItemRoom_Teacher_4


GranitePeakTown_School_Item_Quiz::
# 29 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
# 30 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_0, MSGBOX_YESNO
# 31 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Item_Quiz_3
GranitePeakTown_School_Item_Quiz_1:
# 56 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Item_Quiz_7
	return

GranitePeakTown_School_Item_Quiz_2:
# 33 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_1
# 34 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_2, MSGBOX_YESNO
# 35 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Item_Quiz_12
GranitePeakTown_School_Item_Quiz_10:
# 50 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Item_Quiz_16
	goto GranitePeakTown_School_Item_Quiz_1

GranitePeakTown_School_Item_Quiz_3:
# 31 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_2
	goto GranitePeakTown_School_Item_Quiz_1

GranitePeakTown_School_Item_Quiz_6:
# 58 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_9
# 59 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call GranitePeakTown_School_ItemQuiz_Failed
	return

GranitePeakTown_School_Item_Quiz_7:
# 56 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_6
	return

GranitePeakTown_School_Item_Quiz_11:
# 36 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_3
# 37 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_4, MSGBOX_YESNO
# 38 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeakTown_School_Item_Quiz_21
GranitePeakTown_School_Item_Quiz_19:
# 44 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeakTown_School_Item_Quiz_25
	goto GranitePeakTown_School_Item_Quiz_10

GranitePeakTown_School_Item_Quiz_12:
# 35 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_11
	goto GranitePeakTown_School_Item_Quiz_10

GranitePeakTown_School_Item_Quiz_15:
# 52 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_8
# 53 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call GranitePeakTown_School_ItemQuiz_Failed
	goto GranitePeakTown_School_Item_Quiz_1

GranitePeakTown_School_Item_Quiz_16:
# 50 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_15
	goto GranitePeakTown_School_Item_Quiz_1

GranitePeakTown_School_Item_Quiz_20:
# 40 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_5
# 41 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_6
# 42 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call GranitePeakTown_School_ItemQuiz_Passsed
	goto GranitePeakTown_School_Item_Quiz_19

GranitePeakTown_School_Item_Quiz_21:
# 38 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_20
	goto GranitePeakTown_School_Item_Quiz_19

GranitePeakTown_School_Item_Quiz_24:
# 46 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_Item_Quiz_Text_7
# 47 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call GranitePeakTown_School_ItemQuiz_Failed
	goto GranitePeakTown_School_Item_Quiz_10

GranitePeakTown_School_Item_Quiz_25:
# 44 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeakTown_School_Item_Quiz_24
	goto GranitePeakTown_School_Item_Quiz_10


GranitePeakTown_School_ItemQuiz_Failed::
# 64 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 65 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemQuiz_Failed_Text_0
	return


GranitePeakTown_School_ItemQuiz_Passsed::
# 69 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
# 70 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	setvar VAR_ITEM_ROOM_STUDENTS, 4
# 71 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemQuiz_Passsed_Text_0
# 72 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	giveitem ITEM_ITEMS_PATCH
# 74 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemQuiz_Passsed_Text_1
# 75 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	giveitem ITEM_GRASS_GEM, 1
# 76 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	giveitem ITEM_FIRE_GEM, 1
# 77 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	giveitem ITEM_WATER_GEM, 1
# 78 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox GranitePeakTown_School_ItemQuiz_Passsed_Text_2
	return


GranitePeak_ItemClass_Girl1::
# 83 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL1, ItemGirl1_Intro, ItemGirl1_Outro, ItemStudent_Beaten
# 84 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox PostBattle_ItemGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl2::
# 89 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL2, ItemGirl2_Intro, ItemGirl2_Outro, ItemStudent_Beaten
# 90 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox PostBattle_ItemGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl3::
# 95 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	trainerbattle_single TRAINER_ITEMGIRL3, ItemGirl3_Intro, ItemGirl3_Outro, ItemStudent_Beaten
# 96 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	msgbox PostBattle_ItemGirl3, MSGBOX_AUTOCLOSE
	return


ItemStudent_Beaten::
# 101 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	addvar VAR_ITEM_ROOM_STUDENTS, 1
# 102 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	call Increase_Trainers_Beaten
	return


GranitePeakTown_School_ItemRoom_Teacher_Text_0:
# 7 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Held items are a very important tool for\n"
	.string "a trainer to use. They can make\l"
	.string "mediocre Pokémon really powerful.$"

GranitePeakTown_School_ItemRoom_Teacher_Text_1:
# 8 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeakTown_School_ItemRoom_Teacher_Text_2:
# 12 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeakTown_School_ItemRoom_Teacher_Text_3:
# 14 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Fantastic let's begin.$"

GranitePeakTown_School_ItemRoom_Teacher_Text_4:
# 18 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeakTown_School_ItemRoom_Teacher_Text_5:
# 22 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Items can change the flow of a battle.$"

GranitePeakTown_School_Item_Quiz_Text_0:
# 30 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Question 1.\n"
	.string "A Quick Claw will cause a Pokémon to\l"
	.string "always move first?$"

GranitePeakTown_School_Item_Quiz_Text_1:
# 33 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Correct! Well done$"

GranitePeakTown_School_Item_Quiz_Text_2:
# 34 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Question 2.\n"
	.string "Held items can harm the holder?$"

GranitePeakTown_School_Item_Quiz_Text_3:
# 36 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Correct! Sometimes you want to use\n"
	.string "Fling or Trick to give your opponent\l"
	.string "items that could harm them.$"

GranitePeakTown_School_Item_Quiz_Text_4:
# 37 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Okay Final Question\n"
	.string "A held items benefits are the same for\l"
	.string "all Pokémon?$"

GranitePeakTown_School_Item_Quiz_Text_5:
# 40 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Yes, some items only work on certain\n"
	.string "Pokémon.$"

GranitePeakTown_School_Item_Quiz_Text_6:
# 41 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Incredible! You passed with ease$"

GranitePeakTown_School_Item_Quiz_Text_7:
# 46 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Sorry that's wrong, have a look at\n"
	.string "Farfetch'd and Leeks.$"

GranitePeakTown_School_Item_Quiz_Text_8:
# 52 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "That's Incorrect. A Poison Barb could\n"
	.string "harm the holder.$"

GranitePeakTown_School_Item_Quiz_Text_9:
# 58 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "That's Incorrect. Quick Claw just gives\n"
	.string "a chance that to happen.$"

GranitePeakTown_School_ItemQuiz_Failed_Text_0:
# 65 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Talk to some students and reach some resources. Then come back and try again$"

GranitePeakTown_School_ItemQuiz_Passsed_Text_0:
# 71 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Congratulations you've passed. Here\n"
	.string "take these.$"

GranitePeakTown_School_ItemQuiz_Passsed_Text_1:
# 74 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "I think you should also have these!$"

GranitePeakTown_School_ItemQuiz_Passsed_Text_2:
# 78 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Good luck collecting the other patches$"

ItemGirl1_Intro::
# 106 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "You can make a Pokémon hold a berry to\n"
	.string "give the many powerful boosts.$"

ItemGirl1_Outro::
# 110 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "The berry atleast slowed down my loss.$"

PostBattle_ItemGirl1::
# 114 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "The best thing about a berry is you can\n"
	.string "grow more.$"

ItemGirl2_Intro::
# 118 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Some items boost the power of Pokémon\n"
	.string "but make them take damage or stuck on\l"
	.string "one move.$"

ItemGirl2_Outro::
# 122 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "The most powerful items have their\n"
	.string "drawbacks, so you have to use\l"
	.string "correctly.$"

PostBattle_ItemGirl2::
# 126 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "Gems are single use so you better get a\n"
	.string "lot of them$"

ItemGirl3_Intro::
# 129 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "My favourite items give more options to\n"
	.string "my Pokémon$"

ItemGirl3_Outro::
# 133 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "How did you manage to beat me?$"

PostBattle_ItemGirl3::
# 137 "data/maps/GranitePeakTown_School_ItemsRoom/scripts.pory"
	.string "There are so many items Pokémon can\n"
	.string "use.$"
