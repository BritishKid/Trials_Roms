Route3b_MapScripts::
	.byte 0


GBattleScript::
	trainerbattle_single ROUTE3G, G_Intro, G_Outro, Increase_Trainers_Beaten
	msgbox G_PostBattle, MSGBOX_AUTOCLOSE
	end


SurpirseBattleScript::
	trainerbattle_single ROUTE3_HIDDEN, Route3Hidden_Intro, Route3Hidden_Outro, SurpriseTrainerPostScript, Increase_Trainers_Beaten
	msgbox Route3Hidden_PostBattle, MSGBOX_AUTOCLOSE
	end


SurpriseTrainerPostScript::
	setvar VAR_HIDDEN_MOUNTAIN_PASS, 1
	end


CharmanderGrotto::
	compare VAR_HIDDEN_MOUNTAIN_PASS, 1
	goto_if_eq CharmanderGrotto_1
	return

CharmanderGrotto_1:
	msgbox CharmanderGrotto_Text_0
	msgbox CharmanderGrotto_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, 1
	goto_if_eq CharmanderGrotto_3
	return

CharmanderGrotto_3:
	warp MAP_CHARMANDER_GROTTO, 5, 9
	return


Route3b_Itemball_ChoiceBand::
	finditem ITEM_CHOICE_BAND
	return


CharmanderGrotto_Text_0:
	.string "You think you can see some Pokémon\n"
	.string "running around.$"

CharmanderGrotto_Text_1:
	.string "Do you want to try and squeeze through\n"
	.string "the gap?$"

G_Intro::
	.string "I love being up in the mountains.$"

G_Outro::
	.string "I'll have to catch stronger Pokémon\n"
	.string "then.$"

G_PostBattle::
	.string "I've heard some really powerful Pokémon\n"
	.string "hide near the peak.$"

Route3Hidden_Intro::
	.string "I was told you can catch Charmander\n"
	.string "somewhere near here.$"

Route3Hidden_Outro::
	.string "That explosion blew the band right off\n"
	.string "my Graveller$"

Route3Hidden_PostBattle::
	.string "Maybe I read the map wrong$"
