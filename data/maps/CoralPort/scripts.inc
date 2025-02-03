CoralPort_MapScripts::
# 2 "data/maps/CoralPort/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

CoralPort_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_VISITED_CORAL_PORT
	return


CoralPort_EventScript_CitySign::
# 8 "data/maps/CoralPort/scripts.pory"
	lockall
# 9 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_CitySign_Text_0
# 10 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


# 14 "data/maps/CoralPort/scripts.pory"

# 15 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_Kecleon::
# 16 "data/maps/CoralPort/scripts.pory"
	lock
# 17 "data/maps/CoralPort/scripts.pory"
	faceplayer
# 18 "data/maps/CoralPort/scripts.pory"
	checkitem ITEM_DEVON_SCOPE
# 19 "data/maps/CoralPort/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, CoralPort_EventScript_AskUseDevonScope
# 20 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_SomethingUnseeable, MSGBOX_DEFAULT
# 21 "data/maps/CoralPort/scripts.pory"
	release
# 22 "data/maps/CoralPort/scripts.pory"
	end
# 23 "data/maps/CoralPort/scripts.pory"

# 24 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_AskUseDevonScope::
# 25 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_UnseeableUseDevonScope, MSGBOX_YESNO
# 26 "data/maps/CoralPort/scripts.pory"
	goto_if_eq VAR_RESULT, YES, CoralPort_EventScript_UseDevonScope
# 27 "data/maps/CoralPort/scripts.pory"
	release
# 28 "data/maps/CoralPort/scripts.pory"
	end
# 29 "data/maps/CoralPort/scripts.pory"

# 30 "data/maps/CoralPort/scripts.pory"
CoralPort_EventScript_UseDevonScope::
# 31 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_Text_UsedDevonScopePokemonFled, MSGBOX_DEFAULT
# 32 "data/maps/CoralPort/scripts.pory"
	closemessage
# 33 "data/maps/CoralPort/scripts.pory"
	applymovement VAR_LAST_TALKED, Movement_KecleonAppears
# 34 "data/maps/CoralPort/scripts.pory"
	waitmovement 0
# 35 "data/maps/CoralPort/scripts.pory"
	waitse
# 36 "data/maps/CoralPort/scripts.pory"
	playmoncry SPECIES_KECLEON, CRY_MODE_ENCOUNTER
# 37 "data/maps/CoralPort/scripts.pory"
	delay 40
# 38 "data/maps/CoralPort/scripts.pory"
	waitmoncry
# 39 "data/maps/CoralPort/scripts.pory"
	applymovement VAR_LAST_TALKED, CoralPort_Movement_KecleonFlee
# 40 "data/maps/CoralPort/scripts.pory"
	waitmovement 0
# 41 "data/maps/CoralPort/scripts.pory"
	removeobject VAR_LAST_TALKED
# 42 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_KECLEON_FLED_FORTREE
# 43 "data/maps/CoralPort/scripts.pory"
	release
# 44 "data/maps/CoralPort/scripts.pory"
	end
# 45 "data/maps/CoralPort/scripts.pory"

# 46 "data/maps/CoralPort/scripts.pory"
CoralPort_Movement_KecleonFlee:
# 47 "data/maps/CoralPort/scripts.pory"
	walk_right
# 48 "data/maps/CoralPort/scripts.pory"
	step_end
# 49 "data/maps/CoralPort/scripts.pory"

# 50 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_SomethingUnseeable:
# 51 "data/maps/CoralPort/scripts.pory"
	.string "Something unseeable is in the way.$"
# 52 "data/maps/CoralPort/scripts.pory"

# 53 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_UnseeableUseDevonScope:
# 54 "data/maps/CoralPort/scripts.pory"
	.string "Something unseeable is in the way.\p"
# 55 "data/maps/CoralPort/scripts.pory"
	.string "Want to use the DEVON SCOPE?$"
# 56 "data/maps/CoralPort/scripts.pory"

# 57 "data/maps/CoralPort/scripts.pory"
CoralPort_Text_UsedDevonScopePokemonFled:
# 58 "data/maps/CoralPort/scripts.pory"
	.string "{PLAYER} used the DEVON SCOPE.\p"
