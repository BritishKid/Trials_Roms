Route5b_MapScripts::
	.byte 0


Route5b_TrianerBattle_Bumbleboozer::
# 5 "data/maps/Route5b/scripts.pory"
	trainerbattle_single TRAINER_BUMBLE, BumbleBoozer_Intro, BumbleBoozer_Outro, Bumbleboozer_Postscript
# 6 "data/maps/Route5b/scripts.pory"
	msgbox BumbleBoozer_PostBattle, MSGBOX_DEFAULT
	end


Bumbleboozer_Postscript::
# 11 "data/maps/Route5b/scripts.pory"
	lockall
# 12 "data/maps/Route5b/scripts.pory"
	msgbox Bumbleboozer_Postscript_Text_0
# 13 "data/maps/Route5b/scripts.pory"
	giveitem ITEM_HONEY, 5
# 14 "data/maps/Route5b/scripts.pory"
	releaseall
	return


Bumbleboozer_Postscript_Text_0:
# 12 "data/maps/Route5b/scripts.pory"
	.string "You can have this, I don't want it\n"
	.string "anymore.$"

BumbleBoozer_Intro::
# 18 "data/maps/Route5b/scripts.pory"
	.string "My victory will be sweet!$"

BumbleBoozer_Outro::
# 22 "data/maps/Route5b/scripts.pory"
	.string "Now I'm sour.$"

BumbleBoozer_PostBattle::
# 26 "data/maps/Route5b/scripts.pory"
	.string "$"
