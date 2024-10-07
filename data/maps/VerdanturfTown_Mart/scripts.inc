VerdanturfTown_Mart_MapScripts::
	.byte 0


VerdanturfTown_Mart_EventScript_Clerk::
	lockall
	faceplayer
	msgbox VerdanturfTown_Mart_EventScript_Clerk_Text_0
	waitmessage
	goto_if_unset FLAG_BADGE03_GET, VerdanturfTown_Mart_EventScript_Clerk_2
	pokemart VerdanturfTownMart_Items_LessThanSixBadges
VerdanturfTown_Mart_EventScript_Clerk_1:
	msgbox VerdanturfTown_Mart_EventScript_Clerk_Text_1
	releaseall
	return

VerdanturfTown_Mart_EventScript_Clerk_2:
	pokemart VerdanturfTownMart_Items_LessThanThreeBadges
	goto VerdanturfTown_Mart_EventScript_Clerk_1


VerdanturfTown_Mart_EventScript_Lass::
	lockall
	faceplayer
	msgbox VerdanturfTown_Mart_EventScript_Lass_Text_0
	releaseall
	return


VerdanturfTown_Mart_EventScript_Boy::
	lockall
	faceplayer
	msgbox VerdanturfTown_Mart_EventScript_Boy_Text_0
	releaseall
	return


VerdanturfTown_Mart_EventScript_ExpertF::
	lockall
	faceplayer
	msgbox VerdanturfTown_Mart_EventScript_ExpertF_Text_0
	releaseall
	return


	.align 2
VerdanturfTownMart_Items_LessThanThreeBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_DUSK_BALL
	.2byte ITEM_POTION
	.2byte ITEM_ANTIDOTE
	.2byte ITEM_PARALYZE_HEAL
	.2byte ITEM_AWAKENING
	.2byte ITEM_REPEL
	.2byte ITEM_ESCAPE_ROPE
	.2byte ITEM_NONE

	.align 2
VerdanturfTownMart_Items_LessThanSixBadges:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_DUSK_BALL
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

VerdanturfTown_Mart_EventScript_Clerk_Text_0:
	.string "How may I serve you$"

VerdanturfTown_Mart_EventScript_Clerk_Text_1:
	.string "Please Come Again.$"

VerdanturfTown_Mart_EventScript_Lass_Text_0:
	.string "Theres a bunch of nerds who breed\n"
	.string "crazy strong Pokémon nearby, but if\l"
	.string "it's not perfect they release them.$"

VerdanturfTown_Mart_EventScript_Boy_Text_0:
	.string "So many people find shiny Pokémon here\n"
	.string "because of the nearby breeders$"

VerdanturfTown_Mart_EventScript_ExpertF_Text_0:
	.string "Ember Dunes is a very big dangerous\n"
	.string "area, I spent my life trying to solve\l"
	.string "the mystery of a lost powerful Pokémon\l"
	.string "in there.$"
