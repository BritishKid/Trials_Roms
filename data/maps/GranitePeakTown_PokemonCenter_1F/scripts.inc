# 1 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
GranitePeakTown_PokemonCenter_1F_MapScripts::
# 4 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeakTown_PokemonCenter_1F_OnTransition
# 5 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
GranitePeakTown_PokemonCenter_1F_OnTransition:
# 9 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_GRANITE_PEAK
# 10 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_UpdateBrineyLocation
# 11 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
GranitePeakTown_PokemonCenter_1F_EventScript_Nurse::
# 14 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 15 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 16 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	waitmessage
# 17 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 18 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	release

GranitePeakTown_PokemonCenter_1F_EventScript_FatMan::
# 21 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	lockall
# 22 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 23 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	msgbox GranitePeakTown_PokemonCenter_1F_EventScript_FatMan_Text_0
# 24 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


GranitePeakTown_PokemonCenter_1F_EventScript_Woman::
# 28 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	lockall
# 29 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 30 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	msgbox GranitePeakTown_PokemonCenter_1F_EventScript_Woman_Text_0
# 31 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


GranitePeakTown_PokemonCenter_1F_EventScript_Youngster::
# 35 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	lockall
# 36 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	faceplayer
# 37 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	msgbox GranitePeakTown_PokemonCenter_1F_EventScript_Youngster_Text_0
# 38 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	releaseall
	return


GranitePeakTown_PokemonCenter_1F_EventScript_FatMan_Text_0:
# 23 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	.string "This town is very high up but it's\n"
	.string "nothing compared to the Winged City.$"

GranitePeakTown_PokemonCenter_1F_EventScript_Woman_Text_0:
# 30 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	.string "I've just got my Orange Belt from\n"
	.string "taking on the ancient dojos.$"

GranitePeakTown_PokemonCenter_1F_EventScript_Youngster_Text_0:
# 37 "data/maps/GranitePeakTown_PokemonCenter_1F/scripts.pory"
	.string "Hey, did you know that the...errr\l"
	.string "...\l"
	.string "...\l"
	.string "I forget.$"
