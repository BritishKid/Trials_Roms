SandyShoreCity_MapScripts::
	.byte 0


HauntedMansion_Sign::
	lockall
	msgbox HauntedMansion_Sign_Text_0
	releaseall
	return


HauntedMansion_Sign_Text_0:
	.string "This area is unfinished, you can explore\n"
	.string "and catch some ghost Pokémon for now\l"
	.string "though$"
