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
# 43 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_1
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_2
# 45 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_Leaves_Player_MahoganyHills2
# 46 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 47 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 5
# 48 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_BattleScript_Luke::
# 52 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_LUKE_MAHOGANYHILLS2, MahoganyHills2_Luke_Intro, MahoganyHills2_Luke_Outro, Increase_Trainers_Beaten
# 53 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Luke_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_Trigger_RoxanneEncounter::
# 58 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 59 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, Movement_MahoganyHills_RoxanneComingCloser
# 60 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 61 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1
# 62 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
# 63 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills_RoxanneBeaten::
# 67 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 68 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0
# 69 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 70 "data/maps/MahogonyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 71 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 72 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 73 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1
# 74 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyHills1_MoveOutTheWay_Player
# 75 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 76 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, MahoganyHills1_RoxanneLeaves
# 77 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 78 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 7
# 79 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_EventScript_RoxanneEncounter::
# 83 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 84 "data/maps/MahogonyHills_2/scripts.pory"
	faceplayer
# 85 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 86 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1
# 87 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
	return


MahoganyHills_RoxanneBeaten_WithoutTrigger::
# 92 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 93 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0
# 94 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 95 "data/maps/MahogonyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 96 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 97 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 98 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1
# 99 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyHills1_MoveOutTheWay_Player_WithoutTrigger
# 100 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 101 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, Movement_MahoganyHills_RoxanneComingCloser
# 102 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 103 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, MahoganyHills1_RoxanneLeaves
# 104 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 105 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 7
# 106 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


# 111 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Right:
# 112 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 113 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 114 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 115 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 116 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 117 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 120 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Left:
# 121 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 122 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 123 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 124 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 125 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 126 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 127 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 128 "data/maps/MahogonyHills_2/scripts.pory"
	face_down
	step_end

# 131 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_Leaves_Player_MahoganyHills2:
# 132 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 133 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 134 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 135 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 136 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 137 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 138 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 139 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 140 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
	step_end

# 143 "data/maps/MahogonyHills_2/scripts.pory"
Movement_MahoganyHills_RoxanneComingCloser:
# 144 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 145 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 146 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 147 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 148 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 149 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 152 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player:
# 153 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 154 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 155 "data/maps/MahogonyHills_2/scripts.pory"
	face_left
	step_end

# 158 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_RoxanneLeaves:
# 159 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 160 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 161 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 162 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 163 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 164 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 165 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 166 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 167 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 168 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 169 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 170 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 171 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 172 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 173 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 174 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 175 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 176 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
	step_end

# 179 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player_WithoutTrigger:
# 180 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 181 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 182 "data/maps/MahogonyHills_2/scripts.pory"
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
# 43 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Anyway I'm heading to get my next\n"
	.string "badge, I'll see you there if you don't\l"
	.string "lose too badly up here.$"

MahoganyHills2_Rival_PostScript_Text_2:
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	.string "See ya nerd!$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_0:
# 60 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Hi there, I've just been visiting Darwin\n"
	.string "to get new fossils. He has a little\l"
	.string "research station and has found the\l"
	.string "forest to be incredible for finding\l"
	.string "fossils.$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_1:
# 61 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'm visiting from Hoenn and by that look\n"
	.string "I can tell you're a trainer.$"

MahoganyHills_RoxanneBeaten_Text_0:
# 68 "data/maps/MahogonyHills_2/scripts.pory"
	.string "That's impressive, I'm not at my gym but\n"
	.string "you should still take this.$"

MahoganyHills_RoxanneBeaten_Text_1:
# 73 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'll see you around again!$"

MahoganyHills2_Rival_Intro::
# 186 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Don't worry this won't take long.$"

MahoganyHills2_Rival_Outro::
# 190 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I guess my Pokémon are still tired from\n"
	.string "the gym.$"

MahoganyHills2_Luke_Intro::
# 194 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I've just moved here from Sinnoh and\n"
	.string "looking to get stronger!$"

MahoganyHills2_Luke_Outro::
# 198 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow you're stronger than the bug\n"
	.string "trainers around here.$"

MahoganyHills2_Luke_Postbattle::
# 202 "data/maps/MahogonyHills_2/scripts.pory"
	.string "One day I'm going to become a gym\n"
	.string "leader!$"

MahoganyHills_Roxanne_Battle_Intro::
# 206 "data/maps/MahogonyHills_2/scripts.pory"
	.string "How about a battle then.$"

MahoganyHills_Roxanne_Battle_Outro::
# 210 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow, if we were in Hoenn you'd have just\n"
	.string "earnt a badge!$"
