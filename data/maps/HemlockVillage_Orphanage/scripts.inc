HemlockVillage_Orphanage_MapScripts::
	.byte 0


HemlockVillage_Orphanage_EventScript_LostTreecko::
# 6 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	lockall
# 7 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	faceplayer
# 9 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	compare VAR_TREECKO_STATE, 2
	goto_if_gt HemlockVillage_Orphanage_EventScript_LostTreecko_2
# 13 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	compare VAR_TREECKO_STATE, 1
	goto_if_eq HemlockVillage_Orphanage_EventScript_LostTreecko_5
HemlockVillage_Orphanage_EventScript_LostTreecko_4:
# 16 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	compare VAR_TREECKO_STATE, 0
	goto_if_eq HemlockVillage_Orphanage_EventScript_LostTreecko_8
HemlockVillage_Orphanage_EventScript_LostTreecko_7:
# 22 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	releaseall
	return

HemlockVillage_Orphanage_EventScript_LostTreecko_2:
# 10 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_LostTreecko_Text_0
	end

HemlockVillage_Orphanage_EventScript_LostTreecko_5:
# 14 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_LostTreecko_Text_1
	goto HemlockVillage_Orphanage_EventScript_LostTreecko_4

HemlockVillage_Orphanage_EventScript_LostTreecko_8:
# 17 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_LostTreecko_Text_2
# 18 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_LostTreecko_Text_3
# 19 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_LostTreecko_Text_4
# 20 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	setvar VAR_TREECKO_STATE, 1
	goto HemlockVillage_Orphanage_EventScript_LostTreecko_7


HemlockVillage_Orphanage_EventScript_Lady::
# 26 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	lockall
# 27 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	faceplayer
# 28 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_Lady_Text_0
# 29 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	releaseall
	return


HemlockVillage_Orphanage_EventScript_ChildBoy::
# 33 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	lockall
# 34 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	faceplayer
# 35 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_ChildBoy_Text_0
# 36 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	releaseall
	return


HemlockVillage_Orphanage_EventScript_Sink::
# 40 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	lockall
# 41 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_Sink_Text_0
# 42 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	goto_if_unset FLAG_LEFTOVERS_ORPHANAGE, HemlockVillage_Orphanage_EventScript_Sink_2
HemlockVillage_Orphanage_EventScript_Sink_1:
# 47 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	releaseall
	return

HemlockVillage_Orphanage_EventScript_Sink_2:
# 43 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	msgbox HemlockVillage_Orphanage_EventScript_Sink_Text_1
# 44 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	giveitem ITEM_LEFTOVERS, 1
# 45 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	setflag FLAG_LEFTOVERS_ORPHANAGE
	goto HemlockVillage_Orphanage_EventScript_Sink_1


HemlockVillage_Orphanage_EventScript_LostTreecko_Text_0:
# 10 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "I have to go catch my own Treecko!$"

HemlockVillage_Orphanage_EventScript_LostTreecko_Text_1:
# 14 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "I would love to se a Treecko.$"

HemlockVillage_Orphanage_EventScript_LostTreecko_Text_2:
# 17 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "My mum used to talk about how cool\n"
	.string "Treecko was but I never got to see one\l"
	.string "before she died.$"

HemlockVillage_Orphanage_EventScript_LostTreecko_Text_3:
# 18 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "You have lots of Pokémon are you able\n"
	.string "to show me one?$"

HemlockVillage_Orphanage_EventScript_LostTreecko_Text_4:
# 19 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "Oh you haven't seen one, please find\n"
	.string "one for me.$"

HemlockVillage_Orphanage_EventScript_Lady_Text_0:
# 28 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "It's hard looking after all these\n"
	.string "children, but it's so rewarding to teach\l"
	.string "them.$"

HemlockVillage_Orphanage_EventScript_ChildBoy_Text_0:
# 35 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "I'm learning to cook! It'll make me such\n"
	.string "a ladies man when I'm older.$"

HemlockVillage_Orphanage_EventScript_Sink_Text_0:
# 41 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "It's a sink$"

HemlockVillage_Orphanage_EventScript_Sink_Text_1:
# 43 "data/maps/HemlockVillage_Orphanage/scripts.pory"
	.string "There is some food in the sink you think\n"
	.string "you could use.$"
