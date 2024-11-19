MahogonyHills_2_MapScripts::
# 2 "data/maps/MahogonyHills_2/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, MahogonyHills_2_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

MahogonyHills_2_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/MahogonyHills_2/scripts.pory"
	compare VAR_MAHOGANYHILLS_BUTTONS_PRESSED, 4
	goto_if_eq MahogonyHills_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return

MahogonyHills_2_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/MahogonyHills_2/scripts.pory"
	setmetatile 36, 30, METATILE_Fortree_GroundHole, FALSE
	return


MahoganyHills2_Trigger_BridgeRight::
# 11 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 12 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_BridgeRight_Text_0
# 13 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Platefallcave_Surprise
# 14 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 15 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Player_MahoganyHills2Right
# 16 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 17 "data/maps/MahogonyHills_2/scripts.pory"
	call MahogonyHills2_EventScript_RivalEncounter
# 18 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_Trigger_BridgeLeft::
# 23 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 24 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_BridgeRight_Text_0
# 25 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Platefallcave_Surprise
# 26 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 27 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Player_MahoganyHills2Left
# 28 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 29 "data/maps/MahogonyHills_2/scripts.pory"
	call MahogonyHills2_EventScript_RivalEncounter
# 30 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahogonyHills2_EventScript_RivalEncounter::
# 34 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahogonyHills2_EventScript_RivalEncounter_Text_0
# 35 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_MAHOGONYHILL2, MahoganyHills2_Rival_Intro, MahoganyHills2_Rival_Outro, MahoganyHills2_Rival_PostScript
	return


MahoganyHills2_Rival_PostScript::
# 39 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_BEDROCK_TOWN_STATE, 3
# 40 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_RIVAL_BEATEN
# 41 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_0
# 42 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_1
# 43 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_HAND_AXE
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_2
# 45 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_3
# 46 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_Leaves_Player_MahoganyHills2
# 47 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 48 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 5
# 49 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_BattleScript_Luke::
# 53 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_LUKE_MAHOGANYHILLS2, MahoganyHills2_Luke_Intro, MahoganyHills2_Luke_Outro, Increase_Trainers_Beaten
# 54 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Luke_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_Carlie::
# 58 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_CARLIE_MAHOGANYHILLS2, MahoganyHills2_Carlie_Intro, MahoganyHills2_Carlie_Outro, Increase_Trainers_Beaten
# 59 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Carlie_PostBattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_Josh::
# 63 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_JOSH_MAHOGANYHILLS2, MahoganyHills2_Josh_Intro, MahoganyHills2_Josh_Outro, MahoganyHills2_Josh_PostScript
# 64 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Josh_PostBattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_BugCatcherSean::
# 68 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_SEAN_ROUTE2, Mahoganygills2_Sean_Intro, Mahoganygills2_Sean_Outro, Increase_Trainers_Beaten
# 69 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox Mahoganygills2_Sean_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_Trigger_RoxanneEncounter::
# 73 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 74 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, Movement_MahoganyHills_RoxanneComingCloser
# 75 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 76 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1
# 77 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
# 78 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills_RoxanneBeaten::
# 82 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 83 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0
# 84 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 85 "data/maps/MahogonyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 86 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 87 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 88 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1
# 89 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyHills1_MoveOutTheWay_Player
# 90 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 91 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, MahoganyHills1_RoxanneLeaves
# 92 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 93 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 7
# 94 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_EventScript_RoxanneEncounter::
# 98 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 99 "data/maps/MahogonyHills_2/scripts.pory"
	faceplayer
# 100 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 101 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1
# 102 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
	return


MahoganyHills_RoxanneBeaten_WithoutTrigger::
# 107 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 108 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0
# 109 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 110 "data/maps/MahogonyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 112 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 113 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1
# 114 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyHills1_MoveOutTheWay_Player_WithoutTrigger
# 115 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 116 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, Movement_MahoganyHills_RoxanneComingCloser
# 117 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 118 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, MahoganyHills1_RoxanneLeaves
# 119 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 120 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 7
# 121 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_Josh_PostScript::
# 125 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Josh_PostScript_Text_0
# 126 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_AMULET_COIN
# 127 "data/maps/MahogonyHills_2/scripts.pory"
	call Increase_Trainers_Beaten
# 128 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


# 132 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Right:
# 133 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 134 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 135 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 136 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 137 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 138 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 141 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Left:
# 142 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 143 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 144 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 145 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 146 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 147 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 148 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 149 "data/maps/MahogonyHills_2/scripts.pory"
	face_down
	step_end

# 152 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_Leaves_Player_MahoganyHills2:
# 153 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 154 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 155 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 156 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 157 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 158 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 159 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 160 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 161 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
	step_end

