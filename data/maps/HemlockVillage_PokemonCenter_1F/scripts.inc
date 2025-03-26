# 1 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
HemlockVillage_PokemonCenter_1F_MapScripts::
# 4 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, HemlockVillage_PokemonCenter_1F_OnTransition
# 5 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
HemlockVillage_PokemonCenter_1F_OnTransition:
# 9 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_HEMLOCK_VILLAGE
# 10 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	end
# 11 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"

# 12 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
HemlockVillage_PokemonCenter_1F_EventScript_Nurse::
# 13 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 14 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 15 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	waitmessage
# 16 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 17 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	release
# 18 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	end

HemlockVillage_PokemonCenter_1F_EventScript_Nerd::
# 24 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	lockall
# 25 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	faceplayer
# 27 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	msgbox HemlockVillage_PokemonCenter_1F_EventScript_Nerd_Text_0
# 28 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	releaseall
	return


HemlockVillage_PokemonCenter_1F_EventScript_Nerd_Text_0:
# 27 "data/maps/HemlockVillage_PokemonCenter_1F/scripts.pory"
	.string "Hemlock gym is full of strong poison\n"
	.string "Pokemon, I wonder if you could make\l"
	.string "something for your Pokemon to hold so\l"
	.string "it didn't get poisoned.$"
