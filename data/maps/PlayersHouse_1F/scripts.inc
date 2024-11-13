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
	giveitem ITEM_EXP_SHARE
# 24 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_5, MSGBOX_DEFAULT
# 25 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_RECEIVED_STARTER
# 26 "data/maps/PlayersHouse_1F/scripts.pory"
	setvar VAR_BEDROCK_TOWN_STATE, 2
# 27 "data/maps/PlayersHouse_1F/scripts.pory"
	applymovement 1, PlayersHouse_1F_RivalBrother_ToSink
# 28 "data/maps/PlayersHouse_1F/scripts.pory"
	waitmovement 1
# 29 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_1F_EventScript_LittleBoy::
# 33 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 34 "data/maps/PlayersHouse_1F/scripts.pory"
	faceplayer
# 35 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_1F_EventScript_LittleBoy_Text_0, MSGBOX_DEFAULT
# 36 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Itemball::
# 40 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 41 "data/maps/PlayersHouse_1F/scripts.pory"
	giveitem ITEM_POKE_BALL, 5
# 42 "data/maps/PlayersHouse_1F/scripts.pory"
	setflag FLAG_ITEM_FIRST_POKEBALLS
# 43 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Television::
# 47 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 48 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_GF_EventScript_Television_Text_0
# 49 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


PlayersHouse_GF_EventScript_Fridge::
# 53 "data/maps/PlayersHouse_1F/scripts.pory"
	lockall
# 54 "data/maps/PlayersHouse_1F/scripts.pory"
	msgbox PlayersHouse_GF_EventScript_Fridge_Text_0
# 55 "data/maps/PlayersHouse_1F/scripts.pory"
	releaseall
	return


# 59 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_WalksClose:
# 60 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 61 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
	step_end

# 64 "data/maps/PlayersHouse_1F/scripts.pory"
PlayersHouse_1F_RivalBrother_ToSink:
# 65 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 66 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 67 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 68 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_up
# 69 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 70 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 71 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 72 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 73 "data/maps/PlayersHouse_1F/scripts.pory"
	walk_left
# 74 "data/maps/PlayersHouse_1F/scripts.pory"
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
	.string "than RIVALNAME, you probably need this\l"
	.string "to catch up.$"

PlayersHouse_1F_Trigger_StartJourney_Text_5:
# 24 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Anyway I'm going to get some juice!$"

PlayersHouse_1F_EventScript_LittleBoy_Text_0:
# 35 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "Where is your juice?$"

PlayersHouse_GF_EventScript_Television_Text_0:
# 48 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "It's a show about cartoon dogs.\l"
	.string "I'm not going to listen to them.$"

PlayersHouse_GF_EventScript_Fridge_Text_0:
# 54 "data/maps/PlayersHouse_1F/scripts.pory"
	.string "I need to buy more juice.$"
