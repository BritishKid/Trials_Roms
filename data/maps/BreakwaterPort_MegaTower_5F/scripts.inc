BreakwaterPort_MegaTower_5F_MapScripts::
# 2 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BreakwaterPort_MegaTower_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BreakwaterPort_MegaTower_5F_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	setvar VAR_MEGATOWER_STATE, 2
	return


BreakwaterPort_MegaTower_5F_Trigger_Right::
# 8 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	lockall
# 9 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	setvar VAR_MEGATOWER_STATE, 3
# 10 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox BreakwaterPort_MegaTower_5F_Trigger_Right_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 1, Movement_AceTrainer1_MoveToPosition
# 12 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 1
# 13 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox BreakwaterPort_MegaTower_5F_Trigger_Right_Text_1
# 14 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToStart_Right
# 15 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 16 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	goto Megatower_5F_Battle1
# 17 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	releaseall
	return


BreakwaterPort_MegaTower_5F_Trigger_Left::
# 21 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	lockall
# 22 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	setvar VAR_MEGATOWER_STATE, 3
# 23 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox BreakwaterPort_MegaTower_5F_Trigger_Right_Text_0, MSGBOX_AUTOCLOSE
# 24 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 1, Movement_AceTrainer1_MoveToPosition
# 25 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 1
# 26 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox BreakwaterPort_MegaTower_5F_Trigger_Right_Text_1
# 27 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerToStart_Left
# 28 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 29 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	goto Megatower_5F_Battle1
# 30 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	releaseall
	return


Megatower_5F_Battle1::
# 34 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	trainerbattle_single MEGATOWER5F_TRAINERACE1, Megatower5F_TrainerAce1_Intro, Megatower5F_TrainerAce1_Outro, Megatower5F_TrainerAce1_Beaten
	return


Megatower5F_TrainerAce1_Beaten::
# 38 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 1, Movement_AceTrainer1_MoveOutTheWay
# 39 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 2, Movement_AceTrainer2_MoveToPosition
# 40 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 2
# 41 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	trainerbattle_single MEGATOWER5F_TRAINERACE2, Megatower5F_TrainerAce2_Intro, Megatower5F_TrainerAce2_Outro, Megatower5F_TrainerAce2_Beaten
	return


Megatower5F_TrainerAce2_Beaten::
# 45 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 2, Movement_AceTrainer2_MoveOutTheWay
# 46 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 3, Movement_AceTrainer3_MoveToPosition
# 47 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 3
# 48 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	trainerbattle_single MEGATOWER5F_TRAINERACE3, Megatower5F_TrainerAce3_Intro, Megatower5F_TrainerAce3_Outro, Megatower5F_TrainerAce3_Beaten
	return


Megatower5F_TrainerAce3_Beaten::
# 52 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 3, Movement_AceTrainer3_MoveOutTheWay
# 53 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 4, Movement_AceTrainer4_MoveToPosition
# 54 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 4
# 55 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	trainerbattle_single MEGATOWER5F_TRAINERACE4, Megatower5F_TrainerAce4_Intro, Megatower5F_TrainerAce4_Outro, Megatower5F_TrainerAce4_Beaten
	return


Megatower5F_TrainerAce4_Beaten::
# 59 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerAce4_Beaten_Text_0
# 60 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	clearflag FLAG_HIDE_EXPERT_MEGATOWER
# 61 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	addobject 5
# 62 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 4, Movement_AceTrainer4_MoveOutTheWay
# 63 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	applymovement 5, Movement_AceTrainer3_MoveToPosition
# 64 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	waitmovement 5
# 65 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	trainerbattle_single MEGATOWER5F_TRAINEREXPERT, Megatower5F_TrainerExpert_Intro, Megatower5F_TrainerExpert_Outro, Megatower5F_TrainerExpert_Beaten
	return


Megatower5F_TrainerExpert_Beaten::
# 69 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_0
# 70 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	special DoDomeConfetti
# 71 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	goto_if_set FLAG_MEGA_TOWER_BEATEN, Megatower5F_TrainerExpert_Beaten_2
Megatower5F_TrainerExpert_Beaten_1:
# 77 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	goto_if_unset FLAG_MEGA_TOWER_BEATEN, Megatower5F_TrainerExpert_Beaten_5
Megatower5F_TrainerExpert_Beaten_4:
# 85 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_5
	return

Megatower5F_TrainerExpert_Beaten_2:
# 72 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_1, MSGBOX_AUTOCLOSE
# 73 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	addmoney 10000
	goto Megatower5F_TrainerExpert_Beaten_1

