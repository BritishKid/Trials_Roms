# 1 "data/maps/BreakwaterPort/scripts.pory"

# 2 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_MapScripts::
# 3 "data/maps/BreakwaterPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BreakwaterPort_OnTransition
# 4 "data/maps/BreakwaterPort/scripts.pory"
	.byte 0
# 5 "data/maps/BreakwaterPort/scripts.pory"

# 6 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_OnTransition:
# 7 "data/maps/BreakwaterPort/scripts.pory"
	setflag FLAG_VISITED_BREAKWATER_PORT
# 8 "data/maps/BreakwaterPort/scripts.pory"
	end
# 9 "data/maps/BreakwaterPort/scripts.pory"
    BreakwaterPort_EventScript_BerryGentleman::
# 10 "data/maps/BreakwaterPort/scripts.pory"
	lock
# 11 "data/maps/BreakwaterPort/scripts.pory"
	faceplayer
# 12 "data/maps/BreakwaterPort/scripts.pory"
	dotimebasedevents
# 13 "data/maps/BreakwaterPort/scripts.pory"
	goto_if_set FLAG_DAILY_LILYCOVE_RECEIVED_BERRY, BreakwaterPort_EventScript_ReceivedBerry
# 14 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_Text_BerrySuitsYou, MSGBOX_DEFAULT
# 15 "data/maps/BreakwaterPort/scripts.pory"
	random 10
# 16 "data/maps/BreakwaterPort/scripts.pory"
	addvar VAR_RESULT, FIRST_BERRY_INDEX
# 17 "data/maps/BreakwaterPort/scripts.pory"
	giveitem VAR_RESULT
# 18 "data/maps/BreakwaterPort/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 19 "data/maps/BreakwaterPort/scripts.pory"
	setflag FLAG_DAILY_LILYCOVE_RECEIVED_BERRY
# 20 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_Text_BecauseYoureTrainer, MSGBOX_DEFAULT
# 21 "data/maps/BreakwaterPort/scripts.pory"
	release
# 22 "data/maps/BreakwaterPort/scripts.pory"
	end
# 23 "data/maps/BreakwaterPort/scripts.pory"

# 24 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_EventScript_ReceivedBerry::
# 25 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_Text_PokeblocksSuitPokemon, MSGBOX_DEFAULT
# 26 "data/maps/BreakwaterPort/scripts.pory"
	release
# 27 "data/maps/BreakwaterPort/scripts.pory"
	end
# 28 "data/maps/BreakwaterPort/scripts.pory"

# 29 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_EventScript_ExpertM1::
# 30 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_Text_SeaRemainsForeverYoung, MSGBOX_SIGN
# 31 "data/maps/BreakwaterPort/scripts.pory"
	end
# 32 "data/maps/BreakwaterPort/scripts.pory"

# 33 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_EventScript_ExpertF::
# 34 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_Text_SixtyYearsAgoHusbandProposed, MSGBOX_SIGN
# 35 "data/maps/BreakwaterPort/scripts.pory"
	end
# 36 "data/maps/BreakwaterPort/scripts.pory"

# 37 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_Text_SeaRemainsForeverYoung:
# 38 "data/maps/BreakwaterPort/scripts.pory"
	.string "Even as we grow old and wrinkled,\n"
# 39 "data/maps/BreakwaterPort/scripts.pory"
	.string "the sea remains forever young with\l"
# 40 "data/maps/BreakwaterPort/scripts.pory"
	.string "the vivid brilliance of life…\p"
# 41 "data/maps/BreakwaterPort/scripts.pory"
	.string "Fwohoho fwohohohoho…$"
# 42 "data/maps/BreakwaterPort/scripts.pory"

# 43 "data/maps/BreakwaterPort/scripts.pory"
BreakwaterPort_Text_SixtyYearsAgoHusbandProposed:
# 44 "data/maps/BreakwaterPort/scripts.pory"
	.string "It was sixty years ago that my husband\n"
# 45 "data/maps/BreakwaterPort/scripts.pory"
	.string "proposed to me here.\l"
# 46 "data/maps/BreakwaterPort/scripts.pory"
	.string "The sea remains as beautiful as ever.\p"
# 47 "data/maps/BreakwaterPort/scripts.pory"
	.string "Mufufufu mufufufufufu…$"

BreakwaterPort_EventScript_FatMan::
# 52 "data/maps/BreakwaterPort/scripts.pory"
	lockall
# 53 "data/maps/BreakwaterPort/scripts.pory"
	faceplayer
# 54 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_EventScript_FatMan_Text_0, MSGBOX_AUTOCLOSE
# 55 "data/maps/BreakwaterPort/scripts.pory"
	releaseall
	return


BreakwaterPort_EventScript_SchoolKidM::
# 59 "data/maps/BreakwaterPort/scripts.pory"
	lockall
# 60 "data/maps/BreakwaterPort/scripts.pory"
	faceplayer
# 61 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_EventScript_SchoolKidM_Text_0, MSGBOX_AUTOCLOSE
# 62 "data/maps/BreakwaterPort/scripts.pory"
	releaseall
	return


BreakwaterPort_EventScript_Sailor1::
# 66 "data/maps/BreakwaterPort/scripts.pory"
	lockall
# 67 "data/maps/BreakwaterPort/scripts.pory"
	faceplayer
# 68 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_EventScript_Sailor1_Text_0
# 69 "data/maps/BreakwaterPort/scripts.pory"
	releaseall
	return


BreakwaterPort_EventScript_CitySign::
# 73 "data/maps/BreakwaterPort/scripts.pory"
	lockall
# 74 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_EventScript_CitySign_Text_0
# 75 "data/maps/BreakwaterPort/scripts.pory"
	releaseall
	return


BreakwaterPort_EventScript_DepartmentStoreSign::
# 79 "data/maps/BreakwaterPort/scripts.pory"
	lockall
# 80 "data/maps/BreakwaterPort/scripts.pory"
	msgbox BreakwaterPort_EventScript_DepartmentStoreSign_Text_0
# 81 "data/maps/BreakwaterPort/scripts.pory"
	releaseall
	return


BreakwaterPort_EventScript_FatMan_Text_0:
# 54 "data/maps/BreakwaterPort/scripts.pory"
	.string "How do I get out of here?$"

BreakwaterPort_EventScript_SchoolKidM_Text_0:
# 61 "data/maps/BreakwaterPort/scripts.pory"
	.string "My brother says the rarest Pokemon are\n"
	.string "found down this waterfall, but it's such\l"
	.string "a long drop I'm always too scared to\l"
	.string "look.$"

BreakwaterPort_EventScript_Sailor1_Text_0:
# 68 "data/maps/BreakwaterPort/scripts.pory"
	.string "There are so many hidden islands in the\n"
	.string "sea full of unique Pokemon.$"

BreakwaterPort_EventScript_CitySign_Text_0:
# 74 "data/maps/BreakwaterPort/scripts.pory"
	.string "CITY NEEDS NAME$"

BreakwaterPort_EventScript_DepartmentStoreSign_Text_0:
# 80 "data/maps/BreakwaterPort/scripts.pory"
	.string "COMING SOON$"
