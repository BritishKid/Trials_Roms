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
# 10 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 11 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_BridgeRight_Text_0
# 12 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Platefallcave_Surprise
# 13 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 14 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Player_MahoganyHills2Right
# 15 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 16 "data/maps/MahogonyHills_2/scripts.pory"
	call MahogonyHills2_EventScript_RivalEncounter
# 17 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_Trigger_BridgeLeft::
# 22 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 23 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_BridgeRight_Text_0
# 24 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Platefallcave_Surprise
# 25 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 26 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Player_MahoganyHills2Left
# 27 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 28 "data/maps/MahogonyHills_2/scripts.pory"
	call MahogonyHills2_EventScript_RivalEncounter
# 29 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahogonyHills2_EventScript_RivalEncounter::
# 33 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahogonyHills2_EventScript_RivalEncounter_Text_0
# 34 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_MAHOGONYHILL2, MahoganyHills2_Rival_Intro, MahoganyHills2_Rival_Outro, MahoganyHills2_Rival_PostScript
	return


MahoganyHills2_Rival_PostScript::
# 38 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_RIVAL_STATE, 3
# 39 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_MAHOGANY_HILLS_RIVAL_BEATEN
# 40 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_0, MSGBOX_AUTOCLOSE
# 41 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_1, MSGBOX_AUTOCLOSE
# 42 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_2, MSGBOX_AUTOCLOSE
# 43 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_HAND_AXE
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_3, MSGBOX_AUTOCLOSE
# 45 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_4, MSGBOX_AUTOCLOSE
# 46 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Rival_PostScript_Text_5, MSGBOX_AUTOCLOSE
# 47 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_Leaves_Player_MahoganyHills2
# 48 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 5
# 49 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 5
# 50 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_BattleScript_Luke::
# 54 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_LUKE_MAHOGANYHILLS2, MahoganyHills2_Luke_Intro, MahoganyHills2_Luke_Outro, Increase_Trainers_Beaten
# 55 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Luke_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_Carlie::
# 59 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_CARLIE_MAHOGANYHILLS2, MahoganyHills2_Carlie_Intro, MahoganyHills2_Carlie_Outro, Increase_Trainers_Beaten
# 60 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Carlie_PostBattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_Josh::
# 64 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_JOSH_MAHOGANYHILLS2, MahoganyHills2_Josh_Intro, MahoganyHills2_Josh_Outro, MahoganyHills2_Josh_PostScript
# 65 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Josh_PostBattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_BattleScript_BugCatcherSean::
# 69 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_SEAN_ROUTE2, Mahoganygills2_Sean_Intro, Mahoganygills2_Sean_Outro, Increase_Trainers_Beaten
# 70 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox Mahoganygills2_Sean_Postbattle, MSGBOX_AUTOCLOSE
	return


MahoganyHills2_Trigger_RoxanneEncounter::
# 74 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 75 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, Movement_MahoganyHills_RoxanneComingCloser
# 76 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 77 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1
# 78 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
# 79 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills_RoxanneBeaten::
# 83 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 84 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0, MSGBOX_AUTOCLOSE
# 85 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 86 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 87 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1, MSGBOX_AUTOCLOSE
# 88 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 89 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_2, MSGBOX_AUTOCLOSE
# 90 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, MahoganyHills1_MoveOutTheWay_Player
# 91 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 92 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 7, MahoganyHills1_RoxanneLeaves
# 93 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 7
# 94 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 7
# 95 "data/maps/MahogonyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills2_EventScript_RoxanneEncounter::
# 99 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 100 "data/maps/MahogonyHills_2/scripts.pory"
	faceplayer
# 101 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_0
# 102 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_RoxanneEncounter_Text_1, MSGBOX_AUTOCLOSE
# 103 "data/maps/MahogonyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
	return


MahoganyHills_RoxanneBeaten_WithoutTrigger::
# 108 "data/maps/MahogonyHills_2/scripts.pory"
	lockall
# 109 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0, MSGBOX_AUTOCLOSE
# 110 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 111 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 112 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_ROXANNE_ENCOUNTER_STATE, 1
# 113 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_2, MSGBOX_AUTOCLOSE
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


MahoganyHills_EventScript_MossyStone::
# 132 "data/maps/MahogonyHills_2/scripts.pory"
	lock
# 133 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Text_0
# 134 "data/maps/MahogonyHills_2/scripts.pory"
	release
	return


MahoganyHills_EventScript_MossyStone_Grandson::
# 138 "data/maps/MahogonyHills_2/scripts.pory"
	lock
