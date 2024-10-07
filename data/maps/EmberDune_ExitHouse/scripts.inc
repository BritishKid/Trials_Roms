EmberDune_ExitHouse_MapScripts::
	.byte 0


RuinManiac_EmberDune_Suggestion::
	lockall
	faceplayer
	msgbox RuinManiac_EmberDune_Suggestion_Text_0
	releaseall
	return


GhostGymHelper_EmberDune::
	setflag FLAG_INVERSE_BATTLE_ON
	trainerbattle_single EMBERDUNE_GARY, Gary_Intro, Gary_Outro, Gary_Postbattle_Script
	msgbox Gary_PostBattle, MSGBOX_AUTOCLOSE
	clearflag FLAG_INVERSE_BATTLE_ON
	release
	return


Gary_Postbattle_Script::
	msgbox Gary_Postbattle_Script_Text_0
	givemon SPECIES_MILTANK, 30, ITEM_ABILITY_CAPSULE
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Gary_Postbattle_Script_2
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Gary_Postbattle_Script_3
	msgbox Gary_Postbattle_Script_Text_2
Gary_Postbattle_Script_1:
	msgbox Gary_Postbattle_Script_Text_3
	return

Gary_Postbattle_Script_2:
	msgbox Gary_Postbattle_Script_Text_1
	call NicknamePartyMon
	goto Gary_Postbattle_Script_1

Gary_Postbattle_Script_3:
	msgbox Gary_Postbattle_Script_Text_1
	call NicknameBoxMon
	goto Gary_Postbattle_Script_1


RuinManiac_EmberDune_Suggestion_Text_0:
	.string "Apparently there is a lot of ruins from\n"
	.string "an old civilisation in the Ember Dunes\l"
	.string "but I couldn't find a way past. I'm\l"
	.string "training up to get enough Gym Badges to\l"
	.string "use Strength$"

Gary_Postbattle_Script_Text_0:
	.string "Incredible!$"

Gary_Postbattle_Script_Text_1:
	.string "Recieved Miltank$"

Gary_Postbattle_Script_Text_2:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

Gary_Postbattle_Script_Text_3:
	.string "Miltank can get the ability Scrappy, it\n"
	.string "allows it to hit Ghost type Pokémon. It\l"
	.string "will be very useful.$"

Gary_Intro::
	.string "The Ember Dunes gym is full of storng\n"
	.string "ghost Pokémon, if you want to beat the\l"
	.string "gym you'll need to prepare. If you can\l"
	.string "beat my inverse team I'll give you\l"
	.string "something to help$"

Gary_Outro::
	.string "That surprised me!$"

Gary_PostBattle::
	.string "Scrappy allows any more to hit Ghost\n"
	.string "types.$"
