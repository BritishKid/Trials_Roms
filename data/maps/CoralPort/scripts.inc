CoralPort_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_CORAL_PORT
	return


CoralPort_EventScript_Kecleon::
	lock
	faceplayer
	checkitem ITEM_DEVON_SCOPE
	goto_if_eq VAR_RESULT, TRUE, CoralPort_EventScript_AskUseDevonScope
	msgbox CoralPort_Text_SomethingUnseeable, MSGBOX_DEFAULT
	release
	end

CoralPort_EventScript_AskUseDevonScope::
	msgbox CoralPort_Text_UnseeableUseDevonScope, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, CoralPort_EventScript_UseDevonScope
	release
	end

CoralPort_EventScript_UseDevonScope::
	msgbox CoralPort_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
	waitmovement 0
	waitse
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	applymovement VAR_LAST_TALKED, CoralPort_Movement_KecleonFlee
	waitmovement 0
	removeobject VAR_LAST_TALKED
	setflag FLAG_KECLEON_FLED_FORTREE
	release
	end

CoralPort_Movement_KecleonFlee:
	walk_right
	step_end

CoralPort_Text_SomethingUnseeable:
	.string "Something unseeable is in the way.$"

CoralPort_Text_UnseeableUseDevonScope:
	.string "Something unseeable is in the way.\p"
	.string "Want to use the DEVON SCOPE?$"

CoralPort_Text_UsedDevonScopePokemonFled:
	.string "{PLAYER} used the DEVON SCOPE.\p"
	.string "An invisible POKéMON became completely\n"
	.string "visible!\p"
	.string "The startled POKéMON fled!$"

CoralPort_TuberF_OnBeach::
	lockall
	msgbox CoralPort_TuberF_OnBeach_Text_0
	releaseall
	return


CoralPort_TuberM_OnBeach::
	lockall
	msgbox CoralPort_TuberM_OnBeach_Text_0
	releaseall
	return


ForetreeCity_BeachLady::
	lockall
	msgbox ForetreeCity_BeachLady_Text_0
	releaseall
	return


CoralPort_EventScript_OldMan_Market::
	lockall
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_EVOLUTION_STONE_MART
	compare VAR_RESULT, 0
	goto_if_eq CoralPort_EventScript_OldMan_Market_2
CoralPort_EventScript_OldMan_Market_1:
	goto_if_set FLAG_LEAF_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_8
CoralPort_EventScript_OldMan_Market_6:
	msgbox CoralPort_EventScript_OldMan_Market_Text_6
	msgbox CoralPort_EventScript_OldMan_Market_Text_7
CoralPort_EventScript_OldMan_Market_4:
	releaseall
	return

CoralPort_EventScript_OldMan_Market_2:
	msgbox CoralPort_EventScript_OldMan_Market_Text_0
	msgbox CoralPort_EventScript_OldMan_Market_Text_1
	msgbox CoralPort_EventScript_OldMan_Market_Text_2
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_EVOLUTION_STONE_MART
	goto CoralPort_EventScript_OldMan_Market_1

CoralPort_EventScript_OldMan_Market_5:
	msgbox CoralPort_EventScript_OldMan_Market_Text_3
	waitmessage
	pokemart CoastalTown_EvolutionStoneMarket_Elemental
	msgbox CoralPort_EventScript_OldMan_Market_Text_4
	msgbox CoralPort_EventScript_OldMan_Market_Text_5
	goto CoralPort_EventScript_OldMan_Market_4

CoralPort_EventScript_OldMan_Market_7:
	goto_if_set FLAG_FIRE_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_5
	goto CoralPort_EventScript_OldMan_Market_6

CoralPort_EventScript_OldMan_Market_8:
	goto_if_set FLAG_WATER_STONE_SOURCE, CoralPort_EventScript_OldMan_Market_7
	goto CoralPort_EventScript_OldMan_Market_6


CoralPort_EventScript_Woman_Market::
	lockall
	msgbox CoralPort_EventScript_Woman_Market_Text_0
	waitmessage
	pokemart CoralPort_Market_Items
	releaseall
	return


CoralPort_EventScript_Fishman_Market::
	lockall
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_GIANT_FISH
	compare VAR_RESULT, 0
	goto_if_eq CoralPort_EventScript_Fishman_Market_2
	msgbox CoralPort_EventScript_Fishman_Market_Text_4
CoralPort_EventScript_Fishman_Market_1:
	releaseall
	return

CoralPort_EventScript_Fishman_Market_2:
	msgbox CoralPort_EventScript_Fishman_Market_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq CoralPort_EventScript_Fishman_Market_5
	msgbox CoralPort_EventScript_Fishman_Market_Text_2
	msgbox CoralPort_EventScript_Fishman_Market_Text_3
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_GIANT_FISH
	goto CoralPort_EventScript_Fishman_Market_1

CoralPort_EventScript_Fishman_Market_5:
	msgbox CoralPort_EventScript_Fishman_Market_Text_1
	goto CoralPort_EventScript_Fishman_Market_1


SandyShoreCity_RivalBlocking_Boat::
	lockall
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_0
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_1
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_2
	releaseall
	return


SandyShoreCity_RivalBattleForTicket::
	lockall
	msgbox SandyShoreCity_RivalBattleForTicket_Text_0
	setobjectxy 1, 10, 12
	addobject 1
	applymovement 1, Movement_RivalAppearing_BeachTown
	waitmovement 1
	msgbox SandyShoreCity_RivalBattleForTicket_Text_1
	compare VAR_STARTER_MON, 0
	goto_if_eq SandyShoreCity_RivalBattleForTicket_2
