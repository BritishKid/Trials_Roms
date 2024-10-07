Route4b_MapScripts::
# 2 "data/maps/Route4b/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route4b/scripts.pory"
	setflag FLAG_HIDING_SALTS
# 4 "data/maps/Route4b/scripts.pory"
	compare VAR_SALTS7_QUEST_STATE, 1
	goto_if_eq Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 5 "data/maps/Route4b/scripts.pory"
	clearflag FLAG_HIDING_SALTS
	return


OstrichPuppetBattleScript::
# 11 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_OSTRICHPUPPET, OstrichPuppet_Intro, OstrichPuppet_Outro, Increase_Trainers_Beaten
# 12 "data/maps/Route4b/scripts.pory"
	msgbox OstrichPuppet_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4_BlackbeltOda_BattleScript::
# 17 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_ODA_BLACKBELT, Route4_Blackbelt_Intro, Route4_Blackbelt_Outro, Increase_Trainers_Beaten
# 18 "data/maps/Route4b/scripts.pory"
	msgbox Route4_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


LihsirBattleScript::
# 23 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_LIHSIR, Lihsir_Intro, Lihsir_Outro, Increase_Trainers_Beaten
# 24 "data/maps/Route4b/scripts.pory"
	msgbox Lihsir_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4b_Salt7_GyradosEncounterLeft::
# 28 "data/maps/Route4b/scripts.pory"
	lockall
# 29 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
# 30 "data/maps/Route4b/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
# 31 "data/maps/Route4b/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 32 "data/maps/Route4b/scripts.pory"
	applymovement 3, Movement_Salts7Route4b_ReachingPlayerLeft
# 33 "data/maps/Route4b/scripts.pory"
	waitmovement 3
# 34 "data/maps/Route4b/scripts.pory"
	call Route4b_Salts7Battle
# 35 "data/maps/Route4b/scripts.pory"
	releaseall
	return


Route4b_Salt7_GyradosEncounterRight::
# 40 "data/maps/Route4b/scripts.pory"
	lockall
# 41 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
# 42 "data/maps/Route4b/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
# 43 "data/maps/Route4b/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 44 "data/maps/Route4b/scripts.pory"
	applymovement 3, Movement_Salts7Route4b_ReachingPlayerRight
# 45 "data/maps/Route4b/scripts.pory"
	waitmovement 3
# 46 "data/maps/Route4b/scripts.pory"
	releaseall
	return


Route4b_Salts7Battle::
# 50 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salts7Battle_Text_0
# 51 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_SALTS7, Salts7Route4b_Intro, Salts7Route4b_Outro, Route4b_Salt7_PostBattle
	return


Route4b_Salt7_PostBattle::
# 55 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_PostBattle_Text_0
# 56 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_PostBattle_Text_1
# 57 "data/maps/Route4b/scripts.pory"
	applymovement 3, Movement_Route4b_Salts7_MoveAway
# 58 "data/maps/Route4b/scripts.pory"
	waitmovement 3
# 59 "data/maps/Route4b/scripts.pory"
	removeobject 3
# 60 "data/maps/Route4b/scripts.pory"
	setflag FLAG_HIDING_SALTS
# 61 "data/maps/Route4b/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SALT_EVOLVING
# 62 "data/maps/Route4b/scripts.pory"
	setvar VAR_SALTS7_QUEST_STATE, 2
# 63 "data/maps/Route4b/scripts.pory"
	releaseall
	return


EventScript_Route4_ItemBall_Ether::
# 67 "data/maps/Route4b/scripts.pory"
	finditem ITEM_THUNDER_STONE
	return


# 71 "data/maps/Route4b/scripts.pory"
Movement_PlayerSurprised_Route4b:
# 72 "data/maps/Route4b/scripts.pory"
	emote_question_mark
	step_end

# 75 "data/maps/Route4b/scripts.pory"
Movement_Salts7Route4b_ReachingPlayerRight:
# 76 "data/maps/Route4b/scripts.pory"
	walk_up
# 77 "data/maps/Route4b/scripts.pory"
	walk_up
# 78 "data/maps/Route4b/scripts.pory"
	walk_up
# 79 "data/maps/Route4b/scripts.pory"
	walk_up
# 80 "data/maps/Route4b/scripts.pory"
	walk_up
# 81 "data/maps/Route4b/scripts.pory"
	walk_up
	step_end

