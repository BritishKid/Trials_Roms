# 1 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_MapScripts::
# 4 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralPort_PokemonCenter_1F_OnTransition
# 5 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_OnTransition:
# 9 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_CORAL_PORT
# 10 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 14 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	end

CoralPort_PokemonCenter_1F_EventScript_Man::
# 21 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	lockall
# 22 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	msgbox CoralPort_PokemonCenter_1F_EventScript_Man_Text_0
# 23 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	releaseall
	return


CoralPort_PokemonCenter_1F_EventScript_Boy::
# 27 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	lockall
# 28 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	msgbox CoralPort_PokemonCenter_1F_EventScript_Boy_Text_0
# 29 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	releaseall
	return


CoralPort_PokemonCenter_1F_EventScript_Man_Text_0:
# 22 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Have you spoken to the fisherman in the\n"
	.string "market?\l"
	.string "He taught me so much.$"

CoralPort_PokemonCenter_1F_EventScript_Boy_Text_0:
# 28 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "I heard they have giant fish in the gym.$"
