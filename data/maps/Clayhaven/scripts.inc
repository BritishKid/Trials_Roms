# 1 "data/maps/Clayhaven/scripts.pory"
Clayhaven_MapScripts::
# 2 "data/maps/Clayhaven/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Clayhaven_OnTransition
# 3 "data/maps/Clayhaven/scripts.pory"
	.byte 0
# 4 "data/maps/Clayhaven/scripts.pory"

# 5 "data/maps/Clayhaven/scripts.pory"
Clayhaven_OnTransition:
# 6 "data/maps/Clayhaven/scripts.pory"
	setflag FLAG_VISITED_CLAYHAVEN
# 7 "data/maps/Clayhaven/scripts.pory"
	end

Clayhaven_MapScript_CraftingMaster_Sign::
# 10 "data/maps/Clayhaven/scripts.pory"
	lockall
# 11 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_CraftingMaster_Sign_Text_0
# 12 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_MapScript_TownSign::
# 16 "data/maps/Clayhaven/scripts.pory"
	lockall
# 17 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_TownSign_Text_0
# 18 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_MapScript_PlatefallCave_Sign::
# 22 "data/maps/Clayhaven/scripts.pory"
	lockall
# 23 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_PlatefallCave_Sign_Text_0
# 24 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_MapScript_CraftingMaster_Sign_Text_0:
# 11 "data/maps/Clayhaven/scripts.pory"
	.string "Crafting Master's House$"

Clayhaven_MapScript_TownSign_Text_0:
# 17 "data/maps/Clayhaven/scripts.pory"
	.string "CLAY HAVEN\l"
	.string "Triver's oldest town$"

Clayhaven_MapScript_PlatefallCave_Sign_Text_0:
# 23 "data/maps/Clayhaven/scripts.pory"
	.string "PLATEFALL CAVE\l"
	.string "Landing site of an ancient Pokémon$"
