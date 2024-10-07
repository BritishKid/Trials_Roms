Route4_MapScripts::
	.byte 0


BugCatcherShedinjaChallenge::
	trainerbattle_single ROUTE4_BUGCATCHER, BugCatchChallenge_Intro, BugCatchChallenge_Outro, Increase_Trainers_Beaten
	msgbox BugCatchChallenge_PostBattle, MSGBOX_AUTOCLOSE
	end


GraspingPieBattleScript::
	trainerbattle_single ROUTE4_GRASPINGPIE, GraspingPie_Intro, GraspingPie_Outro, Increase_Trainers_Beaten
	msgbox GraspingPie_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4_EventScript_WaterStone::
	lock
	msgbox Route4_EventScript_WaterStone_Text_0
	release
	return


Route4_EventScript_WaterStone_Grandson::
	lock
	msgbox Route4_EventScript_WaterStone_Grandson_Text_0
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_EVOLUTION_STONE_MART
	goto_if_unset FLAG_WATER_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_3
Route4_EventScript_WaterStone_Grandson_1:
	release
	return

Route4_EventScript_WaterStone_Grandson_2:
	faceplayer
	msgbox Route4_EventScript_WaterStone_Grandson_Text_1
	msgbox Route4_EventScript_WaterStone_Grandson_Text_2
	msgbox Route4_EventScript_WaterStone_Grandson_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route4_EventScript_WaterStone_Grandson_7
Route4_EventScript_WaterStone_Grandson_6:
	compare VAR_RESULT, NO
	goto_if_eq Route4_EventScript_WaterStone_Grandson_9
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_3:
	compare VAR_RESULT, 0
	goto_if_ne Route4_EventScript_WaterStone_Grandson_2
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_7:
	msgbox Route4_EventScript_WaterStone_Grandson_Text_4
	setwildbattle SPECIES_POLIWHIRL, 25, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route4_EventScript_WaterStone_Grandson_Text_5
	setwildbattle SPECIES_PANPOUR, 28, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route4_EventScript_WaterStone_Grandson_Text_6
	setwildbattle SPECIES_SIMIPOUR, 30, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route4_EventScript_WaterStone_Grandson_Text_7
	msgbox Route4_EventScript_WaterStone_Grandson_Text_8
	giveitem ITEM_WATER_STONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route4_EventScript_WaterStone_Grandson_Text_9
	setflag FLAG_WATER_STONE_SOURCE
	goto_if_set FLAG_LEAF_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_14
Route4_EventScript_WaterStone_Grandson_11:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_WATER_STONE
	applymovement 3, Movement_GrandsonLeaves_WaterStone
	waitmovement 3
	removeobject 3
	goto Route4_EventScript_WaterStone_Grandson_6

Route4_EventScript_WaterStone_Grandson_9:
	msgbox Route4_EventScript_WaterStone_Grandson_Text_11
	goto Route4_EventScript_WaterStone_Grandson_1

Route4_EventScript_WaterStone_Grandson_12:
	msgbox Route4_EventScript_WaterStone_Grandson_Text_10
	goto Route4_EventScript_WaterStone_Grandson_11

Route4_EventScript_WaterStone_Grandson_13:
	goto_if_set FLAG_FIRE_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_12
	goto Route4_EventScript_WaterStone_Grandson_11

Route4_EventScript_WaterStone_Grandson_14:
	goto_if_set FLAG_WATER_STONE_SOURCE, Route4_EventScript_WaterStone_Grandson_13
	goto Route4_EventScript_WaterStone_Grandson_11


StartWaterStoneBattle::
	dowildbattle
	return


Route4_Itemball_Thunderbolt::
	finditem ITEM_TM24
	return


Movement_GrandsonLeaves_WaterStone:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

fuckedupdude::
	lock
	msgbox fuckedupdude_Text_0
	msgbox fuckedupdude_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq fuckedupdude_2
fuckedupdude_1:
	release
	return

fuckedupdude_2:
	trainerbattle_no_intro TRAINER_VICKY, temporaryhold
	goto fuckedupdude_1


Route4_EventScript_WaterStone_Text_0:
	.string "Water seems to be pouring out of the\n"
	.string "rock.$"

Route4_EventScript_WaterStone_Grandson_Text_0:
	.string "Interesting...is this it?$"

Route4_EventScript_WaterStone_Grandson_Text_1:
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

Route4_EventScript_WaterStone_Grandson_Text_2:
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into water stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

Route4_EventScript_WaterStone_Grandson_Text_3:
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

Route4_EventScript_WaterStone_Grandson_Text_4:
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

Route4_EventScript_WaterStone_Grandson_Text_5:
	.string "Thank you, but I can see more coming!$"

Route4_EventScript_WaterStone_Grandson_Text_6:
	.string "Great job but I think something bigger\n"
	.string "is coming$"

Route4_EventScript_WaterStone_Grandson_Text_7:
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

Route4_EventScript_WaterStone_Grandson_Text_8:
	.string "Also please take this.$"

Route4_EventScript_WaterStone_Grandson_Text_9:
	.string "It's the least I could do in return.$"

Route4_EventScript_WaterStone_Grandson_Text_10:
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

Route4_EventScript_WaterStone_Grandson_Text_11:
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

fuckedupdude_Text_0:
	.string "My Rattata is in the top 1% of all\n"
	.string "Rattatas!$"

fuckedupdude_Text_1:
	.string "You won't win this fight, are you sure\n"
	.string "you want to try?$"

BugCatchChallenge_Intro::
	.string "Using super effective moves is very\n"
	.string "important$"

BugCatchChallenge_Outro::
	.string "Well I guess you already knew what\n"
	.string "you're doing$"

BugCatchChallenge_PostBattle::
	.string "Shedinja is unique by being immune to so\n"
	.string "many types.$"

GraspingPie_Intro::
	.string "Using super effective moves is very\n"
	.string "important$"

GraspingPie_Outro::
	.string "Well I guess you already knew what\n"
	.string "you're doing$"

GraspingPie_PostBattle::
	.string "Shedinja is unique by being immune to so\n"
	.string "many types.$"

temporaryhold::
	.string "Not gonna see$"
