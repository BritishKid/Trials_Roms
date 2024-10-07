ObsidianThicket3_MapScripts::
	.byte 0


ObsidianThicket3_ItemBall_BlackSludge::
	finditem ITEM_BLACK_SLUDGE
	return


ObsidianThicket3_BlackSludge_Protector::
	trainerbattle_single TRAINER_COLIN_OBSIDIAN_THICKET, Colin_Intro, Colin_Outro
	msgbox Colin_Postbattle, MSGBOX_AUTOCLOSE
	return


Colin_Intro::
	.string "Poison Pokémon are incredible!$"

Colin_Outro::
	.string "I'm still learning how to use them\n"
	.string "though$"

Colin_Postbattle::
	.string "Did you know poison Pokémon can use\n"
	.string "Black Sludge to heal?$"
