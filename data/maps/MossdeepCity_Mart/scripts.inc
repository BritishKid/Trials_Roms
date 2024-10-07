MossdeepCity_Mart_MapScripts::
	.byte 0


MossdeepCity_Mart_EventScript_Clerk::
	lockall
	faceplayer
	msgbox MossdeepCity_Mart_EventScript_Clerk_Text_0
	waitmessage
	goto_if_unset FLAG_BADGE03_GET, MossdeepCity_Mart_EventScript_Clerk_2
	pokemart MossdeepCityMart_Items_LessThanSixBadges
MossdeepCity_Mart_EventScript_Clerk_1:
	msgbox MossdeepCity_Mart_EventScript_Clerk_Text_1
	releaseall
	return

MossdeepCity_Mart_EventScript_Clerk_2:
	pokemart MossdeepCityMart_Items_LessThanThreeBadges
	goto MossdeepCity_Mart_EventScript_Clerk_1


MossdeepCity_Mart_EventScript_Woman::
	lockall
	faceplayer
	msgbox MossdeepCity_Mart_EventScript_Woman_Text_0
	releaseall
	return


MossdeepCity_Mart_EventScript_Sailor::
	lockall
	faceplayer
	msgbox MossdeepCity_Mart_EventScript_Sailor_Text_0
	releaseall
	return


MossdeepCity_Mart_EventScript_Boy::
	lockall
	faceplayer
	msgbox MossdeepCity_Mart_EventScript_Boy_Text_0
	releaseall
	return


	.align 2
MossdeepCityMart_Items_LessThanThreeBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
MossdeepCityMart_Items_LessThanSixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NET_BALL
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

MossdeepCity_Mart_EventScript_Clerk_Text_0:
	.string "How may I serve you$"

MossdeepCity_Mart_EventScript_Clerk_Text_1:
	.string "Please Come Again.$"

MossdeepCity_Mart_EventScript_Woman_Text_0:
	.string "Many towns have unique items, it's\n"
	.string "always worth checking them when you\l"
	.string "are around$"

MossdeepCity_Mart_EventScript_Sailor_Text_0:
	.string "I know we have the big super market on\n"
	.string "this island but you just can't beat net\l"
	.string "balls for certain Pokémon$"

MossdeepCity_Mart_EventScript_Boy_Text_0:
	.string "I heard there is a crazy strong Pokémon\n"
	.string "inside the Obsidian Peak volcano!$"
