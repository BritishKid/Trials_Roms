CoralPort_Mart_MapScripts::
	.byte 0


CoralPort_Mart_EventScript_Clerk::
# 6 "data/maps/CoralPort_Mart/scripts.pory"
	lockall
# 7 "data/maps/CoralPort_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox CoralPort_Mart_EventScript_Clerk_Text_0
# 9 "data/maps/CoralPort_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, CoralPort_Mart_EventScript_Clerk_2
# 14 "data/maps/CoralPort_Mart/scripts.pory"
	pokemart CoralPortMart_Items_LessThanSixBadges
CoralPort_Mart_EventScript_Clerk_1:
# 16 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox CoralPort_Mart_EventScript_Clerk_Text_1
# 17 "data/maps/CoralPort_Mart/scripts.pory"
	releaseall
	return

CoralPort_Mart_EventScript_Clerk_2:
# 11 "data/maps/CoralPort_Mart/scripts.pory"
	pokemart CoralPortMart_Items_LessThanThreeBadges
	goto CoralPort_Mart_EventScript_Clerk_1


MatInTheCoralPokemonCenter::
# 21 "data/maps/CoralPort_Mart/scripts.pory"
	lockall
# 22 "data/maps/CoralPort_Mart/scripts.pory"
	faceplayer
# 23 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_set FLAG_MAT_ID, MatInTheCoralPokemonCenter_3
MatInTheCoralPokemonCenter_1:
# 26 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_set FLAG_MAT_ID, MatInTheCoralPokemonCenter_8
MatInTheCoralPokemonCenter_6:
# 32 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_unset FLAG_MAT_ID, MatInTheCoralPokemonCenter_12
MatInTheCoralPokemonCenter_11:
# 35 "data/maps/CoralPort_Mart/scripts.pory"
	releaseall
	return

MatInTheCoralPokemonCenter_2:
# 24 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox MatInTheCoralPokemonCenter_Text_0
	goto MatInTheCoralPokemonCenter_1

MatInTheCoralPokemonCenter_3:
# 23 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_set FLAG_MAT_ID_RETURNED, MatInTheCoralPokemonCenter_2
	goto MatInTheCoralPokemonCenter_1

MatInTheCoralPokemonCenter_7:
# 27 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox MatInTheCoralPokemonCenter_Text_1
# 28 "data/maps/CoralPort_Mart/scripts.pory"
	giveitem ITEM_MOON_STONE, 1
# 29 "data/maps/CoralPort_Mart/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 30 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox MatInTheCoralPokemonCenter_Text_2
	goto MatInTheCoralPokemonCenter_6

MatInTheCoralPokemonCenter_8:
# 26 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_unset FLAG_MAT_ID_RETURNED, MatInTheCoralPokemonCenter_7
	goto MatInTheCoralPokemonCenter_6

MatInTheCoralPokemonCenter_12:
# 33 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox MatInTheCoralPokemonCenter_Text_3
	goto MatInTheCoralPokemonCenter_11


CoralPort_Mart_EventScript_Girl::
# 39 "data/maps/CoralPort_Mart/scripts.pory"
	lockall
# 40 "data/maps/CoralPort_Mart/scripts.pory"
	faceplayer
# 41 "data/maps/CoralPort_Mart/scripts.pory"
	goto_if_set FLAG_HIDE_THUG_TOWN, CoralPort_Mart_EventScript_Girl_2
# 45 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox CoralPort_Mart_EventScript_Girl_Text_1
CoralPort_Mart_EventScript_Girl_1:
# 47 "data/maps/CoralPort_Mart/scripts.pory"
	releaseall
	return

CoralPort_Mart_EventScript_Girl_2:
# 42 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox CoralPort_Mart_EventScript_Girl_Text_0
	goto CoralPort_Mart_EventScript_Girl_1


CoralPort_Mart_EventScript_Woman::
# 51 "data/maps/CoralPort_Mart/scripts.pory"
	lockall
# 52 "data/maps/CoralPort_Mart/scripts.pory"
	faceplayer
# 53 "data/maps/CoralPort_Mart/scripts.pory"
	msgbox CoralPort_Mart_EventScript_Woman_Text_0
# 54 "data/maps/CoralPort_Mart/scripts.pory"
	releaseall
	return


	.align 2
# 58 "data/maps/CoralPort_Mart/scripts.pory"
CoralPortMart_Items_LessThanThreeBadges:
# 59 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 60 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 61 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 62 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 63 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_POTION
# 64 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 65 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 66 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 67 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 68 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 71 "data/maps/CoralPort_Mart/scripts.pory"
CoralPortMart_Items_LessThanSixBadges:
# 72 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 73 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 74 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_LURE_BALL
# 75 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_DIVE_BALL
# 76 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_POTION
# 77 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 78 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 79 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 80 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 81 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 82 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 83 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 84 "data/maps/CoralPort_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

CoralPort_Mart_EventScript_Clerk_Text_0:
# 8 "data/maps/CoralPort_Mart/scripts.pory"
	.string "How may I serve you$"

CoralPort_Mart_EventScript_Clerk_Text_1:
# 16 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Please Come Again.$"

MatInTheCoralPokemonCenter_Text_0:
# 24 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Hey how it your adventure going?$"

MatInTheCoralPokemonCenter_Text_1:
# 27 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Thanks for returning id must've dropped\n"
	.string "it in the pot when I jumped in here have\l"
	.string "this as a reward$"

MatInTheCoralPokemonCenter_Text_2:
# 30 "data/maps/CoralPort_Mart/scripts.pory"
	.string "You can use it on an Eevee to get an\n"
	.string "Umbreon! One of my favourites$"

MatInTheCoralPokemonCenter_Text_3:
# 33 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Hey, how is your Pokémon adventure\n"
	.string "going$"

CoralPort_Mart_EventScript_Girl_Text_0:
# 42 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Apparently the Mauville Port has been\n"
	.string "taken over so the boat has to drop off\l"
	.string "passengers on the beach. It's a real\l"
	.string "mess.$"

CoralPort_Mart_EventScript_Girl_Text_1:
# 45 "data/maps/CoralPort_Mart/scripts.pory"
	.string "Someone finally dealt with the thugs!$"

CoralPort_Mart_EventScript_Woman_Text_0:
# 53 "data/maps/CoralPort_Mart/scripts.pory"
	.string "We see so many strong trainers come\n"
	.string "down from the school, many of them\l"
	.string "becomes champions!$"
