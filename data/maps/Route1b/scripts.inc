Route1b_MapScripts::
	.byte 0


Route1b_BattleSalt7_FirstBattle::
# 5 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_SALT7_ROUTE_1B_ENCOUNTER, Salt7_Intro, Salt7_Outro, Salt7_PostBattleScript
# 6 "data/maps/Route1b/scripts.pory"
	msgbox PostBattle_Salt7, MSGBOX_AUTOCLOSE
	end


Salt7_PostBattleScript::
# 11 "data/maps/Route1b/scripts.pory"
	setflag FLAG_SALT7_BEATEN_FIRST_ENCOUNTER
# 12 "data/maps/Route1b/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_SALT7_GYRADOS
# 13 "data/maps/Route1b/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_MET_SALT
# 14 "data/maps/Route1b/scripts.pory"
	setvar VAR_SALTS7_QUEST_STATE, 1
# 15 "data/maps/Route1b/scripts.pory"
	waitmessage
	return


Route1b_Battle_NeetFirst::
# 19 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_SHUT1NNEET_ROUTE_1B, Route1b_Neet_Intro, Route1b_Neet_Outro, Increase_Trainers_Beaten
# 20 "data/maps/Route1b/scripts.pory"
	msgbox PostBattle_Route1b_Neet, MSGBOX_AUTOCLOSE
# 21 "data/maps/Route1b/scripts.pory"
	waitmessage
	end


Route1b_TrainerLeroy::
# 26 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_GIRLMAYA_ROUTE_1B, Girl_Maya_Intro, Girl_Maya_Outro, Increase_Trainers_Beaten
# 27 "data/maps/Route1b/scripts.pory"
	msgbox PostBattle_Maya, MSGBOX_AUTOCLOSE
# 28 "data/maps/Route1b/scripts.pory"
	waitmessage
	end


Route1b_BattlePicknickerLily::
# 33 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_PICKNICKERLILY_ROUTE_1B, Picknicker_Lily_Intro, Picknicker_Lily_Outro, Increase_Trainers_Beaten
# 34 "data/maps/Route1b/scripts.pory"
	msgbox PostBattle_Lily, MSGBOX_AUTOCLOSE
# 35 "data/maps/Route1b/scripts.pory"
	waitmessage
	end


Route1b_Fisherman_PierTalk::
# 40 "data/maps/Route1b/scripts.pory"
	lock
# 41 "data/maps/Route1b/scripts.pory"
	faceplayer
# 42 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_Fisherman_PierTalk_Text_0, MSGBOX_DEFAULT
# 43 "data/maps/Route1b/scripts.pory"
	release
	return


Route1b_FisherSign::
# 47 "data/maps/Route1b/scripts.pory"
	lockall
# 48 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_FisherSign_Text_0
# 49 "data/maps/Route1b/scripts.pory"
	releaseall
	return


EventScript_Route1b_ItemBall_SuperPotion::
# 53 "data/maps/Route1b/scripts.pory"
	finditem ITEM_SUPER_POTION
	return


Increase_Trainers_Beaten::
# 110 "data/maps/Route1b/scripts.pory"
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
	return


Route1b_Fisherman_PierTalk_Text_0:
# 42 "data/maps/Route1b/scripts.pory"
	.string "If I had a Pokémon that could surf I\n"
	.string "could go over to that island!$"

Route1b_FisherSign_Text_0:
# 48 "data/maps/Route1b/scripts.pory"
	.string "Want to learn to fish? Come on in and\n"
	.string "get yourself a fishing rod$"

Salt7_Intro::
# 58 "data/maps/Route1b/scripts.pory"
	.string "The guy in that house there gave me an\n"
	.string "old rod! I'm going to use it to catch all\l"
	.string "the Gyrados I can find! I've already got\l"
	.string "some. Here let me show you$"

Salt7_Outro::
# 62 "data/maps/Route1b/scripts.pory"
	.string "Alright so they aren't Gyrados yes, but\n"
	.string "I'll get more and become unstoppable!\l"
	.string "But just how do I evolve them.$"

PostBattle_Salt7::
# 66 "data/maps/Route1b/scripts.pory"
	.string "I remember reading something about a\n"
	.string "waterfall could make them evolve. I\l"
	.string "think there is one somewhere nearby$"

Route1b_Neet_Intro::
# 70 "data/maps/Route1b/scripts.pory"
	.string "Have you seen a Totodile around here? I\n"
	.string "really want one.$"

Route1b_Neet_Outro::
# 74 "data/maps/Route1b/scripts.pory"
	.string "I would of won if I had my Totodile!$"

PostBattle_Route1b_Neet::
# 78 "data/maps/Route1b/scripts.pory"
	.string "I'll find a Totodile around here\n"
	.string "somehow, maybe I should get my boat$"

Girl_Maya_Intro::
# 82 "data/maps/Route1b/scripts.pory"
	.string "I hope you're ready for a battle,\n"
	.string "because I'm itching for a fight.$"

Girl_Maya_Outro::
# 86 "data/maps/Route1b/scripts.pory"
	.string "Your Pokémon are amazing!$"

PostBattle_Maya::
# 90 "data/maps/Route1b/scripts.pory"
	.string "I need to catch some stronger Pokémon$"

Picknicker_Lily_Intro::
# 94 "data/maps/Route1b/scripts.pory"
	.string "I'm going to become a champion one day!$"

Picknicker_Lily_Outro::
# 98 "data/maps/Route1b/scripts.pory"
	.string "I got a long way to go still$"

PostBattle_Lily::
# 102 "data/maps/Route1b/scripts.pory"
	.string "You can get the champion rank after\n"
	.string "getting every Triver badge and then\l"
	.string "beating league. It's an incredible\l"
	.string "challenge.$"
