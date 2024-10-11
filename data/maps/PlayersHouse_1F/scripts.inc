PlayersHouse_1F_MapScripts::
	.byte 0


PlayersHouse_1F_Trigger_StartJourney::
	lockall
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_0, MSGBOX_DEFAULT
	applymovement 1, PlayersHouse_1F_RivalBrother_WalksClose
	waitmovement 1
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_1, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_2, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_3, MSGBOX_DEFAULT
	callnative StartNewPokeballCaseUI
	waitstate
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_SYS_POKEDEX_GET
	setflag FLAG_SYS_B_DASH
	special EnableNationalPokedex
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_4, MSGBOX_DEFAULT
	msgbox PlayersHouse_1F_Trigger_StartJourney_Text_5, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_STARTER
	setvar VAR_BEDROCK_TOWN_STATE, 1
	applymovement 1, PlayersHouse_1F_RivalBrother_ToSink
	waitmovement 1
	releaseall
	return


PlayersHouse_1F_EventScript_LittleBoy::
	lockall
	faceplayer
	msgbox PlayersHouse_1F_EventScript_LittleBoy_Text_0, MSGBOX_DEFAULT
	releaseall
	return


PlayersHouse_1F_RivalBrother_WalksClose:
	walk_up
	walk_up
	step_end

PlayersHouse_1F_RivalBrother_ToSink:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	face_up
	step_end

PlayersHouse_1F_Trigger_StartJourney_Text_0:
	.string "HEY! You're finally awake.$"

PlayersHouse_1F_Trigger_StartJourney_Text_1:
	.string "RIVALNAME sent me over to see what you\n"
	.string "were doing and distract you but I guess\l"
	.string "I made too much noise. He's rushed off\l"
	.string "to MAHOGONY HILLS to start his gym\l"
	.string "challenge cause he's the best!$"

PlayersHouse_1F_Trigger_StartJourney_Text_2:
	.string "He has probably already got all the\n"
	.string "badges as he is the best trainer ever!$"

PlayersHouse_1F_Trigger_StartJourney_Text_3:
	.string "I saw you're a trainer to! I was looking\n"
	.string "at your POKEMON but I mixed it up with\l"
	.string "the POKEMON my mum gave me, do you\l"
	.string "remember which one it was?$"

PlayersHouse_1F_Trigger_StartJourney_Text_4:
	.string "Oh wow! Your POKEMON is so much weaker\n"
	.string "than RIVALNAME$"

PlayersHouse_1F_Trigger_StartJourney_Text_5:
	.string "Anyway I'm going to get some juice!$"

PlayersHouse_1F_EventScript_LittleBoy_Text_0:
	.string "Where is your juice?$"
