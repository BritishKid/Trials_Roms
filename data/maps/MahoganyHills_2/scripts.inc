MahoganyHills_2_MapScripts::
	.byte 0


MahoganyHills_Bridge_Meet_Rival1::
# 4 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 5 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_0
# 6 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Bridge_MahoganyHill1
# 7 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement 5
# 8 "data/maps/MahoganyHills_2/scripts.pory"
	goto_if_unset FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN, MahoganyHills_Bridge_Meet_Rival1_2
MahoganyHills_Bridge_Meet_Rival1_1:
# 12 "data/maps/MahoganyHills_2/scripts.pory"
	call MahoganyHills_Rival_Battle
	return

MahoganyHills_Bridge_Meet_Rival1_2:
# 9 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_1
# 10 "data/maps/MahoganyHills_2/scripts.pory"
	setflag FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN
	goto MahoganyHills_Bridge_Meet_Rival1_1


MahoganyHills_Bridge_Meet_Rival2::
# 16 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 17 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_0
# 18 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_To_Bridge_MahoganyHill2
# 19 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement 5
# 20 "data/maps/MahoganyHills_2/scripts.pory"
	call MahoganyHills_Rival_Battle
	return


MahoganyHills2_Battle_BugCatcher_Charlie::
# 24 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_CHARLIE, MahoganyHills2_BugCatcher_Charlie_Intro, MahoganyHills2_BugCatcher_Charlie_Outro, Bugcatcher_Trainer_Beaten
# 25 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostBattle_MahoganyHills2_BugCatcher_Charlie, MSGBOX_AUTOCLOSE
# 26 "data/maps/MahoganyHills_2/scripts.pory"
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Ronald::
# 31 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_RONALD, MahoganyHills2_BugCatcher_Ronald_Intro, MahoganyHills2_BugCatcher_Ronald_Outro, Bugcatcher_Trainer_Beaten
# 32 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostBattle_MahoganyHills2_BugCatcher_Ronald, MSGBOX_AUTOCLOSE
# 33 "data/maps/MahoganyHills_2/scripts.pory"
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Deandra::
# 38 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_double TRAINER_MAHOGANYHILLS_BUGCATCHER_DEE, MahoganyHills2_BugCatcher_Dee_Intro, MahoganyHills2_BugCatcher_Dee_Outro, MahoganyHills2_BugCatcher_Dee_NotEnoughMons, Bugcatcher_Trainer_Beaten
# 39 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostBattle_MahoganyHills2_BugCatcher_Dee, MSGBOX_AUTOCLOSE
# 40 "data/maps/MahoganyHills_2/scripts.pory"
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Dennis::
# 45 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 46 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 4
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_2
MahoganyHills2_Battle_BugCatcher_Dennis_1:
# 54 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 5
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_5
MahoganyHills2_Battle_BugCatcher_Dennis_4:
# 57 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_11
# 61 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_3
MahoganyHills2_Battle_BugCatcher_Dennis_10:
# 63 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return

MahoganyHills2_Battle_BugCatcher_Dennis_2:
# 47 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_0, MSGBOX_YESNO
# 48 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_7
# 51 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_1
	goto MahoganyHills2_Battle_BugCatcher_Dennis_1

MahoganyHills2_Battle_BugCatcher_Dennis_5:
# 55 "data/maps/MahoganyHills_2/scripts.pory"
	call PostDennis_MH_Reward
	goto MahoganyHills2_Battle_BugCatcher_Dennis_4

MahoganyHills2_Battle_BugCatcher_Dennis_7:
# 49 "data/maps/MahoganyHills_2/scripts.pory"
	call Bugcatch_Dennis_MH2_Battle
	goto MahoganyHills2_Battle_BugCatcher_Dennis_1

MahoganyHills2_Battle_BugCatcher_Dennis_11:
# 58 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_2
	goto MahoganyHills2_Battle_BugCatcher_Dennis_10