# 59 "data/maps/CoralPort/scripts.pory"
	.string "An invisible POKéMON became completely\n"
# 60 "data/maps/CoralPort/scripts.pory"
	.string "visible!\p"
# 61 "data/maps/CoralPort/scripts.pory"
	.string "The startled POKéMON fled!$"

CoralPort_TuberF_OnBeach::
# 64 "data/maps/CoralPort/scripts.pory"
	lockall
# 65 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_TuberF_OnBeach_Text_0
# 66 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_TuberM_OnBeach::
# 70 "data/maps/CoralPort/scripts.pory"
	lockall
# 71 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_TuberM_OnBeach_Text_0
# 72 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_BeachLady::
# 76 "data/maps/CoralPort/scripts.pory"
	lockall
# 77 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_BeachLady_Text_0
# 78 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_EventScript_OldMan_Market::
# 83 "data/maps/CoralPort/scripts.pory"
	lockall
# 86 "data/maps/CoralPort/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 0
	goto_if_eq CoralPort_EventScript_OldMan_Market_2
CoralPort_EventScript_OldMan_Market_1:
# 94 "data/maps/CoralPort/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 2
	goto_if_eq CoralPort_EventScript_OldMan_Market_5
CoralPort_EventScript_OldMan_Market_4:
# 101 "data/maps/CoralPort/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 1
	goto_if_eq CoralPort_EventScript_OldMan_Market_8
CoralPort_EventScript_OldMan_Market_7:
# 105 "data/maps/CoralPort/scripts.pory"
	releaseall
	return

CoralPort_EventScript_OldMan_Market_2:
# 87 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_0
# 88 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_1
# 89 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_2
# 90 "data/maps/CoralPort/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 1
	goto CoralPort_EventScript_OldMan_Market_1

CoralPort_EventScript_OldMan_Market_5:
# 95 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_3
# 96 "data/maps/CoralPort/scripts.pory"
	waitmessage
# 97 "data/maps/CoralPort/scripts.pory"
	pokemart CoastalTown_EvolutionStoneMarket_Elemental
# 98 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_4
# 99 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_5
	goto CoralPort_EventScript_OldMan_Market_4

CoralPort_EventScript_OldMan_Market_8:
# 102 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_6
# 103 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_OldMan_Market_Text_7
	goto CoralPort_EventScript_OldMan_Market_7


CoralPort_EventScript_Grandson::
# 109 "data/maps/CoralPort/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 2
	goto_if_eq CoralPort_EventScript_Grandson_1
	return

CoralPort_EventScript_Grandson_1:
# 110 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Grandson_Text_0
# 111 "data/maps/CoralPort/scripts.pory"
	giveitem ITEM_TM_LIGHT_SCREEN
# 112 "data/maps/CoralPort/scripts.pory"
	giveitem ITEM_TM_REFLECT
# 113 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Grandson_Text_1
# 114 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Grandson_Text_2
# 115 "data/maps/CoralPort/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 3
# 116 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_HIDE_GRANDSON_STONE_CORAL_PORT
	return


CoralPort_EventScript_Woman_Market::
# 122 "data/maps/CoralPort/scripts.pory"
	lockall
# 123 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Woman_Market_Text_0
# 124 "data/maps/CoralPort/scripts.pory"
	waitmessage
# 125 "data/maps/CoralPort/scripts.pory"
	pokemart CoralPort_Market_Items
# 126 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


CoralPort_EventScript_Fishman_Market::
# 130 "data/maps/CoralPort/scripts.pory"
	lockall
# 133 "data/maps/CoralPort/scripts.pory"
	compare VAR_GIANT_FISH_BEATEN, 3
	goto_if_gt CoralPort_EventScript_Fishman_Market_3
CoralPort_EventScript_Fishman_Market_1:
# 139 "data/maps/CoralPort/scripts.pory"
	compare VAR_GIANT_FISH_STATE, 0
	goto_if_gt CoralPort_EventScript_Fishman_Market_7
CoralPort_EventScript_Fishman_Market_6:
# 143 "data/maps/CoralPort/scripts.pory"
	compare VAR_GIANT_FISH_STATE, 0
	goto_if_eq CoralPort_EventScript_Fishman_Market_10
