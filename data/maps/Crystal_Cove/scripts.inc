Crystal_Cove_MapScripts::
	.byte 0


CrystalCove_TrainerBattle_Gerald::
# 5 "data/maps/Crystal_Cove/scripts.pory"
	trainerbattle_single CRYSTALCOVER_GERALD, CrystalCove_Gerald_Intro, CrystalCove_Gerald_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Crystal_Cove/scripts.pory"
	msgbox CrystalCove_Gerald_PostBattle, MSGBOX_AUTOCLOSE
	return


CrystalCove_Gerald_Intro::
# 12 "data/maps/Crystal_Cove/scripts.pory"
	.string "I can't get my Slowpoke to evolve...$"

CrystalCove_Gerald_Outro::
# 16 "data/maps/Crystal_Cove/scripts.pory"
	.string "Maybe I should take them to the\n"
	.string "daycare...$"

CrystalCove_Gerald_PostBattle::
# 20 "data/maps/Crystal_Cove/scripts.pory"
	.string "I need to find someone who knows how to\n"
	.string "get a Slowbro...$"