MahoganyHills2_Trigger_Bugcatcher_Prize::
# 67 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 68 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_0
# 69 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Dennis
# 70 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 71 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_1
# 72 "data/maps/MahoganyHills_2/scripts.pory"
	giveitem ITEM_SILVER_POWDER
# 73 "data/maps/MahoganyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 74 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 4
# 75 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_2, MSGBOX_YESNO
# 76 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills2_Trigger_Bugcatcher_Prize_2
# 79 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_1
MahoganyHills2_Trigger_Bugcatcher_Prize_1:
# 81 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return

MahoganyHills2_Trigger_Bugcatcher_Prize_2:
# 77 "data/maps/MahoganyHills_2/scripts.pory"
	call Bugcatch_Dennis_MH2_Battle
	goto MahoganyHills2_Trigger_Bugcatcher_Prize_1


Bugcatcher_Trainer_Beaten::
# 85 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 2
	goto_if_eq Bugcatcher_Trainer_Beaten_2
Bugcatcher_Trainer_Beaten_1:
# 88 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 1
	goto_if_eq Bugcatcher_Trainer_Beaten_5
Bugcatcher_Trainer_Beaten_4:
# 91 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 0
	goto_if_eq Bugcatcher_Trainer_Beaten_7
	return

Bugcatcher_Trainer_Beaten_2:
# 86 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 3
	goto Bugcatcher_Trainer_Beaten_1

Bugcatcher_Trainer_Beaten_5:
# 89 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 2
	goto Bugcatcher_Trainer_Beaten_4

Bugcatcher_Trainer_Beaten_7:
# 92 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 1
	return


Bugcatch_Dennis_MH2_Battle::
# 97 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_DENNIS, MahoganyHills2_BugCatcher_Dennis_Intro, MahoganyHills2_BugCatcher_Dennis_Outro, Bugcatcher_Dennis_Beaten
	return


Bugcatcher_Dennis_Beaten::
# 101 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 5
# 102 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
# 103 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox Bugcatcher_Dennis_Beaten_Text_0
# 104 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return


PostDennis_MH_Reward::
# 108 "data/maps/MahoganyHills_2/scripts.pory"
	showmonpic SPECIES_SCYTHER, 10, 3
# 109 "data/maps/MahoganyHills_2/scripts.pory"
	givemon SPECIES_SCYTHER, 5
# 110 "data/maps/MahoganyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 111 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PostDennis_MH_Reward_1
# 116 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PostDennis_MH_Reward_2
# 122 "data/maps/MahoganyHills_2/scripts.pory"
	hidemonpic
# 123 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostDennis_MH_Reward_Text_1
	return

PostDennis_MH_Reward_1:
# 112 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostDennis_MH_Reward_Text_0
# 113 "data/maps/MahoganyHills_2/scripts.pory"
	call NicknamePartyMon
# 114 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	return

PostDennis_MH_Reward_2:
# 117 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox PostDennis_MH_Reward_Text_0
# 118 "data/maps/MahoganyHills_2/scripts.pory"
	call NicknamePartyMon
# 119 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	return


MahoganyHills_Rival_Battle::
# 128 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_Rival_Battle_Text_0
# 129 "data/maps/MahoganyHills_2/scripts.pory"
	switch VAR_STARTER_MON
# 130 "data/maps/MahoganyHills_2/scripts.pory"
	case 0, MahoganyHills_Rival_Battle_2
# 132 "data/maps/MahoganyHills_2/scripts.pory"
	case 1, MahoganyHills_Rival_Battle_3
# 134 "data/maps/MahoganyHills_2/scripts.pory"
	case 2, MahoganyHills_Rival_Battle_4
	return

MahoganyHills_Rival_Battle_2:
# 131 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_TREECKO, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return

MahoganyHills_Rival_Battle_3:
# 133 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_CYNDAQUIL, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return

MahoganyHills_Rival_Battle_4:
# 135 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_SQUIRTLE, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return