CoralPort_EventScript_Fishman_Market_9:
# 154 "data/maps/CoralPort/scripts.pory"
	releaseall
	return

CoralPort_EventScript_Fishman_Market_2:
# 134 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_0
# 135 "data/maps/CoralPort/scripts.pory"
	giveitem ITEM_GOOD_ROD
# 136 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_1
# 137 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_RECEIVED_GOOD_ROD
	goto CoralPort_EventScript_Fishman_Market_1

CoralPort_EventScript_Fishman_Market_3:
# 133 "data/maps/CoralPort/scripts.pory"
	goto_if_unset FLAG_RECEIVED_GOOD_ROD, CoralPort_EventScript_Fishman_Market_2
	goto CoralPort_EventScript_Fishman_Market_1

CoralPort_EventScript_Fishman_Market_7:
# 140 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_2
	goto CoralPort_EventScript_Fishman_Market_6

CoralPort_EventScript_Fishman_Market_10:
# 144 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_3, MSGBOX_YESNO
# 145 "data/maps/CoralPort/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq CoralPort_EventScript_Fishman_Market_12
# 148 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_5
# 149 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_6
# 151 "data/maps/CoralPort/scripts.pory"
	setvar VAR_GIANT_FISH_STATE, 1
	goto CoralPort_EventScript_Fishman_Market_9

CoralPort_EventScript_Fishman_Market_12:
# 146 "data/maps/CoralPort/scripts.pory"
	msgbox CoralPort_EventScript_Fishman_Market_Text_4
	goto CoralPort_EventScript_Fishman_Market_9


SandyShoreCity_RivalBlocking_Boat::
# 158 "data/maps/CoralPort/scripts.pory"
	lockall
# 159 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_0
# 160 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_1
# 161 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBlocking_Boat_Text_2
# 162 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


SandyShoreCity_RivalBattleForTicket::
# 166 "data/maps/CoralPort/scripts.pory"
	lockall
# 167 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_RivalBattleForTicket_Text_0, MSGBOX_AUTOCLOSE
# 168 "data/maps/CoralPort/scripts.pory"
	addobject 7
# 169 "data/maps/CoralPort/scripts.pory"
	setobjectxy 7, 10, 12
# 170 "data/maps/CoralPort/scripts.pory"
	applymovement 7, Movement_RivalAppearing_BeachTown
# 171 "data/maps/CoralPort/scripts.pory"
	waitmovement 7
# 172 "data/maps/CoralPort/scripts.pory"
	trainerbattle_single TRAINER_SANDYSHORE_CITY_RIVAL, SandyShoreCity_Rival_Intro, SandyShoreCity_Rival_Outro, SandyShoreCity_Rival_PostbattleScript
# 183 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


SandyShoreCity_Rival_PostbattleScript::
# 187 "data/maps/CoralPort/scripts.pory"
	setvar VAR_RIVAL_STATE, 5
# 188 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_0
# 189 "data/maps/CoralPort/scripts.pory"
	msgbox SandyShoreCity_Rival_PostbattleScript_Text_1
# 190 "data/maps/CoralPort/scripts.pory"
	giveitem ITEM_SS_TICKET
# 191 "data/maps/CoralPort/scripts.pory"
	setflag FLAG_RECEIVED_SS_TICKET
# 192 "data/maps/CoralPort/scripts.pory"
	applymovement 7, Movement_SandyBeach_RivalLeaves
# 193 "data/maps/CoralPort/scripts.pory"
	waitmovement 7
# 194 "data/maps/CoralPort/scripts.pory"
	removeobject 7
# 195 "data/maps/CoralPort/scripts.pory"
	releaseall
	return


# 199 "data/maps/CoralPort/scripts.pory"
Movement_RivalAppearing_BeachTown:
# 200 "data/maps/CoralPort/scripts.pory"
	walk_left
# 201 "data/maps/CoralPort/scripts.pory"
	walk_left
# 202 "data/maps/CoralPort/scripts.pory"
	walk_left
# 203 "data/maps/CoralPort/scripts.pory"
	walk_left
# 204 "data/maps/CoralPort/scripts.pory"
	walk_left
