CoralPort_MapScripts::
# 2 "data/maps/CoralPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_VISITED_CORAL_PORT
	return


# 7 "data/maps/CoralPort/scripts.pory"

# 8 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_Kecleon::
# 9 "data/maps/CoralPort/scripts.pory"
	lock
# 10 "data/maps/CoralPort/scripts.pory"
	faceplayer
# 11 "data/maps/CoralPort/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 12 "data/maps/CoralPort/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CoralPort_EventScript_AskUseDevonScope
# 13 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 14 "data/maps/CoralPort/scripts.pory"
	release
# 15 "data/maps/CoralPort/scripts.pory"
	end
# 16 "data/maps/CoralPort/scripts.pory"

# 17 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_AskUseDevonScope::
# 18 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 19 "data/maps/CoralPort/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CoralPort_EventScript_UseDevonScope
# 20 "data/maps/CoralPort/scripts.pory"
	release
# 21 "data/maps/CoralPort/scripts.pory"
	end
# 22 "data/maps/CoralPort/scripts.pory"

# 23 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_UseDevonScope::
# 24 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 25 "data/maps/CoralPort/scripts.pory"
	closemessage
# 26 "data/maps/CoralPort/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 27 "data/maps/CoralPort/scripts.pory"
	waitmovement 0
# 28 "data/maps/CoralPort/scripts.pory"
	waitse
# 29 "data/maps/CoralPort/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 30 "data/maps/CoralPort/scripts.pory"
	delay 40
# 31 "data/maps/CoralPort/scripts.pory"
	waitmoncry
# 32 "data/maps/CoralPort/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralPort_Movement_KecleonFlee
# 33 "data/maps/CoralPort/scripts.pory"
	waitmovement 0
# 34 "data/maps/CoralPort/scripts.pory"
	removeobject VAR_LAST_TALKED
# 35 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 36 "data/maps/CoralPort/scripts.pory"
	release
# 37 "data/maps/CoralPort/scripts.pory"
	end
# 38 "data/maps/CoralPort/scripts.pory"

# 39 "data/maps/CoralPort/scripts.pory"
CoralPort_Movement_KecleonFlee:
# 40 "data/maps/CoralPort/scripts.pory"
	walk_right
# 41 "data/maps/CoralPort/scripts.pory"
	step_end
# 42 "data/maps/CoralPort/scripts.pory"

# 43 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_SomethingUnseeable:
# 44 "data/maps/CoralPort/scripts.pory"
	.string "Something unseeable is in the way.$"
# 45 "data/maps/CoralPort/scripts.pory"

# 46 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_UnseeableUseDevonScope:
# 47 "data/maps/CoralPort/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 48 "data/maps/CoralPort/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 49 "data/maps/CoralPort/scripts.pory"

# 50 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_UsedDevonScopePokemonFled:
# 51 "data/maps/CoralPort/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 52 "data/maps/CoralPort/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 53 "data/maps/CoralPort/scripts.pory"
	.string "visible!\p"
# 54 "data/maps/CoralPort/scripts.pory"
	.string "The startled POKéMON fled!$"

CoralPort_TuberF_OnBeach::
# 58 "data/maps/CoralPort/scripts.pory"
	lockall
# 59 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_TuberF_OnBeach_Text_0
# 60 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_TuberM_OnBeach::
# 64 "data/maps/CoralPort/scripts.pory"
	lockall
# 65 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_TuberM_OnBeach_Text_0
# 66 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


ForetreeCity_BeachLady::
# 70 "data/maps/CoralPort/scripts.pory"
	lockall
# 71 "data/maps/CoralPort/scripts.pory"
	msgbox ForetreeCity_BeachLady_Text_0
# 72 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_EventScript_OldMan_Market::
# 77 "data/maps/CoralPort/scripts.pory"
	lockall
# 78 "data/maps/CoralPort/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_EVOLUTION_STONE_MART
# 79 "data/maps/CoralPort/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CoralPort_EventScript_OldMan_Market_2
CoralPort_EventScript_OldMan_Market_1:
# 85 "data/maps/CoralPort/scripts.pory"
	goto_if_set FLAG_LEAF_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_8
