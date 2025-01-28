Route3b_MapScripts::
	.byte 0


Rotue3b_TrainerBattle_LassAlex::
# 4 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3LASSALEX, LassAlex_Intro, LassAlex_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route3b/scripts.pory"
	msgbox LassAlex_PostBattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_FishermanNeet::
# 9 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_FISHERMAN_NEET, FishermanNeet_Intro, FishermanNeet_Outro, Increase_Trainers_Beaten
# 10 "data/maps/Route3b/scripts.pory"
	msgbox FishermanNeet_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_CamperDave::
# 14 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_CAMPER_DAVE, CamperDave_Intro, CamperDave_Outro, Increase_Trainers_Beaten
# 15 "data/maps/Route3b/scripts.pory"
	msgbox CamperDave_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_Rose::
# 19 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_ROSE, Rose_Intro, Rose_Outro, Increase_Trainers_Beaten
# 20 "data/maps/Route3b/scripts.pory"
	msgbox Rose_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3b_TrainerBattle_Lily::
# 24 "data/maps/Route3b/scripts.pory"
	trainerbattle_single ROUTE3_LILY, Lily_Intro, Lily_Outro, Increase_Trainers_Beaten
# 25 "data/maps/Route3b/scripts.pory"
	msgbox Lily_Postbattle, MSGBOX_AUTOCLOSE
	return


Route3_EventScript_FireStone::
# 30 "data/maps/Route3b/scripts.pory"
	lockall
# 31 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Text_0
# 32 "data/maps/Route3b/scripts.pory"
	releaseall
	return


Route3_EventScript_FireStone_Grandson::
# 36 "data/maps/Route3b/scripts.pory"
	lock
# 37 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_0
# 39 "data/maps/Route3b/scripts.pory"
	goto_if_unset FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_3
Route3_EventScript_FireStone_Grandson_1:
# 74 "data/maps/Route3b/scripts.pory"
	release
	return

Route3_EventScript_FireStone_Grandson_2:
# 40 "data/maps/Route3b/scripts.pory"
	faceplayer
# 41 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_1
# 42 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_2
# 43 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_3, MSGBOX_YESNO
# 44 "data/maps/Route3b/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Route3_EventScript_FireStone_Grandson_7
Route3_EventScript_FireStone_Grandson_6:
# 70 "data/maps/Route3b/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq Route3_EventScript_FireStone_Grandson_9
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_3:
# 39 "data/maps/Route3b/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 1
	goto_if_eq Route3_EventScript_FireStone_Grandson_2
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_7:
# 45 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_4
# 46 "data/maps/Route3b/scripts.pory"
	setwildbattle SPECIES_GROWLITHE, 25, ITEM_ORAN_BERRY
# 47 "data/maps/Route3b/scripts.pory"
	call StartFireStoneBattle
# 48 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_5
# 49 "data/maps/Route3b/scripts.pory"
	setwildbattle SPECIES_VULPIX, 28, ITEM_ORAN_BERRY
# 50 "data/maps/Route3b/scripts.pory"
	call StartFireStoneBattle
# 51 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_6
# 52 "data/maps/Route3b/scripts.pory"
	setwildbattle SPECIES_ARCANINE, 30, ITEM_ORAN_BERRY
# 53 "data/maps/Route3b/scripts.pory"
	call StartFireStoneBattle
# 54 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_7
# 55 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_8
# 56 "data/maps/Route3b/scripts.pory"
	giveitem ITEM_FIRE_STONE
# 57 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_9
# 58 "data/maps/Route3b/scripts.pory"
	setflag FLAG_FIRE_STONE_SOURCE
# 59 "data/maps/Route3b/scripts.pory"
	goto_if_set FLAG_LEAF_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_14
Route3_EventScript_FireStone_Grandson_11:
# 65 "data/maps/Route3b/scripts.pory"
	applymovement 7, Movement_GrandsonLeaves_FireStone
# 66 "data/maps/Route3b/scripts.pory"
	waitmovement 7
# 67 "data/maps/Route3b/scripts.pory"
	removeobject 7
# 68 "data/maps/Route3b/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto Route3_EventScript_FireStone_Grandson_6

Route3_EventScript_FireStone_Grandson_9:
# 71 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_11
	goto Route3_EventScript_FireStone_Grandson_1

Route3_EventScript_FireStone_Grandson_12:
# 60 "data/maps/Route3b/scripts.pory"
	msgbox Route3_EventScript_FireStone_Grandson_Text_10
# 61 "data/maps/Route3b/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 2
# 62 "data/maps/Route3b/scripts.pory"
	clearflag FLAG_HIDE_GRANDSON_STONE_CORAL_PORT
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_13:
# 59 "data/maps/Route3b/scripts.pory"
	goto_if_set FLAG_FIRE_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_12
	goto Route3_EventScript_FireStone_Grandson_11

Route3_EventScript_FireStone_Grandson_14:
# 59 "data/maps/Route3b/scripts.pory"
	goto_if_set FLAG_WATER_STONE_SOURCE, Route3_EventScript_FireStone_Grandson_13
	goto Route3_EventScript_FireStone_Grandson_11


