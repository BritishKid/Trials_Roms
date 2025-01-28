VerdanturfTown_MapScripts::
	.byte 0


VerdanturfTown_EventScript_DayCareSign::
# 6 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 7 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_DayCareSign_Text_0
# 8 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
	return


VerdanturfTown_EventScript_TownSign::
# 12 "data/maps/VerdanturfTown/scripts.pory"
	lockall
# 13 "data/maps/VerdanturfTown/scripts.pory"
	msgbox VerdanturfTown_EventScript_TownSign_Text_0
# 14 "data/maps/VerdanturfTown/scripts.pory"
	releaseall
	return


VerdanturfTown_EventScript_DayCareSign_Text_0:
# 7 "data/maps/VerdanturfTown/scripts.pory"
	.string "Pokemon Day Care:\l"
	.string "Let use look after your little friends!$"

VerdanturfTown_EventScript_TownSign_Text_0:
# 13 "data/maps/VerdanturfTown/scripts.pory"
	.string "TODO NAME TOWN:\l"
	.string "WORDS BUT YES$"
