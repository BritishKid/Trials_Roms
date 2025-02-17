# 1 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_MapScripts::
# 2 "data/maps/VerdanturfTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, VerdanturfTown_OnTransition
# 3 "data/maps/VerdanturfTown/scripts.pory"
	.byte 0
# 4 "data/maps/VerdanturfTown/scripts.pory"

# 5 "data/maps/VerdanturfTown/scripts.pory"
VerdanturfTown_OnTransition:
# 6 "data/maps/VerdanturfTown/scripts.pory"
	setflag FLAG_VISITED_VERDANTURF_TOWN
# 7 "data/maps/VerdanturfTown/scripts.pory"
	end

VerdanturfTown_EventScript_DayCareSign::
# 11 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 12 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_DayCareSign_Text_0
# 13 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
	return


VerdanturfTown_EventScript_TownSign::
# 17 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 18 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_TownSign_Text_0
# 19 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
	return


VerdanturfTown_EventScript_DayCareSign_Text_0:
# 12 "data/maps/VerdanturfTown/scripts.pory"
	.string "Pokemon Day Care:\l"
	.string "Let use look after your little friends!$"

VerdanturfTown_EventScript_TownSign_Text_0:
# 18 "data/maps/VerdanturfTown/scripts.pory"
	.string "TODO NAME TOWN:\l"
	.string "WORDS BUT YES$"
