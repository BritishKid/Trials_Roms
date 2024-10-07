Route4b_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_HIDING_SALTS
	compare VAR_SALTS7_QUEST_STATE, 1
	goto_if_eq Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

Route4b_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
	clearflag FLAG_HIDING_SALTS
	return


OstrichPuppetBattleScript::
	trainerbattle_single ROUTE4_OSTRICHPUPPET, OstrichPuppet_Intro, OstrichPuppet_Outro, Increase_Trainers_Beaten
	msgbox OstrichPuppet_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4_BlackbeltOda_BattleScript::
	trainerbattle_single ROUTE4_ODA_BLACKBELT, Route4_Blackbelt_Intro, Route4_Blackbelt_Outro, Increase_Trainers_Beaten
	msgbox Route4_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


LihsirBattleScript::
	trainerbattle_single ROUTE4_LIHSIR, Lihsir_Intro, Lihsir_Outro, Increase_Trainers_Beaten
	msgbox Lihsir_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4b_Salt7_GyradosEncounterLeft::
	lockall
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 3, Movement_Salts7Route4b_ReachingPlayerLeft
	waitmovement 3
	call Route4b_Salts7Battle
	releaseall
	return


Route4b_Salt7_GyradosEncounterRight::
	lockall
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 3, Movement_Salts7Route4b_ReachingPlayerRight
	waitmovement 3
	releaseall
	return


Route4b_Salts7Battle::
	msgbox Route4b_Salts7Battle_Text_0
	trainerbattle_single ROUTE4_SALTS7, Salts7Route4b_Intro, Salts7Route4b_Outro, Route4b_Salt7_PostBattle
	return


Route4b_Salt7_PostBattle::
	msgbox Route4b_Salt7_PostBattle_Text_0
	msgbox Route4b_Salt7_PostBattle_Text_1
	applymovement 3, Movement_Route4b_Salts7_MoveAway
	waitmovement 3
	removeobject 3
	setflag FLAG_HIDING_SALTS
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_SALT_EVOLVING
	setvar VAR_SALTS7_QUEST_STATE, 2
	releaseall
	return


EventScript_Route4_ItemBall_Ether::
	finditem ITEM_THUNDER_STONE
	return


Movement_PlayerSurprised_Route4b:
	emote_question_mark
	step_end

Movement_Salts7Route4b_ReachingPlayerRight:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Salts7Route4b_ReachingPlayerLeft:
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

Movement_Route4b_Salts7_MoveAway:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route4b_Salt7_GyradosEncounterLeft_Text_0:
	.string "Hey it's you ${PLAYER}$"

Route4b_Salts7Battle_Text_0:
	.string "I've brought my Magikarps here to climb\n"
	.string "the waterfall so they can evolve eh!$"

Route4b_Salt7_PostBattle_Text_0:
	.string "You're getting powerful! But have you\n"
	.string "heard about Dragon Lake?$"

Route4b_Salt7_PostBattle_Text_1:
	.string "It's home to the most powerful Dragon\n"
	.string "Pokémon and that must mean it's\l"
	.string "perfect to tarin my Gyrados! I'll be\l"
	.string "unstoppable soon enough!$"

OstrichPuppet_Intro::
	.string "I've heard there is a powerful trainer\n"
	.string "somewhere nearby$"

OstrichPuppet_Outro::
	.string "You're strong but it's not you$"

OstrichPuppet_PostBattle::
	.string "I just need an ACRO BIKE to cross over$"

Salts7Route4b_Intro::
	.string "Let me show you how great my team of\n"
	.string "Gyrados is!$"

Salts7Route4b_Outro::
	.string "Sorry, I guess I still need to evolve\n"
	.string "the rest$"

Route4_Blackbelt_Intro::
	.string "I'm helping Brawly set up a new mountain\n"
	.string "hut$"

Route4_Blackbelt_Outro::
	.string "It's going to be incredible$"

Route4_Blackbelt_PostBattle::
	.string "Martial artists from all over the world\n"
	.string "are going to come here to explore the\l"
	.string "old dojos$"

Lihsir_Intro::
	.string "Greetings, trainer! I am Lihsir, drawn to\n"
	.string "the serene flow of the river for a\l"
	.string "Pokémon battle. Shall we let our spirits\l"
	.string "dance with the current?$"

Lihsir_Outro::
	.string "A beautiful battle, indeed! Your skills\n"
	.string "flow gracefully like the river. May your\l"
	.string "journey be as harmonious and serene.$"

Lihsir_PostBattle::
	.string "A wonderful battle! If you ever want to\n"
	.string "share the tranquility of river-side\l"
	.string "battles or simply converse by the\l"
	.string "water, find me along your journey.$"
