Route3_MapScripts::
	.byte 0


LassAlexBattleScript::
	trainerbattle_single ROUTE3LASSALEX, LassAlex_Intro, LassAlex_Outro
	msgbox LassAlex_PostBattle, MSGBOX_AUTOCLOSE
	end


HikerHarryBattleScript::
	trainerbattle_single ROUTE3HIKERHARRY, HikerHarry_Intro, HikerHarry_Outro
	msgbox HikerHarry_PostBattle, MSGBOX_AUTOCLOSE
	end


EventScript_Route3_ItemBall_Pokeball::
	finditem ITEM_HEART_SCALE, 1
	return


Route3_EventScript_FireStone::
	lock
	msgbox Route3_EventScript_FireStone_Text_0
	release
	return


Route3_EventScript_FireStone_Grandson::
	lock
	msgbox Route3_EventScript_FireStone_Grandson_Text_0
	goto_if_unset FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_3
Route3_EventScript_FireStone_Grandson_1:
	release
	return

Route3_EventScript_FireStone_Grandson_2:
	faceplayer
	msgbox Route3_EventScript_FireStone_Grandson_Text_1
	msgbox Route3_EventScript_FireStone_Grandson_Text_2
	msgbox Route3_EventScript_FireStone_Grandson_Text_3, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_FireStone_Grandson_7
Route3_EventScript_FireStone_Grandson_6:
	compare VAR_RESULT, NO
	goto_if_eq Route3_EventScript_FireStone_Grandson_9
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_3:
	compare VAR_RESULT, 0
	goto_if_ne Route3_EventScript_FireStone_Grandson_2
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_7:
	msgbox Route3_EventScript_FireStone_Grandson_Text_4
	setwildbattle SPECIES_GROWLITHE, 25, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route3_EventScript_FireStone_Grandson_Text_5
	setwildbattle SPECIES_VULPIX, 28, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route3_EventScript_FireStone_Grandson_Text_6
	setwildbattle SPECIES_ARCANINE, 30, ITEM_ORAN_BERRY
	call StartWaterStoneBattle
	msgbox Route3_EventScript_FireStone_Grandson_Text_7
	msgbox Route3_EventScript_FireStone_Grandson_Text_8
	giveitem ITEM_FIRE_STONE
	playfanfare MUS_OBTAIN_ITEM
	msgbox Route3_EventScript_FireStone_Grandson_Text_9
	setflag FLAG_FIRE_STONE_SOURCE
	goto_if_set FLAG_LEAF_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_14
Route3_EventScript_FireStone_Grandson_11:
	applymovement 4, Movement_GrandsonLeaves_FireStone
	waitmovement 4
	removeobject 4
	goto Route3_EventScript_FireStone_Grandson_6

Route3_EventScript_FireStone_Grandson_9:
	msgbox Route3_EventScript_FireStone_Grandson_Text_11
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_12:
	msgbox Route3_EventScript_FireStone_Grandson_Text_10
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_13:
	goto_if_set FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_12
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_14:
	goto_if_set FLAG_WATER_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_13
	goto Route3_EventScript_FireStone_Grandson_11


Movement_GrandsonLeaves_FireStone:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Route3_EventScript_FireStone_Text_0:
	.string "Heat seems to be emanating from the\n"
	.string "rock.$"

Route3_EventScript_FireStone_Grandson_Text_0:
	.string "Interesting...is this it?$"

Route3_EventScript_FireStone_Grandson_Text_1:
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

Route3_EventScript_FireStone_Grandson_Text_2:
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into water stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild pokemon.$"

Route3_EventScript_FireStone_Grandson_Text_3:
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

Route3_EventScript_FireStone_Grandson_Text_4:
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

Route3_EventScript_FireStone_Grandson_Text_5:
	.string "Thank you, but I can see more coming!$"

Route3_EventScript_FireStone_Grandson_Text_6:
	.string "Great job but I think something bigger\n"
	.string "is coming$"

Route3_EventScript_FireStone_Grandson_Text_7:
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

Route3_EventScript_FireStone_Grandson_Text_8:
	.string "Also please take this.$"

Route3_EventScript_FireStone_Grandson_Text_9:
	.string "It's the least I could do in return.$"

Route3_EventScript_FireStone_Grandson_Text_10:
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

Route3_EventScript_FireStone_Grandson_Text_11:
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

LassAlex_Intro::
	.string "TO DO$"

LassAlex_Outro::
	.string "TODO$"

LassAlex_PostBattle::
	.string "TODO.$"

HikerHarry_Intro::
	.string "TO DO$"

HikerHarry_Outro::
	.string "TODO$"

HikerHarry_PostBattle::
	.string "TODO.$"
