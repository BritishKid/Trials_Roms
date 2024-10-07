# 1 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
.set LOCALID_NURSE, 1
# 2 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 3 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_MapScripts::
# 4 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_PokemonCenter_1F_OnTransition
# 5 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, CableClub_OnResume
# 6 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.byte 0
# 7 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 8 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_OnTransition:
# 9 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setrespawn HEAL_LOCATION_LILYCOVE_CITY
# 10 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx
# 11 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 12 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 13 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
@ SetLilycoveLadyGfx returns TRUE if its the Contest Lady
# 14 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_SetLilycoveLadyGfx::
# 15 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	special SetLilycoveLadyGfx
# 16 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon
# 17 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon
# 18 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 19 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_HideContestLadyMon::
# 21 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 22 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ShowContestLadyMon::
# 25 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	clearflag FLAG_HIDE_LILYCOVE_POKEMON_CENTER_CONTEST_LADY_MON
# 26 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Nurse::
# 29 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	setvar VAR_0x800B, LOCALID_NURSE
# 30 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	call Common_EventScript_PkmnCenterNurse
# 31 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitmessage
# 32 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	waitbuttonpress
# 33 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 34 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 35 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 36 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Boy::
# 37 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon, MSGBOX_NPC
# 38 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 39 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 40 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_Maniac::
# 41 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	lock
# 42 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	faceplayer
# 43 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	goto_if_set FLAG_BADGE07_GET, LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone
# 44 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels, MSGBOX_DEFAULT
# 45 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 46 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 47 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 48 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_EventScript_ManiacBadTeamGone::
# 49 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	msgbox LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels, MSGBOX_DEFAULT
# 50 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	release
# 51 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	end
# 52 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 53 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HowManyKindsOfPokemon:
# 54 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I wonder how many kinds of POKéMON\n"
# 55 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "there are in the world.\p"
# 56 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "It'd be great to cross seas and\n"
# 57 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "trade POKéMON with people far away.$"
# 58 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 59 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HeardAboutRottenScoundrels:
# 60 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I've been hearing about some rotten\n"
# 61 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "scoundrels who steal POKéMON and rip\l"
# 62 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "off METEORITES.$"
# 63 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"

# 64 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
LilycoveCity_PokemonCenter_1F_Text_HaventSeenRottenScoundrels:
# 65 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "Those rotten scoundrels who steal\n"
# 66 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "POKéMON and rip off METEORITES…\p"
# 67 "data/maps/LilycoveCity_PokemonCenter_1F/scripts.pory"
	.string "I haven't seen them around recently.$"
