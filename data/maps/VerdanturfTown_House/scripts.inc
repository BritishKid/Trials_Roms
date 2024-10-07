VerdanturfTown_House_MapScripts::
	.byte 0


VerdanturfTown_House_EventScript_Crafter::
	lockall
	faceplayer
	msgbox VerdanturfTown_House_EventScript_Crafter_Text_0
	releaseall
	return


VerdanturfTown_House_EventScript_Crafter_Student::
	lockall
	faceplayer
	msgbox VerdanturfTown_House_EventScript_Crafter_Student_Text_0
	releaseall
	return


VerdanturfTown_House_EventScript_Crafter_Text_0:
	.string "Come back in a future update and I will\n"
	.string "held you craft items$"

VerdanturfTown_House_EventScript_Crafter_Student_Text_0:
	.string "My master is an incredible crafter, he\n"
	.string "can make powerful held items from the\l"
	.string "junk you find battling wild Pokémon$"
