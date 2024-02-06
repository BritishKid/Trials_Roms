Route1b_MapScripts::
	.byte 0


Route1b_BattleSalt7_FirstBattle::
	trainerbattle_single TRAINER_SALT7_ROUTE_1B_ENCOUNTER, Salt7_Intro, Salt7_Outro
	msgbox PostBattle_Salt7, MSGBOX_AUTOCLOSE
	setflag FLAG_SALT7_BEATEN_FIRST_ENCOUNTER
	setvar VAR_SALTS7_QUEST_STATE, 1
	waitmessage
	end


Route1b_Battle_NeetFirst::
	trainerbattle_single TRAINER_SHUT1NNEET_ROUTE_1B, Route1b_Neet_Intro, Route1b_Neet_Outro
	msgbox PostBattle_Route1b_Neet, MSGBOX_AUTOCLOSE
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


Route1b_TrainerLeroy::
	trainerbattle_single TRAINER_GIRLMAYA_ROUTE_1B, Girl_Maya_Intro, Girl_Maya_Outro
	msgbox PostBattle_Maya, MSGBOX_AUTOCLOSE
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


Route1b_BattlePicknickerLily::
	trainerbattle_single TRAINER_PICKNICKERLILY_ROUTE_1B, Picknicker_Lily_Intro, Picknicker_Lily_Outro
	msgbox PostBattle_Lily, MSGBOX_AUTOCLOSE
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


Route1b_Fisherman_PierTalk::
	lock
	msgbox Route1b_Fisherman_PierTalk_Text_0, MSGBOX_DEFAULT
	release
	return


Route1b_FisherSign::
	lockall
	msgbox Route1b_FisherSign_Text_0
	releaseall
	return


EventScript_Route1b_ItemBall_SuperPotion::
	finditem ITEM_SUPER_POTION
	return


Route1b_Fisherman_PierTalk_Text_0:
	.string "If I had a pokemon that could surf I\n"
	.string "could go over to that island!$"

Route1b_FisherSign_Text_0:
	.string "Want to learn to fish? Come on in and\n"
	.string "get yourself a fishing rod$"

Salt7_Intro::
	.string "The guy in that house there gave me an\n"
	.string "old rod! I'm going to use it to catch all\l"
	.string "the Gyrados I can find! I've already got\l"
	.string "some. Here let me show you$"

Salt7_Outro::
	.string "Alright so they aren't Gyrados yes, but\n"
	.string "I'll get more and become unstoppable!\l"
	.string "But just how do I evolve them.$"

PostBattle_Salt7::
	.string "I remember reading something about a\n"
	.string "waterfall could make them evolve. I\l"
	.string "think there is one somewhere nearby$"

Route1b_Neet_Intro::
	.string "Have you seen a Totodile around here? I\n"
	.string "really want one.$"

Route1b_Neet_Outro::
	.string "I would of won if I had my Totodile!$"

PostBattle_Route1b_Neet::
	.string "I'll find a Totodile around here\n"
	.string "somehow, maybe I should get my boat$"

Girl_Maya_Intro::
	.string "I hope you're ready for a battle,\n"
	.string "because I'm itching for a fight.$"

Girl_Maya_Outro::
	.string "Your Pokémon are amazing!$"

PostBattle_Maya::
	.string "I need to catch some stronger Pokemon$"

Picknicker_Lily_Intro::
	.string "I'm going to become a champion one day!$"

Picknicker_Lily_Outro::
	.string "I got a long way to go still$"

PostBattle_Lily::
	.string "You can get the champion rank after\n"
	.string "getting every Triver badge and then\l"
	.string "beating league. It's an incredible\l"
	.string "challenge.$"
