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


Route4b_TrainerBattle_Lando::
# 11 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_LANDO, Lando_Intro, Lando_Outro, Increase_Trainers_Beaten
# 12 "data/maps/Route4b/scripts.pory"
	msgbox Lando_Postbattle, MSGBOX_DEFAULT
	return


OstrichPuppetBattleScript::
# 16 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_OSTRICHPUPPET, OstrichPuppet_Intro, OstrichPuppet_Outro, Increase_Trainers_Beaten
# 17 "data/maps/Route4b/scripts.pory"
	msgbox OstrichPuppet_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4b_Salt7_GyradosEncounterLeft::
# 22 "data/maps/Route4b/scripts.pory"
	lockall
# 23 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
# 24 "data/maps/Route4b/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
# 25 "data/maps/Route4b/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 26 "data/maps/Route4b/scripts.pory"
	applymovement 4, Movement_Salts7Route4b_ReachingPlayerLeft
# 27 "data/maps/Route4b/scripts.pory"
	waitmovement 4
# 28 "data/maps/Route4b/scripts.pory"
	call Route4b_Salts7Battle
# 29 "data/maps/Route4b/scripts.pory"
	releaseall
	return


Route4b_Salt7_GyradosEncounterRight::
# 33 "data/maps/Route4b/scripts.pory"
	lockall
# 34 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_GyradosEncounterLeft_Text_0
# 35 "data/maps/Route4b/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_Route4b
# 36 "data/maps/Route4b/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 37 "data/maps/Route4b/scripts.pory"
	applymovement 4, Movement_Salts7Route4b_ReachingPlayerRight
# 38 "data/maps/Route4b/scripts.pory"
	waitmovement 4
# 39 "data/maps/Route4b/scripts.pory"
	call Route4b_Salts7Battle
# 40 "data/maps/Route4b/scripts.pory"
	releaseall
	return


Route4b_Salts7Battle::
# 44 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salts7Battle_Text_0
# 45 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_SALTS7, Salts7Route4b_Intro, Salts7Route4b_Outro, Route4b_Salt7_PostBattle
	return


Route4b_Salt7_PostBattle::
# 49 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_PostBattle_Text_0
# 50 "data/maps/Route4b/scripts.pory"
	msgbox Route4b_Salt7_PostBattle_Text_1
# 51 "data/maps/Route4b/scripts.pory"
	applymovement 4, Movement_Route4b_Salts7_MoveAway
# 52 "data/maps/Route4b/scripts.pory"
	waitmovement 4
# 53 "data/maps/Route4b/scripts.pory"
	removeobject 4
# 54 "data/maps/Route4b/scripts.pory"
	setflag FLAG_HIDING_SALTS
# 56 "data/maps/Route4b/scripts.pory"
	setvar VAR_SALTS7_QUEST_STATE, 2
# 57 "data/maps/Route4b/scripts.pory"
	releaseall
	return


Route4_BlackbeltOda_BattleScript::
# 61 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_ODA_BLACKBELT, Route4_Blackbelt_Intro, Route4_Blackbelt_Outro, Increase_Trainers_Beaten
# 62 "data/maps/Route4b/scripts.pory"
	msgbox Route4_Blackbelt_PostBattle, MSGBOX_AUTOCLOSE
	end


Route4_SchoolKid_Viktor::
# 67 "data/maps/Route4b/scripts.pory"
	trainerbattle_single ROUTE4_VIKTOR_SCHOOLKID, Route4_Viktor_Intro, Route4_Viktor_Outro, Increase_Trainers_Beaten
# 68 "data/maps/Route4b/scripts.pory"
	msgbox Route4_Viktor_PostBattle, MSGBOX_AUTOCLOSE
	end


# 130 "data/maps/Route4b/scripts.pory"
Movement_PlayerSurprised_Route4b:
# 131 "data/maps/Route4b/scripts.pory"
	emote_question_mark
	step_end

# 134 "data/maps/Route4b/scripts.pory"
Movement_Salts7Route4b_ReachingPlayerRight:
# 135 "data/maps/Route4b/scripts.pory"
	walk_up
# 136 "data/maps/Route4b/scripts.pory"
	walk_up
# 137 "data/maps/Route4b/scripts.pory"
	walk_up
# 138 "data/maps/Route4b/scripts.pory"
	walk_up
# 139 "data/maps/Route4b/scripts.pory"
	walk_up
