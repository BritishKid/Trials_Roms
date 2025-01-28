Route7_Daycare_MapScripts::
	.byte 0


Route7_Daycare_TrainerBattle_DragonTamer::
# 5 "data/maps/Route7_Daycare/scripts.pory"
	trainerbattle_single ROUTE7_DRAGONTAMER, Route7_DragonTamer_Intro, Route7DragonTamer_Outro, Route7DragonTamer_PostScript
# 6 "data/maps/Route7_Daycare/scripts.pory"
	msgbox Route7DragonTamer_Postbattle, MSGBOX_AUTOCLOSE
	return


Route7DragonTamer_PostScript::
# 10 "data/maps/Route7_Daycare/scripts.pory"
	msgbox Route7DragonTamer_PostScript_Text_0
# 11 "data/maps/Route7_Daycare/scripts.pory"
	msgbox Route7DragonTamer_PostScript_Text_1
# 12 "data/maps/Route7_Daycare/scripts.pory"
	giveegg SPECIES_DRUDDIGON
# 13 "data/maps/Route7_Daycare/scripts.pory"
	call Increase_Trainers_Beaten
# 14 "data/maps/Route7_Daycare/scripts.pory"
	releaseall
	return


Route7DragonTamer_PostScript_Text_0:
# 10 "data/maps/Route7_Daycare/scripts.pory"
	.string "That was incredible! I think you have\n"
	.string "what it takes to tame your own dragons.$"

Route7DragonTamer_PostScript_Text_1:
# 11 "data/maps/Route7_Daycare/scripts.pory"
	.string "I just got an egg from one of my\n"
	.string "Pokemon in the daycare why don't you\l"
	.string "take it.$"

Route7_DragonTamer_Intro::
# 18 "data/maps/Route7_Daycare/scripts.pory"
	.string "I've spent my life trying to tame some\n"
	.string "of the strongest possible Pokemon.$"

Route7DragonTamer_Outro::
# 22 "data/maps/Route7_Daycare/scripts.pory"
	.string "Obviously I need to spend more time\n"
	.string "training.$"

Route7DragonTamer_Postbattle::
# 26 "data/maps/Route7_Daycare/scripts.pory"
	.string "How's that egg getting along?$"