MahoganyHills_RivalBeaten::
# 139 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_RIVAL_FIGHT_2, 1
# 140 "data/maps/MahoganyHills_2/scripts.pory"
	setflag FLAG_MAHOGANY_TOWN_RIVAL_BEATEN
# 141 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RivalBeaten_Text_0
# 142 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RivalBeaten_Text_1
# 143 "data/maps/MahoganyHills_2/scripts.pory"
	giveitem ITEM_HM01, 1
# 144 "data/maps/MahoganyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 145 "data/maps/MahoganyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_HM01
# 146 "data/maps/MahoganyHills_2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, MahoganyHills_RivalBeaten_2
MahoganyHills_RivalBeaten_1:
# 151 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RivalBeaten_Text_3
# 152 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement 5, Movement_Rival_Off_Bridge_MahoganyHill
# 153 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement 5
# 154 "data/maps/MahoganyHills_2/scripts.pory"
	removeobject 5
# 155 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return

MahoganyHills_RivalBeaten_2:
# 147 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RivalBeaten_Text_2
# 148 "data/maps/MahoganyHills_2/scripts.pory"
	giveitem ITEM_EXP_SHARE, 1
# 149 "data/maps/MahoganyHills_2/scripts.pory"
	setflag FLAG_RECEIVED_EXP_SHARE
	goto MahoganyHills_RivalBeaten_1


MahoganyHills_MeetRoxanne::
# 159 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 160 "data/maps/MahoganyHills_2/scripts.pory"
	addobject 6
# 161 "data/maps/MahoganyHills_2/scripts.pory"
	setobjectxy 6, 36, 2
# 162 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement 6, Movement_Roxanne_Appearing
# 163 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement 6
# 164 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_MeetRoxanne_Text_0
# 165 "data/maps/MahoganyHills_2/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
# 166 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills_RoxanneBeaten::
# 170 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 171 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_0
# 172 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_1
# 173 "data/maps/MahoganyHills_2/scripts.pory"
	giveitem ITEM_TM37
# 174 "data/maps/MahoganyHills_2/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 175 "data/maps/MahoganyHills_2/scripts.pory"
	setflag FLAG_ITEM_MAHOGANY_HILLS_POKEBALL_ROCK_TOMB
# 176 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_RoxanneBeaten_Text_2
# 177 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerLeft
# 178 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 179 "data/maps/MahoganyHills_2/scripts.pory"
	applymovement 6, Movement_Roxanne_Leaving
# 180 "data/maps/MahoganyHills_2/scripts.pory"
	waitmovement 6
# 181 "data/maps/MahoganyHills_2/scripts.pory"
	removeobject 6
# 182 "data/maps/MahoganyHills_2/scripts.pory"
	setvar VAR_MAHOGANYHILLS_FOSSIL_ROXANNE, 1
# 183 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return


MahoganyHills_LegendaryDungeon::
# 187 "data/maps/MahoganyHills_2/scripts.pory"
	lockall
# 188 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, 4
	goto_if_eq MahoganyHills_LegendaryDungeon_2
# 196 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_LegendaryDungeon_Text_2
MahoganyHills_LegendaryDungeon_1:
# 198 "data/maps/MahoganyHills_2/scripts.pory"
	releaseall
	return

MahoganyHills_LegendaryDungeon_2:
# 189 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_LegendaryDungeon_Text_0, MSGBOX_YESNO
# 190 "data/maps/MahoganyHills_2/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_LegendaryDungeon_5
	goto MahoganyHills_LegendaryDungeon_1

MahoganyHills_LegendaryDungeon_5:
# 191 "data/maps/MahoganyHills_2/scripts.pory"
	msgbox MahoganyHills_LegendaryDungeon_Text_1
	goto MahoganyHills_LegendaryDungeon_1


MahongayHill2_ItemBall_SunStone::
# 202 "data/maps/MahoganyHills_2/scripts.pory"
	finditem ITEM_SUN_STONE
	return