# 139 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_0
# 141 "data/maps/MahogonyHills_2/scripts.pory"
	goto_if_unset FLAG_LEAF_STONE_SOURCE, MahoganyHills_EventScript_MossyStone_Grandson_3
MahoganyHills_EventScript_MossyStone_Grandson_1:
# 178 "data/maps/MahogonyHills_2/scripts.pory"
	release
	return

MahoganyHills_EventScript_MossyStone_Grandson_2:
# 142 "data/maps/MahogonyHills_2/scripts.pory"
	faceplayer
# 143 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_1
# 144 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_2
# 145 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_3, MSGBOX_YESNO
# 146 "data/maps/MahogonyHills_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_EventScript_MossyStone_Grandson_7
MahoganyHills_EventScript_MossyStone_Grandson_6:
# 174 "data/maps/MahogonyHills_2/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq MahoganyHills_EventScript_MossyStone_Grandson_9
	goto MahoganyHills_EventScript_MossyStone_Grandson_1

MahoganyHills_EventScript_MossyStone_Grandson_3:
# 141 "data/maps/MahogonyHills_2/scripts.pory"
	compare VAR_EVOLUTION_STONE_HUNTING, 1
	goto_if_eq MahoganyHills_EventScript_MossyStone_Grandson_2
	goto MahoganyHills_EventScript_MossyStone_Grandson_1

MahoganyHills_EventScript_MossyStone_Grandson_7:
# 147 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_4
# 148 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 149 "data/maps/MahogonyHills_2/scripts.pory"
	setwildbattle SPECIES_GLOOM, 25, ITEM_ORAN_BERRY
# 150 "data/maps/MahogonyHills_2/scripts.pory"
	call StartLeafStoneBattle
# 151 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_5
# 152 "data/maps/MahogonyHills_2/scripts.pory"
	setwildbattle SPECIES_WEEPINBELL, 28, ITEM_ORAN_BERRY
# 153 "data/maps/MahogonyHills_2/scripts.pory"
	call StartLeafStoneBattle
# 154 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_6
# 155 "data/maps/MahogonyHills_2/scripts.pory"
	setwildbattle SPECIES_SHIFTRY, 30, ITEM_ORAN_BERRY
# 156 "data/maps/MahogonyHills_2/scripts.pory"
	call StartLeafStoneBattle
# 157 "data/maps/MahogonyHills_2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 158 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_7
# 159 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_8
# 160 "data/maps/MahogonyHills_2/scripts.pory"
	giveitem ITEM_LEAF_STONE
# 161 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_9
# 162 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_LEAF_STONE_SOURCE
# 163 "data/maps/MahogonyHills_2/scripts.pory"
	goto_if_set FLAG_LEAF_STONE_SOURCE, MahoganyHills_EventScript_MossyStone_Grandson_14
MahoganyHills_EventScript_MossyStone_Grandson_11:
# 169 "data/maps/MahogonyHills_2/scripts.pory"
	applymovement 9, Movement_GrandsonLeavs
# 170 "data/maps/MahogonyHills_2/scripts.pory"
	waitmovement 9
# 171 "data/maps/MahogonyHills_2/scripts.pory"
	removeobject 9
# 172 "data/maps/MahogonyHills_2/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
	goto MahoganyHills_EventScript_MossyStone_Grandson_6

MahoganyHills_EventScript_MossyStone_Grandson_9:
# 175 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_11
	goto MahoganyHills_EventScript_MossyStone_Grandson_1

MahoganyHills_EventScript_MossyStone_Grandson_12:
# 164 "data/maps/MahogonyHills_2/scripts.pory"
	msgbox MahoganyHills_EventScript_MossyStone_Grandson_Text_10
# 165 "data/maps/MahogonyHills_2/scripts.pory"
	setvar VAR_EVOLUTION_STONE_HUNTING, 2
# 166 "data/maps/MahogonyHills_2/scripts.pory"
	clearflag FLAG_HIDE_GRANDSON_STONE_CORAL_PORT
	goto MahoganyHills_EventScript_MossyStone_Grandson_11

MahoganyHills_EventScript_MossyStone_Grandson_13:
# 163 "data/maps/MahogonyHills_2/scripts.pory"
	goto_if_set FLAG_FIRE_STONE_SOURCE, MahoganyHills_EventScript_MossyStone_Grandson_12
	goto MahoganyHills_EventScript_MossyStone_Grandson_11

