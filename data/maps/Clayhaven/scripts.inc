# 1 "data/maps/Clayhaven/scripts.pory"
Clayhaven_MapScripts::
# 2 "data/maps/Clayhaven/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Clayhaven_OnTransition
# 3 "data/maps/Clayhaven/scripts.pory"
	.byte 0
# 4 "data/maps/Clayhaven/scripts.pory"

# 5 "data/maps/Clayhaven/scripts.pory"
Clayhaven_OnTransition:
# 6 "data/maps/Clayhaven/scripts.pory"
	setflag FLAG_VISITED_CLAYHAVEN
# 7 "data/maps/Clayhaven/scripts.pory"
	end

Clayhaven_MapScript_CraftingMaster_Sign::
# 10 "data/maps/Clayhaven/scripts.pory"
	lockall
# 11 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_CraftingMaster_Sign_Text_0, MSGBOX_AUTOCLOSE
# 12 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_MapScript_TownSign::
# 16 "data/maps/Clayhaven/scripts.pory"
	lockall
# 17 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_TownSign_Text_0, MSGBOX_AUTOCLOSE
# 18 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_MapScript_PlatefallCave_Sign::
# 22 "data/maps/Clayhaven/scripts.pory"
	lockall
# 23 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_MapScript_PlatefallCave_Sign_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_BridgeMart_Employee::
# 28 "data/maps/Clayhaven/scripts.pory"
	lockall
# 29 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_0, MSGBOX_AUTOCLOSE
# 30 "data/maps/Clayhaven/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Clayhaven_Surprise
# 31 "data/maps/Clayhaven/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 32 "data/maps/Clayhaven/scripts.pory"
	applymovement 2, Movement_Clayhaven_MartEmployeeComesDown
# 33 "data/maps/Clayhaven/scripts.pory"
	waitmovement 2
# 34 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_1, MSGBOX_AUTOCLOSE
# 35 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_2, MSGBOX_AUTOCLOSE
# 36 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_3, MSGBOX_AUTOCLOSE
# 37 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_4, MSGBOX_AUTOCLOSE
# 38 "data/maps/Clayhaven/scripts.pory"
	giveitem ITEM_BERRY_JUICE, 6
# 39 "data/maps/Clayhaven/scripts.pory"
	giveitem ITEM_POTION, 3
# 40 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_5, MSGBOX_AUTOCLOSE
# 41 "data/maps/Clayhaven/scripts.pory"
	setvar VAR_CLAYHAVEN_STATE, 1
# 42 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_BridgeMart_Employee_Text_6, MSGBOX_AUTOCLOSE
# 43 "data/maps/Clayhaven/scripts.pory"
	applymovement 2, Movement_Clayhaven_MartEmployeeLeaves
# 44 "data/maps/Clayhaven/scripts.pory"
	waitmovement 2
# 45 "data/maps/Clayhaven/scripts.pory"
	setflag FLAG_HIDE_CLAYHAVEN_MART_EMPLOYEE
# 46 "data/maps/Clayhaven/scripts.pory"
	removeobject 2
# 47 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


Clayhaven_EventScript_Hiker::
# 51 "data/maps/Clayhaven/scripts.pory"
	lockall
# 52 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_EventScript_Hiker_Text_0
# 53 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


# 58 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_Surprise:
# 59 "data/maps/Clayhaven/scripts.pory"
	emote_exclamation_mark
	step_end

# 62 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_MartEmployeeComesDown:
# 63 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 64 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 65 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 66 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 67 "data/maps/Clayhaven/scripts.pory"
	walk_down
	step_end

# 70 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_MartEmployeeLeaves:
# 71 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 72 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 73 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 74 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 75 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 76 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 77 "data/maps/Clayhaven/scripts.pory"
	walk_up
	step_end

Clayhaven_MapScript_CraftingMaster_Sign_Text_0:
# 11 "data/maps/Clayhaven/scripts.pory"
	.string "Crafting Master's House$"

Clayhaven_MapScript_TownSign_Text_0:
# 17 "data/maps/Clayhaven/scripts.pory"
	.string "CLAY HAVEN\l"
	.string "Triver's oldest town$"

Clayhaven_MapScript_PlatefallCave_Sign_Text_0:
# 23 "data/maps/Clayhaven/scripts.pory"
	.string "PLATEFALL CAVE\l"
	.string "Landing site of an ancient Pokémon$"

Clayhaven_BridgeMart_Employee_Text_0:
# 29 "data/maps/Clayhaven/scripts.pory"
	.string "Hey there!$"

Clayhaven_BridgeMart_Employee_Text_1:
# 34 "data/maps/Clayhaven/scripts.pory"
	.string "You must be from Bedrock town, I can\n"
	.string "tell from your coat.\l"
	.string "Let me be the first to welcome you to\l"
	.string "Clay Haven.$"

Clayhaven_BridgeMart_Employee_Text_2:
# 35 "data/maps/Clayhaven/scripts.pory"
	.string "Over this bridge is Platefall cave it's\n"
	.string "our claim to fame! We also have an\l"
	.string "incredible Pokemart where you can buy\l"
	.string "some useful items for your journey.$"

Clayhaven_BridgeMart_Employee_Text_3:
# 36 "data/maps/Clayhaven/scripts.pory"
	.string "If you're looking for the Pokémon Gym\n"
	.string "you can head south and head into\l"
	.string "Mahogany Hills where Jaiden built it.$"

Clayhaven_BridgeMart_Employee_Text_4:
# 37 "data/maps/Clayhaven/scripts.pory"
	.string "Have these as a sign of good faith.$"

Clayhaven_BridgeMart_Employee_Text_5:
# 40 "data/maps/Clayhaven/scripts.pory"
	.string "You were given 6 Berry Juices and 3\n"
	.string "Potions.$"

Clayhaven_BridgeMart_Employee_Text_6:
# 42 "data/maps/Clayhaven/scripts.pory"
	.string "Good luck!$"

Clayhaven_EventScript_Hiker_Text_0:
# 52 "data/maps/Clayhaven/scripts.pory"
	.string "If you're ever unsure where to go follow\n"
	.string "the padded down grass. It shows a\l"
	.string "journey of a hundred other trainers\l"
	.string "trying to become a champion and will\l"
	.string "lead you to your next challenge.$"