# 164 "data/maps/MahogonyHills_2/scripts.pory"
Movement_MahoganyHills_RoxanneComingCloser:
# 165 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 166 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 167 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 168 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 169 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 170 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 173 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player:
# 174 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 175 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 176 "data/maps/MahogonyHills_2/scripts.pory"
	face_left
	step_end

# 179 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_RoxanneLeaves:
# 180 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 181 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 182 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 183 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 184 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 185 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 186 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 187 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 188 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 189 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 190 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 191 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 192 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 193 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 194 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 195 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 196 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 197 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
	step_end

# 200 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player_WithoutTrigger:
# 201 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 202 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 203 "data/maps/MahogonyHills_2/scripts.pory"
	face_left
	step_end

MahoganyHills2_Trigger_BridgeRight_Text_0:
# 12 "data/maps/MahogonyHills_2/scripts.pory"
	.string "So you finally made it!$"

MahogonyHills2_EventScript_RivalEncounter_Text_0:
# 34 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I thought you would eventually get\n"
	.string "here, guess you had to come see my new\l"
	.string "badge.\l"
	.string "My Pokémon barely broke a sweat\l"
	.string "beating the gym leader. In fact they\l"
	.string "got so much energy left they could still\l"
	.string "beat you!$"

MahoganyHills2_Rival_PostScript_Text_0:
# 41 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You might have won but I still have more\n"
	.string "badges than you. That's what matters\l"
	.string "really.$"

MahoganyHills2_Rival_PostScript_Text_1:
# 42 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You should probably take this to, it will\n"
	.string "help once you've got your first badge.$"

MahoganyHills2_Rival_PostScript_Text_2:
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Anyway I'm heading to get my next\n"
	.string "badge, I'll see you there if you don't\l"
	.string "lose too badly up here.$"

MahoganyHills2_Rival_PostScript_Text_3:
# 45 "data/maps/MahogonyHills_2/scripts.pory"
	.string "See ya nerd!$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_0:
# 75 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Hi there, I've just been visiting Darwin\n"
	.string "to get new fossils. He has a little\l"
	.string "research station and has found the\l"
	.string "forest to be incredible for finding\l"
	.string "fossils.$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_1:
# 76 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'm visiting from Hoenn and by that look\n"
	.string "I can tell you're a trainer.$"

MahoganyHills_RoxanneBeaten_Text_0:
# 83 "data/maps/MahogonyHills_2/scripts.pory"
	.string "That's impressive, I'm not at my gym but\n"
	.string "you should still take this.$"

MahoganyHills_RoxanneBeaten_Text_1:
# 88 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'll see you around again!$"

MahoganyHills2_Josh_PostScript_Text_0:
# 125 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow with money you'd be unstoppable.\n"
	.string "Why don't you take this.$"

MahoganyHills2_Rival_Intro::
# 207 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Don't worry this won't take long.$"

MahoganyHills2_Rival_Outro::
# 211 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I guess my Pokémon are still tired from\n"
	.string "the gym.$"

MahoganyHills2_Luke_Intro::
# 215 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I've just moved here from Sinnoh and\n"
	.string "looking to get stronger!$"

MahoganyHills2_Luke_Outro::
# 219 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow you're stronger than the bug\n"
	.string "trainers around here.$"

MahoganyHills2_Luke_Postbattle::
# 223 "data/maps/MahogonyHills_2/scripts.pory"
	.string "One day I'm going to become a gym\n"
	.string "leader!$"

MahoganyHills_Roxanne_Battle_Intro::
# 227 "data/maps/MahogonyHills_2/scripts.pory"
	.string "How about a battle then.$"

MahoganyHills_Roxanne_Battle_Outro::
# 231 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow, if we were in Hoenn you'd have just\n"
	.string "earnt a badge!$"

MahoganyHills2_Carlie_Intro::
# 235 "data/maps/MahogonyHills_2/scripts.pory"
	.string "If I win I'm gonna buy groceries from\n"
	.string "the money.$"

MahoganyHills2_Carlie_Outro::
# 239 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Guess it's gonna be unseasoned noodles\n"
	.string "today.$"

MahoganyHills2_Carlie_PostBattle::
# 243 "data/maps/MahogonyHills_2/scripts.pory"
	.string "One day I'll get some meat.$"

MahoganyHills2_Josh_Intro::
# 247 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Money is a trainers best friend.$"

MahoganyHills2_Josh_Outro::
# 251 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I guess I need to earn more money.$"

MahoganyHills2_Josh_PostBattle::
# 255 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Spend what you earn wisely.$"

Mahoganygills2_Sean_Intro::
# 259 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Not all bugs are weak!$"

Mahoganygills2_Sean_Outro::
# 263 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow, how did you?$"

Mahoganygills2_Sean_Postbattle::
# 267 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I've heard there is a bug trainer that\n"
	.string "is almost unbeatable.$"
