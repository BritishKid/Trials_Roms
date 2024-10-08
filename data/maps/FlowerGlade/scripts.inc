FlowerGlade_MapScripts::
	.byte 0


FlowerGlade_EventScript_MossyStone::
	lock
	msgbox FlowerGlade_EventScript_MossyStone_Text_0
	release
	return


FlowerGlade_EventScript_MossyStone_Grandson::
	lock
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_0
	questmenu QUEST_MENU_CHECK_ACTIVE, QUEST_EVOLUTION_STONE_MART
	goto_if_unset FLAG_LEAF_STONE_SOURCE, FlowerGlade_EventScript_MossyStone_Grandson_3
FlowerGlade_EventScript_MossyStone_Grandson_1:
	release
	return

FlowerGlade_EventScript_MossyStone_Grandson_2:
	faceplayer
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_1
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_2
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq FlowerGlade_EventScript_MossyStone_Grandson_7
FlowerGlade_EventScript_MossyStone_Grandson_6:
	compare VAR_RESULT, NO
	goto_if_eq FlowerGlade_EventScript_MossyStone_Grandson_9
	goto FlowerGlade_EventScript_MossyStone_Grandson_1

FlowerGlade_EventScript_MossyStone_Grandson_3:
	compare VAR_RESULT, 0
	goto_if_ne FlowerGlade_EventScript_MossyStone_Grandson_2
	goto FlowerGlade_EventScript_MossyStone_Grandson_1

FlowerGlade_EventScript_MossyStone_Grandson_7:
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_4
	setflag FLAG_CANT_CATCH_MON
	setwildbattle SPECIES_GLOOM, 25, ITEM_ORAN_BERRY
	call StartLeafStoneBattle
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_5
	setwildbattle SPECIES_WEEPINBELL, 28, ITEM_ORAN_BERRY
	call StartLeafStoneBattle
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_6
	setwildbattle SPECIES_SHIFTRY, 30, ITEM_ORAN_BERRY
	call StartLeafStoneBattle
	clearflag FLAG_CANT_CATCH_MON
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_7
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_8
	giveitem ITEM_LEAF_STONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_9
	setflag FLAG_LEAF_STONE_SOURCE
	goto_if_set FLAG_LEAF_STONE_SOURCE, FlowerGlade_EventScript_MossyStone_Grandson_14
FlowerGlade_EventScript_MossyStone_Grandson_11:
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_LEAF_STONE
	applymovement 2, Movement_GrandsonLeavs
	waitmovement 2
	removeobject 2
	goto FlowerGlade_EventScript_MossyStone_Grandson_6

FlowerGlade_EventScript_MossyStone_Grandson_9:
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_11
	goto FlowerGlade_EventScript_MossyStone_Grandson_1

FlowerGlade_EventScript_MossyStone_Grandson_12:
	msgbox FlowerGlade_EventScript_MossyStone_Grandson_Text_10
	goto FlowerGlade_EventScript_MossyStone_Grandson_11

FlowerGlade_EventScript_MossyStone_Grandson_13:
	goto_if_set FLAG_FIRE_STONE_SOURCE, FlowerGlade_EventScript_MossyStone_Grandson_12
	goto FlowerGlade_EventScript_MossyStone_Grandson_11

FlowerGlade_EventScript_MossyStone_Grandson_14:
	goto_if_set FLAG_WATER_STONE_SOURCE, FlowerGlade_EventScript_MossyStone_Grandson_13
	goto FlowerGlade_EventScript_MossyStone_Grandson_11


StartLeafStoneBattle::
	dowildbattle
	return


BulbasaurGrottoEntrance::
	lockall
	warp MAP_BULBASAUR, 0, 9, 0
	releaseall
	return


FlowerGlade_BattleScript_Rosemary::
	trainerbattle_single FLOWERGLADE_FLORAL_TRAINER, FloralTrainer_Intro, FloralTrainer_Outro
	msgbox FloralTrainer_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


FlowerGlade_BattleScript_Lily::
	trainerbattle_single FLOWERGLADE_FLORAL_TRAINER_LILY, LilyGarden_Intro, LilyGarden_Outro
	msgbox LilyGarden_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


FlowerGlade_ItemBall::
	finditem ITEM_ABSORB_BULB
	return


FlowerGlade_ItemBall_TM::
	finditem ITEM_TM22
	return


Movement_GrandsonLeavs:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

FlowerGlade_EventScript_MossyStone_Text_0:
	.string "It's a very mossy rock.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_0:
	.string "Interesting...is this it?$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_1:
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_2:
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into leaf stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_3:
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_4:
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_5:
	.string "Thank you, but I can see more coming!$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_6:
	.string "Great job but I think something bigger\n"
	.string "is coming$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_7:
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_8:
	.string "Also please take this.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_9:
	.string "It's the least I could do in return.$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_10:
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

FlowerGlade_EventScript_MossyStone_Grandson_Text_11:
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

FloralTrainer_Intro::
	.string "Welcome to the Flower Glade! Let the\n"
	.string "petals dance in our battle!$"

FloralTrainer_Outro::
	.string "Oh, your Pokémon are as resilient as\n"
	.string "flowers in sunlight. Well done!$"

FloralTrainer_PostBattle::
	.string "The fragrance of victory lingers in the\n"
	.string "air. Keep blooming on your journey!$"

LilyGarden_Intro::
	.string "Welcome to my garden! Let the soothing\n"
	.string "aroma of nature guide us in our battle!$"

LilyGarden_Outro::
	.string "Your Pokémon's spirit is as radiant as a\n"
	.string "sunflower. Well played!$"

LilyGarden_PostBattle::
	.string "May your journey continue to blossom\n"
	.string "with victories. Farewell!$"
