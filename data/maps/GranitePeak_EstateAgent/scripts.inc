GranitePeak_EstateAgent_MapScripts::
	.byte 0


GranitePeak_Estate_Agent::
	lock
	faceplayer
	msgbox GranitePeak_Estate_Agent_Text_0
	release
	return


GranitePeak_ShopOption_One::
	lock
	goto_if_unset FLAG_HOUSE_OWNED, GranitePeak_ShopOption_One_2
	msgbox GranitePeak_ShopOption_One_Text_1
	msgbox GranitePeak_ShopOption_One_Text_2
GranitePeak_ShopOption_One_1:
	release
	return

GranitePeak_ShopOption_One_2:
	msgbox GranitePeak_ShopOption_One_Text_0
	goto GranitePeak_ShopOption_One_1


GranitePeak_Estate_Agent_Text_0:
	.string "Feel free to ask me any questions on\n"
	.string "what we have for sale$"

GranitePeak_ShopOption_One_Text_0:
	.string "It's a catalog full of furniture, I have\n"
	.string "no need for this$"

GranitePeak_ShopOption_One_Text_1:
	.string "It's a catalog of furniture I could buy\n"
	.string "for my house$"

GranitePeak_ShopOption_One_Text_2:
	.string "COMING SOON...$"
