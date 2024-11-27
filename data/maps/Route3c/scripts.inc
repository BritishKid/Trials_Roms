Route3c_MapScripts::
# 2 "data/maps/Route3c/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route3c/scripts.pory"
	compare VAR_HIDDEN_MOUNTAIN_PASS, 0
	goto_if_gt Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 8, METATILE_General_Grass, FALSE
# 5 "data/maps/Route3c/scripts.pory"
	setmetatile 10, 8, METATILE_General_Grass, FALSE
# 6 "data/maps/Route3c/scripts.pory"
	setmetatile 8, 8, METATILE_General_GrassRockWallRight, TRUE
# 7 "data/maps/Route3c/scripts.pory"
	setmetatile 11, 8, METATILE_General_GrassRockCorner, TRUE
# 8 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 7, METATILE_General_CaveEntrance_Bottom, FALSE
# 9 "data/maps/Route3c/scripts.pory"
	setmetatile 10, 7, METATILE_General_RockWall_GrassBase, TRUE
# 10 "data/maps/Route3c/scripts.pory"
	setmetatile 8, 7, METATILE_General_RockCornerRight, TRUE
# 11 "data/maps/Route3c/scripts.pory"
	setmetatile 11, 7, METATILE_General_RockCornerLeft, TRUE
# 12 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 6, METATILE_General_CaveEntrance_Top, TRUE
	return


Route3c_TrainerBattle_Hiker::
# 19 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_HIKER, Route3c_Hiker_Intro, Route3c_Hiker_Outro, Increase_Trainers_Beaten
# 20 "data/maps/Route3c/scripts.pory"
	msgbox Route3c_Hiker_Postbattle, MSGBOX_DEFAULT
	end


Route3c_TrainerBattle_CamperSurprise::
# 25 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_CAMPER Route3Hidden_Intro, Route3Hidden_Outro, Route3c_EventScript_CamperBeaten, Increase_Trainers_Beaten
# 26 "data/maps/Route3c/scripts.pory"
	msgbox Route3Hidden_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3c_TrainerBattle_RichBoy::
# 31 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_RICHBOY_CLIVE, Route3_RichBoyClive_Intro, Route3_RichBoyClive_Outro, Increase_Trainers_Beaten
# 32 "data/maps/Route3c/scripts.pory"
	msgbox Route3_RichBoyClive_PostBattle, MSGBOX_AUTOCLOSE
	return


Route3c_EventScript_CamperBeaten::
# 36 "data/maps/Route3c/scripts.pory"
	setvar VAR_HIDDEN_MOUNTAIN_PASS, 1
	return


Route3c_Hiker_Intro::
# 40 "data/maps/Route3c/scripts.pory"
	.string "I've caught some incredibly storng\n"
	.string "Pokemon up here.$"

Route3c_Hiker_Outro::
# 44 "data/maps/Route3c/scripts.pory"
	.string "I guess I need to keep exploring for\n"
	.string "stronger Pokemon.$"

Route3c_Hiker_Postbattle::
# 48 "data/maps/Route3c/scripts.pory"
	.string "I heard about about powerful dragons\n"
	.string "that live on the peak of mountain.$"

Route3Hidden_Intro::
# 52 "data/maps/Route3c/scripts.pory"
	.string "I was told you can catch Charmander\n"
	.string "somewhere near here.$"

Route3Hidden_Outro::
# 56 "data/maps/Route3c/scripts.pory"
	.string "That explosion blew the band right off\n"
	.string "my Graveller$"

Route3Hidden_PostBattle::
# 60 "data/maps/Route3c/scripts.pory"
	.string "Maybe I read the map wrong$"

Route3_RichBoyClive_Intro::
# 64 "data/maps/Route3c/scripts.pory"
	.string "I am so lost.$"

Route3_RichBoyClive_Outro::
# 68 "data/maps/Route3c/scripts.pory"
	.string "That hasn't helped.$"

Route3_RichBoyClive_PostBattle::
# 72 "data/maps/Route3c/scripts.pory"
	.string "Do you often beat lost children and\n"
	.string "take their money?$"
