GranitePeak_Dojo1_MapScripts::
	.byte 0


GranitePeak_Dojo1_Expert::
	lockall
	faceplayer
	msgbox GranitePeak_Dojo1_Expert_Text_0
	msgbox GranitePeak_Dojo1_Expert_Text_1
	releaseall
	return


GranitePeak_Dojo1_Expert_Text_0:
	.string "Welcome to my Dojo$"

GranitePeak_Dojo1_Expert_Text_1:
	.string "COMING SOON$"