CoralPort_EventScript_OldMan_Market_6:
# 92 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_6
# 93 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_7
CoralPort_EventScript_OldMan_Market_4:
# 95 "data/maps/CoralPort/scripts.pory"
	releaseall
	return

CoralPort_EventScript_OldMan_Market_2:
# 80 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_0
# 81 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_1
# 82 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_2
# 83 "data/maps/CoralPort/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_EVOLUTION_STONE_MART
	goto CoralPort_EventScript_OldMan_Market_1

CoralPort_EventScript_OldMan_Market_5:
# 86 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_3
# 87 "data/maps/CoralPort/scripts.pory"
	waitmessage
# 88 "data/maps/CoralPort/scripts.pory"
	pokemart CoastalTown_EvolutionStoneMarket_Elemental
# 89 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_4
# 90 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_5
	goto CoralPort_EventScript_OldMan_Market_4

CoralPort_EventScript_OldMan_Market_7:
# 85 "data/maps/CoralPort/scripts.pory"
	goto_if_set FLAG_FIRE_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_5
	goto CoralPort_EventScript_OldMan_Market_6

CoralPort_EventScript_OldMan_Market_8:
# 85 "data/maps/CoralPort/scripts.pory"
	goto_if_set FLAG_WATER_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_7
	goto CoralPort_EventScript_OldMan_Market_6


CoralPort_EventScript_Woman_Market::
# 100 "data/maps/CoralPort/scripts.pory"
	lockall
# 101 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Woman_Market_Text_0
# 102 "data/maps/CoralPort/scripts.pory"
	waitmessage
# 103 "data/maps/CoralPort/scripts.pory"
	pokemart CoralPort_Market_Items
# 104 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_EventScript_Fishman_Market::
# 108 "data/maps/CoralPort/scripts.pory"
	lockall
# 109 "data/maps/CoralPort/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIANT_FISH
# 110 "data/maps/CoralPort/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq CoralPort_EventScript_Fishman_Market_2
# 121 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_4
CoralPort_EventScript_Fishman_Market_1:
# 124 "data/maps/CoralPort/scripts.pory"
	releaseall
	return

CoralPort_EventScript_Fishman_Market_2:
# 111 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_0, MSGBOX_YESNO
# 112 "data/maps/CoralPort/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CoralPort_EventScript_Fishman_Market_5
# 115 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_2
# 116 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_3
# 117 "data/maps/CoralPort/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_GIANT_FISH
	goto CoralPort_EventScript_Fishman_Market_1

CoralPort_EventScript_Fishman_Market_5:
# 113 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_1
	goto CoralPort_EventScript_Fishman_Market_1


SandyShoreCity_RivalBlocking_Boat::
# 128 "data/maps/CoralPort/scripts.pory"
	lockall
# 129 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_0
# 130 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_1
# 131 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_2
# 132 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


SandyShoreCity_RivalBattleForTicket::
# 136 "data/maps/CoralPort/scripts.pory"
	lockall
# 137 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBattleForTicket_Text_0
# 138 "data/maps/CoralPort/scripts.pory"
	setobjectxy 1, 10, 12
# 139 "data/maps/CoralPort/scripts.pory"
	addobject 1
# 140 "data/maps/CoralPort/scripts.pory"
	applymovement 1, Movement_RivalAppearing_BeachTown
# 141 "data/maps/CoralPort/scripts.pory"
	waitmovement 1
# 142 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBattleForTicket_Text_1
# 143 "data/maps/CoralPort/scripts.pory"
	compare VAR_STARTER_MON, 0
	goto_if_eq SandyShoreCity_RivalBattleForTicket_2
SandyShoreCity_RivalBattleForTicket_1:
# 146 "data/maps/CoralPort/scripts.pory"
	compare VAR_STARTER_MON, 1
	goto_if_eq SandyShoreCity_RivalBattleForTicket_5
SandyShoreCity_RivalBattleForTicket_4:
# 149 "data/maps/CoralPort/scripts.pory"
	compare VAR_STARTER_MON, 2
	goto_if_eq SandyShoreCity_RivalBattleForTicket_8
SandyShoreCity_RivalBattleForTicket_7:
# 152 "data/maps/CoralPort/scripts.pory"
	releaseall
	return

