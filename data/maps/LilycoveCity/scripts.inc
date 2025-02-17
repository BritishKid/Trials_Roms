# 1 "data/maps/LilycoveCity/scripts.pory"

# 2 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_MapScripts::
# 3 "data/maps/LilycoveCity/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, LilycoveCity_OnTransition
# 4 "data/maps/LilycoveCity/scripts.pory"
	.byte 0
# 5 "data/maps/LilycoveCity/scripts.pory"

# 6 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_OnTransition:
# 7 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_VISITED_LILYCOVE_CITY
# 8 "data/maps/LilycoveCity/scripts.pory"
	end
# 9 "data/maps/LilycoveCity/scripts.pory"
    LilycoveCity_EventScript_BerryGentleman::
# 10 "data/maps/LilycoveCity/scripts.pory"
	lock
# 11 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 12 "data/maps/LilycoveCity/scripts.pory"
	dotimebasedevents
# 13 "data/maps/LilycoveCity/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, LilycoveCity_EventScript_ReceivedBerry
# 14 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 15 "data/maps/LilycoveCity/scripts.pory"
	random 10
# 16 "data/maps/LilycoveCity/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 17 "data/maps/LilycoveCity/scripts.pory"
	giveitem VAR_RESULT
# 18 "data/maps/LilycoveCity/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 19 "data/maps/LilycoveCity/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 20 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 21 "data/maps/LilycoveCity/scripts.pory"
	release
# 22 "data/maps/LilycoveCity/scripts.pory"
	end
# 23 "data/maps/LilycoveCity/scripts.pory"

# 24 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ReceivedBerry::
# 25 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 26 "data/maps/LilycoveCity/scripts.pory"
	release
# 27 "data/maps/LilycoveCity/scripts.pory"
	end
# 28 "data/maps/LilycoveCity/scripts.pory"

# 29 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertM1::
# 30 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 31 "data/maps/LilycoveCity/scripts.pory"
	end
# 32 "data/maps/LilycoveCity/scripts.pory"

# 33 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_EventScript_ExpertF::
# 34 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 35 "data/maps/LilycoveCity/scripts.pory"
	end
# 36 "data/maps/LilycoveCity/scripts.pory"

# 37 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SeaRemainsForeverYoung:
# 38 "data/maps/LilycoveCity/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 39 "data/maps/LilycoveCity/scripts.pory"
	.string "the sea remains forever young with\l"
# 40 "data/maps/LilycoveCity/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 41 "data/maps/LilycoveCity/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 42 "data/maps/LilycoveCity/scripts.pory"

# 43 "data/maps/LilycoveCity/scripts.pory"
LilycoveCity_Text_SixtyYearsAgoHusbandProposed:
# 44 "data/maps/LilycoveCity/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 45 "data/maps/LilycoveCity/scripts.pory"
	.string "proposed to me here.\l"
# 46 "data/maps/LilycoveCity/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 47 "data/maps/LilycoveCity/scripts.pory"
	.string "Mufufufu mufufufufufu…$"

LilycoveCity_EventScript_FatMan::
# 52 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 53 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 54 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_FatMan_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_EventScript_SchoolKidM::
# 59 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 60 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 61 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_SchoolKidM_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_EventScript_Sailor1::
# 66 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 67 "data/maps/LilycoveCity/scripts.pory"
	faceplayer
# 68 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_Sailor1_Text_0
# 69 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_EventScript_CitySign::
# 73 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 74 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_CitySign_Text_0
# 75 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_EventScript_DepartmentStoreSign::
# 79 "data/maps/LilycoveCity/scripts.pory"
	lockall
# 80 "data/maps/LilycoveCity/scripts.pory"
	msgbox LilycoveCity_EventScript_DepartmentStoreSign_Text_0
# 81 "data/maps/LilycoveCity/scripts.pory"
	releaseall
	return


LilycoveCity_EventScript_FatMan_Text_0:
# 54 "data/maps/LilycoveCity/scripts.pory"
	.string "How do I get out of here?$"

LilycoveCity_EventScript_SchoolKidM_Text_0:
# 61 "data/maps/LilycoveCity/scripts.pory"
	.string "My brother says the rarest Pokemon are\n"
	.string "found down this waterfall, but it's such\l"
	.string "a long drop I'm always too scared to\l"
	.string "look.$"

LilycoveCity_EventScript_Sailor1_Text_0:
# 68 "data/maps/LilycoveCity/scripts.pory"
	.string "There are so many hidden islands in the\n"
	.string "sea full of unique Pokemon.$"

LilycoveCity_EventScript_CitySign_Text_0:
# 74 "data/maps/LilycoveCity/scripts.pory"
	.string "CITY NEEDS NAME$"

LilycoveCity_EventScript_DepartmentStoreSign_Text_0:
# 80 "data/maps/LilycoveCity/scripts.pory"
	.string "COMING SOON$"
