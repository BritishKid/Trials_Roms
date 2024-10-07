GranitePeak_EstateAgent_MapScripts::
	.byte 0


GranitePeak_Estate_Agent::
# 4 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	lock
# 5 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	faceplayer
# 6 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	msgbox GranitePeak_Estate_Agent_Text_0
# 7 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	release
	return


GranitePeak_ShopOption_One::
# 11 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	lock
# 12 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	goto_if_unset FLAG_HOUSE_OWNED, GranitePeak_ShopOption_One_2
# 16 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	msgbox GranitePeak_ShopOption_One_Text_1
# 18 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	msgbox GranitePeak_ShopOption_One_Text_2
GranitePeak_ShopOption_One_1:
# 20 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	release
	return

GranitePeak_ShopOption_One_2:
# 13 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	msgbox GranitePeak_ShopOption_One_Text_0
	goto GranitePeak_ShopOption_One_1


GranitePeak_Estate_Agent_Text_0:
# 6 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	.string "Feel free to ask me any questions on\n"
	.string "what we have for sale$"

GranitePeak_ShopOption_One_Text_0:
# 13 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	.string "It's a catalog full of furniture, I have\n"
	.string "no need for this$"

GranitePeak_ShopOption_One_Text_1:
# 16 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	.string "It's a catalog of furniture I could buy\n"
	.string "for my house$"

GranitePeak_ShopOption_One_Text_2:
# 18 "data/maps/GranitePeak_EstateAgent/scripts.pory"
	.string "COMING SOON...$"
