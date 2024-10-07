Mossdeep_Orphanage_MapScripts::
	.byte 0


Orphanage_LostTreecko::
	lockall
	faceplayer
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FINDING_TREECKO
	compare VAR_RESULT, 0
	goto_if_ne Orphanage_LostTreecko_2
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FINDING_TREECKO
	compare VAR_RESULT, 0
	goto_if_eq Orphanage_LostTreecko_5
Orphanage_LostTreecko_4:
	compare VAR_RESULT, 0
	goto_if_ne Orphanage_LostTreecko_9
Orphanage_LostTreecko_7:
	releaseall
	return

Orphanage_LostTreecko_2:
	msgbox Orphanage_LostTreecko_Text_0
	end

Orphanage_LostTreecko_5:
	msgbox Orphanage_LostTreecko_Text_1
	msgbox Orphanage_LostTreecko_Text_2
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FINDING_TREECKO
	msgbox Orphanage_LostTreecko_Text_3
	goto Orphanage_LostTreecko_4

Orphanage_LostTreecko_8:
	msgbox Orphanage_LostTreecko_Text_4
	goto Orphanage_LostTreecko_7

Orphanage_LostTreecko_9:
	goto_if_unset FLAG_TREECKO_BATTLE_BEATEN, Orphanage_LostTreecko_8
	goto Orphanage_LostTreecko_7


Orphanage_Lady::
	lockall
	faceplayer
	msgbox Orphanage_Lady_Text_0
	releaseall
	return


Orpahanage_ChildInKitchen::
	lockall
	faceplayer
	msgbox Orpahanage_ChildInKitchen_Text_0
	releaseall
	return


Orphanage_Leftovers::
	lockall
	msgbox Orphanage_Leftovers_Text_0
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, Orphanage_Leftovers_2
Orphanage_Leftovers_1:
	releaseall
	return

Orphanage_Leftovers_2:
	msgbox Orphanage_Leftovers_Text_1
	giveitem ITEM_LEFTOVERS, 1
	setflag FLAG_LEFTOVERS_ORPHANAGE
	playfanfare MUS_OBTAIN_ITEM
	goto Orphanage_Leftovers_1


Orphanage_LostTreecko_Text_0:
	.string "I have to go catch my own Treecko!$"

Orphanage_LostTreecko_Text_1:
	.string "My mum used to talk about how cool\n"
	.string "Treecko was but I never got to see one\l"
	.string "before she died.$"

Orphanage_LostTreecko_Text_2:
	.string "You have lots Pokémon are you able to\n"
	.string "show me one?$"

Orphanage_LostTreecko_Text_3:
	.string "Oh you haven't seen one, please find\n"
	.string "one for me.$"

Orphanage_LostTreecko_Text_4:
	.string "I would love to see Treecko$"

Orphanage_Lady_Text_0:
	.string "It's hard looking after all these\n"
	.string "children, but it's so rewarding teaching\l"
	.string "them.$"

Orpahanage_ChildInKitchen_Text_0:
	.string "I'm learning to cook! It'll make me such\n"
	.string "a ladies man when I'm older.$"

Orphanage_Leftovers_Text_0:
	.string "It's a sink$"

Orphanage_Leftovers_Text_1:
	.string "There is some food in the sink you think\n"
	.string "you could use.$"
