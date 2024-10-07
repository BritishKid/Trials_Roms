VerdanturfTown_Mart_MapScripts::
	.byte 0


VerdanturfTown_Mart_EventScript_Clerk::
# 6 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lockall
# 7 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_Clerk_Text_0
# 9 "data/maps/VerdanturfTown_Mart/scripts.pory"
	waitmessage
# 10 "data/maps/VerdanturfTown_Mart/scripts.pory"
	goto_if_unset FLAG_BADGE03_GET, VerdanturfTown_Mart_EventScript_Clerk_2
# 14 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTownMart_Items_LessThanSixBadges
VerdanturfTown_Mart_EventScript_Clerk_1:
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_Clerk_Text_1
# 17 "data/maps/VerdanturfTown_Mart/scripts.pory"
	releaseall
	return

VerdanturfTown_Mart_EventScript_Clerk_2:
# 11 "data/maps/VerdanturfTown_Mart/scripts.pory"
	pokemart VerdanturfTownMart_Items_LessThanThreeBadges
	goto VerdanturfTown_Mart_EventScript_Clerk_1


VerdanturfTown_Mart_EventScript_Lass::
# 21 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lockall
# 22 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_Lass_Text_0
# 24 "data/maps/VerdanturfTown_Mart/scripts.pory"
	releaseall
	return


VerdanturfTown_Mart_EventScript_Boy::
# 28 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lockall
# 29 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_Boy_Text_0
# 31 "data/maps/VerdanturfTown_Mart/scripts.pory"
	releaseall
	return


VerdanturfTown_Mart_EventScript_ExpertF::
# 35 "data/maps/VerdanturfTown_Mart/scripts.pory"
	lockall
# 36 "data/maps/VerdanturfTown_Mart/scripts.pory"
	faceplayer
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	msgbox VerdanturfTown_Mart_EventScript_ExpertF_Text_0
# 38 "data/maps/VerdanturfTown_Mart/scripts.pory"
	releaseall
	return


	.align 2
# 42 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTownMart_Items_LessThanThreeBadges:
# 43 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 44 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 45 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 46 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 47 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 48 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 49 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 50 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 51 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
# 54 "data/maps/VerdanturfTown_Mart/scripts.pory"
VerdanturfTownMart_Items_LessThanSixBadges:
# 55 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 56 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_GREAT_BALL
# 57 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_DUSK_BALL
# 58 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_POTION
# 59 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_POTION
# 60 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 61 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 62 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 63 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_FULL_HEAL
# 64 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_REPEL
# 65 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_SUPER_REPEL
# 66 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

VerdanturfTown_Mart_EventScript_Clerk_Text_0:
# 8 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "How may I serve you$"

VerdanturfTown_Mart_EventScript_Clerk_Text_1:
# 16 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Please Come Again.$"

VerdanturfTown_Mart_EventScript_Lass_Text_0:
# 23 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Theres a bunch of nerds who breed\n"
	.string "crazy strong Pokémon nearby, but if\l"
	.string "it's not perfect they release them.$"

VerdanturfTown_Mart_EventScript_Boy_Text_0:
# 30 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "So many people find shiny Pokémon here\n"
	.string "because of the nearby breeders$"

VerdanturfTown_Mart_EventScript_ExpertF_Text_0:
# 37 "data/maps/VerdanturfTown_Mart/scripts.pory"
	.string "Ember Dunes is a very big dangerous\n"
	.string "area, I spent my life trying to solve\l"
	.string "the mystery of a lost powerful Pokémon\l"
	.string "in there.$"
