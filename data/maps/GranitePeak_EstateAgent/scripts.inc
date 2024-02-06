GranitePeak_EstateAgent_MapScripts::
	.byte 0


GranitePeak_Estate_Agent::
	lock
	msgbox GranitePeak_Estate_Agent_Text_0
	release
	return


GranitePeak_ShopOption_One::
	lock
	msgbox GranitePeak_ShopOption_One_Text_0
	release
	return


GranitePeak_Estate_Agent_Text_0:
	.string "Feel free to ask me any questions on\n"
	.string "what we have for sale$"

GranitePeak_ShopOption_One_Text_0:
	.string "COMING SOON...$"