# 205 "data/maps/CoralPort/scripts.pory"
	walk_left
# 206 "data/maps/CoralPort/scripts.pory"
	walk_left
# 207 "data/maps/CoralPort/scripts.pory"
	face_up
	step_end

# 210 "data/maps/CoralPort/scripts.pory"
Movement_SandyBeach_RivalLeaves:
# 211 "data/maps/CoralPort/scripts.pory"
	walk_right
# 212 "data/maps/CoralPort/scripts.pory"
	walk_right
# 213 "data/maps/CoralPort/scripts.pory"
	walk_right
# 214 "data/maps/CoralPort/scripts.pory"
	walk_right
# 215 "data/maps/CoralPort/scripts.pory"
	walk_right
# 216 "data/maps/CoralPort/scripts.pory"
	walk_right
	step_end

	.align 2
# 231 "data/maps/CoralPort/scripts.pory"
CoastalTown_EvolutionStoneMarket_Elemental:
# 232 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_FIRE_STONE
# 233 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_LEAF_STONE
# 234 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_WATER_STONE
	.2byte ITEM_NONE

	.align 2
# 238 "data/maps/CoralPort/scripts.pory"
CoralPort_Market_Items:
# 239 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_HP_UP
# 240 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_PROTEIN
# 241 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_IRON
# 242 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_CALCIUM
# 243 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_ZINC
# 244 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_CARBOS
# 245 "data/maps/CoralPort/scripts.pory"
	.2byte ITEM_PP_UP
	.2byte ITEM_NONE

CoralPort_EventScript_CitySign_Text_0:
# 9 "data/maps/CoralPort/scripts.pory"
	.string "Coral Port:\n"
	.string "Gateway to the world.$"

CoralPort_TuberF_OnBeach_Text_0:
# 65 "data/maps/CoralPort/scripts.pory"
	.string "Over the water you can reach the other\n"
	.string "islands of Triver!$"

CoralPort_TuberM_OnBeach_Text_0:
# 71 "data/maps/CoralPort/scripts.pory"
	.string "Mummy says Triver has millions of\n"
	.string "islands! That's like a gazillion Pokémon\l"
	.string "to find!$"

CoralPort_BeachLady_Text_0:
# 77 "data/maps/CoralPort/scripts.pory"
	.string "There is a boat that connects all the\n"
	.string "islands together but if you have a\l"
	.string "strong Pokémon you can surf between\l"
	.string "them.$"

CoralPort_EventScript_OldMan_Market_Text_0:
# 87 "data/maps/CoralPort/scripts.pory"
	.string "Hi.\n"
	.string "Sorry we aren't open right now.$"

CoralPort_EventScript_OldMan_Market_Text_1:
# 88 "data/maps/CoralPort/scripts.pory"
	.string "We recently ran out of stock that we\n"
	.string "bought with us and my Grandson is out\l"
	.string "trying to find a source for us over\l"
	.string "here.$"

CoralPort_EventScript_OldMan_Market_Text_2:
# 89 "data/maps/CoralPort/scripts.pory"
	.string "You're welcome to try and find him$"

CoralPort_EventScript_OldMan_Market_Text_3:
# 95 "data/maps/CoralPort/scripts.pory"
	.string "Thanks to you we are able to start\n"
	.string "selling stones again! We greatly\l"
	.string "appreciate it.$"

CoralPort_EventScript_OldMan_Market_Text_4:
# 98 "data/maps/CoralPort/scripts.pory"
	.string "Keep an eye out for my Grandson he is\n"
	.string "still loooking for more stone sources$"

CoralPort_EventScript_OldMan_Market_Text_5:
# 99 "data/maps/CoralPort/scripts.pory"
	.string "Please Come Again.$"

CoralPort_EventScript_OldMan_Market_Text_6:
# 102 "data/maps/CoralPort/scripts.pory"
	.string "Hi, have you had any luck finding my\n"
	.string "Grandson?$"

CoralPort_EventScript_OldMan_Market_Text_7:
# 103 "data/maps/CoralPort/scripts.pory"
	.string "He should be around somewhere looking\n"
	.string "for the source of the evolution stones$"

