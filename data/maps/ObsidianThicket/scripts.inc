ObsidianThicket_MapScripts::
	.byte 0


Katherine_ObsidianThicket1::
	trainerbattle_single TRAINER_KATHERINE_OBSIDIAN_THICKET, Katherine_ObisidianThicket_Intro, Katherine_ObisidianThicket_Outro
	msgbox PostBattle_Katherine_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Derek_ObsidianThicket1::
	trainerbattle_single TRAINER_DEREK_OBSIDIAN_THICKET, Derek_ObisidianThicket_Intro, Derek_ObisidianThicket_Outro
	msgbox PostBattle_Derek_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Katherine_ObisidianThicket_Intro::
	.string "Have you seen this big cuddly Pokemon I\n"
	.string "found?$"

Katherine_ObisidianThicket_Outro::
	.string "It's still adorable even when napping$"

PostBattle_Katherine_ObisidianThicket::
	.string "I took me ages to find it, but I love\n"
	.string "this Munchlax$"

Derek_ObisidianThicket_Intro::
	.string "Treecko lives somewhere in these trees$"

Derek_ObisidianThicket_Outro::
	.string "I've heard a ton of rumours$"

PostBattle_Derek_ObisidianThicket::
	.string "If you find them please tell me$"