SandyShoreCity_RivalBattleForTicket_2:
# 144 "data/maps/CoralPort/scripts.pory"
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_GRASS, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_1

SandyShoreCity_RivalBattleForTicket_5:
# 147 "data/maps/CoralPort/scripts.pory"
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_FIRE, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_4

SandyShoreCity_RivalBattleForTicket_8:
# 150 "data/maps/CoralPort/scripts.pory"
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_WATER, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_7


SandyShoreCity_Rival_PostbattleScript::
# 156 "data/maps/CoralPort/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 3
# 157 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_0
# 158 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_1
# 159 "data/maps/CoralPort/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 160 "data/maps/CoralPort/scripts.pory"
	giveitem ITEM_SS_TICKET
# 161 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 162 "data/maps/CoralPort/scripts.pory"
	applymovement 1, Movement_SandyBeach_RivalLeaves
# 163 "data/maps/CoralPort/scripts.pory"
	waitmovement 1
# 164 "data/maps/CoralPort/scripts.pory"
	removeobject 1
# 165 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


	.align 2
# 169 "data/maps/CoralPort/scripts.pory"
FortreeMarket_Items_TMs:
	.2byte ITEM_NONE

# 174 "data/maps/CoralPort/scripts.pory"
Movement_RivalAppearing_BeachTown:
# 175 "data/maps/CoralPort/scripts.pory"
	walk_left
# 176 "data/maps/CoralPort/scripts.pory"
	walk_left
# 177 "data/maps/CoralPort/scripts.pory"
	walk_left
# 178 "data/maps/CoralPort/scripts.pory"
	walk_left
# 179 "data/maps/CoralPort/scripts.pory"
	walk_left
# 180 "data/maps/CoralPort/scripts.pory"
	walk_left
	step_end

# 183 "data/maps/CoralPort/scripts.pory"
Movement_SandyBeach_RivalLeaves:
# 184 "data/maps/CoralPort/scripts.pory"
	walk_right
# 185 "data/maps/CoralPort/scripts.pory"
	walk_right
# 186 "data/maps/CoralPort/scripts.pory"
	walk_right
# 187 "data/maps/CoralPort/scripts.pory"
	walk_right
# 188 "data/maps/CoralPort/scripts.pory"
	walk_right
# 189 "data/maps/CoralPort/scripts.pory"
	walk_right
	step_end

	.align 2
# 204 "data/maps/CoralPort/scripts.pory"
CoastalTown_EvolutionStoneMarket_Elemental:
# 205 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 206 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 207 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

	.align 2
# 211 "data/maps/CoralPort/scripts.pory"
CoralPort_Market_Items:
# 212 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_HP_UP
# 213 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_PROTEIN
# 214 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_IRON
# 215 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_CALCIUM
# 216 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_ZINC
# 217 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_CARBOS
# 218 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

CoralPort_TuberF_OnBeach_Text_0:
# 59 "data/maps/CoralPort/scripts.pory"
	.string "Over the water you can reach the other\n"
	.string "islands of Triver!$"

CoralPort_TuberM_OnBeach_Text_0:
# 65 "data/maps/CoralPort/scripts.pory"
	.string "Mummy says Triver has millions of\n"
	.string "islands! That's like a gazillion Pokémon\l"
	.string "to find!$"

ForetreeCity_BeachLady_Text_0:
# 71 "data/maps/CoralPort/scripts.pory"
	.string "There is a boat that connects all the\n"
	.string "islands together but if you have a\l"
	.string "strong Pokémon you can surf between\l"
	.string "them.$"

CoralPort_EventScript_OldMan_Market_Text_0:
# 80 "data/maps/CoralPort/scripts.pory"
	.string "Hi.\n"
	.string "Sorry we aren't open right now.$"

CoralPort_EventScript_OldMan_Market_Text_1:
# 81 "data/maps/CoralPort/scripts.pory"
	.string "We recently ran out of stock that we\n"
	.string "bought with us and my Grandson is out\l"
	.string "trying to find a source for us over\l"
	.string "here.$"

CoralPort_EventScript_OldMan_Market_Text_2:
# 82 "data/maps/CoralPort/scripts.pory"
	.string "You're welcome to try and find him$"

