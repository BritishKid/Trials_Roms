ObsidianThicket2_MapScripts::
	.byte 0


TrainerDude_ObsidianThicket1::
# 4 "data/maps/ObsidianThicket2/scripts.pory"
	trainerbattle_single TRAINER_NOAH_OBSIDIAN_THICKET, Noah_ObisidianThicket_Intro, Noah_ObisidianThicket_Outro, Increase_Trainers_Beaten
# 5 "data/maps/ObsidianThicket2/scripts.pory"
	msgbox PostBattle_Noah_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Noah_ObisidianThicket_Intro::
# 11 "data/maps/ObsidianThicket2/scripts.pory"
	.string "I wish I could surf apparently some\n"
	.string "amazing Pokemon can be found in the\l"
	.string "volcano$"

Noah_ObisidianThicket_Outro::
# 15 "data/maps/ObsidianThicket2/scripts.pory"
	.string "I need to be a boat pass to reach the\n"
	.string "other island to get surf$"

PostBattle_Noah_ObisidianThicket::
# 19 "data/maps/ObsidianThicket2/scripts.pory"
	.string "You can get surf over on Island 3$"
