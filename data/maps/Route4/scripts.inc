Route4_MapScripts::
	.byte 0


Route4_TrainerBattle_Jakobi::
# 5 "data/maps/Route4/scripts.pory"
	trainerbattle_single ROUTE4_COOLTRAINER_JAKOBI, Jakobi_Intro, Jakobi_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Route4/scripts.pory"
	msgbox Jakobi_Postbattle, MSGBOX_DEFAULT
	end


Route4_TrainerBattle_ToughBug::
# 11 "data/maps/Route4/scripts.pory"
	trainerbattle_single ROUTE4_BUGCATCHER, Route4Bug_Intro, Route4Bug_Outro, Increase_Trainers_Beaten
# 12 "data/maps/Route4/scripts.pory"
	msgbox Route4Bug_Postbattle, MSGBOX_DEFAULT
	end


Route4_EventScript_WaterStone::
# 17 "data/maps/Route4/scripts.pory"
	lockall
# 18 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Text_0
# 19 "data/maps/Route4/scripts.pory"
	releaseall
	return


Route4_EventScript_WaterStone_Grandson::
# 23 "data/maps/Route4/scripts.pory"
	lockall
# 24 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_0
# 26 "data/maps/Route4/scripts.pory"
	goto_if_unset FLAG_WATER_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_3
Route4_EventScript_WaterStone_Grandson_1:
# 61 "data/maps/Route4/scripts.pory"
	releaseall
	return

Route4_EventScript_WaterStone_Grandson_2:
# 27 "data/maps/Route4/scripts.pory"
	faceplayer
# 28 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_1
# 29 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_2
# 30 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_3, MSGBOX_YESNO
# 31 "data/maps/Route4/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route4_EventScript_WaterStone_Grandson_7
Route4_EventScript_WaterStone_Grandson_6:
# 57 "data/maps/Route4/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route4_EventScript_WaterStone_Grandson_9
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_3:
# 26 "data/maps/Route4/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 1
	goto_if_eq Route4_EventScript_WaterStone_Grandson_2
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_7:
# 32 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_4
# 33 "data/maps/Route4/scripts.pory"
	setwildbattle SPECIES_POLIWHIRL, 25, ITEM_ORAN_BERRY
# 34 "data/maps/Route4/scripts.pory"
	call StartWaterStoneBattle
# 35 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_5
# 36 "data/maps/Route4/scripts.pory"
	setwildbattle SPECIES_PANPOUR, 28, ITEM_ORAN_BERRY
# 37 "data/maps/Route4/scripts.pory"
	call StartWaterStoneBattle
# 38 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_6
# 39 "data/maps/Route4/scripts.pory"
	setwildbattle SPECIES_SIMIPOUR, 30, ITEM_ORAN_BERRY
# 40 "data/maps/Route4/scripts.pory"
	call StartWaterStoneBattle
# 41 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_7
# 42 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_8
# 43 "data/maps/Route4/scripts.pory"
	giveitem ITEM_WATER_STONE
# 44 "data/maps/Route4/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 45 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_9
# 46 "data/maps/Route4/scripts.pory"
	setflag FLAG_WATER_STONE_SOURCE
# 47 "data/maps/Route4/scripts.pory"
	goto_if_set FLAG_LEAF_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_14
Route4_EventScript_WaterStone_Grandson_11:
# 52 "data/maps/Route4/scripts.pory"
	applymovement 1, Movement_GrandsonLeaves_WaterStone
# 53 "data/maps/Route4/scripts.pory"
	waitmovement 1
# 54 "data/maps/Route4/scripts.pory"
	removeobject 1
# 55 "data/maps/Route4/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto Route4_EventScript_WaterStone_Grandson_6

Route4_EventScript_WaterStone_Grandson_9:
# 58 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_11
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_12:
# 48 "data/maps/Route4/scripts.pory"
	msgbox Route4_EventScript_WaterStone_Grandson_Text_10
# 49 "data/maps/Route4/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 2
	goto Route4_EventScript_WaterStone_Grandson_11

