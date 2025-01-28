GraniteCave_1F_MapScripts::
	.byte 0


GraniteCave_1F_EventScript_Hiker::
# 5 "data/maps/GraniteCave_1F/scripts.pory"
	lockall
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	msgbox GraniteCave_1F_EventScript_Hiker_Text_0
# 7 "data/maps/GraniteCave_1F/scripts.pory"
	releaseall
	return


GraniteCave_1F_EventScript_Hiker_Text_0:
# 6 "data/maps/GraniteCave_1F/scripts.pory"
	.string "Be careful heading up, the summit is\n"
	.string "cold!$"
