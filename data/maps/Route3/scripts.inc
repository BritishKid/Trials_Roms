Route3_MapScripts::
	.byte 0


LassAlexBattleScript::
# 5 "data/maps/Route3/scripts.pory"
	trainerbattle_single ROUTE3LASSALEX, LassAlex_Intro, LassAlex_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Route3/scripts.pory"
	msgbox LassAlex_PostBattle, MSGBOX_AUTOCLOSE
	end


HikerHarryBattleScript::
# 11 "data/maps/Route3/scripts.pory"
	trainerbattle_single ROUTE3HIKERHARRY, HikerHarry_Intro, HikerHarry_Outro, Increase_Trainers_Beaten
# 12 "data/maps/Route3/scripts.pory"
	msgbox HikerHarry_PostBattle, MSGBOX_AUTOCLOSE
	end


EventScript_Route3_ItemBall_Pokeball::
# 17 "data/maps/Route3/scripts.pory"
	finditem ITEM_HEART_SCALE, 2
	return


Route3_EventScript_FireStone::
# 21 "data/maps/Route3/scripts.pory"
	lock
# 22 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Text_0
# 23 "data/maps/Route3/scripts.pory"
	release
	return


Route3_EventScript_FireStone_Grandson::
# 27 "data/maps/Route3/scripts.pory"
	lock
# 28 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_0
# 29 "data/maps/Route3/scripts.pory"
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_EVOLUTION_STONE_MART
# 30 "data/maps/Route3/scripts.pory"
	goto_if_unset FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_3
Route3_EventScript_FireStone_Grandson_1:
# 63 "data/maps/Route3/scripts.pory"
	release
	return

Route3_EventScript_FireStone_Grandson_2:
# 31 "data/maps/Route3/scripts.pory"
	faceplayer
# 32 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_1
# 33 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_2
# 34 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_3, MSGBOX_YESNO
# 35 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_FireStone_Grandson_7
Route3_EventScript_FireStone_Grandson_6:
# 59 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route3_EventScript_FireStone_Grandson_9
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_3:
# 30 "data/maps/Route3/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne Route3_EventScript_FireStone_Grandson_2
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_7:
# 36 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_4
# 37 "data/maps/Route3/scripts.pory"
	setwildbattle SPECIES_GROWLITHE, 25, ITEM_ORAN_BERRY
# 38 "data/maps/Route3/scripts.pory"
	call StartWaterStoneBattle
# 39 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_5
# 40 "data/maps/Route3/scripts.pory"
	setwildbattle SPECIES_VULPIX, 28, ITEM_ORAN_BERRY
# 41 "data/maps/Route3/scripts.pory"
	call StartWaterStoneBattle
# 42 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_6
# 43 "data/maps/Route3/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 30, ITEM_ORAN_BERRY
# 44 "data/maps/Route3/scripts.pory"
	call StartWaterStoneBattle
# 45 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_7
# 46 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_8
# 47 "data/maps/Route3/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 48 "data/maps/Route3/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 49 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_9
# 50 "data/maps/Route3/scripts.pory"
	setflag FLAG_FIRE_STONE_SOURCE
# 51 "data/maps/Route3/scripts.pory"
	goto_if_set FLAG_LEAF_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_14
Route3_EventScript_FireStone_Grandson_11:
# 54 "data/maps/Route3/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_FIRE_STONE
# 55 "data/maps/Route3/scripts.pory"
	applymovement 4, Movement_GrandsonLeaves_FireStone
# 56 "data/maps/Route3/scripts.pory"
	waitmovement 4
# 57 "data/maps/Route3/scripts.pory"
	removeobject 4
	goto Route3_EventScript_FireStone_Grandson_6

Route3_EventScript_FireStone_Grandson_9:
# 60 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_11
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_12:
# 52 "data/maps/Route3/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_10
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_13:
# 51 "data/maps/Route3/scripts.pory"
	goto_if_set FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_12
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_14:
# 51 "data/maps/Route3/scripts.pory"
	goto_if_set FLAG_WATER_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_13
	goto Route3_EventScript_FireStone_Grandson_11


