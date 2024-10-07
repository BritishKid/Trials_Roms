Beach1_MapScripts::
	.byte 0


SandyGhastEncounter::
# 4 "data/maps/Beach1/scripts.pory"
	lockall
# 5 "data/maps/Beach1/scripts.pory"
	setwildbattle SPECIES_SANDYGAST, 20
# 6 "data/maps/Beach1/scripts.pory"
	dowildbattle
# 7 "data/maps/Beach1/scripts.pory"
	release
	return


WillyWombyBattleScript::
# 12 "data/maps/Beach1/scripts.pory"
	trainerbattle_single WIBBLYWOBBLY_BATTLE, Beach1_WillyWomby_Intro, Beach1_WillyWomby_Outro, Increase_Trainers_Beaten
# 13 "data/maps/Beach1/scripts.pory"
	msgbox Beach1_WillyWomby_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Damon::
# 18 "data/maps/Beach1/scripts.pory"
	trainerbattle_single DAMON_BATTLE, Beach1_Damon_Intro, Beach1_Damon_Outro, Increase_Trainers_Beaten
# 19 "data/maps/Beach1/scripts.pory"
	msgbox Beach1_Damon_PostBattle, MSGBOX_AUTOCLOSE
	end


Trainer_Beach1_Clair::
# 24 "data/maps/Beach1/scripts.pory"
	trainerbattle_single BEACH1_CLAIR_BATTLE, Beach1_Clair_Intro, Beach1_Clair_Outro, Increase_Trainers_Beaten
# 25 "data/maps/Beach1/scripts.pory"
	msgbox Beach1_Clair_PostBattle, MSGBOX_AUTOCLOSE
	end


SquirtleHiddenGrotto_Entrance::
# 30 "data/maps/Beach1/scripts.pory"
	lock
# 31 "data/maps/Beach1/scripts.pory"
	goto_if_set FLAG_ROUTE_DRAGON_LAKE_HIDE_SALTS, SquirtleHiddenGrotto_Entrance_2
SquirtleHiddenGrotto_Entrance_1:
# 34 "data/maps/Beach1/scripts.pory"
	release
	return

SquirtleHiddenGrotto_Entrance_2:
# 32 "data/maps/Beach1/scripts.pory"
	warp MAP_SQUIRTLE_GROTTO, 10, 15
	goto SquirtleHiddenGrotto_Entrance_1


Beach1_WillyWomby_Intro::
# 38 "data/maps/Beach1/scripts.pory"
	.string "I was given a wierd blue egg from some\n"
	.string "guy!$"

Beach1_WillyWomby_Outro::
# 42 "data/maps/Beach1/scripts.pory"
	.string "The Pokémon that hatched is cute, I\n"
	.string "wonder where he got it$"

Beach1_WillyWomby_PostBattle::
# 46 "data/maps/Beach1/scripts.pory"
	.string "He got on the ferry to cross the\n"
	.string "channel.$"

Beach1_Damon_Intro::
# 50 "data/maps/Beach1/scripts.pory"
	.string "Have you seen how many awesome purple\n"
	.string "Pokémon I have?!$"

Beach1_Damon_Outro::
# 54 "data/maps/Beach1/scripts.pory"
	.string "OH NO!$"

Beach1_Damon_PostBattle::
# 58 "data/maps/Beach1/scripts.pory"
	.string "I'm going to make them soo strong.$"

Beach1_Clair_Intro::
# 62 "data/maps/Beach1/scripts.pory"
	.string "I feel a presence around here!$"

Beach1_Clair_Outro::
# 66 "data/maps/Beach1/scripts.pory"
	.string "It's getting closer!$"

Beach1_Clair_PostBattle::
# 70 "data/maps/Beach1/scripts.pory"
	.string "Nevermind it was just gas.$"
