VerdanturfTown_House_MapScripts::
	.byte 0


VerdanturfTown_House_EventScript_Crafter::
# 6 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 7 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_Crafter_Text_0
# 9 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	return


VerdanturfTown_House_EventScript_Crafter_Student::
# 13 "data/maps/VerdanturfTown_House/scripts.pory"
	lockall
# 14 "data/maps/VerdanturfTown_House/scripts.pory"
	faceplayer
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	msgbox VerdanturfTown_House_EventScript_Crafter_Student_Text_0
# 16 "data/maps/VerdanturfTown_House/scripts.pory"
	releaseall
	return


VerdanturfTown_House_EventScript_Crafter_Text_0:
# 8 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "Come back in a future update and I will\n"
	.string "held you craft items$"

VerdanturfTown_House_EventScript_Crafter_Student_Text_0:
# 15 "data/maps/VerdanturfTown_House/scripts.pory"
	.string "My master is an incredible crafter, he\n"
	.string "can make powerful held items from the\l"
	.string "junk you find battling wild Pokémon$"
