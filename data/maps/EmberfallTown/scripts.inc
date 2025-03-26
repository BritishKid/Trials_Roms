# 1 "data/maps/EmberfallTown/scripts.pory"
EmberfallTown_MapScripts::
# 2 "data/maps/EmberfallTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, EmberfallTown_OnTransition
# 3 "data/maps/EmberfallTown/scripts.pory"
	.byte 0
# 4 "data/maps/EmberfallTown/scripts.pory"

# 5 "data/maps/EmberfallTown/scripts.pory"
EmberfallTown_OnTransition:
# 6 "data/maps/EmberfallTown/scripts.pory"
	setflag FLAG_VISITED_EMBERFALL_TOWN
# 7 "data/maps/EmberfallTown/scripts.pory"
	end

EmberfallTown_EventScript_DayCareSign::
# 11 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 12 "data/maps/EmberfallTown/scripts.pory"
	msgbox EmberfallTown_EventScript_DayCareSign_Text_0
# 13 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


EmberfallTown_EventScript_TownSign::
# 17 "data/maps/EmberfallTown/scripts.pory"
	lockall
# 18 "data/maps/EmberfallTown/scripts.pory"
	msgbox EmberfallTown_EventScript_TownSign_Text_0
# 19 "data/maps/EmberfallTown/scripts.pory"
	releaseall
	return


EmberfallTown_EventScript_DayCareSign_Text_0:
# 12 "data/maps/EmberfallTown/scripts.pory"
	.string "Pokemon Day Care:\l"
	.string "Let use look after your little friends!$"

EmberfallTown_EventScript_TownSign_Text_0:
# 18 "data/maps/EmberfallTown/scripts.pory"
	.string "TODO NAME TOWN:\l"
	.string "WORDS BUT YES$"