MahongayHill2_EventScript_ItemPPUp::
# 206 "data/maps/MahoganyHills_2/scripts.pory"
	finditem ITEM_PP_UP
	return


# 210 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Rival_To_Bridge_MahoganyHill1:
# 211 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 212 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 213 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 214 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 215 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 216 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
	step_end

# 219 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Rival_To_Bridge_MahoganyHill2:
# 220 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 221 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 222 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 223 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 224 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 225 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 226 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
	step_end

# 229 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Rival_Off_Bridge_MahoganyHill:
# 230 "data/maps/MahoganyHills_2/scripts.pory"
	face_up
# 231 "data/maps/MahoganyHills_2/scripts.pory"
	walk_up
# 232 "data/maps/MahoganyHills_2/scripts.pory"
	walk_up
# 233 "data/maps/MahoganyHills_2/scripts.pory"
	face_left
# 234 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 235 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 236 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 237 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 238 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 239 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 240 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
	step_end

# 243 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Face_Dennis:
# 244 "data/maps/MahoganyHills_2/scripts.pory"
	face_left
	step_end

# 247 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Roxanne_Appearing:
# 248 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
	step_end

# 251 "data/maps/MahoganyHills_2/scripts.pory"
Movement_PlayerLeft:
# 252 "data/maps/MahoganyHills_2/scripts.pory"
	walk_left
# 253 "data/maps/MahoganyHills_2/scripts.pory"
	face_right
	step_end

# 256 "data/maps/MahoganyHills_2/scripts.pory"
Movement_Roxanne_Leaving:
# 257 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 258 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 259 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 260 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 261 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 262 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
# 263 "data/maps/MahoganyHills_2/scripts.pory"
	walk_down
	step_end

MahoganyHills_Bridge_Meet_Rival1_Text_0:
# 5 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Hey you're finally here!$"

MahoganyHills_Bridge_Meet_Rival1_Text_1:
# 9 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You finally decided to join me then! I\n"
	.string "thought you'd never get out of bed. You\l"
	.string "remember the bet you made last year?\p"
	.string "First one to become A champion wins.$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_0:
# 47 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Ready for a real challenge then?$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_1:
# 51 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Maybe another time then$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_2:
# 58 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Never expected to find someone so\n"
	.string "strong here.$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_3:
# 61 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Move along, you don't have a chance\n"
	.string "against me.$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_0:
# 68 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Hey!$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_1:
# 71 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Well done on beating the others. You\n"
	.string "deserve a reward.$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_2:
# 75 "data/maps/MahoganyHills_2/scripts.pory"
	.string "If you want a real challenge you can try\n"
	.string "and beat me!\p"
	.string "Think you have what it takes?$"

Bugcatcher_Dennis_Beaten_Text_0:
# 103 "data/maps/MahoganyHills_2/scripts.pory"
	.string "That was crazy. Take this as a reward!$"

PostDennis_MH_Reward_Text_0:
# 112 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Recieved Scyther$"

PostDennis_MH_Reward_Text_1:
# 123 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

MahoganyHills_Rival_Battle_Text_0:
# 128 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You're so slow, I've already got myself a\n"
	.string "badge. It was a breeze. My Pokémon\l"
	.string "barely broke a sweat. In fact I bet\l"
	.string "they could beat you here!$"

MahoganyHills_RivalBeaten_Text_0:
# 141 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You may have won but I'm still the one\n"
	.string "with the most badges!$"

MahoganyHills_RivalBeaten_Text_1:
# 142 "data/maps/MahoganyHills_2/scripts.pory"
	.string "The badge let's me use cut now, here\n"
	.string "take the HM so you can catch up if you\l"
	.string "can beat the gym!$"

MahoganyHills_RivalBeaten_Text_2:
# 147 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Also here is an extra gift for you, it\n"
	.string "should come in useful!$"

MahoganyHills_RivalBeaten_Text_3:
# 151 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Seeya Slowpoke$"

