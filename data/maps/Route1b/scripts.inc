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


Route1_TrainerScript_Camper::
# 33 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_CAMPER_ROUTE1B, Route1b_Camper_Intro, Route1b_Camper_Outro, Increase_Trainers_Beaten
# 34 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_Camper_Postbattle, MSGBOX_AUTOCLOSE
	return


Route1_TrainerScript_BugCatcher::
# 39 "data/maps/Route1b/scripts.pory"
	trainerbattle_single TRAINER_BUGCATCHER_ROUTE1B, Route1b_Camper_Intro, Route1b_Camper_Outro, Increase_Trainers_Beaten
# 40 "data/maps/Route1b/scripts.pory"
	msgbox Route1b_Camper_Postbattle, MSGBOX_AUTOCLOSE
	return


Route1b_EventScript_FisherSign_Text_0:
# 7 "data/maps/Route1b/scripts.pory"
	.string "The Old Fishers House$"

Route1b_EventScript_Fisherman_Text_0:
# 14 "data/maps/Route1b/scripts.pory"
	.string "If only I had a Pokemon that knew SURF\n"
	.string "I'd be able to reach that island.$"

Salt7_Intro::
# 46 "data/maps/Route1b/scripts.pory"
	.string "The guy in that house there gave me an\n"
	.string "old rod! I'm going to use it to catch all\l"
	.string "the Gyrados I can find! I've already got\l"
	.string "some. Here let me show you$"

Salt7_Outro::
# 50 "data/maps/Route1b/scripts.pory"
	.string "Alright so they aren't Gyrados yes, but\n"
	.string "I'll get more and become unstoppable!\l"
	.string "But just how do I evolve them.$"

PostBattle_Salt7::
# 54 "data/maps/Route1b/scripts.pory"
	.string "I remember reading something about a\n"
	.string "waterfall could make them evolve. I\l"
	.string "think there is one somewhere nearby$"

Route1b_Camper_Intro::
# 58 "data/maps/Route1b/scripts.pory"
	.string "My dad used to bring me here all the\n"
	.string "time, he said the hills had strong\l"
	.string "Pokemon.$"

Route1b_Camper_Outro::
# 62 "data/maps/Route1b/scripts.pory"
	.string "We never found them but I enjoyed our\n"
	.string "trips.$"

Route1b_Camper_Postbattle::
# 66 "data/maps/Route1b/scripts.pory"
	.string "When I'm strong enough I'll be able to\n"
	.string "spread his ashes at the old winged city.$"

Route1b_Bugcatcher_Intro::
# 70 "data/maps/Route1b/scripts.pory"
	.string "I love all the different bug Pokemon in\n"
	.string "Triver.$"

Route1b_Bugcatcher_Outro::
# 74 "data/maps/Route1b/scripts.pory"
	.string "I heard some really strong bugs can be\n"
	.string "found deep in the desert.$"

Route1b_Bugcatcher_Postbattle::
# 78 "data/maps/Route1b/scripts.pory"
	.string "People used to worship bugs as strong\n"
	.string "as the sun.$"