SandyShoreCity_RivalBattleForTicket_1:
	compare VAR_STARTER_MON, 1
	goto_if_eq SandyShoreCity_RivalBattleForTicket_5
SandyShoreCity_RivalBattleForTicket_4:
	compare VAR_STARTER_MON, 2
	goto_if_eq SandyShoreCity_RivalBattleForTicket_8
SandyShoreCity_RivalBattleForTicket_7:
	releaseall
	return

SandyShoreCity_RivalBattleForTicket_2:
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_GRASS, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_1

SandyShoreCity_RivalBattleForTicket_5:
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_FIRE, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_4

SandyShoreCity_RivalBattleForTicket_8:
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL_WATER, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
	goto SandyShoreCity_RivalBattleForTicket_7


SandyShoreCity_Rival_PostbattleScript::
	setvar VAR_RIVAL_FIGHT_2, 3
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_0
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_1
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_SS_TICKET
	setflag FLAG_RECEIVED_SS_TICKET
	applymovement 1, Movement_SandyBeach_RivalLeaves
	waitmovement 1
	removeobject 1
	releaseall
	return


	.align 2
FortreeMarket_Items_TMs:
	.2byte ITEM_NONE

Movement_RivalAppearing_BeachTown:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_SandyBeach_RivalLeaves:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

	.align 2
CoastalTown_EvolutionStoneMarket_Elemental:
	.2byte ITEM_FIRE_STONE
	.2byte ITEM_LEAF_STONE
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

	.align 2
CoralPort_Market_Items:
	.2byte ITEM_HP_UP
	.2byte ITEM_PROTEIN
	.2byte ITEM_IRON
	.2byte ITEM_CALCIUM
	.2byte ITEM_ZINC
	.2byte ITEM_CARBOS
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

CoralPort_TuberF_OnBeach_Text_0:
	.string "Over the water you can reach the other\n"
	.string "islands of Triver!$"

CoralPort_TuberM_OnBeach_Text_0:
	.string "Mummy says Triver has millions of\n"
	.string "islands! That's like a gazillion Pokémon\l"
	.string "to find!$"

ForetreeCity_BeachLady_Text_0:
	.string "There is a boat that connects all the\n"
	.string "islands together but if you have a\l"
	.string "strong Pokémon you can surf between\l"
	.string "them.$"

CoralPort_EventScript_OldMan_Market_Text_0:
	.string "Hi.\n"
	.string "Sorry we aren't open right now.$"

CoralPort_EventScript_OldMan_Market_Text_1:
	.string "We recently ran out of stock that we\n"
	.string "bought with us and my Grandson is out\l"
	.string "trying to find a source for us over\l"
	.string "here.$"

CoralPort_EventScript_OldMan_Market_Text_2:
	.string "You're welcome to try and find him$"

CoralPort_EventScript_OldMan_Market_Text_3:
	.string "Thanks to you we are able to start\n"
	.string "selling stones again! We greatly\l"
	.string "appreciate it.$"

CoralPort_EventScript_OldMan_Market_Text_4:
	.string "Keep an eye out for my Grandson he is\n"
	.string "still loooking for more stone sources$"

CoralPort_EventScript_OldMan_Market_Text_5:
	.string "Please Come Again.$"

CoralPort_EventScript_OldMan_Market_Text_6:
	.string "Hi, have you had any luck finding my\n"
	.string "Grandson?$"

CoralPort_EventScript_OldMan_Market_Text_7:
	.string "He should be around somewhere looking\n"
	.string "for the source of the evolution stones$"

CoralPort_EventScript_Woman_Market_Text_0:
	.string "Hey would you like some items to help you in your battles?$"

CoralPort_EventScript_Fishman_Market_Text_0:
	.string "Hi do you like fishing?$"

CoralPort_EventScript_Fishman_Market_Text_1:
	.string "Then why did you come to a fishing\n"
	.string "village?$"

CoralPort_EventScript_Fishman_Market_Text_2:
	.string "That's what I like to hear.$"

CoralPort_EventScript_Fishman_Market_Text_3:
	.string "There are rumours of giant fish Pokémon\n"
	.string "lurking around Triver. If you can find\l"
	.string "and catch them with your lure I'll be\l"
	.string "sure to reward you.$"

CoralPort_EventScript_Fishman_Market_Text_4:
	.string "How are you doing finding the giant\n"
	.string "fish?$"

SandyShoreCity_RivalBlocking_Boat_Text_0:
	.string "Hey {PLAYER} you've finally managed\n"
	.string "to catch up. I've been here for ages.$"

SandyShoreCity_RivalBlocking_Boat_Text_1:
	.string "The ferry across the island hasn't\n"
	.string "arrived yet so I'm just enjoying the sun\l"
	.string "before I keep going$"

SandyShoreCity_RivalBlocking_Boat_Text_2:
	.string "I'd offer to battle you but looking at\n"
	.string "how light your badge case is I don't\l"
	.string "think it would be fair.$"

SandyShoreCity_RivalBattleForTicket_Text_0:
	.string "Wait!$"

SandyShoreCity_RivalBattleForTicket_Text_1:
	.string "$"

SandyShoreCity_Rival_PostbattleScript_Text_0:
	.string "The ferry has arrived so I'm going to\n"
	.string "jump across to the other islands. They\l"
	.string "have more gyms for me to collect$"

SandyShoreCity_Rival_PostbattleScript_Text_1:
	.string "I bought you a ticket so you could do\n"
	.string "the same$"

SandyShoreCity_Rival_Intro::
	.string "I heard you got the Shoal Badge! You\n"
	.string "might be able to last more than 15\l"
	.string "seconds against me now!$"

SandyShoreCity_Rival_Outro::
	.string "How do you keep beating me?$"
