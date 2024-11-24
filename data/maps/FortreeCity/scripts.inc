FortreeCity_MapScripts::
# 2 "data/maps/FortreeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

FortreeCity_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/FortreeCity/scripts.pory"
	setflag FLAG_VISITED_FORTREE_CITY
	return


FortreeCity_EventScript_CitySign::
# 8 "data/maps/FortreeCity/scripts.pory"
	lockall
# 9 "data/maps/FortreeCity/scripts.pory"
	msgbox FortreeCity_EventScript_CitySign_Text_0
# 10 "data/maps/FortreeCity/scripts.pory"
	releaseall
	return


FortreeCity_EventScript_CitySign_Text_0:
# 9 "data/maps/FortreeCity/scripts.pory"
	.string "Coral Port:\n"
	.string "Gateway to the world.$"
