GranitePeak_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, GranitePeak_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

GranitePeak_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_GRANITE_PEAK
	return


GranitePeak_EventScript_PlayersHouse::
	lockall
	goto_if_unset FLAG_HOUSE_OWNED, GranitePeak_EventScript_PlayersHouse_2
	msgbox GranitePeak_EventScript_PlayersHouse_Text_1
GranitePeak_EventScript_PlayersHouse_1:
	releaseall
	return

GranitePeak_EventScript_PlayersHouse_2:
	msgbox GranitePeak_EventScript_PlayersHouse_Text_0
	goto GranitePeak_EventScript_PlayersHouse_1


GranitePeak_EventScript_CitySign::
	lockall
	msgbox GranitePeak_EventScript_CitySign_Text_0
	releaseall
	return


GranitePeak_EstateAgent_Sign::
	lockall
	msgbox GranitePeak_EstateAgent_Sign_Text_0
	releaseall
	return


GranitePeak_ItemBall_Garden::
	finditem ITEM_BIG_ROOT, 1
	return


GranitePeak_EventScript_PlayersHouse_Text_0:
	.string "For sale: Inquire within$"

GranitePeak_EventScript_PlayersHouse_Text_1:
	.string "{PLAYER}'s home$"

GranitePeak_EventScript_CitySign_Text_0:
	.string "Granite Peak: Peaceful life below the\n"
	.string "clouds$"

GranitePeak_EstateAgent_Sign_Text_0:
	.string "Granite Peak Estate Agent\n"
	.string "Make a house a home$"