Route4_EventScript_WaterStone_Grandson_13:
# 47 "data/maps/Route4/scripts.pory"
	goto_if_set FLAG_FIRE_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_12
	goto Route4_EventScript_WaterStone_Grandson_11

Route4_EventScript_WaterStone_Grandson_14:
# 47 "data/maps/Route4/scripts.pory"
	goto_if_set FLAG_WATER_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_13
	goto Route4_EventScript_WaterStone_Grandson_11


StartWaterStoneBattle::
# 65 "data/maps/Route4/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 66 "data/maps/Route4/scripts.pory"
	dowildbattle
	return


# 96 "data/maps/Route4/scripts.pory"
Movement_GrandsonLeaves_WaterStone:
# 97 "data/maps/Route4/scripts.pory"
	walk_up
# 98 "data/maps/Route4/scripts.pory"
	walk_up
# 99 "data/maps/Route4/scripts.pory"
	walk_up
# 100 "data/maps/Route4/scripts.pory"
	walk_up
# 101 "data/maps/Route4/scripts.pory"
	walk_up
# 102 "data/maps/Route4/scripts.pory"
	walk_up
	step_end

Route4_EventScript_WaterStone_Text_0:
# 18 "data/maps/Route4/scripts.pory"
	.string "Water seems to be pouring out of the\n"
	.string "rock.$"

Route4_EventScript_WaterStone_Grandson_Text_0:
# 24 "data/maps/Route4/scripts.pory"
	.string "Interesting...is this it?$"

Route4_EventScript_WaterStone_Grandson_Text_1:
# 28 "data/maps/Route4/scripts.pory"
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

Route4_EventScript_WaterStone_Grandson_Text_2:
# 29 "data/maps/Route4/scripts.pory"
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into water stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

Route4_EventScript_WaterStone_Grandson_Text_3:
# 30 "data/maps/Route4/scripts.pory"
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

Route4_EventScript_WaterStone_Grandson_Text_4:
# 32 "data/maps/Route4/scripts.pory"
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

Route4_EventScript_WaterStone_Grandson_Text_5:
# 35 "data/maps/Route4/scripts.pory"
	.string "Thank you, but I can see more coming!$"

Route4_EventScript_WaterStone_Grandson_Text_6:
# 38 "data/maps/Route4/scripts.pory"
	.string "Great job but I think something bigger\n"
	.string "is coming$"

Route4_EventScript_WaterStone_Grandson_Text_7:
# 41 "data/maps/Route4/scripts.pory"
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

Route4_EventScript_WaterStone_Grandson_Text_8:
# 42 "data/maps/Route4/scripts.pory"
	.string "Also please take this.$"

Route4_EventScript_WaterStone_Grandson_Text_9:
# 45 "data/maps/Route4/scripts.pory"
	.string "It's the least I could do in return.$"

Route4_EventScript_WaterStone_Grandson_Text_10:
# 48 "data/maps/Route4/scripts.pory"
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

Route4_EventScript_WaterStone_Grandson_Text_11:
# 58 "data/maps/Route4/scripts.pory"
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

Jakobi_Intro::
# 70 "data/maps/Route4/scripts.pory"
	.string "Should never came here pal.$"

Jakobi_Outro::
# 74 "data/maps/Route4/scripts.pory"
	.string "How could i lose these Pokemon were so\n"
	.string "expensive.$"

Jakobi_Postbattle::
# 78 "data/maps/Route4/scripts.pory"
	.string "How much did your Pokemon Cost?$"

Route4Bug_Intro::
# 82 "data/maps/Route4/scripts.pory"
	.string "I love feeding powerful berries to my\n"
	.string "bug Pokemon$"

Route4Bug_Outro::
# 86 "data/maps/Route4/scripts.pory"
	.string "Fine then I will share the berries.$"

Route4Bug_Postbattle::
# 90 "data/maps/Route4/scripts.pory"
	.string "Make good use of it.$"
