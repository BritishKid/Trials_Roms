MossdeepCity_Mart_MapScripts::
	.byte 0


MossdeepCity_Mart_EventScript_Clerk::
# 6 "data/maps/MossdeepCity_Mart/scripts.pory"
	lockall
# 7 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_Clerk_Text_0
# 9 "data/maps/MossdeepCity_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/MossdeepCity_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, MossdeepCity_Mart_EventScript_Clerk_2
# 14 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCityMart_Items_LessThanSixBadges
MossdeepCity_Mart_EventScript_Clerk_1:
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_Clerk_Text_1
# 17 "data/maps/MossdeepCity_Mart/scripts.pory"
	releaseall
	return

MossdeepCity_Mart_EventScript_Clerk_2:
# 11 "data/maps/MossdeepCity_Mart/scripts.pory"
	pokemart MossdeepCityMart_Items_LessThanThreeBadges
	goto MossdeepCity_Mart_EventScript_Clerk_1


MossdeepCity_Mart_EventScript_Woman::
# 21 "data/maps/MossdeepCity_Mart/scripts.pory"
	lockall
# 22 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_Woman_Text_0
# 24 "data/maps/MossdeepCity_Mart/scripts.pory"
	releaseall
	return


MossdeepCity_Mart_EventScript_Sailor::
# 28 "data/maps/MossdeepCity_Mart/scripts.pory"
	lockall
# 29 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_Sailor_Text_0
# 31 "data/maps/MossdeepCity_Mart/scripts.pory"
	releaseall
	return


MossdeepCity_Mart_EventScript_Boy::
# 35 "data/maps/MossdeepCity_Mart/scripts.pory"
	lockall
# 36 "data/maps/MossdeepCity_Mart/scripts.pory"
	faceplayer
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	msgbox MossdeepCity_Mart_EventScript_Boy_Text_0
# 38 "data/maps/MossdeepCity_Mart/scripts.pory"
	releaseall
	return


	.align 2
# 42 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCityMart_Items_LessThanThreeBadges:
# 43 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 45 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 46 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 50 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 54 "data/maps/MossdeepCity_Mart/scripts.pory"
MossdeepCityMart_Items_LessThanSixBadges:
# 55 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 56 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 57 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 58 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_POTION
# 59 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 60 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 63 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 64 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 65 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 66 "data/maps/MossdeepCity_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

MossdeepCity_Mart_EventScript_Clerk_Text_0:
# 8 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "How may I serve you$"

MossdeepCity_Mart_EventScript_Clerk_Text_1:
# 16 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Please Come Again.$"

MossdeepCity_Mart_EventScript_Woman_Text_0:
# 23 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "Many towns have unique items, it's\n"
	.string "always worth checking them when you\l"
	.string "are around$"

MossdeepCity_Mart_EventScript_Sailor_Text_0:
# 30 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "I know we have the big super market on\n"
	.string "this island but you just can't beat net\l"
	.string "balls for certain Pokémon$"

MossdeepCity_Mart_EventScript_Boy_Text_0:
# 37 "data/maps/MossdeepCity_Mart/scripts.pory"
	.string "I heard there is a crazy strong Pokémon\n"
	.string "inside the Obsidian Peak volcano!$"