MahoganyHills_EventScript_MossyStone_Grandson_14:
# 163 "data/maps/MahogonyHills_2/scripts.pory"
	goto_if_set FLAG_WATER_STONE_SOURCE, MahoganyHills_EventScript_MossyStone_Grandson_13
	goto MahoganyHills_EventScript_MossyStone_Grandson_11


StartLeafStoneBattle::
# 182 "data/maps/MahogonyHills_2/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 183 "data/maps/MahogonyHills_2/scripts.pory"
	dowildbattle
	return


# 187 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Right:
# 188 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 189 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 190 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 191 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 192 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 193 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 196 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_To_Player_MahoganyHills2Left:
# 197 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 198 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 199 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 200 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 201 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 202 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 203 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 204 "data/maps/MahogonyHills_2/scripts.pory"
	face_down
	step_end

# 207 "data/maps/MahogonyHills_2/scripts.pory"
Movement_Rival_Leaves_Player_MahoganyHills2:
# 208 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 209 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 210 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 211 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 212 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 213 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 214 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 215 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
# 216 "data/maps/MahogonyHills_2/scripts.pory"
	walk_up
	step_end

# 219 "data/maps/MahogonyHills_2/scripts.pory"
Movement_MahoganyHills_RoxanneComingCloser:
# 220 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 221 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 222 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 223 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 224 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 225 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

# 228 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player:
# 229 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 230 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 231 "data/maps/MahogonyHills_2/scripts.pory"
	face_left
	step_end

# 234 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_RoxanneLeaves:
# 235 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 236 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 237 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 238 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 239 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 240 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 241 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 242 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 243 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 244 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 245 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 246 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 247 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 248 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 249 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 250 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 251 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
# 252 "data/maps/MahogonyHills_2/scripts.pory"
	walk_left
	step_end

# 255 "data/maps/MahogonyHills_2/scripts.pory"
MahoganyHills1_MoveOutTheWay_Player_WithoutTrigger:
# 256 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 257 "data/maps/MahogonyHills_2/scripts.pory"
	walk_right
# 258 "data/maps/MahogonyHills_2/scripts.pory"
	face_left
	step_end

# 261 "data/maps/MahogonyHills_2/scripts.pory"
Movement_GrandsonLeavs:
# 262 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 263 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 264 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 265 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 266 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 267 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 268 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
# 269 "data/maps/MahogonyHills_2/scripts.pory"
	walk_down
	step_end

MahoganyHills2_Trigger_BridgeRight_Text_0:
# 11 "data/maps/MahogonyHills_2/scripts.pory"
	.string "So you finally made it!$"

MahogonyHills2_EventScript_RivalEncounter_Text_0:
# 33 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I thought you would eventually get\n"
	.string "here, guess you had to come see my new\l"
	.string "badge.\l"
	.string "My Pokémon barely broke a sweat\l"
	.string "beating the gym leader. In fact they\l"
	.string "got so much energy left they could still\l"
	.string "beat you!$"

MahoganyHills2_Rival_PostScript_Text_0:
# 40 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You might have won but I still have more\n"
	.string "badges than you. That's what matters\l"
	.string "really.$"

MahoganyHills2_Rival_PostScript_Text_1:
# 41 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You should probably take this to, it will\n"
	.string "help once you've got your first badge.$"

MahoganyHills2_Rival_PostScript_Text_2:
# 42 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You have been given a HAND AXE, it could\n"
	.string "be used to cut small trees.$"

MahoganyHills2_Rival_PostScript_Text_3:
# 44 "data/maps/MahogonyHills_2/scripts.pory"
	.string "You won't need to reach the gym it's\n"
	.string "only a little further north.$"

MahoganyHills2_Rival_PostScript_Text_4:
# 45 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Anyway I'm heading to get my next\n"
	.string "badge, I'll see you there if you don't\l"
	.string "lose too badly up here.$"

MahoganyHills2_Rival_PostScript_Text_5:
# 46 "data/maps/MahogonyHills_2/scripts.pory"
	.string "See ya nerd!$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_0:
# 76 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Hi there, I've just been visiting Darwin\n"
	.string "to get new fossils. He has a little\l"
	.string "research station and has found the\l"
	.string "forest to be incredible for finding\l"
	.string "fossils.$"

MahoganyHills2_Trigger_RoxanneEncounter_Text_1:
# 77 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'm visiting from Hoenn and by that look\n"
	.string "I can tell you're a trainer.$"

