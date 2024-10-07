GranitePeak_MapScripts::
# 2 "data/maps/GranitePeak/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeak_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/GranitePeak/scripts.pory"
	setflag FLAG_VISITED_GRANITE_PEAK
	return


GranitePeak_EventScript_PlayersHouse::
# 8 "data/maps/GranitePeak/scripts.pory"
	lockall
# 9 "data/maps/GranitePeak/scripts.pory"
	goto_if_unset FLAG_HOUSE_OWNED, GranitePeak_EventScript_PlayersHouse_2
# 13 "data/maps/GranitePeak/scripts.pory"
	msgbox GranitePeak_EventScript_PlayersHouse_Text_1
GranitePeak_EventScript_PlayersHouse_1:
# 15 "data/maps/GranitePeak/scripts.pory"
	releaseall
	return

GranitePeak_EventScript_PlayersHouse_2:
# 10 "data/maps/GranitePeak/scripts.pory"
	msgbox GranitePeak_EventScript_PlayersHouse_Text_0
	goto GranitePeak_EventScript_PlayersHouse_1


GranitePeak_EventScript_CitySign::
# 19 "data/maps/GranitePeak/scripts.pory"
	lockall
# 20 "data/maps/GranitePeak/scripts.pory"
	msgbox GranitePeak_EventScript_CitySign_Text_0
# 21 "data/maps/GranitePeak/scripts.pory"
	releaseall
	return


GranitePeak_EstateAgent_Sign::
# 25 "data/maps/GranitePeak/scripts.pory"
	lockall
# 26 "data/maps/GranitePeak/scripts.pory"
	msgbox GranitePeak_EstateAgent_Sign_Text_0
# 27 "data/maps/GranitePeak/scripts.pory"
	releaseall
	return


GranitePeak_ItemBall_Garden::
# 31 "data/maps/GranitePeak/scripts.pory"
	finditem ITEM_BIG_ROOT, 1
	return


GranitePeak_EventScript_PlayersHouse_Text_0:
# 10 "data/maps/GranitePeak/scripts.pory"
	.string "For sale: Inquire within$"

GranitePeak_EventScript_PlayersHouse_Text_1:
# 13 "data/maps/GranitePeak/scripts.pory"
	.string "{PLAYER}'s home$"

GranitePeak_EventScript_CitySign_Text_0:
# 20 "data/maps/GranitePeak/scripts.pory"
	.string "Granite Peak: Peaceful life below the\n"
	.string "clouds$"

GranitePeak_EstateAgent_Sign_Text_0:
# 26 "data/maps/GranitePeak/scripts.pory"
	.string "Granite Peak Estate Agent\n"
	.string "Make a house a home$"