Megatower5F_TrainerExpert_Beaten_5:
# 78 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_2, MSGBOX_AUTOCLOSE
# 79 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	giveitem ITEM_MEGA_RING
# 80 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	addmoney 10000
# 81 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	setflag FLAG_MEGA_TOWER_BEATEN
# 82 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_3
# 83 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_4
	goto Megatower5F_TrainerExpert_Beaten_4


MegaTower5F_Expert::
# 90 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	lockall
# 91 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	faceplayer
# 92 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox Megatower5F_TrainerExpert_Beaten_Text_5
# 93 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	releaseall
	return


MegaTower5F_PostChat::
# 98 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	lockall
# 99 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	faceplayer
# 100 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	msgbox MegaTower5F_PostChat_Text_0
# 101 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	releaseall
	return


# 147 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_PlayerToStart_Right:
# 148 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 149 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 150 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 151 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 152 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 153 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 154 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 155 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_right
	step_end

# 158 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_PlayerToStart_Left:
# 159 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 160 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 161 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 162 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 163 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 164 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 165 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_left
# 166 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_right
	step_end

# 169 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer1_MoveToPosition:
# 170 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 171 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 172 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 173 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 174 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 175 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 176 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 177 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 178 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 182 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer2_MoveToPosition:
# 183 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 184 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 185 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 186 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 187 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 188 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 189 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 190 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 193 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer3_MoveToPosition:
# 194 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 195 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 196 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 197 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 198 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 199 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 200 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 203 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer4_MoveToPosition:
# 204 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 205 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 206 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 207 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 208 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 209 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 212 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer1_MoveOutTheWay:
# 213 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 214 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 215 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 216 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 217 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 220 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer2_MoveOutTheWay:
# 221 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 222 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 223 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_down
# 224 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 228 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer3_MoveOutTheWay:
# 229 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 230 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 231 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 232 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 233 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

# 236 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
Movement_AceTrainer4_MoveOutTheWay:
# 237 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 238 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_right
# 239 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	walk_up
# 240 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	face_left
	step_end

BreakwaterPort_MegaTower_5F_Trigger_Right_Text_0:
# 10 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Well done for making it this fair but now\n"
	.string "it's time for you to experience to true\l"
	.string "power of Mega Evolution.$"

BreakwaterPort_MegaTower_5F_Trigger_Right_Text_1:
# 13 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "I hope you're ready I'll be your first\n"
	.string "opponent.$"

Megatower5F_TrainerAce4_Beaten_Text_0:
# 59 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Well done but you still have one more\n"
	.string "battle to overcome.$"

Megatower5F_TrainerExpert_Beaten_Text_0:
# 69 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Wow, you really are a special trainer.$"

Megatower5F_TrainerExpert_Beaten_Text_1:
# 72 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Well done, you really have shown it was\n"
	.string "no mistake giving you that ring.$"

Megatower5F_TrainerExpert_Beaten_Text_2:
# 78 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "You've really shown your skill as a\n"
	.string "trainer and bond with your Pokemon. You\l"
	.string "really do deserve this reward.$"

Megatower5F_TrainerExpert_Beaten_Text_3:
# 82 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "When you have this ring equipped you'll\n"
	.string "be able to mega evolve your Pokemon\l"
	.string "that's holding a mega stone.$"

Megatower5F_TrainerExpert_Beaten_Text_4:
# 83 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "I'm sure with this new power you'll be a\n"
	.string "champion in no time.$"

Megatower5F_TrainerExpert_Beaten_Text_5:
# 85 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Good luck with your journey I'm sure we\n"
	.string "will see you again.$"

MegaTower5F_PostChat_Text_0:
# 100 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Wow you really are incredible.$"

Megatower5F_TrainerAce1_Intro::
# 105 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "What you've done so far was a warm up,\n"
	.string "this is the true challenge.$"

Megatower5F_TrainerAce1_Outro::
# 109 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "I expected nothing less from you.$"

Megatower5F_TrainerAce2_Intro::
# 113 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Are you ready to feel the power of my\n"
	.string "true ace?$"

Megatower5F_TrainerAce2_Outro::
# 117 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "You continue to surpass me.$"

Megatower5F_TrainerAce3_Intro::
# 121 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "This will be where you challenge ends$"

Megatower5F_TrainerAce3_Outro::
# 125 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "I mispoke.$"

Megatower5F_TrainerAce4_Intro::
# 129 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "You're nearing the end, we never\n"
	.string "thought you would be this strong.$"

Megatower5F_TrainerAce4_Outro::
# 133 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "One more to go.$"

Megatower5F_TrainerExpert_Intro::
# 137 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "You've shown yourself to be incredibly\n"
	.string "strong but you have one last challenge\l"
	.string "to overcome.$"

Megatower5F_TrainerExpert_Outro::
# 141 "data/maps/BreakwaterPort_MegaTower_5F/scripts.pory"
	.string "Well, I believe I should reward you.$"
