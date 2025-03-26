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
	faceplayer
# 21 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_0
# 22 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_TO_BLACK
# 23 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_1
# 24 "data/maps/Route5b/scripts.pory"
	removeobject 3
# 25 "data/maps/Route5b/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_1
# 26 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 27 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_STICKY_BARB
# 28 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_2
# 29 "data/maps/Route5b/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/Route5b/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 31 "data/maps/Route5b/scripts.pory"
	release
	return


Route5b_Pyukumuku_Clean_Up_2::
# 35 "data/maps/Route5b/scripts.pory"
	lock
# 36 "data/maps/Route5b/scripts.pory"
	faceplayer
# 37 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_0
# 38 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_TO_BLACK
# 39 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_1
# 40 "data/maps/Route5b/scripts.pory"
	removeobject 4
# 41 "data/maps/Route5b/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_2
# 42 "data/maps/Route5b/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 43 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 44 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Pyukumuku_Clean_Up_1_Text_2
# 45 "data/maps/Route5b/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/Route5b/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 47 "data/maps/Route5b/scripts.pory"
	release
	return


IncrementNumber_Pyukumukus_Saved::
# 51 "data/maps/Route5b/scripts.pory"
	addvar VAR_PYUKUMUKUS_SAVED, 1
	return


Route5b_WarningTrainer::
# 55 "data/maps/Route5b/scripts.pory"
	trainerbattle_single TRAINER_ROUTE5b_RACHEL, Route5b_Rachel_Intro, Route5b_Rachel_Outro
# 56 "data/maps/Route5b/scripts.pory"
	msgbox Route5b_Rachel_Postbattle, MSGBOX_AUTOCLOSE
	return


Bumbleboozer_Postscript_Text_0:
# 12 "data/maps/Route5b/scripts.pory"
	.string "You can have this, I don't want it\n"
	.string "anymore.$"

Route5b_Pyukumuku_Clean_Up_1_Text_0:
# 21 "data/maps/Route5b/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route5b_Pyukumuku_Clean_Up_1_Text_1:
# 23 "data/maps/Route5b/scripts.pory"
	.string "SPLASH$"

Route5b_Pyukumuku_Clean_Up_1_Text_2:
# 28 "data/maps/Route5b/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokémon.$"

BumbleBoozer_Intro::
# 60 "data/maps/Route5b/scripts.pory"
	.string "My victory will be sweet!$"

BumbleBoozer_Outro::
# 64 "data/maps/Route5b/scripts.pory"
	.string "Now I'm sour.$"

BumbleBoozer_PostBattle::
# 68 "data/maps/Route5b/scripts.pory"
	.string "...$"

Route5b_Rachel_Intro::
# 73 "data/maps/Route5b/scripts.pory"
	.string "I wouldn't go further east, some thugs\n"
	.string "have taken over the town and they are\l"
	.string "very strong. Not even Gym Leader Kevin\l"
	.string "could beat them.$"

Route5b_Rachel_Outro::
# 77 "data/maps/Route5b/scripts.pory"
	.string "You're strong, but I'm not sure you're\n"
	.string "strong enough.$"

Route5b_Rachel_Postbattle::
# 81 "data/maps/Route5b/scripts.pory"
	.string "You're welcome to try to beat them but\n"
	.string "without beating Hemlock Gym you won't\l"
	.string "stand a chance.$"
