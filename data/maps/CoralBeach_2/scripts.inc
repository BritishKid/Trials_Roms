CoralBeach_2_MapScripts::
	.byte 0


CoralBeach2_Pyukumuku_Clean_Up::
# 5 "data/maps/CoralBeach_2/scripts.pory"
	lock
# 6 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_0
# 7 "data/maps/CoralBeach_2/scripts.pory"
	fadescreen FADE_TO_BLACK
# 8 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_1
# 9 "data/maps/CoralBeach_2/scripts.pory"
	removeobject 1
# 10 "data/maps/CoralBeach_2/scripts.pory"
	setflag FLAG_CLEANED_UP_PYUKUMUKU_5
# 11 "data/maps/CoralBeach_2/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 12 "data/maps/CoralBeach_2/scripts.pory"
	giveitem ITEM_BIG_PEARL
# 13 "data/maps/CoralBeach_2/scripts.pory"
	msgbox CoralBeach2_Pyukumuku_Clean_Up_Text_2
# 14 "data/maps/CoralBeach_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 15 "data/maps/CoralBeach_2/scripts.pory"
	call IncrementNumber_Pyukumukus_Saved
# 16 "data/maps/CoralBeach_2/scripts.pory"
	release
	return


CoralBeach2_Pyukumuku_Clean_Up_Text_0:
# 6 "data/maps/CoralBeach_2/scripts.pory"
	.string "It's a Pyukumuku, you push it back into\n"
	.string "the water$"

CoralBeach2_Pyukumuku_Clean_Up_Text_1:
# 8 "data/maps/CoralBeach_2/scripts.pory"
	.string "SPLASH$"

CoralBeach2_Pyukumuku_Clean_Up_Text_2:
# 13 "data/maps/CoralBeach_2/scripts.pory"
	.string "You found a big pearl under the\n"
	.string "Pokémon.$"
