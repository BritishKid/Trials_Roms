Quarry_MapScripts::
	.byte 0


DeeperQuarrySign::
	lockall
	msgbox DeeperQuarrySign_Text_0
	releaseall
	return


DeeperQuarrySign_Text_0:
	.string "WARNING: QUARRY WORK CLOSED TILL FURTHER NOTICE\n POKEMON HAVE BEEN DAMAGING MACHINERY$"