StartFireStoneBattle::
# 78 "data/maps/Route3b/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 79 "data/maps/Route3b/scripts.pory"
	dowildbattle
	return


# 146 "data/maps/Route3b/scripts.pory"
Movement_GrandsonLeaves_FireStone:
# 147 "data/maps/Route3b/scripts.pory"
	walk_up
# 148 "data/maps/Route3b/scripts.pory"
	walk_up
# 149 "data/maps/Route3b/scripts.pory"
	walk_up
# 150 "data/maps/Route3b/scripts.pory"
	walk_up
# 151 "data/maps/Route3b/scripts.pory"
	walk_up
# 152 "data/maps/Route3b/scripts.pory"
	walk_up
# 153 "data/maps/Route3b/scripts.pory"
	walk_up
# 154 "data/maps/Route3b/scripts.pory"
	walk_up
	step_end

Route3_EventScript_FireStone_Text_0:
# 31 "data/maps/Route3b/scripts.pory"
	.string "Heat seems to be emanating from the\n"
	.string "rock.$"

Route3_EventScript_FireStone_Grandson_Text_0:
# 37 "data/maps/Route3b/scripts.pory"
	.string "Interesting...is this it?$"

Route3_EventScript_FireStone_Grandson_Text_1:
# 41 "data/maps/Route3b/scripts.pory"
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

Route3_EventScript_FireStone_Grandson_Text_2:
# 42 "data/maps/Route3b/scripts.pory"
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into water stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

Route3_EventScript_FireStone_Grandson_Text_3:
# 43 "data/maps/Route3b/scripts.pory"
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

Route3_EventScript_FireStone_Grandson_Text_4:
# 45 "data/maps/Route3b/scripts.pory"
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

Route3_EventScript_FireStone_Grandson_Text_5:
# 48 "data/maps/Route3b/scripts.pory"
	.string "Thank you, but I can see more coming!$"

Route3_EventScript_FireStone_Grandson_Text_6:
# 51 "data/maps/Route3b/scripts.pory"
	.string "Great job but I think something bigger\n"
	.string "is coming$"

Route3_EventScript_FireStone_Grandson_Text_7:
# 54 "data/maps/Route3b/scripts.pory"
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

Route3_EventScript_FireStone_Grandson_Text_8:
# 55 "data/maps/Route3b/scripts.pory"
	.string "Also please take this.$"

Route3_EventScript_FireStone_Grandson_Text_9:
# 57 "data/maps/Route3b/scripts.pory"
	.string "It's the least I could do in return.$"

Route3_EventScript_FireStone_Grandson_Text_10:
# 60 "data/maps/Route3b/scripts.pory"
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

Route3_EventScript_FireStone_Grandson_Text_11:
# 71 "data/maps/Route3b/scripts.pory"
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

LassAlex_Intro::
# 85 "data/maps/Route3b/scripts.pory"
	.string "Hey there! I'm Lass Alex, braving the\n"
	.string "heights for a mountainous Pokémon\l"
	.string "battle. Ready to take on the challenge?$"

LassAlex_Outro::
# 89 "data/maps/Route3b/scripts.pory"
	.string "Wow, you really conquered the summit of\n"
	.string "this battle! Your skills shine like the\l"
	.string "mountain peak. Keep that determination\l"
	.string "on your journey!$"

LassAlex_PostBattle::
# 93 "data/maps/Route3b/scripts.pory"
	.string "Fantastic battle! If you ever want to\n"
	.string "climb to new heights in Pokémon battles\l"
	.string "or just chat, find me along your\l"
	.string "mountainous journey.$"

FishermanNeet_Intro::
# 97 "data/maps/Route3b/scripts.pory"
	.string "I'm going to go and catch a Totodile.$"

FishermanNeet_Outro::
# 101 "data/maps/Route3b/scripts.pory"
	.string "Now I have to go to Clay Haven on the\n"
	.string "way$"

FishermanNeet_Postbattle::
# 105 "data/maps/Route3b/scripts.pory"
	.string "Totodile Island is meant to be on Route\n"
	.string "1.$"

CamperDave_Intro::
# 109 "data/maps/Route3b/scripts.pory"
	.string "It's a long way down!$"

CamperDave_Outro::
# 113 "data/maps/Route3b/scripts.pory"
	.string "I was distracted by the drop.$"

CamperDave_Postbattle::
# 117 "data/maps/Route3b/scripts.pory"
	.string "Imagine flying through the valley.$"

Rose_Intro::
# 121 "data/maps/Route3b/scripts.pory"
	.string "My sister told she found rare Pokémon\n"
	.string "here.$"

Rose_Outro::
# 125 "data/maps/Route3b/scripts.pory"
	.string "She is probably just confused.$"

Rose_Postbattle::
# 129 "data/maps/Route3b/scripts.pory"
	.string "I'm never going to find it...$"

Lily_Intro::
# 133 "data/maps/Route3b/scripts.pory"
	.string "Did you see Bulbasaur anywhere?$"

Lily_Outro::
# 137 "data/maps/Route3b/scripts.pory"
	.string "They must be close.$"

Lily_Postbattle::
# 141 "data/maps/Route3b/scripts.pory"
	.string "I caught one here years ago, but it's\n"
	.string "changed so much.$"
