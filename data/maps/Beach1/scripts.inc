Beach1_MapScripts::
	.byte 0


SandyGhastEncounter::
	lockall
	setwildbattle SPECIES_SANDYGAST, 20
	dowildbattle
	release
	return


WillyWombyBattleScript::
	trainerbattle_single WIBBLYWOBBLY_BATTLE, Beach1_WillyWomby_Intro, Beach1_WillyWomby_Outro, Increase_Trainers_Beaten
	msgbox Beach1_WillyWomby_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Damon::
	trainerbattle_single DAMON_BATTLE, Beach1_Damon_Intro, Beach1_Damon_Outro, Increase_Trainers_Beaten
	msgbox Beach1_Damon_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Beach1_Clair::
	trainerbattle_single BEACH1_CLAIR_BATTLE, Beach1_Clair_Intro, Beach1_Clair_Outro, Increase_Trainers_Beaten
	msgbox Beach1_Clair_PostBattle, MSGBOX_AUTOCLOSE
	end


SquirtleHiddenGrotto_Entrance::
	lock
	goto_if_set FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS, SquirtleHiddenGrotto_Entrance_2
SquirtleHiddenGrotto_Entrance_1:
	release
	return

SquirtleHiddenGrotto_Entrance_2:
	warp MAP_SQUIRTLE_GROTTO, 10, 15
	goto SquirtleHiddenGrotto_Entrance_1


Beach1_WillyWomby_Intro::
	.string "I was given a wierd blue egg from some\n"
	.string "guy!$"

Beach1_WillyWomby_Outro::
	.string "The Pokémon that hatched is cute, I\n"
	.string "wonder where he got it$"

Beach1_WillyWomby_PostBattle::
	.string "He got on the ferry to cross the\n"
	.string "channel.$"

Beach1_Damon_Intro::
	.string "Have you seen how many awesome purple\n"
	.string "Pokémon I have?!$"

Beach1_Damon_Outro::
	.string "OH NO!$"

Beach1_Damon_PostBattle::
	.string "I'm going to make them soo strong.$"

Beach1_Clair_Intro::
	.string "I feel a presence around here!$"

Beach1_Clair_Outro::
	.string "It's getting closer!$"

Beach1_Clair_PostBattle::
	.string "Nevermind it was just gas.$"
