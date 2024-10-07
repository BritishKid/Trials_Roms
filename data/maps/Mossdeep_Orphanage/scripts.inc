Mossdeep_Orphanage_MapScripts::
	.byte 0


Orphanage_LostTreecko::
# 5 "data/maps/Mossdeep_Orphanage/scripts.pory"
	lockall
# 6 "data/maps/Mossdeep_Orphanage/scripts.pory"
	faceplayer
# 7 "data/maps/Mossdeep_Orphanage/scripts.pory"
	questmenu QUEST_MENU_CHECK_COMPLETE, QUEST_FINDING_TREECKO
# 8 "data/maps/Mossdeep_Orphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Orphanage_LostTreecko_2
# 12 "data/maps/Mossdeep_Orphanage/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_FINDING_TREECKO
# 13 "data/maps/Mossdeep_Orphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Orphanage_LostTreecko_5
Orphanage_LostTreecko_4:
# 19 "data/maps/Mossdeep_Orphanage/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Orphanage_LostTreecko_9
Orphanage_LostTreecko_7:
# 22 "data/maps/Mossdeep_Orphanage/scripts.pory"
	releaseall
	return

Orphanage_LostTreecko_2:
# 9 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_LostTreecko_Text_0
	end

Orphanage_LostTreecko_5:
# 14 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_LostTreecko_Text_1
# 15 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_LostTreecko_Text_2
# 16 "data/maps/Mossdeep_Orphanage/scripts.pory"
	questmenu QUEST_MENU_SET_ACTIVE, QUEST_FINDING_TREECKO
# 17 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_LostTreecko_Text_3
	goto Orphanage_LostTreecko_4

Orphanage_LostTreecko_8:
# 20 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_LostTreecko_Text_4
	goto Orphanage_LostTreecko_7

Orphanage_LostTreecko_9:
# 19 "data/maps/Mossdeep_Orphanage/scripts.pory"
	goto_if_unset FLAG_TREECKO_BATTLE_BEATEN, Orphanage_LostTreecko_8
	goto Orphanage_LostTreecko_7


Orphanage_Lady::
# 26 "data/maps/Mossdeep_Orphanage/scripts.pory"
	lockall
# 27 "data/maps/Mossdeep_Orphanage/scripts.pory"
	faceplayer
# 28 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_Lady_Text_0
# 29 "data/maps/Mossdeep_Orphanage/scripts.pory"
	releaseall
	return


Orpahanage_ChildInKitchen::
# 33 "data/maps/Mossdeep_Orphanage/scripts.pory"
	lockall
# 34 "data/maps/Mossdeep_Orphanage/scripts.pory"
	faceplayer
# 35 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orpahanage_ChildInKitchen_Text_0
# 36 "data/maps/Mossdeep_Orphanage/scripts.pory"
	releaseall
	return


Orphanage_Leftovers::
# 40 "data/maps/Mossdeep_Orphanage/scripts.pory"
	lockall
# 42 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_Leftovers_Text_0
# 43 "data/maps/Mossdeep_Orphanage/scripts.pory"
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, Orphanage_Leftovers_2
Orphanage_Leftovers_1:
# 49 "data/maps/Mossdeep_Orphanage/scripts.pory"
	releaseall
	return

Orphanage_Leftovers_2:
# 44 "data/maps/Mossdeep_Orphanage/scripts.pory"
	msgbox Orphanage_Leftovers_Text_1
# 45 "data/maps/Mossdeep_Orphanage/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 46 "data/maps/Mossdeep_Orphanage/scripts.pory"
	setflag FLAG_LEFTOVERS_ORPHANAGE
# 47 "data/maps/Mossdeep_Orphanage/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
	goto Orphanage_Leftovers_1


Orphanage_LostTreecko_Text_0:
# 9 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "I have to go catch my own Treecko!$"

Orphanage_LostTreecko_Text_1:
# 14 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "My mum used to talk about how cool\n"
	.string "Treecko was but I never got to see one\l"
	.string "before she died.$"

Orphanage_LostTreecko_Text_2:
# 15 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "You have lots Pokémon are you able to\n"
	.string "show me one?$"

Orphanage_LostTreecko_Text_3:
# 17 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "Oh you haven't seen one, please find\n"
	.string "one for me.$"

Orphanage_LostTreecko_Text_4:
# 20 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "I would love to see Treecko$"

Orphanage_Lady_Text_0:
# 28 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "It's hard looking after all these\n"
	.string "children, but it's so rewarding teaching\l"
	.string "them.$"

Orpahanage_ChildInKitchen_Text_0:
# 35 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "I'm learning to cook! It'll make me such\n"
	.string "a ladies man when I'm older.$"

Orphanage_Leftovers_Text_0:
# 42 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "It's a sink$"

Orphanage_Leftovers_Text_1:
# 44 "data/maps/Mossdeep_Orphanage/scripts.pory"
	.string "There is some food in the sink you think\n"
	.string "you could use.$"
