Route5b_MapScripts::
	.byte 0


Route5b_TrianerBattle_Bumbleboozer::
# 5 "data/maps/Route5b/scripts.pory"
	trainerbattle_single TRAINER_BUMBLE, BumbleBoozer_Intro, BumbleBoozer_Outro, Bumbleboozer_Postscript
# 6 "data/maps/Route5b/scripts.pory"
	msgbox BumbleBoozer_PostBattle, MSGBOX_DEFAULT
	end


Bumbleboozer_Postscript::
# 11 "data/maps/Route5b/scripts.pory"
	lockall
# 12 "data/maps/Route5b/scripts.pory"
	msgbox Bumbleboozer_Postscript_Text_0
# 13 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_HONEY, 5
# 14 "data/maps/Route5b/scripts.pory"
	releaseall
	return


Route5b_Pyukumuku_Clean_Up_1::
# 19 "data/maps/Route5b/scripts.pory"
	lock
# 20 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_0
# 21 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_TO_BLACK
# 22 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_1
# 23 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 24 "data/maps/Route5b/scripts.pory"
	removeobject 2
# 25 "data/maps/Route5b/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_1
# 26 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_STICKY_BARB
# 27 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_2
# 28 "data/maps/Route5b/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 29 "data/maps/Route5b/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 30 "data/maps/Route5b/scripts.pory"
	release
	return


Route5b_Pyukumuku_Clean_Up_2::
# 34 "data/maps/Route5b/scripts.pory"
	lock
# 35 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_0
# 36 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_TO_BLACK
# 37 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_1
# 38 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 39 "data/maps/Route5b/scripts.pory"
	removeobject 3
# 40 "data/maps/Route5b/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_2
# 41 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 42 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_2
# 43 "data/maps/Route5b/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 44 "data/maps/Route5b/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 45 "data/maps/Route5b/scripts.pory"
	release
	return


IncrementNumber_Pyukumukus_Saved::
# 49 "data/maps/Route5b/scripts.pory"
	addvar VAR_PYUKUMUKUS_SAVED, 1
	return


Bumbleboozer_Postscript_Text_0:
# 12 "data/maps/Route5b/scripts.pory"
	.string "You can have this, I don't want it\n"
	.string "anymore.$"

Route5b_Pyukumuku_Clean_Up_1_Text_0:
# 20 "data/maps/Route5b/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route5b_Pyukumuku_Clean_Up_1_Text_1:
# 22 "data/maps/Route5b/scripts.pory"
	.string "SPLASH$"

Route5b_Pyukumuku_Clean_Up_1_Text_2:
# 27 "data/maps/Route5b/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokemon.$"

BumbleBoozer_Intro::
# 53 "data/maps/Route5b/scripts.pory"
	.string "My victory will be sweet!$"

BumbleBoozer_Outro::
# 57 "data/maps/Route5b/scripts.pory"
	.string "Now I'm sour.$"

BumbleBoozer_PostBattle::
# 61 "data/maps/Route5b/scripts.pory"
	.string "$"
