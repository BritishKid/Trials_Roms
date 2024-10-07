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
# 19 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 20 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_EventScript_Gentleman::
# 21 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	msgbox CoralPort_PokemonCenter_1F_Text_GoToSafariZone, MSGBOX_NPC
# 22 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	end
# 23 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 24 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_EventScript_Man::
# 25 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	msgbox CoralPort_PokemonCenter_1F_Text_RecordCornerIsNeat, MSGBOX_NPC
# 26 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	end
# 27 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 28 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_EventScript_Boy::
# 29 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	msgbox CoralPort_PokemonCenter_1F_Text_DoYouKnowAboutPokenav, MSGBOX_NPC
# 30 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	end
# 31 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 32 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_Text_GoToSafariZone:
# 33 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Listen, kid, are you working\n"
# 34 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "on a POKéDEX?\p"
# 35 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Hmm… Go to the SAFARI ZONE.\n"
# 36 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "That's my suggestion.$"
# 37 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 38 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_Text_RecordCornerIsNeat:
# 39 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Have you done anything at\n"
# 40 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "the RECORD CORNER?\p"
# 41 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "It's pretty neat. It mixes and matches\n"
# 42 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "the records of TRAINERS.\p"
# 43 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "I don't know quite how it works,\n"
# 44 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "but it's cool. It's exciting, even!$"
# 45 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"

# 46 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
CoralPort_PokemonCenter_1F_Text_DoYouKnowAboutPokenav:
# 47 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Oh, wow, you have a POKéNAV!\n"
# 48 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "And it's just like mine!\p"
# 49 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Do you know about POKéNAV's\n"
# 50 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "MATCH CALL system?\p"
# 51 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "Access it, and you can chat with\n"
# 52 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "registered TRAINERS anytime.\p"
# 53 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "It also shows you which TRAINERS\n"
# 54 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "want a rematch with you.\p"
# 55 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "It's really nifty! Those DEVON guys\n"
# 56 "data/maps/CoralPort_PokemonCenter_1F/scripts.pory"
	.string "sure know what they're doing!$"
