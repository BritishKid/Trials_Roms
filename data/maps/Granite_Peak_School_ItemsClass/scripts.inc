Granite_Peak_School_ItemsClass_MapScripts::
	.byte 0


GranitePeak_ItemClass_Teacher::
	lockall
	compare VAR_ITEM_ROOM_STUDENTS, 2
	goto_if_le GranitePeak_ItemClass_Teacher_2
GranitePeak_ItemClass_Teacher_1:
	compare VAR_ITEM_ROOM_STUDENTS, 3
	goto_if_eq GranitePeak_ItemClass_Teacher_5
GranitePeak_ItemClass_Teacher_4:
	compare VAR_ITEM_ROOM_STUDENTS, 4
	goto_if_eq GranitePeak_ItemClass_Teacher_8
GranitePeak_ItemClass_Teacher_7:
	releaseall
	return

GranitePeak_ItemClass_Teacher_2:
	msgbox GranitePeak_ItemClass_Teacher_Text_0
	msgbox GranitePeak_ItemClass_Teacher_Text_1
	goto GranitePeak_ItemClass_Teacher_1

GranitePeak_ItemClass_Teacher_5:
	msgbox GranitePeak_ItemClass_Teacher_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_ItemClass_Teacher_11
GranitePeak_ItemClass_Teacher_10:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_ItemClass_Teacher_13
	goto GranitePeak_ItemClass_Teacher_4

GranitePeak_ItemClass_Teacher_8:
	msgbox GranitePeak_ItemClass_Teacher_Text_5
	goto GranitePeak_ItemClass_Teacher_7

GranitePeak_ItemClass_Teacher_11:
	msgbox GranitePeak_ItemClass_Teacher_Text_3
	call GranitePeak_School_Item_Quiz
	goto GranitePeak_ItemClass_Teacher_10

GranitePeak_ItemClass_Teacher_13:
	msgbox GranitePeak_ItemClass_Teacher_Text_4
	goto GranitePeak_ItemClass_Teacher_4


GranitePeak_School_Item_Quiz::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 0
	msgbox GranitePeak_School_Item_Quiz_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_3
GranitePeak_School_Item_Quiz_1:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_7
	return

GranitePeak_School_Item_Quiz_2:
	msgbox GranitePeak_School_Item_Quiz_Text_1
	msgbox GranitePeak_School_Item_Quiz_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_12
GranitePeak_School_Item_Quiz_10:
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_16
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_3:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_2
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_6:
	msgbox GranitePeak_School_Item_Quiz_Text_9
	call GranitePeak_School_ItemQuiz_Failed
	return

GranitePeak_School_Item_Quiz_7:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_6
	return

GranitePeak_School_Item_Quiz_11:
	msgbox GranitePeak_School_Item_Quiz_Text_3
	msgbox GranitePeak_School_Item_Quiz_Text_4, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_School_Item_Quiz_21
GranitePeak_School_Item_Quiz_19:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_School_Item_Quiz_25
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_12:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_11
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_15:
	msgbox GranitePeak_School_Item_Quiz_Text_8
	call GranitePeak_School_ItemQuiz_Failed
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_16:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_15
	goto GranitePeak_School_Item_Quiz_1

GranitePeak_School_Item_Quiz_20:
	msgbox GranitePeak_School_Item_Quiz_Text_5
	msgbox GranitePeak_School_Item_Quiz_Text_6
	call GranitePeak_School_ItemQuiz_Passsed
	goto GranitePeak_School_Item_Quiz_19

GranitePeak_School_Item_Quiz_21:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_20
	goto GranitePeak_School_Item_Quiz_19

GranitePeak_School_Item_Quiz_24:
	msgbox GranitePeak_School_Item_Quiz_Text_7
	call GranitePeak_School_ItemQuiz_Failed
	goto GranitePeak_School_Item_Quiz_10

GranitePeak_School_Item_Quiz_25:
	compare VAR_PREVENT_LOOPS_SCHOOL, 0
	goto_if_eq GranitePeak_School_Item_Quiz_24
	goto GranitePeak_School_Item_Quiz_10


GranitePeak_School_ItemQuiz_Failed::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	msgbox GranitePeak_School_ItemQuiz_Failed_Text_0
	return


GranitePeak_School_ItemQuiz_Passsed::
	setvar VAR_PREVENT_LOOPS_SCHOOL, 1
	setvar VAR_ITEM_ROOM_STUDENTS, 4
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_0
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_ITEM_PATCH_EARNT
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_1
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_GRASS_GEM, 1
	giveitem ITEM_ELECTRIC_GEM, 1
	msgbox GranitePeak_School_ItemQuiz_Passsed_Text_2
	return


GranitePeak_ItemClass_Girl1::
	trainerbattle_single TRAINER_ITEMGIRL1, ItemGirl1_Intro, ItemGirl1_Outro, ItemStudent_Beaten
	msgbox PostBattle_ItemGirl1, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl2::
	trainerbattle_single TRAINER_ITEMGIRL2, ItemGirl2_Intro, ItemGirl2_Outro, ItemStudent_Beaten
	msgbox PostBattle_ItemGirl2, MSGBOX_AUTOCLOSE
	return


