# 1 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_MapScripts::
# 2 "data/maps/EverGrandeCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EverGrandeCity_OnTransition
# 3 "data/maps/EverGrandeCity/scripts.pory"
	.byte 0
# 4 "data/maps/EverGrandeCity/scripts.pory"

# 5 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_OnTransition:
# 6 "data/maps/EverGrandeCity/scripts.pory"
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
# 7 "data/maps/EverGrandeCity/scripts.pory"
	end
# 8 "data/maps/EverGrandeCity/scripts.pory"

# 9 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_VictoryRoadSign::
# 10 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringVictoryRoad, MSGBOX_SIGN
# 11 "data/maps/EverGrandeCity/scripts.pory"
	end
# 12 "data/maps/EverGrandeCity/scripts.pory"

# 13 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_CitySign::
# 14 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_CitySign, MSGBOX_SIGN
# 15 "data/maps/EverGrandeCity/scripts.pory"
	end
# 16 "data/maps/EverGrandeCity/scripts.pory"

# 17 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_PokemonLeagueSign::
# 18 "data/maps/EverGrandeCity/scripts.pory"
	msgbox EverGrandeCity_Text_EnteringPokemonLeague, MSGBOX_SIGN
# 19 "data/maps/EverGrandeCity/scripts.pory"
	end
# 20 "data/maps/EverGrandeCity/scripts.pory"

# 21 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_EventScript_SetVisitedEverGrande::
# 22 "data/maps/EverGrandeCity/scripts.pory"
	setflag FLAG_VISITED_EVER_GRANDE_CITY
# 23 "data/maps/EverGrandeCity/scripts.pory"
	setvar VAR_TEMP_1, 1
# 24 "data/maps/EverGrandeCity/scripts.pory"
	end
# 25 "data/maps/EverGrandeCity/scripts.pory"

# 26 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringVictoryRoad:
# 27 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING VICTORY ROAD$"
# 28 "data/maps/EverGrandeCity/scripts.pory"

# 29 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_EnteringPokemonLeague:
# 30 "data/maps/EverGrandeCity/scripts.pory"
	.string "ENTERING POKéMON LEAGUE\n"
# 31 "data/maps/EverGrandeCity/scripts.pory"
	.string "CENTER GATE$"
# 32 "data/maps/EverGrandeCity/scripts.pory"

# 33 "data/maps/EverGrandeCity/scripts.pory"
EverGrandeCity_Text_CitySign:
# 34 "data/maps/EverGrandeCity/scripts.pory"
	.string "EVER GRANDE CITY\p"
# 35 "data/maps/EverGrandeCity/scripts.pory"
	.string "“The paradise of flowers, the sea,\n"
# 36 "data/maps/EverGrandeCity/scripts.pory"
	.string "and POKéMON.”$"

regigiver::
# 40 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_REGIROCK, 50
# 41 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_REGICE, 50
# 42 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_REGISTEEL, 50
# 43 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_REGIDRAGO, 50
# 44 "data/maps/EverGrandeCity/scripts.pory"
	givemon SPECIES_REGIELEKI, 50
	return