MahoganyHills_RoxanneBeaten_Text_0:
# 84 "data/maps/MahogonyHills_2/scripts.pory"
	.string "That's impressive, I'm not at my gym but\n"
	.string "you should still take this.$"

MahoganyHills_RoxanneBeaten_Text_1:
# 87 "data/maps/MahogonyHills_2/scripts.pory"
	.string "It's the TM for ROCK TOMB, a great rock\n"
	.string "type move that will slow your opponent\l"
	.string "down.$"

MahoganyHills_RoxanneBeaten_Text_2:
# 89 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I'll see you around again!$"

MahoganyHills2_Josh_PostScript_Text_0:
# 125 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow with money you'd be unstoppable.\n"
	.string "Why don't you take this.$"

MahoganyHills_EventScript_MossyStone_Text_0:
# 133 "data/maps/MahogonyHills_2/scripts.pory"
	.string "It's a very mossy rock.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_0:
# 139 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Interesting...is this it?$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_1:
# 143 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Oh hi, so my grandfather sent you? He\n"
	.string "must be getting very impatient. I said\l"
	.string "it could take a while this is a big world.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_2:
# 144 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Well you came at a good time, I could use\n"
	.string "your help. I need to harvest some of\l"
	.string "this rock to process into leaf stones\l"
	.string "but any attempt causes me to get\l"
	.string "attacked by wild Pokémon.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_3:
# 145 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Could you fight them off while when I\n"
	.string "start to harvest?$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_4:
# 147 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Brilliant, prepare yourself I'm going to\n"
	.string "start to harvest now.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_5:
# 151 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Thank you, but I can see more coming!$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_6:
# 154 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Great job but I think something bigger\n"
	.string "is coming$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_7:
# 158 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Okay we are good, thank you for that.\n"
	.string "I'll see you at the next one.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_8:
# 159 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Also please take this.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_9:
# 161 "data/maps/MahogonyHills_2/scripts.pory"
	.string "It's the least I could do in return.$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_10:
# 164 "data/maps/MahogonyHills_2/scripts.pory"
	.string "That's the leaf, fire and water stones\n"
	.string "sorted. I should return these back to\l"
	.string "my Grandad$"

MahoganyHills_EventScript_MossyStone_Grandson_Text_11:
# 175 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Well go prepare I don't think I can do\n"
	.string "this alone.$"

MahoganyHills2_Rival_Intro::
# 274 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Don't worry this won't take long.$"

MahoganyHills2_Rival_Outro::
# 278 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I guess my Pokémon are still tired from\n"
	.string "the gym.$"

MahoganyHills2_Luke_Intro::
# 282 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I've just moved here from Sinnoh and\n"
	.string "looking to get stronger!$"

MahoganyHills2_Luke_Outro::
# 286 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow you're stronger than the bug\n"
	.string "trainers around here.$"

MahoganyHills2_Luke_Postbattle::
# 290 "data/maps/MahogonyHills_2/scripts.pory"
	.string "One day I'm going to become a gym\n"
	.string "leader!$"

MahoganyHills_Roxanne_Battle_Intro::
# 294 "data/maps/MahogonyHills_2/scripts.pory"
	.string "How about a battle then.$"

MahoganyHills_Roxanne_Battle_Outro::
# 298 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow, if we were in Hoenn you'd have just\n"
	.string "earnt a badge!$"

MahoganyHills2_Carlie_Intro::
# 302 "data/maps/MahogonyHills_2/scripts.pory"
	.string "If I win I'm gonna buy groceries from\n"
	.string "the money.$"

MahoganyHills2_Carlie_Outro::
# 306 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Guess it's gonna be unseasoned noodles\n"
	.string "today.$"

MahoganyHills2_Carlie_PostBattle::
# 310 "data/maps/MahogonyHills_2/scripts.pory"
	.string "One day I'll get some meat.$"

MahoganyHills2_Josh_Intro::
# 314 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Money is a trainers best friend.$"

MahoganyHills2_Josh_Outro::
# 318 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I guess I need to earn more money.$"

MahoganyHills2_Josh_PostBattle::
# 322 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Spend what you earn wisely.$"

Mahoganygills2_Sean_Intro::
# 326 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Not all bugs are weak!$"

Mahoganygills2_Sean_Outro::
# 330 "data/maps/MahogonyHills_2/scripts.pory"
	.string "Wow, how did you?$"

Mahoganygills2_Sean_Postbattle::
# 334 "data/maps/MahogonyHills_2/scripts.pory"
	.string "I've heard there is a bug trainer that\n"
	.string "is almost unbeatable.$"
