CoralBeach_2_MapScripts::
	.byte 0


CoralBeach2_Pyukumuku_Clean_Up::
# 5 "data/maps/CoralBeach_2/scripts.pory"
	lock
# 6 "data/maps/CoralBeach_2/scripts.pory"
	faceplayer
# 7 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_0
# 8 "data/maps/CoralBeach_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 9 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_1
# 10 "data/maps/CoralBeach_2/scripts.pory"
	removeobject 1
# 11 "data/maps/CoralBeach_2/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_5
# 12 "data/maps/CoralBeach_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 13 "data/maps/CoralBeach_2/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 14 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_2
# 15 "data/maps/CoralBeach_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 16 "data/maps/CoralBeach_2/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 17 "data/maps/CoralBeach_2/scripts.pory"
	release
	return


Giant_Gorebyss::
# 23 "data/maps/CoralBeach_2/scripts.pory"
	lockall
# 25 "data/maps/CoralBeach_2/scripts.pory"
	compare VAR_GIANT_FISH_STATE, 1
	goto_if_eq Giant_Gorebyss_4
Giant_Gorebyss_3:
# 47 "data/maps/CoralBeach_2/scripts.pory"
	msgbox Giant_Gorebyss_Text_3
Giant_Gorebyss_1:
# 49 "data/maps/CoralBeach_2/scripts.pory"
	releaseall
	return

Giant_Gorebyss_2:
# 26 "data/maps/CoralBeach_2/scripts.pory"
	msgbox Giant_Gorebyss_Text_0, MSGBOX_YESNO
# 27 "data/maps/CoralBeach_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Giant_Gorebyss_7
	end

Giant_Gorebyss_4:
# 25 "data/maps/CoralBeach_2/scripts.pory"
	goto_if_unset FLAG_GIANT_GOREBYSS_BEATEN, Giant_Gorebyss_2
	goto Giant_Gorebyss_3

Giant_Gorebyss_7:
# 28 "data/maps/CoralBeach_2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 30 "data/maps/CoralBeach_2/scripts.pory"
	msgbox Giant_Gorebyss_Text_1
# 31 "data/maps/CoralBeach_2/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 1, 0, 0
# 32 "data/maps/CoralBeach_2/scripts.pory"
	setwildbattle SPECIES_GOREBYSS, 35, ITEM_DEEP_SEA_SCALE
# 33 "data/maps/CoralBeach_2/scripts.pory"
	dowildbattle
# 35 "data/maps/CoralBeach_2/scripts.pory"
	msgbox Giant_Gorebyss_Text_2
# 36 "data/maps/CoralBeach_2/scripts.pory"
	giveitem ITEM_DEEP_SEA_SCALE
# 37 "data/maps/CoralBeach_2/scripts.pory"
	setflag FLAG_GIANT_GOREBYSS_BEATEN
# 38 "data/maps/CoralBeach_2/scripts.pory"
	addvar VAR_GIANT_FISH_BEATEN, 1
# 39 "data/maps/CoralBeach_2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto Giant_Gorebyss_1


CoralBeach2_Pyukumuku_Clean_Up_Text_0:
# 7 "data/maps/CoralBeach_2/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

CoralBeach2_Pyukumuku_Clean_Up_Text_1:
# 9 "data/maps/CoralBeach_2/scripts.pory"
	.string "SPLASH$"

CoralBeach2_Pyukumuku_Clean_Up_Text_2:
# 14 "data/maps/CoralBeach_2/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokémon.$"

Giant_Gorebyss_Text_0:
# 26 "data/maps/CoralBeach_2/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface, do you want to attempt to\l"
	.string "catch it?$"

Giant_Gorebyss_Text_1:
# 30 "data/maps/CoralBeach_2/scripts.pory"
	.string "It leaps out at you$"

Giant_Gorebyss_Text_2:
# 35 "data/maps/CoralBeach_2/scripts.pory"
	.string "The Gorebyss flees and leaves\n"
	.string "something behind$"

Giant_Gorebyss_Text_3:
# 47 "data/maps/CoralBeach_2/scripts.pory"
	.string "You see a giant Pokémon swimming under\n"
	.string "the surface$"
