# 1 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
Clayhaven_PokemonCenter_1F_MapScripts::
# 4 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Clayhaven_PokemonCenter_1F_OnTransition
# 5 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
Clayhaven_PokemonCenter_1F_OnTransition:
# 9 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CLAYHAVEN
# 10 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 11 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
Clayhaven_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	release
# 19 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	end
