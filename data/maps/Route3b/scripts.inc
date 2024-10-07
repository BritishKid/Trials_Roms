Route3b_MapScripts::
	.byte 0


GBattleScript::
# 4 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3G, G_Intro, G_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route3b/scripts.pory"
	msgbox G_PostBattle, MSGBOX_AUTOCLOSE
	end


SurpirseBattleScript::
# 10 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_HIDDEN, Route3Hidden_Intro, Route3Hidden_Outro, SurpriseTrainerPostScript, Increase_Trainers_Beaten
# 11 "data/maps/Route3b/scripts.pory"
	msgbox Route3Hidden_PostBattle, MSGBOX_AUTOCLOSE
	end


SurpriseTrainerPostScript::
# 16 "data/maps/Route3b/scripts.pory"
	setvar VAR_HIDDEN_MOUNTAIN_PASS, 1
	end


CharmanderGrotto::
# 21 "data/maps/Route3b/scripts.pory"
	compare VAR_HIDDEN_MOUNTAIN_PASS, 1
	goto_if_eq CharmanderGrotto_1
	return

CharmanderGrotto_1:
# 22 "data/maps/Route3b/scripts.pory"
	msgbox CharmanderGrotto_Text_0
# 23 "data/maps/Route3b/scripts.pory"
	msgbox CharmanderGrotto_Text_1, MSGBOX_YESNO
# 24 "data/maps/Route3b/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq CharmanderGrotto_3
	return

CharmanderGrotto_3:
# 25 "data/maps/Route3b/scripts.pory"
	warp MAP_CHARMANDER_GROTTO, 5, 9
	return


Route3b_Itemball_ChoiceBand::
# 31 "data/maps/Route3b/scripts.pory"
	finditem ITEM_CHOICE_BAND
	return


CharmanderGrotto_Text_0:
# 22 "data/maps/Route3b/scripts.pory"
	.string "You think you can see some Pokémon\n"
	.string "running around.$"

CharmanderGrotto_Text_1:
# 23 "data/maps/Route3b/scripts.pory"
	.string "Do you want to try and squeeze through\n"
	.string "the gap?$"

G_Intro::
# 37 "data/maps/Route3b/scripts.pory"
	.string "I love being up in the mountains.$"

G_Outro::
# 41 "data/maps/Route3b/scripts.pory"
	.string "I'll have to catch stronger Pokémon\n"
	.string "then.$"

G_PostBattle::
# 45 "data/maps/Route3b/scripts.pory"
	.string "I've heard some really powerful Pokémon\n"
	.string "hide near the peak.$"

Route3Hidden_Intro::
# 49 "data/maps/Route3b/scripts.pory"
	.string "I was told you can catch Charmander\n"
	.string "somewhere near here.$"

Route3Hidden_Outro::
# 53 "data/maps/Route3b/scripts.pory"
	.string "That explosion blew the band right off\n"
	.string "my Graveller$"

Route3Hidden_PostBattle::
# 57 "data/maps/Route3b/scripts.pory"
	.string "Maybe I read the map wrong$"
