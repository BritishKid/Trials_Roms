MegaMansion_Outside_MapScripts::
	.byte 0


MegaMansion_Sign::
	lockall
	msgbox MegaMansion_Sign_Text_0
	releaseall
	return


MegaMansion_Sign_Text_0:
	.string "Mega Mansion: Are you strong enough to\n"
	.string "control a Mega Ring?$"