Route3_EventScript_MiracleSeed::
# 67 "data/maps/Route3/scripts.pory"
	finditem ITEM_MIRACLE_SEED
	return


# 98 "data/maps/Route3/scripts.pory"
Movement_GrandsonLeaves_FireStone:
# 99 "data/maps/Route3/scripts.pory"
	walk_up
# 100 "data/maps/Route3/scripts.pory"
	walk_up
# 101 "data/maps/Route3/scripts.pory"
	walk_up
# 102 "data/maps/Route3/scripts.pory"
	walk_up
# 103 "data/maps/Route3/scripts.pory"
	walk_up
# 104 "data/maps/Route3/scripts.pory"
	walk_up
	step_end

Route3_EventScript_FireStone_Text_0:
# 22 "data/maps/Route3/scripts.pory"
	.string "Heat seems to be emanating from the\n"
	.string "rock.$"

Route3_EventScript_FireStone_Grandson_Text_0:
# 28 "data/maps/Route3/scripts.pory"
	.string "Interesting...is this it?$"

Route3_EventScript_FireStone_Grandson_Text_1:
# 32 "data/maps/Route3/scripts.pory"
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

Route3_EventScript_FireStone_Grandson_Text_2:
# 33 "data/maps/Route3/scripts.pory"
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into water stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

Route3_EventScript_FireStone_Grandson_Text_3:
# 34 "data/maps/Route3/scripts.pory"
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

Route3_EventScript_FireStone_Grandson_Text_4:
# 36 "data/maps/Route3/scripts.pory"
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

Route3_EventScript_FireStone_Grandson_Text_5:
# 39 "data/maps/Route3/scripts.pory"
	.string "Thank you, but I can see more coming!$"

Route3_EventScript_FireStone_Grandson_Text_6:
# 42 "data/maps/Route3/scripts.pory"
	.string "Great job but I think something bigger\n"
	.string "is coming$"

Route3_EventScript_FireStone_Grandson_Text_7:
# 45 "data/maps/Route3/scripts.pory"
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

Route3_EventScript_FireStone_Grandson_Text_8:
# 46 "data/maps/Route3/scripts.pory"
	.string "Also please take this.$"

Route3_EventScript_FireStone_Grandson_Text_9:
# 49 "data/maps/Route3/scripts.pory"
	.string "It's the least I could do in return.$"

Route3_EventScript_FireStone_Grandson_Text_10:
# 52 "data/maps/Route3/scripts.pory"
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

Route3_EventScript_FireStone_Grandson_Text_11:
# 60 "data/maps/Route3/scripts.pory"
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

LassAlex_Intro::
# 73 "data/maps/Route3/scripts.pory"
	.string "Hey there! I'm Lass Alex, braving the\n"
	.string "heights for a mountainous Pokémon\l"
	.string "battle. Ready to take on the challenge?$"

LassAlex_Outro::
# 77 "data/maps/Route3/scripts.pory"
	.string "Wow, you really conquered the summit of\n"
	.string "this battle! Your skills shine like the\l"
	.string "mountain peak. Keep that determination\l"
	.string "on your journey!$"

LassAlex_PostBattle::
# 81 "data/maps/Route3/scripts.pory"
	.string "Fantastic battle! If you ever want to\n"
	.string "climb to new heights in Pokémon battles\l"
	.string "or just chat, find me along your\l"
	.string "mountainous journey.$"

HikerHarry_Intro::
# 85 "data/maps/Route3/scripts.pory"
	.string "Greetings, trainer! I'm Hiker Harry,\n"
	.string "scaling these rocky heights for a\l"
	.string "sturdy Pokémon duel. Ready to test\l"
	.string "your mettle?$"

HikerHarry_Outro::
# 89 "data/maps/Route3/scripts.pory"
	.string "You're tougher than the mountain\n"
	.string "rocks! Your skills resonate like an\l"
	.string "echoing peak. Keep that rock-solid\l"
	.string "determination on your journey!$"

HikerHarry_PostBattle::
# 93 "data/maps/Route3/scripts.pory"
	.string "Solid battle! If you ever want to\n"
	.string "navigate the rocky terrain of Pokémon\l"
	.string "battles together or share mountain\l"
	.string "tales, you know where to find me.$"
