# 1 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"

# 2 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
BreakwaterPort_PokemonCenter_1F_MapScripts::
# 4 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BreakwaterPort_PokemonCenter_1F_OnTransition
# 5 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
BreakwaterPort_PokemonCenter_1F_OnTransition:
# 9 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_BREAKWATER_PORT
# 10 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
BreakwaterPort_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/BreakwaterPort_PokemonCenter_1F/scripts.pory"
	end
