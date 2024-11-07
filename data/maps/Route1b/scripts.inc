Route1b_MapScripts::
	.byte 0


Route1b_EventScript_FisherSign::
# 6 "data/maps/Route1b/scripts.pory"
	lockall
# 7 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_EventScript_FisherSign_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/Route1b/scripts.pory"
	releaseall
	return


Route1b_EventScript_Fisherman::
# 12 "data/maps/Route1b/scripts.pory"
	lockall
# 13 "data/maps/Route1b/scripts.pory"
	faceplayer
# 14 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_EventScript_Fisherman_Text_0
# 15 "data/maps/Route1b/scripts.pory"
	releaseall
	return


Route1b_BattleSalt7_FirstBattle::
# 19 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_SALT7_ROUTE_1B_ENCOUNTER, Salt7_Intro, Salt7_Outro, Salt7_PostBattleScript
# 20 "data/maps/Route1b/scripts.pory"
	msgbox PostBattle_Salt7, MSGBOX_AUTOCLOSE
	end


Salt7_PostBattleScript::
# 25 "data/maps/Route1b/scripts.pory"
	setflag FLAG_SALT7_BEATEN_FIRST_ENCOUNTER
# 28 "data/maps/Route1b/scripts.pory"
	setvar VAR_SALTS7_QUEST_STATE, 1
# 29 "data/maps/Route1b/scripts.pory"
	waitmessage
	return


Route1b_EventScript_FisherSign_Text_0:
# 7 "data/maps/Route1b/scripts.pory"
	.string "The Old Fishers House$"

Route1b_EventScript_Fisherman_Text_0:
# 14 "data/maps/Route1b/scripts.pory"
	.string "If only I had a Pokemon that knew SURF\n"
	.string "I'd be able to reach that island.$"

Salt7_Intro::
# 34 "data/maps/Route1b/scripts.pory"
	.string "The guy in that house there gave me an\n"
	.string "old rod! I'm going to use it to catch all\l"
	.string "the Gyrados I can find! I've already got\l"
	.string "some. Here let me show you$"

Salt7_Outro::
# 38 "data/maps/Route1b/scripts.pory"
	.string "Alright so they aren't Gyrados yes, but\n"
	.string "I'll get more and become unstoppable!\l"
	.string "But just how do I evolve them.$"

PostBattle_Salt7::
# 42 "data/maps/Route1b/scripts.pory"
	.string "I remember reading something about a\n"
	.string "waterfall could make them evolve. I\l"
	.string "think there is one somewhere nearby$"
