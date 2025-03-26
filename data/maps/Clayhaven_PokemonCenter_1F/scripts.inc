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

ClayHaven_PokemonCenter_Picknicker::
# 23 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	lockall
# 24 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	faceplayer
# 25 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	msgbox ClayHaven_PokemonCenter_Picknicker_Text_0
# 26 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	releaseall
	return


ClayHaven_PokemonCenter_Camper::
# 30 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	lockall
# 31 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	faceplayer
# 32 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	msgbox ClayHaven_PokemonCenter_Camper_Text_0
# 33 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	releaseall
	return


ClayHaven_PokemonCenter_Picknicker_Text_0:
# 25 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	.string "Triver is a unique region, it's the only\n"
	.string "one where the gyms aren't inside the\l"
	.string "towns and cities. It can make tiring\l"
	.string "having to go back to heal so make sure\l"
	.string "you stock up at the Mart.$"

ClayHaven_PokemonCenter_Camper_Text_0:
# 32 "data/maps/Clayhaven_PokemonCenter_1F/scripts.pory"
	.string "Some trainers are much stronger than\n"
	.string "others, it's these guys in red that keep\l"
	.string "sending me back here to heal. Maybe I'll\l"
	.string "just avoid them next time.$"
