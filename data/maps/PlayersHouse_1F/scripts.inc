PlayersHouse_1F_MapScripts::
	.byte 0


PlayersHouse_1F_Trigger_StartJourney::
# 7 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 8 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_0, MSGBOX_DEFAULT
# 9 "data/maps/PlayersHouse_1F/scripts.pory"
	applymovement 1, PlayersHouse_1F_RivalBrother_WalksClose
# 10 "data/maps/PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 11 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_1, MSGBOX_DEFAULT
# 12 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_2, MSGBOX_DEFAULT
# 13 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_3, MSGBOX_DEFAULT
# 14 "data/maps/PlayersHouse_1F/scripts.pory"
	callnative StartNewPokeballCaseUI
# 15 "data/maps/PlayersHouse_1F/scripts.pory"
	waitstate
# 16 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 17 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_POKEDEX_GET
# 19 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_SYS_B_DASH
# 20 "data/maps/PlayersHouse_1F/scripts.pory"
	special EnableNationalPokedex
# 21 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_4, MSGBOX_DEFAULT
# 22 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_5, MSGBOX_DEFAULT
# 23 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 24 "data/maps/PlayersHouse_1F/scripts.pory"
	setvar VAR_BEDROCK_TOWN_STATE, 1
# 25 "data/maps/PlayersHouse_1F/scripts.pory"
	applymovement 1, PlayersHouse_1F_RivalBrother_ToSink
# 26 "data/maps/PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 27 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_EventScript_LittleBoy::
# 31 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 32 "data/maps/PlayersHouse_1F/scripts.pory"
	faceplayer
# 33 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_LittleBoy_Text_0, MSGBOX_DEFAULT
# 34 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 38 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_WalksClose:
# 39 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 40 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 43 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_ToSink:
# 44 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 45 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 46 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 47 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 48 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 49 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 50 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 51 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 52 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 53 "data/maps/PlayersHouse_1F/scripts.pory"
	face_up
	step_end

PlayersHouse_1F_Trigger_StartJourney_Text_0:
# 8 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "HEY! You're finally awake.$"

PlayersHouse_1F_Trigger_StartJourney_Text_1:
# 11 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "RIVALNAME sent me over to see what you\n"
	.string "were doing and distract you but I guess\l"
	.string "I made too much noise. He's rushed off\l"
	.string "to MAHOGONY HILLS to start his gym\l"
	.string "challenge cause he's the best!$"

PlayersHouse_1F_Trigger_StartJourney_Text_2:
# 12 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "He has probably already got all the\n"
	.string "badges as he is the best trainer ever!$"

PlayersHouse_1F_Trigger_StartJourney_Text_3:
# 13 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "I saw you're a trainer to! I was looking\n"
	.string "at your POKEMON but I mixed it up with\l"
	.string "the POKEMON my mum gave me, do you\l"
	.string "remember which one it was?$"

PlayersHouse_1F_Trigger_StartJourney_Text_4:
# 21 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Oh wow! Your POKEMON is so much weaker\n"
	.string "than RIVALNAME$"

PlayersHouse_1F_Trigger_StartJourney_Text_5:
# 22 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Anyway I'm going to get some juice!$"

PlayersHouse_1F_EventScript_LittleBoy_Text_0:
# 33 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Where is your juice?$"