# 84 "data/maps/Route4b/scripts.pory"
Movement_Salts7Route4b_ReachingPlayerLeft:
# 85 "data/maps/Route4b/scripts.pory"
	walk_left
# 86 "data/maps/Route4b/scripts.pory"
	walk_up
# 87 "data/maps/Route4b/scripts.pory"
	walk_up
# 88 "data/maps/Route4b/scripts.pory"
	walk_up
# 89 "data/maps/Route4b/scripts.pory"
	walk_up
# 90 "data/maps/Route4b/scripts.pory"
	walk_up
# 91 "data/maps/Route4b/scripts.pory"
	walk_up
	step_end

# 93 "data/maps/Route4b/scripts.pory"
Movement_Route4b_Salts7_MoveAway:
# 94 "data/maps/Route4b/scripts.pory"
	walk_down
# 95 "data/maps/Route4b/scripts.pory"
	walk_down
# 96 "data/maps/Route4b/scripts.pory"
	walk_down
# 97 "data/maps/Route4b/scripts.pory"
	walk_down
# 98 "data/maps/Route4b/scripts.pory"
	walk_down
# 99 "data/maps/Route4b/scripts.pory"
	walk_down
	step_end

Route4b_Salt7_GyradosEncounterLeft_Text_0:
# 29 "data/maps/Route4b/scripts.pory"
	.string "Hey it's you ${PLAYER}$"

Route4b_Salts7Battle_Text_0:
# 50 "data/maps/Route4b/scripts.pory"
	.string "I've brought my Magikarps here to climb\n"
	.string "the waterfall so they can evolve eh!$"

Route4b_Salt7_PostBattle_Text_0:
# 55 "data/maps/Route4b/scripts.pory"
	.string "You're getting powerful! But have you\n"
	.string "heard about Dragon Lake?$"

Route4b_Salt7_PostBattle_Text_1:
# 56 "data/maps/Route4b/scripts.pory"
	.string "It's home to the most powerful Dragon\n"
	.string "Pokémon and that must mean it's\l"
	.string "perfect to tarin my Gyrados! I'll be\l"
	.string "unstoppable soon enough!$"

OstrichPuppet_Intro::
# 104 "data/maps/Route4b/scripts.pory"
	.string "I've heard there is a powerful trainer\n"
	.string "somewhere nearby$"

OstrichPuppet_Outro::
# 108 "data/maps/Route4b/scripts.pory"
	.string "You're strong but it's not you$"

OstrichPuppet_PostBattle::
# 112 "data/maps/Route4b/scripts.pory"
	.string "I just need an ACRO BIKE to cross over$"

Salts7Route4b_Intro::
# 116 "data/maps/Route4b/scripts.pory"
	.string "Let me show you how great my team of\n"
	.string "Gyrados is!$"

Salts7Route4b_Outro::
# 120 "data/maps/Route4b/scripts.pory"
	.string "Sorry, I guess I still need to evolve\n"
	.string "the rest$"

Route4_Blackbelt_Intro::
# 124 "data/maps/Route4b/scripts.pory"
	.string "I'm helping Brawly set up a new mountain\n"
	.string "hut$"

Route4_Blackbelt_Outro::
# 128 "data/maps/Route4b/scripts.pory"
	.string "It's going to be incredible$"

Route4_Blackbelt_PostBattle::
# 132 "data/maps/Route4b/scripts.pory"
	.string "Martial artists from all over the world\n"
	.string "are going to come here to explore the\l"
	.string "old dojos$"

Lihsir_Intro::
# 137 "data/maps/Route4b/scripts.pory"
	.string "Greetings, trainer! I am Lihsir, drawn to\n"
	.string "the serene flow of the river for a\l"
	.string "Pokémon battle. Shall we let our spirits\l"
	.string "dance with the current?$"

Lihsir_Outro::
# 141 "data/maps/Route4b/scripts.pory"
	.string "A beautiful battle, indeed! Your skills\n"
	.string "flow gracefully like the river. May your\l"
	.string "journey be as harmonious and serene.$"

Lihsir_PostBattle::
# 145 "data/maps/Route4b/scripts.pory"
	.string "A wonderful battle! If you ever want to\n"
	.string "share the tranquility of river-side\l"
	.string "battles or simply converse by the\l"
	.string "water, find me along your journey.$"
