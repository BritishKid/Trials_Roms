# 1 "data/maps/Clayhaven_Mart/scripts.pory"
Clayhaven_Mart_MapScripts::
# 2 "data/maps/Clayhaven_Mart/scripts.pory"
	.byte 0
# 3 "data/maps/Clayhaven_Mart/scripts.pory"

# 4 "data/maps/Clayhaven_Mart/scripts.pory"
Clayhaven_Mart_EventScript_Clerk::
# 5 "data/maps/Clayhaven_Mart/scripts.pory"
	lock
# 6 "data/maps/Clayhaven_Mart/scripts.pory"
	faceplayer
# 7 "data/maps/Clayhaven_Mart/scripts.pory"
	message gText_HowMayIServeYou
# 8 "data/maps/Clayhaven_Mart/scripts.pory"
	waitmessage
# 9 "data/maps/Clayhaven_Mart/scripts.pory"
	goto_if_set FLAG_ADVENTURE_STARTED, Clayhaven_Mart_ExpandedItems
# 10 "data/maps/Clayhaven_Mart/scripts.pory"
	pokemart Clayhaven_Mart_Pokemart_Basic
# 11 "data/maps/Clayhaven_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 12 "data/maps/Clayhaven_Mart/scripts.pory"
	release
# 13 "data/maps/Clayhaven_Mart/scripts.pory"
	end
# 14 "data/maps/Clayhaven_Mart/scripts.pory"

# 15 "data/maps/Clayhaven_Mart/scripts.pory"
	.align 2
# 16 "data/maps/Clayhaven_Mart/scripts.pory"
Clayhaven_Mart_Pokemart_Basic:
# 17 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 18 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 19 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_POTION
# 20 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 21 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 22 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 23 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_NONE
# 24 "data/maps/Clayhaven_Mart/scripts.pory"
	release
# 25 "data/maps/Clayhaven_Mart/scripts.pory"
	end
# 26 "data/maps/Clayhaven_Mart/scripts.pory"

# 27 "data/maps/Clayhaven_Mart/scripts.pory"
Clayhaven_Mart_ExpandedItems::
# 28 "data/maps/Clayhaven_Mart/scripts.pory"
	pokemart Clayhaven_Mart_Pokemart_Expanded
# 29 "data/maps/Clayhaven_Mart/scripts.pory"
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
# 30 "data/maps/Clayhaven_Mart/scripts.pory"
	release
# 31 "data/maps/Clayhaven_Mart/scripts.pory"
	end
# 32 "data/maps/Clayhaven_Mart/scripts.pory"

# 33 "data/maps/Clayhaven_Mart/scripts.pory"
	.align 2
# 34 "data/maps/Clayhaven_Mart/scripts.pory"
Clayhaven_Mart_Pokemart_Expanded:
# 35 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_POKE_BALL
# 36 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_NET_BALL
# 37 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_POTION
# 38 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_ANTIDOTE
# 39 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_PARALYZE_HEAL
# 40 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_AWAKENING
# 41 "data/maps/Clayhaven_Mart/scripts.pory"
	.2byte ITEM_NONE
# 42 "data/maps/Clayhaven_Mart/scripts.pory"
	release
# 43 "data/maps/Clayhaven_Mart/scripts.pory"
	end

Clayhaven_Mart_EventScript_Boy::
# 47 "data/maps/Clayhaven_Mart/scripts.pory"
	lockall
# 48 "data/maps/Clayhaven_Mart/scripts.pory"
	faceplayer
# 49 "data/maps/Clayhaven_Mart/scripts.pory"
	msgbox Clayhaven_Mart_EventScript_Boy_Text_0
# 50 "data/maps/Clayhaven_Mart/scripts.pory"
	releaseall
	return


Clayhaven_Mart_EventScript_Woman::
# 54 "data/maps/Clayhaven_Mart/scripts.pory"
	lockall
# 55 "data/maps/Clayhaven_Mart/scripts.pory"
	faceplayer
# 56 "data/maps/Clayhaven_Mart/scripts.pory"
	msgbox Clayhaven_Mart_EventScript_Woman_Text_0
# 57 "data/maps/Clayhaven_Mart/scripts.pory"
	releaseall
	return


Clayhaven_Mart_EventScript_Boy_Text_0:
# 49 "data/maps/Clayhaven_Mart/scripts.pory"
	.string "Some shops sell special Pokeballs to\n"
	.string "try and drum up business.$"

Clayhaven_Mart_EventScript_Woman_Text_0:
# 56 "data/maps/Clayhaven_Mart/scripts.pory"
	.string "I'm learning to craft from my big sister,\n"
	.string "then I never need to buy anything\l"
	.string "again.$"
