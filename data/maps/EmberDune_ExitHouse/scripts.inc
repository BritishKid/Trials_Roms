EmberDune_ExitHouse_MapScripts::
	.byte 0


RuinManiac_EmberDune_Suggestion::
# 4 "data/maps/EmberDune_ExitHouse/scripts.pory"
	lockall
# 5 "data/maps/EmberDune_ExitHouse/scripts.pory"
	faceplayer
# 6 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox RuinManiac_EmberDune_Suggestion_Text_0
# 7 "data/maps/EmberDune_ExitHouse/scripts.pory"
	releaseall
	return


GhostGymHelper_EmberDune::
# 12 "data/maps/EmberDune_ExitHouse/scripts.pory"
	setflag FLAG_INVERSE_BATTLE_ON
# 13 "data/maps/EmberDune_ExitHouse/scripts.pory"
	trainerbattle_single EMBERDUNE_GARY, Gary_Intro, Gary_Outro, Gary_Postbattle_Script
# 14 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_PostBattle, MSGBOX_AUTOCLOSE
# 15 "data/maps/EmberDune_ExitHouse/scripts.pory"
	clearflag FLAG_INVERSE_BATTLE_ON
# 16 "data/maps/EmberDune_ExitHouse/scripts.pory"
	release
	return


Gary_Postbattle_Script::
# 20 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_Postbattle_Script_Text_0
# 21 "data/maps/EmberDune_ExitHouse/scripts.pory"
	givemon SPECIES_MILTANK, 30, ITEM_ABILITY_CAPSULE
# 22 "data/maps/EmberDune_ExitHouse/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 23 "data/maps/EmberDune_ExitHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Gary_Postbattle_Script_2
# 27 "data/maps/EmberDune_ExitHouse/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Gary_Postbattle_Script_3
# 32 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_Postbattle_Script_Text_2
Gary_Postbattle_Script_1:
# 34 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_Postbattle_Script_Text_3
	return

Gary_Postbattle_Script_2:
# 24 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_Postbattle_Script_Text_1
# 25 "data/maps/EmberDune_ExitHouse/scripts.pory"
	call NicknamePartyMon
	goto Gary_Postbattle_Script_1

Gary_Postbattle_Script_3:
# 28 "data/maps/EmberDune_ExitHouse/scripts.pory"
	msgbox Gary_Postbattle_Script_Text_1
# 29 "data/maps/EmberDune_ExitHouse/scripts.pory"
	call NicknameBoxMon
	goto Gary_Postbattle_Script_1


RuinManiac_EmberDune_Suggestion_Text_0:
# 6 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "Apparently there is a lot of ruins from\n"
	.string "an old civilisation in the Ember Dunes\l"
	.string "but I couldn't find a way past. I'm\l"
	.string "training up to get enough Gym Badges to\l"
	.string "use Strength$"

Gary_Postbattle_Script_Text_0:
# 20 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "Incredible!$"

Gary_Postbattle_Script_Text_1:
# 24 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "Recieved Miltank$"

Gary_Postbattle_Script_Text_2:
# 32 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Gary_Postbattle_Script_Text_3:
# 34 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "Miltank can get the ability Scrappy, it\n"
	.string "allows it to hit Ghost type Pokémon. It\l"
	.string "will be very useful.$"

Gary_Intro::
# 38 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "The Ember Dunes gym is full of storng\n"
	.string "ghost Pokémon, if you want to beat the\l"
	.string "gym you'll need to prepare. If you can\l"
	.string "beat my inverse team I'll give you\l"
	.string "something to help$"

Gary_Outro::
# 42 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "That surprised me!$"

Gary_PostBattle::
# 46 "data/maps/EmberDune_ExitHouse/scripts.pory"
	.string "Scrappy allows any more to hit Ghost\n"
	.string "types.$"
