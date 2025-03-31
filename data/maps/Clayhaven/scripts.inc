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
	faceplayer
# 53 "data/maps/Clayhaven/scripts.pory"
	msgbox Clayhaven_EventScript_Hiker_Text_0
# 54 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return


ClayHaven_EventScript_Boy1::
# 58 "data/maps/Clayhaven/scripts.pory"
	lockall
# 59 "data/maps/Clayhaven/scripts.pory"
	faceplayer
# 60 "data/maps/Clayhaven/scripts.pory"
	compare VAR_ZORUA_QUEST_STATE, 5
	goto_if_lt ClayHaven_EventScript_Boy1_2
ClayHaven_EventScript_Boy1_1:
# 76 "data/maps/Clayhaven/scripts.pory"
	compare VAR_ZORUA_QUEST_STATE, 5
	goto_if_ge ClayHaven_EventScript_Boy1_5
ClayHaven_EventScript_Boy1_4:
# 79 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return

ClayHaven_EventScript_Boy1_2:
# 61 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_0, MSGBOX_YESNO
# 62 "data/maps/Clayhaven/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq ClayHaven_EventScript_Boy1_8
ClayHaven_EventScript_Boy1_7:
# 65 "data/maps/Clayhaven/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq ClayHaven_EventScript_Boy1_10
	goto ClayHaven_EventScript_Boy1_1

ClayHaven_EventScript_Boy1_5:
# 77 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_5
	goto ClayHaven_EventScript_Boy1_4

ClayHaven_EventScript_Boy1_8:
# 63 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_1
	goto ClayHaven_EventScript_Boy1_7

ClayHaven_EventScript_Boy1_10:
# 66 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_2
# 67 "data/maps/Clayhaven/scripts.pory"
	special ChoosePartyMon
# 68 "data/maps/Clayhaven/scripts.pory"
	compare VAR_RESULT, SPECIES_ZORUA
	goto_if_eq ClayHaven_EventScript_Boy1_12
	goto ClayHaven_EventScript_Boy1_1

ClayHaven_EventScript_Boy1_12:
# 69 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_3
# 70 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy1_Text_4, MSGBOX_DEFAULT
# 71 "data/maps/Clayhaven/scripts.pory"
	giveitem ITEM_CLEANSE_TAG
# 72 "data/maps/Clayhaven/scripts.pory"
	setvar VAR_ZORUA_QUEST_STATE, 5
	goto ClayHaven_EventScript_Boy1_1


ClayHaven_EventScript_Boy2::
# 83 "data/maps/Clayhaven/scripts.pory"
	lockall
# 84 "data/maps/Clayhaven/scripts.pory"
	faceplayer
# 85 "data/maps/Clayhaven/scripts.pory"
	compare VAR_ZORUA_QUEST_STATE, 5
	goto_if_lt ClayHaven_EventScript_Boy2_2
ClayHaven_EventScript_Boy2_1:
# 88 "data/maps/Clayhaven/scripts.pory"
	compare VAR_ZORUA_QUEST_STATE, 5
	goto_if_eq ClayHaven_EventScript_Boy2_5
ClayHaven_EventScript_Boy2_4:
# 98 "data/maps/Clayhaven/scripts.pory"
	compare VAR_ZORUA_QUEST_STATE, 6
	goto_if_eq ClayHaven_EventScript_Boy2_8
ClayHaven_EventScript_Boy2_7:
# 101 "data/maps/Clayhaven/scripts.pory"
	releaseall
	return

ClayHaven_EventScript_Boy2_2:
# 86 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy2_Text_0
	goto ClayHaven_EventScript_Boy2_1

ClayHaven_EventScript_Boy2_5:
# 89 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy2_Text_1
# 90 "data/maps/Clayhaven/scripts.pory"
	special ChoosePartyMon
# 91 "data/maps/Clayhaven/scripts.pory"
	compare VAR_RESULT, SPECIES_ZORUA
	goto_if_eq ClayHaven_EventScript_Boy2_10
	goto ClayHaven_EventScript_Boy2_4

