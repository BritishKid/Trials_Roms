MahogonyHill_SecretBase1_MapScripts::
	.byte 0


MahogonyHills_PleaseSuggest::
	lockall
	msgbox MahogonyHills_PleaseSuggest_Text_0
	releaseall
	return


MahogonyHills_PleaseSuggest_Text_0:
	.string "This is an empty hidden base, make a\n"
	.string "suggestion in the discord and I can add\l"
	.string "you here.$"
