Route5_MapScripts::
	.byte 0


Route5_IslandBoat::
# 6 "data/maps/Route5/scripts.pory"
	lockall
# 7 "data/maps/Route5/scripts.pory"
	faceplayer
# 8 "data/maps/Route5/scripts.pory"
	msgbox Route5_IslandBoat_Text_0, MSGBOX_YESNO
# 9 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route5_IslandBoat_2
Route5_IslandBoat_1:
# 12 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_IslandBoat_2:
# 10 "data/maps/Route5/scripts.pory"
	warp MAP_CORAL_PORT_HARBOR, 8, 11
	goto Route5_IslandBoat_1


Route5_Sign_Directinos::
# 17 "data/maps/Route5/scripts.pory"
	lockall
# 18 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_HIDE_BLOCKER_THUGS, Route5_Sign_Directinos_2
# 22 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Directinos_Text_1
Route5_Sign_Directinos_1:
# 24 "data/maps/Route5/scripts.pory"
	releaseall
	return

Route5_Sign_Directinos_2:
# 19 "data/maps/Route5/scripts.pory"
	msgbox Route5_Sign_Directinos_Text_0
	goto Route5_Sign_Directinos_1


Route5_Pyukumuku_Clean_Up::
# 28 "data/maps/Route5/scripts.pory"
	lock
# 29 "data/maps/Route5/scripts.pory"
	faceplayer
# 30 "data/maps/Route5/scripts.pory"
	msgbox Route5_Pyukumuku_Clean_Up_Text_0
# 31 "data/maps/Route5/scripts.pory"
	fadescreen FADE_TO_BLACK
# 32 "data/maps/Route5/scripts.pory"
	msgbox Route5_Pyukumuku_Clean_Up_Text_1
# 33 "data/maps/Route5/scripts.pory"
	removeobject 3
# 34 "data/maps/Route5/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_3
# 35 "data/maps/Route5/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 36 "data/maps/Route5/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 37 "data/maps/Route5/scripts.pory"
	msgbox Route5_Pyukumuku_Clean_Up_Text_2
# 38 "data/maps/Route5/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 39 "data/maps/Route5/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 40 "data/maps/Route5/scripts.pory"
	release
	return


Route5_Trainerbattle_DogWalker::
# 44 "data/maps/Route5/scripts.pory"
	trainerbattle_single ROUTE5_DOGWALKER, Route5_Dogwalker_Intro, Route5_Dogwalker_Outro, Increase_Trainers_Beaten
# 45 "data/maps/Route5/scripts.pory"
	msgbox Route5_Dogwalker_Postbattle, MSGBOX_AUTOCLOSE
	return


Giant_Kingler::
# 49 "data/maps/Route5/scripts.pory"
	lockall
# 51 "data/maps/Route5/scripts.pory"
	compare VAR_GIANT_FISH_STATE, 1
	goto_if_eq Giant_Kingler_4
Giant_Kingler_3:
# 73 "data/maps/Route5/scripts.pory"
	msgbox Giant_Kingler_Text_3
Giant_Kingler_1:
# 75 "data/maps/Route5/scripts.pory"
	releaseall
	return

Giant_Kingler_2:
# 52 "data/maps/Route5/scripts.pory"
	msgbox Giant_Kingler_Text_0, MSGBOX_YESNO
# 53 "data/maps/Route5/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Giant_Kingler_7
	end

Giant_Kingler_4:
# 51 "data/maps/Route5/scripts.pory"
	goto_if_unset FLAG_GIANT_KINGLER_BEATEN, Giant_Kingler_2
	goto Giant_Kingler_3

Giant_Kingler_7:
# 54 "data/maps/Route5/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 56 "data/maps/Route5/scripts.pory"
	msgbox Giant_Kingler_Text_1
# 57 "data/maps/Route5/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 58 "data/maps/Route5/scripts.pory"
	setwildbattle SPECIES_KINGLER, 35, ITEM_SITRUS_BERRY
# 59 "data/maps/Route5/scripts.pory"
	dowildbattle
# 61 "data/maps/Route5/scripts.pory"
	msgbox Giant_Kingler_Text_2
# 62 "data/maps/Route5/scripts.pory"
	giveitem ITEM_GRIP_CLAW
# 63 "data/maps/Route5/scripts.pory"
	setflag FLAG_GIANT_KINGLER_BEATEN
# 64 "data/maps/Route5/scripts.pory"
	addvar VAR_GIANT_FISH_BEATEN, 1
# 65 "data/maps/Route5/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto Giant_Kingler_1


Route5_IslandBoat_Text_0:
# 8 "data/maps/Route5/scripts.pory"
	.string "Would you like to travel to Island 1?$"

Route5_Sign_Directinos_Text_0:
# 19 "data/maps/Route5/scripts.pory"
	.string "Someone has scrawled over the sign to\n"
	.string "say:\l"
	.string "THIS IS OUR ISLAND!$"

Route5_Sign_Directinos_Text_1:
# 22 "data/maps/Route5/scripts.pory"
	.string "-> TOWN TO BE NAMED\l"
	.string "<- Hemlock Village$"

Route5_Pyukumuku_Clean_Up_Text_0:
# 30 "data/maps/Route5/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

Route5_Pyukumuku_Clean_Up_Text_1:
# 32 "data/maps/Route5/scripts.pory"
	.string "SPLASH$"

Route5_Pyukumuku_Clean_Up_Text_2:
# 37 "data/maps/Route5/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokémon.$"

Giant_Kingler_Text_0:
# 52 "data/maps/Route5/scripts.pory"
	.string "You see a giant Pokémon scuttling\n"
	.string "under the surface, do you want to\l"
	.string "attempt to catch it?$"

Giant_Kingler_Text_1:
# 56 "data/maps/Route5/scripts.pory"
	.string "It leaps out at you$"

Giant_Kingler_Text_2:
# 61 "data/maps/Route5/scripts.pory"
	.string "The Kingler flees and leaves something\n"
	.string "behind$"

Giant_Kingler_Text_3:
# 73 "data/maps/Route5/scripts.pory"
	.string "You see a giant Pokémon scuttling\n"
	.string "under the surface$"

Route5_Dogwalker_Intro::
# 80 "data/maps/Route5/scripts.pory"
	.string "We love stretching our legs on this\n"
	.string "beach.$"

Route5_Dogwalker_Outro::
# 84 "data/maps/Route5/scripts.pory"
	.string "Exercise will make the pain of the loss\n"
	.string "go away.$"

Route5_Dogwalker_Postbattle::
# 88 "data/maps/Route5/scripts.pory"
	.string "We should head back the suns heading\n"
	.string "down.$"
