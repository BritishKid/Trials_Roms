GranitePeakTown_WallysHouse_MapScripts::
	.byte 0


GranitePeakTown_House5_EventScript_CatLady::
# 9 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 10 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 11 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_CatLady_Text_0
# 13 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_Skitty::
# 17 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 18 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 19 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Skitty_Text_0
# 20 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_Meowth::
# 24 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 25 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 26 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Meowth_Text_0
# 27 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 28 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Meowth_Text_1
# 29 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_CatLady_Text_0:
# 11 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "I love cat Pokemon, I want to get them\n"
	.string "all. I've been hunting rumours about 3\l"
	.string "giant ones that are as fast as the wind\l"
	.string "but no-one has ever got close to them.$"

GranitePeakTown_House5_EventScript_Skitty_Text_0:
# 19 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "Meow$"

GranitePeakTown_House5_EventScript_Meowth_Text_0:
# 26 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "You stroke the Meowth under the chin.$"

GranitePeakTown_House5_EventScript_Meowth_Text_1:
# 28 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "It purrs softly.$"
