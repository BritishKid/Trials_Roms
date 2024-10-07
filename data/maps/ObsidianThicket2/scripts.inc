ObsidianThicket2_MapScripts::
	.byte 0


TrainerDude_ObsidianThicket1::
	trainerbattle_single TRAINER_NOAH_OBSIDIAN_THICKET, Noah_ObisidianThicket_Intro, Noah_ObisidianThicket_Outro, Increase_Trainers_Beaten
	msgbox PostBattle_Noah_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Noah_ObisidianThicket_Intro::
	.string "I wish I could surf apparently some\n"
	.string "amazing Pokemon can be found in the\l"
	.string "volcano$"

Noah_ObisidianThicket_Outro::
	.string "I need to be a boat pass to reach the\n"
	.string "other island to get surf$"

PostBattle_Noah_ObisidianThicket::
	.string "You can get surf over on Island 3$"
