PlayersHouse_1F_MapScripts::
# 2 "data/maps/PlayersHouse_1F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PlayersHouse_1F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/PlayersHouse_1F/scripts.pory"
	setrespawn HEAL_LOCATION_PLAYERS_BEDROOM
	return


PlayersHouse_1F_Trigger_StartJourney::
# 9 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 10 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_0, MSGBOX_DEFAULT
# 11 "data/maps/PlayersHouse_1F/scripts.pory"
	applymovement 1, PlayersHouse_1F_RivalBrother_WalksClose
# 12 "data/maps/PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 13 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_1, MSGBOX_DEFAULT
# 14 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_2, MSGBOX_DEFAULT
# 15 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_3, MSGBOX_DEFAULT
# 16 "data/maps/PlayersHouse_1F/scripts.pory"
	callnative StartNewPokeballCaseUI
# 17 "data/maps/PlayersHouse_1F/scripts.pory"
	waitstate
# 18 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 19 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 21 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 22 "data/maps/PlayersHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 23 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_4, MSGBOX_DEFAULT
# 24 "data/maps/PlayersHouse_1F/scripts.pory"
	giveitem ITEM_EXP_SHARE
# 26 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_5, MSGBOX_DEFAULT
# 27 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 28 "data/maps/PlayersHouse_1F/scripts.pory"
	setvar VAR_BEDROCK_TOWN_STATE, 2
# 29 "data/maps/PlayersHouse_1F/scripts.pory"
	applymovement 1, PlayersHouse_1F_RivalBrother_ToSink
# 30 "data/maps/PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 31 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_EventScript_LittleBoy::
# 35 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 36 "data/maps/PlayersHouse_1F/scripts.pory"
	faceplayer
# 37 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_LittleBoy_Text_0, MSGBOX_DEFAULT
# 38 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Itemball::
# 42 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 43 "data/maps/PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 44 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_ITEM_FIRST_POKEBALLS
# 45 "data/maps/PlayersHouse_1F/scripts.pory"
	removeobject 2
# 46 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Television::
# 50 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 51 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_GF_EventScript_Television_Text_0
# 52 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Fridge::
# 56 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 57 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_GF_EventScript_Fridge_Text_0
# 58 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 62 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_WalksClose:
# 63 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 64 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 67 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_ToSink:
# 68 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 69 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 70 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 72 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 73 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 74 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 75 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 76 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 77 "data/maps/PlayersHouse_1F/scripts.pory"
	face_up
	step_end

PlayersHouse_1F_Trigger_StartJourney_Text_0:
# 10 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "HEY! You're finally awake.$"

PlayersHouse_1F_Trigger_StartJourney_Text_1:
# 13 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "RIVALNAME sent me over to see what you\n"
	.string "were doing and distract you but I guess\l"
	.string "I made too much noise. He's rushed off\l"
	.string "to MAHOGONY HILLS to start his gym\l"
	.string "challenge cause he's the best!$"

PlayersHouse_1F_Trigger_StartJourney_Text_2:
# 14 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "He has probably already got all the\n"
	.string "badges as he is the best trainer ever!$"

PlayersHouse_1F_Trigger_StartJourney_Text_3:
# 15 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "I saw you're a trainer to! I was looking\n"
	.string "at your POKEMON but I mixed it up with\l"
	.string "the POKEMON my mum gave me, do you\l"
	.string "remember which one it was?$"

PlayersHouse_1F_Trigger_StartJourney_Text_4:
# 23 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Oh wow! Your POKEMON is so much weaker\n"
	.string "than RIVALNAME, you probably need this\l"
	.string "to catch up.$"

PlayersHouse_1F_Trigger_StartJourney_Text_5:
# 26 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Anyway I'm going to get some juice!$"

PlayersHouse_1F_EventScript_LittleBoy_Text_0:
# 37 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Where is your juice?$"

PlayersHouse_GF_EventScript_Television_Text_0:
# 51 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "It's a show about cartoon dogs.\l"
	.string "I'm not going to listen to them.$"

PlayersHouse_GF_EventScript_Fridge_Text_0:
# 57 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "I need to buy more juice.$"