# 140 "data/maps/Route4b/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/Route4b/scripts.pory"
Movement_Salts7Route4b_ReachingPlayerLeft:
# 144 "data/maps/Route4b/scripts.pory"
	walk_left
# 145 "data/maps/Route4b/scripts.pory"
	walk_up
# 146 "data/maps/Route4b/scripts.pory"
	walk_up
# 147 "data/maps/Route4b/scripts.pory"
	walk_up
# 148 "data/maps/Route4b/scripts.pory"
	walk_up
# 149 "data/maps/Route4b/scripts.pory"
	walk_up
# 150 "data/maps/Route4b/scripts.pory"
	walk_up
	step_end

# 152 "data/maps/Route4b/scripts.pory"
Movement_Route4b_Salts7_MoveAway:
# 153 "data/maps/Route4b/scripts.pory"
	walk_down
# 154 "data/maps/Route4b/scripts.pory"
	walk_down
# 155 "data/maps/Route4b/scripts.pory"
	walk_down
# 156 "data/maps/Route4b/scripts.pory"
	walk_down
# 157 "data/maps/Route4b/scripts.pory"
	walk_down
# 158 "data/maps/Route4b/scripts.pory"
	walk_down
	step_end

Route4b_Salt7_GyradosEncounterLeft_Text_0:
# 23 "data/maps/Route4b/scripts.pory"
	.string "Hey it's you ${PLAYER}$"

Route4b_Salts7Battle_Text_0:
# 44 "data/maps/Route4b/scripts.pory"
	.string "I've brought my Magikarps here to climb\n"
	.string "the waterfall so they can evolve eh!$"

Route4b_Salt7_PostBattle_Text_0:
# 49 "data/maps/Route4b/scripts.pory"
	.string "You're getting powerful! But have you\n"
	.string "heard about Dragon Lake?$"

Route4b_Salt7_PostBattle_Text_1:
# 50 "data/maps/Route4b/scripts.pory"
	.string "It's home to the most powerful Dragon\n"
	.string "Pokémon and that must mean it's\l"
	.string "perfect to tarin my Gyrados! I'll be\l"
	.string "unstoppable soon enough!$"

Lando_Intro::
# 74 "data/maps/Route4b/scripts.pory"
	.string "You came to the wrong hill!$"

Lando_Outro::
# 78 "data/maps/Route4b/scripts.pory"
	.string "You can have this hill.$"

Lando_Postbattle::
# 82 "data/maps/Route4b/scripts.pory"
	.string "I'm leaving, I'm leaving.$"

OstrichPuppet_Intro::
# 86 "data/maps/Route4b/scripts.pory"
	.string "I've heard there is a powerful trainer\n"
	.string "somewhere nearby.$"

OstrichPuppet_Outro::
# 90 "data/maps/Route4b/scripts.pory"
	.string "You're strong but it's not you$"

OstrichPuppet_PostBattle::
# 94 "data/maps/Route4b/scripts.pory"
	.string "I just need an ACRO BIKE to cross over.$"

Salts7Route4b_Intro::
# 98 "data/maps/Route4b/scripts.pory"
	.string "Let me show you how great my team of\n"
	.string "Gyrados is!$"

Salts7Route4b_Outro::
# 102 "data/maps/Route4b/scripts.pory"
	.string "Sorry, I guess I still need to evolve\n"
	.string "the rest.$"

Route4_Blackbelt_Intro::
# 106 "data/maps/Route4b/scripts.pory"
	.string "I'm helping Brawly set up a new mountain\n"
	.string "hut.$"

Route4_Blackbelt_Outro::
# 110 "data/maps/Route4b/scripts.pory"
	.string "It's going to be incredible.$"

Route4_Blackbelt_PostBattle::
# 114 "data/maps/Route4b/scripts.pory"
	.string "Martial artists from all over the world\n"
	.string "are going to come here to explore the\l"
	.string "old dojos.$"

Route4_Viktor_Intro::
# 118 "data/maps/Route4b/scripts.pory"
	.string "My Pokémon are being trained for the\n"
	.string "School Tournament.$"

Route4_Viktor_Outro::
# 122 "data/maps/Route4b/scripts.pory"
	.string "It's a good thing I'm still training.$"

Route4_Viktor_PostBattle::
# 126 "data/maps/Route4b/scripts.pory"
	.string "I'll be stronger when we meet in the\n"
	.string "tournament.$"
