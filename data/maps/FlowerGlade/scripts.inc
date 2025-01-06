FlowerGlade_MapScripts::
	.byte 0


FlowerGlade_PicknickerSara_TrainerBattle::
# 5 "data/maps/FlowerGlade/scripts.pory"
	trainerbattle_single FLOWERGLADE_PICKNICKER_SARA, FlowerGlade_Sara_Intro, FlowerGlade_Sara_Outro, Increase_Trainers_Beaten
# 6 "data/maps/FlowerGlade/scripts.pory"
	msgbox FlowerGlade_Sarah_PostBattle, MSGBOX_AUTOCLOSE
	return


FlowerGlade_BattleScript_Rosemary::
# 11 "data/maps/FlowerGlade/scripts.pory"
	trainerbattle_single FLOWERGLADE_FLORAL_TRAINER, FloralTrainer_Intro, FloralTrainer_Outro
# 12 "data/maps/FlowerGlade/scripts.pory"
	msgbox FloralTrainer_PostBattle, MSGBOX_AUTOCLOSE
# 13 "data/maps/FlowerGlade/scripts.pory"
	release
	return


FlowerGlade_BattleScript_Lily::
# 17 "data/maps/FlowerGlade/scripts.pory"
	trainerbattle_single FLOWERGLADE_FLORAL_TRAINER_LILY, LilyGarden_Intro, LilyGarden_Outro
# 18 "data/maps/FlowerGlade/scripts.pory"
	msgbox LilyGarden_PostBattle, MSGBOX_AUTOCLOSE
# 19 "data/maps/FlowerGlade/scripts.pory"
	release
	return


FlowerGlade_Sara_Intro::
# 25 "data/maps/FlowerGlade/scripts.pory"
	.string "I've just got my 4th badge and came\n"
	.string "here to train up a little.$"

FlowerGlade_Sara_Outro::
# 29 "data/maps/FlowerGlade/scripts.pory"
	.string "Wow you're strong as well!$"

FlowerGlade_Sarah_PostBattle::
# 33 "data/maps/FlowerGlade/scripts.pory"
	.string "I'll probably meet you again in the\n"
	.string "Champions Guild.$"

FloralTrainer_Intro::
# 37 "data/maps/FlowerGlade/scripts.pory"
	.string "Welcome to the Flower Glade! Let the\n"
	.string "petals dance in our battle!$"

FloralTrainer_Outro::
# 41 "data/maps/FlowerGlade/scripts.pory"
	.string "Oh, your Pokémon are as resilient as\n"
	.string "flowers in sunlight. Well done!$"

FloralTrainer_PostBattle::
# 45 "data/maps/FlowerGlade/scripts.pory"
	.string "The fragrance of victory lingers in the\n"
	.string "air. Keep blooming on your journey!$"

LilyGarden_Intro::
# 49 "data/maps/FlowerGlade/scripts.pory"
	.string "Welcome to my garden! Let the soothing\n"
	.string "aroma of nature guide us in our battle!$"

LilyGarden_Outro::
# 53 "data/maps/FlowerGlade/scripts.pory"
	.string "Your Pokémon's spirit is as radiant as a\n"
	.string "sunflower. Well played!$"

LilyGarden_PostBattle::
# 57 "data/maps/FlowerGlade/scripts.pory"
	.string "May your journey continue to blossom\n"
	.string "with victories. Farewell!$"