MahoganyHills_MeetRoxanne_Text_0:
# 164 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Oh hi there. I was just visiting Darwin\n"
	.string "and his incredible collection of\l"
	.string "fossils. Apparently Mahogany Hills is\l"
	.string "one of the best places to find them.$"

MahoganyHills_RoxanneBeaten_Text_0:
# 171 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Well you are pretty tough! You would be\n"
	.string "a Hoenn Champion in no time if you where\l"
	.string "over there.$"

MahoganyHills_RoxanneBeaten_Text_1:
# 172 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Take this as well!$"

MahoganyHills_RoxanneBeaten_Text_2:
# 176 "data/maps/MahoganyHills_2/scripts.pory"
	.string "I hope to see you again!$"

MahoganyHills_LegendaryDungeon_Text_0:
# 189 "data/maps/MahoganyHills_2/scripts.pory"
	.string "The boulder looks like it can be moved.\n"
	.string "Do you want to push it?$"

MahoganyHills_LegendaryDungeon_Text_1:
# 191 "data/maps/MahoganyHills_2/scripts.pory"
	.string "COMING SOON$"

MahoganyHills_LegendaryDungeon_Text_2:
# 196 "data/maps/MahoganyHills_2/scripts.pory"
	.string "It won't budge.$"

MahoganyHills_Rival_Battle_Intro::
# 267 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Don't worry if you lose it's only natural$"

MahoganyHills_Rival_Battle_Outro::
# 271 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Well that wasn't expected. Guess you'll\n"
	.string "have no issue in the gym.$"

MahoganyHills2_BugCatcher_Charlie_Intro::
# 275 "data/maps/MahoganyHills_2/scripts.pory"
	.string "This is an amazing place to find some\n"
	.string "night crawlers.$"

MahoganyHills2_BugCatcher_Charlie_Outro::
# 279 "data/maps/MahoganyHills_2/scripts.pory"
	.string "I'll just go play it at home instead,\n"
	.string "atleast I've got a chance$"

PostBattle_MahoganyHills2_BugCatcher_Charlie::
# 283 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Have you seen Frank anywhere? He get's\n"
	.string "lost in the tall grass easily.$"

MahoganyHills2_BugCatcher_Ronald_Intro::
# 287 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Hey you, I'm gonna fight ya!$"

MahoganyHills2_BugCatcher_Ronald_Outro::
# 291 "data/maps/MahoganyHills_2/scripts.pory"
	.string "God dammit dude$"

PostBattle_MahoganyHills2_BugCatcher_Ronald::
# 295 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Need to tack on more mass to have a\n"
	.string "chance, get something huge.$"

MahoganyHills2_BugCatcher_Dee_Intro::
# 299 "data/maps/MahoganyHills_2/scripts.pory"
	.string "I ran out of things to say so we will fix\n"
	.string "this later$"

MahoganyHills2_BugCatcher_Dee_Outro::
# 303 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Something something funny outro$"

MahoganyHills2_BugCatcher_Dee_NotEnoughMons::
# 307 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You need two Pokémon to battle$"

PostBattle_MahoganyHills2_BugCatcher_Dee::
# 311 "data/maps/MahoganyHills_2/scripts.pory"
	.string "You must have been cheating...$"

MahoganyHills2_BugCatcher_Dennis_Intro::
# 315 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Alright then, you're going to regret\n"
	.string "this$"

MahoganyHills2_BugCatcher_Dennis_Outro::
# 319 "data/maps/MahoganyHills_2/scripts.pory"
	.string "...$"

PostBattle_MahoganyHills2_BugCatcher_Dennis::
# 323 "data/maps/MahoganyHills_2/scripts.pory"
	.string "I haven't even begun to peak.$"

MahoganyHills_Roxanne_Battle_Intro::
# 327 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Oh you're a Pokémon trainer. I could go\n"
	.string "for a battle before I head off.$"

MahoganyHills_Roxanne_Battle_Outro::
# 331 "data/maps/MahoganyHills_2/scripts.pory"
	.string "Incredible$"
