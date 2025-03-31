GranitePeakTown_WallysHouse_MapScripts::
	.byte 0


GranitePeakTown_House5_EventScript_CatLady::
# 6 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 7 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 8 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_CatLady_Text_0
# 10 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_Skitty::
# 14 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 15 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 16 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Skitty_Text_0
# 17 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_Meowth::
# 21 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	lockall
# 22 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	faceplayer
# 23 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Meowth_Text_0
# 24 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	playmoncry SPECIES_MEOWTH, CRY_MODE_NORMAL
# 25 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	msgbox GranitePeakTown_House5_EventScript_Meowth_Text_1
# 26 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	releaseall
	return


GranitePeakTown_House5_EventScript_CatLady_Text_0:
# 8 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "I love cat Pokemon, I want to get them\n"
	.string "all. I've been hunting rumours about 3\l"
	.string "giant ones that are as fast as the wind\l"
	.string "but no-one has ever got close to them.$"

GranitePeakTown_House5_EventScript_Skitty_Text_0:
# 16 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "Meow$"

GranitePeakTown_House5_EventScript_Meowth_Text_0:
# 23 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "You stroke the Meowth under the chin.$"

GranitePeakTown_House5_EventScript_Meowth_Text_1:
# 25 "data/maps/GranitePeakTown_WallysHouse/scripts.pory"
	.string "It purrs softly.$"
