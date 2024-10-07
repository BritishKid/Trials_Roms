Route7b_MapScripts::
	.byte 0


Route7b_Pyukumuku_Clean_Up_1::
	lock
	msgbox Route7b_Pyukumuku_Clean_Up_1_Text_0
	fadescreen FADE_TO_BLACK
	msgbox Route7b_Pyukumuku_Clean_Up_1_Text_1
	fadescreen FADE_FROM_BLACK
	removeobject 2
	setflag FLAG_CLEANED_UP_ROUTE7b_PYUKUMUKU_1
	call IncrementNumber_Pyukumukus_Saved
	release
	return


Route7b_Pyukumuku_Clean_Up_2::
	lock
	msgbox Route7b_Pyukumuku_Clean_Up_1_Text_0
	fadescreen FADE_TO_BLACK
	msgbox Route7b_Pyukumuku_Clean_Up_1_Text_1
	fadescreen FADE_FROM_BLACK
	removeobject 3
	setflag FLAG_CLEANED_UP_ROUTE7b_PYUKUMUKU_2
	call IncrementNumber_Pyukumukus_Saved
	release
	return


Route7b_WarningTrainer::
	trainerbattle_single TRAINER_ROUTE7b_RACHEL, Route7b_Rachel_Intro, Route7b_Rachel_Outro
	msgbox Route7b_Rachel_Postbattle, MSGBOX_AUTOCLOSE
	return


EventScript_7b_ItemBall_TMDig::
	finditem ITEM_TM28
	return


Route7b_Pyukumuku_Clean_Up_1_Text_0:
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route7b_Pyukumuku_Clean_Up_1_Text_1:
	.string "SPLASH$"

Route7b_Rachel_Intro::
	.string "I wouldn't go further east, some thugs\n"
	.string "have taken over the town and they are\l"
	.string "very strong. Not even Gym Leader Kevin\l"
	.string "could beat them.$"

Route7b_Rachel_Outro::
	.string "You're strong, but I'm not sure you're\n"
	.string "stronger than Kevin$"

Route7b_Rachel_Postbattle::
	.string "You're welcome to try to beat them but\n"
	.string "without beating Hemlock Gym you won't\l"
	.string "stand a chance.$"
