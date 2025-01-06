Obsidian_Thicket_2_MapScripts::
	.byte 0


Derek_ObsidianThicket2::
# 5 "data/maps/Obsidian_Thicket_2/scripts.pory"
	trainerbattle_single TRAINER_DEREK_OBSIDIAN_THICKET, Derek_ObisidianThicket_Intro, Derek_ObisidianThicket_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox PostBattle_Derek_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Derek_ObisidianThicket_Intro::
# 13 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Treecko lives somewhere in these trees$"

Derek_ObisidianThicket_Outro::
# 17 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "I've heard a ton of rumours$"

PostBattle_Derek_ObisidianThicket::
# 21 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "If you find them please tell me$"
