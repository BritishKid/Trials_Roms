CoralPort_Mart_MapScripts::
	.byte 0


CoralPort_Mart_EventScript_Clerk::
	lockall
	faceplayer
	msgbox CoralPort_Mart_EventScript_Clerk_Text_0
	waitmessage
	goto_if_unset FLAG_BADGE03_GET, CoralPort_Mart_EventScript_Clerk_2
	pokemart CoralPortMart_Items_LessThanSixBadges
CoralPort_Mart_EventScript_Clerk_1:
	msgbox CoralPort_Mart_EventScript_Clerk_Text_1
	releaseall
	return

CoralPort_Mart_EventScript_Clerk_2:
	pokemart CoralPortMart_Items_LessThanThreeBadges
	goto CoralPort_Mart_EventScript_Clerk_1


MatInTheCoralPokemonCenter::
	lockall
	faceplayer
	goto_if_set FLAG_MAT_ID, MatInTheCoralPokemonCenter_3
MatInTheCoralPokemonCenter_1:
	goto_if_set FLAG_MAT_ID, MatInTheCoralPokemonCenter_8
MatInTheCoralPokemonCenter_6:
	goto_if_unset FLAG_MAT_ID, MatInTheCoralPokemonCenter_12
MatInTheCoralPokemonCenter_11:
	releaseall
	return

MatInTheCoralPokemonCenter_2:
	msgbox MatInTheCoralPokemonCenter_Text_0
	goto MatInTheCoralPokemonCenter_1

MatInTheCoralPokemonCenter_3:
	goto_if_set FLAG_MAT_ID_RETURNED, MatInTheCoralPokemonCenter_2
	goto MatInTheCoralPokemonCenter_1

MatInTheCoralPokemonCenter_7:
	msgbox MatInTheCoralPokemonCenter_Text_1
	giveitem ITEM_MOON_STONE, 1
	playfanfare MUS_OBTAIN_ITEM
	msgbox MatInTheCoralPokemonCenter_Text_2
	goto MatInTheCoralPokemonCenter_6

MatInTheCoralPokemonCenter_8:
	goto_if_unset FLAG_MAT_ID_RETURNED, MatInTheCoralPokemonCenter_7
	goto MatInTheCoralPokemonCenter_6

MatInTheCoralPokemonCenter_12:
	msgbox MatInTheCoralPokemonCenter_Text_3
	goto MatInTheCoralPokemonCenter_11


CoralPort_Mart_EventScript_Girl::
	lockall
	faceplayer
	goto_if_set FLAG_HIDE_THUG_TOWN, CoralPort_Mart_EventScript_Girl_2
	msgbox CoralPort_Mart_EventScript_Girl_Text_1
CoralPort_Mart_EventScript_Girl_1:
	releaseall
	return

CoralPort_Mart_EventScript_Girl_2:
	msgbox CoralPort_Mart_EventScript_Girl_Text_0
	goto CoralPort_Mart_EventScript_Girl_1


CoralPort_Mart_EventScript_Woman::
	lockall
	faceplayer
	msgbox CoralPort_Mart_EventScript_Woman_Text_0
	releaseall
	return


	.align 2
CoralPortMart_Items_LessThanThreeBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
CoralPortMart_Items_LessThanSixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_LURE_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_POTION
	.2byte ITEM_SUPER_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REPEL
	.2byte ITEM_SUPER_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

CoralPort_Mart_EventScript_Clerk_Text_0:
	.string "How may I serve you$"

CoralPort_Mart_EventScript_Clerk_Text_1:
	.string "Please Come Again.$"

MatInTheCoralPokemonCenter_Text_0:
	.string "Hey how it your adventure going?$"

MatInTheCoralPokemonCenter_Text_1:
	.string "Thanks for returning id must've dropped\n"
	.string "it in the pot when I jumped in here have\l"
	.string "this as a reward$"

MatInTheCoralPokemonCenter_Text_2:
	.string "You can use it on an Eevee to get an\n"
	.string "Umbreon! One of my favourites$"

MatInTheCoralPokemonCenter_Text_3:
	.string "Hey, how is your Pokémon adventure\n"
	.string "going$"

CoralPort_Mart_EventScript_Girl_Text_0:
	.string "Apparently the Mauville Port has been\n"
	.string "taken over so the boat has to drop off\l"
	.string "passengers on the beach. It's a real\l"
	.string "mess.$"

CoralPort_Mart_EventScript_Girl_Text_1:
	.string "Someone finally dealt with the thugs!$"

CoralPort_Mart_EventScript_Woman_Text_0:
	.string "We see so many strong trainers come\n"
	.string "down from the school, many of them\l"
	.string "becomes champions!$"
