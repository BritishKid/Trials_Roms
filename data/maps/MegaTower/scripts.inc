MegaTower_MapScripts::
	.byte 0


MegaTower_Sign::
# 5 "data/maps/MegaTower/scripts.pory"
	lockall
# 6 "data/maps/MegaTower/scripts.pory"
	msgbox MegaTower_Sign_Text_0
# 7 "data/maps/MegaTower/scripts.pory"
	releaseall
	return


MegaTower_Sign_Text_0:
# 6 "data/maps/MegaTower/scripts.pory"
	.string "Only those who prove their strength\n"
	.string "may wield the power of Mega Evolution.$"
