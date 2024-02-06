PlayersHouseGF_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PlayersHouseGF_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

PlayersHouseGF_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setrespawn HEAL_LOCATION_PLAYERS_BEDROOM
	return


PlayersHouseGF_EventScript_Fridge::
	lockall
	msgbox PlayersHouseGF_EventScript_Fridge_Text_0
	releaseall
	return


PlayersHouseGF_EventScript_Sink::
	lockall
	msgbox PlayersHouseGF_EventScript_Sink_Text_0
	releaseall
	return


PlayersHouseGF_EventScript_GlassCase::
	lockall
	msgbox PlayersHouseGF_EventScript_GlassCase_Text_0
	releaseall
	return


PlayersHouseGF_EventScript_TV::
	lockall
	msgbox PlayersHouseGF_EventScript_TV_Text_0
	releaseall
	return


PlayersHouseGF_EventScript_Fridge_Text_0:
	.string "I got eggs, butter and something that\n"
	.string "seems to be growing.\p"
	.string "Maybe its a new Pokemon species$"

PlayersHouseGF_EventScript_Sink_Text_0:
	.string "You turn on the tap too much and get\n"
	.string "your trousers wet. It looks like you've\l"
	.string "wet yourself.$"

PlayersHouseGF_EventScript_GlassCase_Text_0:
	.string "It's all the awesome artwork BitBeads\n"
	.string "made you. You especially love the Inkay.$"

PlayersHouseGF_EventScript_TV_Text_0:
	.string "Oh Bluey is on. It's full of life lessons,\n"
	.string "but I'm not going to listen to some\l"
	.string "cartoon dog.$"