CoralPort_EventScript_Grandson_Text_0:
# 110 "data/maps/CoralPort/scripts.pory"
	.string "Hey thanks for all that help I think you\n"
	.string "should have this for all your good work.$"

CoralPort_EventScript_Grandson_Text_1:
# 113 "data/maps/CoralPort/scripts.pory"
	.string "It's the TMs for light screen and\n"
	.string "reflect. They should help you with\l"
	.string "whats coming next.$"

CoralPort_EventScript_Grandson_Text_2:
# 114 "data/maps/CoralPort/scripts.pory"
	.string "I'm heading back out to find the\n"
	.string "thunder and ice stone sources so I\l"
	.string "could do with your help again!$"

CoralPort_EventScript_Woman_Market_Text_0:
# 123 "data/maps/CoralPort/scripts.pory"
	.string "Hey would you like some items to help\n"
	.string "you in your battles?$"

CoralPort_EventScript_Fishman_Market_Text_0:
# 134 "data/maps/CoralPort/scripts.pory"
	.string "Wow you've managed to find a few\n"
	.string "already, that's worth an upgrade.$"

CoralPort_EventScript_Fishman_Market_Text_1:
# 136 "data/maps/CoralPort/scripts.pory"
	.string "That Good Rod should help lure the more\n"
	.string "hidden Pokemon in bodies of water.$"

CoralPort_EventScript_Fishman_Market_Text_2:
# 140 "data/maps/CoralPort/scripts.pory"
	.string "How are you doing finding the giant\n"
	.string "fish?$"

CoralPort_EventScript_Fishman_Market_Text_3:
# 144 "data/maps/CoralPort/scripts.pory"
	.string "Hi do you like fishing?$"

CoralPort_EventScript_Fishman_Market_Text_4:
# 146 "data/maps/CoralPort/scripts.pory"
	.string "Then why did you come to a fishing\n"
	.string "village?$"

CoralPort_EventScript_Fishman_Market_Text_5:
# 148 "data/maps/CoralPort/scripts.pory"
	.string "That's what I like to hear.$"

CoralPort_EventScript_Fishman_Market_Text_6:
# 149 "data/maps/CoralPort/scripts.pory"
	.string "There are rumours of giant fish Pokémon\n"
	.string "lurking around Triver. If you can find\l"
	.string "and catch them with your lure I'll be\l"
	.string "sure to reward you.$"

SandyShoreCity_RivalBlocking_Boat_Text_0:
# 159 "data/maps/CoralPort/scripts.pory"
	.string "Hey {PLAYER} you've finally managed\n"
	.string "to catch up. I've been here for ages.$"

SandyShoreCity_RivalBlocking_Boat_Text_1:
# 160 "data/maps/CoralPort/scripts.pory"
	.string "The ferry across the island hasn't\n"
	.string "arrived yet so I'm just enjoying the sun\l"
	.string "before I keep going$"

SandyShoreCity_RivalBlocking_Boat_Text_2:
# 161 "data/maps/CoralPort/scripts.pory"
	.string "I'd offer to battle you but looking at\n"
	.string "how light your badge case is I don't\l"
	.string "think it would be fair.$"

SandyShoreCity_RivalBattleForTicket_Text_0:
# 167 "data/maps/CoralPort/scripts.pory"
	.string "Wait!$"

SandyShoreCity_Rival_PostbattleScript_Text_0:
# 188 "data/maps/CoralPort/scripts.pory"
	.string "The ferry has arrived so I'm going to\n"
	.string "jump across to the other islands. They\l"
	.string "have more gyms for me to collect$"

SandyShoreCity_Rival_PostbattleScript_Text_1:
# 189 "data/maps/CoralPort/scripts.pory"
	.string "I bought you a ticket so you could do\n"
	.string "the same$"

SandyShoreCity_Rival_Intro::
# 221 "data/maps/CoralPort/scripts.pory"
	.string "I heard you got the Shoal Badge! You\n"
	.string "might be able to last more than 15\l"
	.string "seconds against me now!$"

SandyShoreCity_Rival_Outro::
# 225 "data/maps/CoralPort/scripts.pory"
	.string "How do you keep beating me?$"