CoralPort_EventScript_OldMan_Market_Text_3:
# 86 "data/maps/CoralPort/scripts.pory"
	.string "Thanks to you we are able to start\n"
	.string "selling stones again! We greatly\l"
	.string "appreciate it.$"

CoralPort_EventScript_OldMan_Market_Text_4:
# 89 "data/maps/CoralPort/scripts.pory"
	.string "Keep an eye out for my Grandson he is\n"
	.string "still loooking for more stone sources$"

CoralPort_EventScript_OldMan_Market_Text_5:
# 90 "data/maps/CoralPort/scripts.pory"
	.string "Please Come Again.$"

CoralPort_EventScript_OldMan_Market_Text_6:
# 92 "data/maps/CoralPort/scripts.pory"
	.string "Hi, have you had any luck finding my\n"
	.string "Grandson?$"

CoralPort_EventScript_OldMan_Market_Text_7:
# 93 "data/maps/CoralPort/scripts.pory"
	.string "He should be around somewhere looking\n"
	.string "for the source of the evolution stones$"

CoralPort_EventScript_Woman_Market_Text_0:
# 101 "data/maps/CoralPort/scripts.pory"
	.string "Hey would you like some items to help you in your battles?$"

CoralPort_EventScript_Fishman_Market_Text_0:
# 111 "data/maps/CoralPort/scripts.pory"
	.string "Hi do you like fishing?$"

CoralPort_EventScript_Fishman_Market_Text_1:
# 113 "data/maps/CoralPort/scripts.pory"
	.string "Then why did you come to a fishing\n"
	.string "village?$"

CoralPort_EventScript_Fishman_Market_Text_2:
# 115 "data/maps/CoralPort/scripts.pory"
	.string "That's what I like to hear.$"

CoralPort_EventScript_Fishman_Market_Text_3:
# 116 "data/maps/CoralPort/scripts.pory"
	.string "There are rumours of giant fish Pokémon\n"
	.string "lurking around Triver. If you can find\l"
	.string "and catch them with your lure I'll be\l"
	.string "sure to reward you.$"

CoralPort_EventScript_Fishman_Market_Text_4:
# 121 "data/maps/CoralPort/scripts.pory"
	.string "How are you doing finding the giant\n"
	.string "fish?$"

SandyShoreCity_RivalBlocking_Boat_Text_0:
# 129 "data/maps/CoralPort/scripts.pory"
	.string "Hey {PLAYER} you've finally managed\n"
	.string "to catch up. I've been here for ages.$"

SandyShoreCity_RivalBlocking_Boat_Text_1:
# 130 "data/maps/CoralPort/scripts.pory"
	.string "The ferry across the island hasn't\n"
	.string "arrived yet so I'm just enjoying the sun\l"
	.string "before I keep going$"

SandyShoreCity_RivalBlocking_Boat_Text_2:
# 131 "data/maps/CoralPort/scripts.pory"
	.string "I'd offer to battle you but looking at\n"
	.string "how light your badge case is I don't\l"
	.string "think it would be fair.$"

SandyShoreCity_RivalBattleForTicket_Text_0:
# 137 "data/maps/CoralPort/scripts.pory"
	.string "Wait!$"

SandyShoreCity_RivalBattleForTicket_Text_1:
# 142 "data/maps/CoralPort/scripts.pory"
	.string "$"

SandyShoreCity_Rival_PostbattleScript_Text_0:
# 157 "data/maps/CoralPort/scripts.pory"
	.string "The ferry has arrived so I'm going to\n"
	.string "jump across to the other islands. They\l"
	.string "have more gyms for me to collect$"

SandyShoreCity_Rival_PostbattleScript_Text_1:
# 158 "data/maps/CoralPort/scripts.pory"
	.string "I bought you a ticket so you could do\n"
	.string "the same$"

SandyShoreCity_Rival_Intro::
# 194 "data/maps/CoralPort/scripts.pory"
	.string "I heard you got the Shoal Badge! You\n"
	.string "might be able to last more than 15\l"
	.string "seconds against me now!$"

SandyShoreCity_Rival_Outro::
# 198 "data/maps/CoralPort/scripts.pory"
	.string "How do you keep beating me?$"
