GranitePeakTown_MapScripts::
# 2 "data/maps/GranitePeakTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeakTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GranitePeakTown/scripts.pory"
	setflag FLAG_VISITED_GRANITE_PEAK_TOWN
	return


GranitePeak_EventScript_TownSign::
# 8 "data/maps/GranitePeakTown/scripts.pory"
	lockall
# 9 "data/maps/GranitePeakTown/scripts.pory"
	msgbox GranitePeak_EventScript_TownSign_Text_0
# 10 "data/maps/GranitePeakTown/scripts.pory"
	releaseall
	return


GranitePeak_EventScript_ForSaleSign::
# 14 "data/maps/GranitePeakTown/scripts.pory"
	lockall
# 16 "data/maps/GranitePeakTown/scripts.pory"
	msgbox GranitePeak_EventScript_ForSaleSign_Text_0
# 17 "data/maps/GranitePeakTown/scripts.pory"
	releaseall
	return


GranitePeak_EventScript_TownSign_Text_0:
# 9 "data/maps/GranitePeakTown/scripts.pory"
	.string "Granite Peak:\n"
	.string "Look down on an ancient world.$"

GranitePeak_EventScript_ForSaleSign_Text_0:
# 16 "data/maps/GranitePeakTown/scripts.pory"
	.string "FOR SALE$"