ClayHaven_EventScript_Boy2_8:
# 99 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy2_Text_4
	goto ClayHaven_EventScript_Boy2_7

ClayHaven_EventScript_Boy2_10:
# 92 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy2_Text_2
# 93 "data/maps/Clayhaven/scripts.pory"
	msgbox ClayHaven_EventScript_Boy2_Text_3, MSGBOX_DEFAULT
# 94 "data/maps/Clayhaven/scripts.pory"
	giveitem ITEM_TM57
# 95 "data/maps/Clayhaven/scripts.pory"
	setvar VAR_ZORUA_QUEST_STATE, 5
	goto ClayHaven_EventScript_Boy2_4


# 106 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_Surprise:
# 107 "data/maps/Clayhaven/scripts.pory"
	emote_exclamation_mark
	step_end

# 110 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_MartEmployeeComesDown:
# 111 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 112 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 113 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 114 "data/maps/Clayhaven/scripts.pory"
	walk_down
# 115 "data/maps/Clayhaven/scripts.pory"
	walk_down
	step_end

# 118 "data/maps/Clayhaven/scripts.pory"
Movement_Clayhaven_MartEmployeeLeaves:
# 119 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 120 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 121 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 122 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 123 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 124 "data/maps/Clayhaven/scripts.pory"
	walk_up
# 125 "data/maps/Clayhaven/scripts.pory"
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
# 53 "data/maps/Clayhaven/scripts.pory"
	.string "If you're ever unsure where to go follow\n"
	.string "the padded down grass. It shows a\l"
	.string "journey of a hundred other trainers\l"
	.string "trying to become a champion and will\l"
	.string "lead you to your next challenge.$"

ClayHaven_EventScript_Boy1_Text_0:
# 61 "data/maps/Clayhaven/scripts.pory"
	.string "That was scary, did you see the monster\n"
	.string "too?$"

ClayHaven_EventScript_Boy1_Text_1:
# 63 "data/maps/Clayhaven/scripts.pory"
	.string "Wow you are lucky?$"

ClayHaven_EventScript_Boy1_Text_2:
# 66 "data/maps/Clayhaven/scripts.pory"
	.string "Did you see what it looked like?$"

ClayHaven_EventScript_Boy1_Text_3:
# 69 "data/maps/Clayhaven/scripts.pory"
	.string "YES THAT'S THE MONSTER!\l"
	.string "Wow you're so strong to be able to\l"
	.string "catch that.$"

ClayHaven_EventScript_Boy1_Text_4:
# 70 "data/maps/Clayhaven/scripts.pory"
	.string "You should take one of these, it helps\n"
	.string "protect you from monsters.$"

ClayHaven_EventScript_Boy1_Text_5:
# 77 "data/maps/Clayhaven/scripts.pory"
	.string "When I'm older I won't be so scared of\n"
	.string "the monsters in the hills.$"

ClayHaven_EventScript_Boy2_Text_0:
# 86 "data/maps/Clayhaven/scripts.pory"
	.string "We almost died!$"

ClayHaven_EventScript_Boy2_Text_1:
# 89 "data/maps/Clayhaven/scripts.pory"
	.string "That Pokemon you showed my friend\n"
	.string "wasn't the monster, I saw one much\l"
	.string "bigger and scarier!$"

ClayHaven_EventScript_Boy2_Text_2:
# 92 "data/maps/Clayhaven/scripts.pory"
	.string "Wow yes! That one! It's soo big and\n"
	.string "scary.$"

ClayHaven_EventScript_Boy2_Text_3:
# 93 "data/maps/Clayhaven/scripts.pory"
	.string "It's not so scary when we are this\n"
	.string "close, do you think you could teach it\l"
	.string "this?$"

ClayHaven_EventScript_Boy2_Text_4:
# 99 "data/maps/Clayhaven/scripts.pory"
	.string "You must be the strongest trainer in\n"
	.string "the world.$"