GranitePeak_ItemClass_Girl3::
	trainerbattle_single TRAINER_ITEMGIRL3, ItemGirl3_Intro, ItemGirl3_Outro, ItemStudent_Beaten
	msgbox PostBattle_ItemGirl3, MSGBOX_AUTOCLOSE
	return


ItemStudent_Beaten::
	compare VAR_ITEM_ROOM_STUDENTS, 2
	goto_if_eq ItemStudent_Beaten_2
ItemStudent_Beaten_1:
	compare VAR_ITEM_ROOM_STUDENTS, 1
	goto_if_eq ItemStudent_Beaten_5
ItemStudent_Beaten_4:
	compare VAR_ITEM_ROOM_STUDENTS, 0
	goto_if_eq ItemStudent_Beaten_7
	return

ItemStudent_Beaten_2:
	setvar VAR_ITEM_ROOM_STUDENTS, 3
	goto ItemStudent_Beaten_1

ItemStudent_Beaten_5:
	setvar VAR_ITEM_ROOM_STUDENTS, 2
	goto ItemStudent_Beaten_4

ItemStudent_Beaten_7:
	setvar VAR_ITEM_ROOM_STUDENTS, 1
	return


GranitePeak_ItemClass_Teacher_Text_0:
	.string "Held items are a very important tool for\n"
	.string "a trainer to use. They can make\l"
	.string "mediocre Pokémon really powerful.$"

GranitePeak_ItemClass_Teacher_Text_1:
	.string "Speak to some of my students and learn\n"
	.string "what you can and when you are ready you\l"
	.string "can take my test.$"

GranitePeak_ItemClass_Teacher_Text_2:
	.string "Oh it looks like you've learnt lots, are\n"
	.string "you ready for the test?$"

GranitePeak_ItemClass_Teacher_Text_3:
	.string "Fantastic let's begin.$"

GranitePeak_ItemClass_Teacher_Text_4:
	.string "No problem. Come back when you are\n"
	.string "ready.$"

GranitePeak_ItemClass_Teacher_Text_5:
	.string "Items can change the flow of a battle.$"

GranitePeak_School_Item_Quiz_Text_0:
	.string "Question 1.\n"
	.string "A Quick Claw will cause a Pokémon to\l"
	.string "always move first?$"

GranitePeak_School_Item_Quiz_Text_1:
	.string "Correct! Well done$"

GranitePeak_School_Item_Quiz_Text_2:
	.string "Question 2.\n"
	.string "Held items can harm the holder?$"

GranitePeak_School_Item_Quiz_Text_3:
	.string "Correct! Sometimes you want to use\n"
	.string "Fling or Trick to give your opponent\l"
	.string "items that could harm them.$"

GranitePeak_School_Item_Quiz_Text_4:
	.string "Okay Final Question\n"
	.string "A held items benefits are the same for\l"
	.string "all Pokemon?$"

GranitePeak_School_Item_Quiz_Text_5:
	.string "Yes, some items only work on certain\n"
	.string "Pokemon.$"

GranitePeak_School_Item_Quiz_Text_6:
	.string "Incredible! You passed with ease$"

GranitePeak_School_Item_Quiz_Text_7:
	.string "Sorry that's wrong, have a look at\n"
	.string "Farfetch'd and Leeks.$"

GranitePeak_School_Item_Quiz_Text_8:
	.string "That's Incorrect. A Poison Barb could\n"
	.string "harm the holder.$"

GranitePeak_School_Item_Quiz_Text_9:
	.string "That's Incorrect. Quick Claw just gives\n"
	.string "a chance that to happen.$"

GranitePeak_School_ItemQuiz_Failed_Text_0:
	.string "Talk to some students and reach some resources. Then come back and try again$"

GranitePeak_School_ItemQuiz_Passsed_Text_0:
	.string "Congratulations to you all you've\n"
	.string "passed. Here take these.$"

GranitePeak_School_ItemQuiz_Passsed_Text_1:
	.string "I think you should also have these!$"

GranitePeak_School_ItemQuiz_Passsed_Text_2:
	.string "Good luck collecting the other patches$"

ItemGirl1_Intro::
	.string "You can make a Pokémon hold a berry to\n"
	.string "give the many powerful boosts.$"

ItemGirl1_Outro::
	.string "The berry atleast slowed down my loss.$"

PostBattle_ItemGirl1::
	.string "The best thing about a berry is you can\n"
	.string "grow more.$"

ItemGirl2_Intro::
	.string "Some items boost the power of Pokémon\n"
	.string "but make them take damage or stuck on\l"
	.string "one move.$"

ItemGirl2_Outro::
	.string "The most powerful items have their\n"
	.string "drawbacks, so you have to use\l"
	.string "correctly.$"

PostBattle_ItemGirl2::
	.string "Gems are single use so you better get a\n"
	.string "lot of them$"

ItemGirl3_Intro::
	.string "My favourite items give more options to\n"
	.string "my Pokémon$"

ItemGirl3_Outro::
	.string "How did you manage to beat me?$"

PostBattle_ItemGirl3::
	.string "There are so many items Pokémon can\n"
	.string "use.$"
