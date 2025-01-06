Route3c_MapScripts::
# 2 "data/maps/Route3c/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route3c_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 4 "data/maps/Route3c/scripts.pory"
	call Open_Charander_Cave
	return


Open_Charander_Cave::
# 10 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 8, METATILE_General_Grass, FALSE
# 11 "data/maps/Route3c/scripts.pory"
	setmetatile 10, 8, METATILE_General_Grass, FALSE
# 12 "data/maps/Route3c/scripts.pory"
	setmetatile 8, 8, METATILE_General_GrassRockWallRight, TRUE
# 13 "data/maps/Route3c/scripts.pory"
	setmetatile 11, 8, METATILE_General_GrassRockCorner, TRUE
# 14 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 7, METATILE_General_CaveEntrance_Bottom, FALSE
# 15 "data/maps/Route3c/scripts.pory"
	setmetatile 10, 7, METATILE_General_RockWall_GrassBase, TRUE
# 16 "data/maps/Route3c/scripts.pory"
	setmetatile 8, 7, METATILE_General_RockCornerRight, TRUE
# 17 "data/maps/Route3c/scripts.pory"
	setmetatile 11, 7, METATILE_General_RockCornerLeft, TRUE
# 18 "data/maps/Route3c/scripts.pory"
	setmetatile 9, 6, METATILE_General_CaveEntrance_Top, TRUE
	return


Route3c_EventScript_CharmanderWarp::
# 24 "data/maps/Route3c/scripts.pory"
	lockall
# 25 "data/maps/Route3c/scripts.pory"
	msgbox Route3c_EventScript_CharmanderWarp_Text_0, MSGBOX_YESNO
# 26 "data/maps/Route3c/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3c_EventScript_CharmanderWarp_2
Route3c_EventScript_CharmanderWarp_1:
# 29 "data/maps/Route3c/scripts.pory"
	releaseall
	return

Route3c_EventScript_CharmanderWarp_2:
# 27 "data/maps/Route3c/scripts.pory"
	warp MAP_HIDDEN_GROTTO_CHARMANDER, 7, 8
	goto Route3c_EventScript_CharmanderWarp_1


Route3c_TrainerBattle_Hiker::
# 33 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_HIKER, Route3c_Hiker_Intro, Route3c_Hiker_Outro, Increase_Trainers_Beaten
# 34 "data/maps/Route3c/scripts.pory"
	msgbox Route3c_Hiker_Postbattle, MSGBOX_DEFAULT
	end


Route3c_TrainerBattle_CamperSurprise::
# 39 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_CAMPER Route3Hidden_Intro, Route3Hidden_Outro, Route3c_EventScript_CamperBeaten
# 40 "data/maps/Route3c/scripts.pory"
	msgbox Route3Hidden_PostBattle, MSGBOX_AUTOCLOSE
	end


Route3c_TrainerBattle_RichBoy::
# 45 "data/maps/Route3c/scripts.pory"
	trainerbattle_single ROUTE3C_RICHBOY_CLIVE, Route3_RichBoyClive_Intro, Route3_RichBoyClive_Outro, Increase_Trainers_Beaten
# 46 "data/maps/Route3c/scripts.pory"
	msgbox Route3_RichBoyClive_PostBattle, MSGBOX_AUTOCLOSE
	return


Route3c_EventScript_CamperBeaten::
# 50 "data/maps/Route3c/scripts.pory"
	setvar VAR_HIDDEN_MOUNTAIN_PASS, 1
# 51 "data/maps/Route3c/scripts.pory"
	call Increase_Trainers_Beaten
	return


Route3c_EventScript_CharmanderWarp_Text_0:
# 25 "data/maps/Route3c/scripts.pory"
	.string "The mountain seems to have been split,\n"
	.string "would you like to squeeze through?$"

Route3c_Hiker_Intro::
# 55 "data/maps/Route3c/scripts.pory"
	.string "I've caught some incredibly storng\n"
	.string "Pokémon up here.$"

Route3c_Hiker_Outro::
# 59 "data/maps/Route3c/scripts.pory"
	.string "I guess I need to keep exploring for\n"
	.string "stronger Pokémon.$"

Route3c_Hiker_Postbattle::
# 63 "data/maps/Route3c/scripts.pory"
	.string "I heard about about powerful dragons\n"
	.string "that live on the peak of mountain.$"

Route3Hidden_Intro::
# 67 "data/maps/Route3c/scripts.pory"
	.string "I was told you can catch Charmander\n"
	.string "somewhere near here.$"

Route3Hidden_Outro::
# 71 "data/maps/Route3c/scripts.pory"
	.string "That explosion moved the very\n"
	.string "mountain.$"

Route3Hidden_PostBattle::
# 75 "data/maps/Route3c/scripts.pory"
	.string "Maybe I read the map wrong$"

Route3_RichBoyClive_Intro::
# 79 "data/maps/Route3c/scripts.pory"
	.string "I am so lost.$"

Route3_RichBoyClive_Outro::
# 83 "data/maps/Route3c/scripts.pory"
	.string "That hasn't helped.$"

Route3_RichBoyClive_PostBattle::
# 87 "data/maps/Route3c/scripts.pory"
	.string "Do you often beat lost children and\n"
	.string "take their money?$"
