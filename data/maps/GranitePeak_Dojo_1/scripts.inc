GranitePeak_Dojo_1_MapScripts::
	.byte 0


GranitePeak_Dojo_1_EventScript_BlackBelt::
# 5 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	lockall
# 6 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	faceplayer
# 7 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_BlackBelt_Text_0
# 8 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return


GranitePeak_Dojo_1_EventScript_BlackBelt_2::
# 12 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	lockall
# 13 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	faceplayer
# 14 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_BlackBelt_2_Text_0
# 15 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return


GranitePeak_Dojo_1_EventScript_BlackBelt_3::
# 19 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	lockall
# 20 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	faceplayer
# 21 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_BlackBelt_3_Text_0
# 22 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return


GranitePeak_Dojo_1_EventScript_ItemBall::
# 26 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	lockall
# 27 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_ItemBall_Text_0
# 28 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return


GranitePeak_Dojo_1_EventScript_Expert::
# 32 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	lockall
# 33 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	faceplayer
# 34 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	goto_if_set FLAG_DOJO1_BEATEN, GranitePeak_Dojo_1_EventScript_Expert_2
GranitePeak_Dojo_1_EventScript_Expert_1:
# 37 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	goto_if_unset FLAG_DOJO1_BEATEN, GranitePeak_Dojo_1_EventScript_Expert_5
GranitePeak_Dojo_1_EventScript_Expert_4:
# 53 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return

GranitePeak_Dojo_1_EventScript_Expert_2:
# 35 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_0
	goto GranitePeak_Dojo_1_EventScript_Expert_1

GranitePeak_Dojo_1_EventScript_Expert_5:
# 38 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_1, MSGBOX_DEFAULT
# 39 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_2, MSGBOX_DEFAULT
# 40 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_3, MSGBOX_YESNO
# 41 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_Dojo_1_EventScript_Expert_8
GranitePeak_Dojo_1_EventScript_Expert_7:
# 48 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_Dojo_1_EventScript_Expert_10
	goto GranitePeak_Dojo_1_EventScript_Expert_4

GranitePeak_Dojo_1_EventScript_Expert_8:
# 42 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_4, MSGBOX_AUTOCLOSE
# 43 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 4, Movement_RightBlackbelt_ToRafters
# 44 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerTo_Battle_1
# 45 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 46 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	trainerbattle_single DOJO1_BLACKBELT1, Dojo1_Blackbelt1_Intro, Dojo1_Blackbelt1_Outro, Dojo1_Blackbelt1_PostScript
	goto GranitePeak_Dojo_1_EventScript_Expert_7

GranitePeak_Dojo_1_EventScript_Expert_10:
# 49 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox GranitePeak_Dojo_1_EventScript_Expert_Text_5
	goto GranitePeak_Dojo_1_EventScript_Expert_4


Dojo1_Blackbelt1_PostScript::
# 57 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 3, Movement_LeftBlackbelt_ToRafters
# 58 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 2, Movement_RafterBlackbelt_To_Battle
# 59 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	waitmovement 2
# 60 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	trainerbattle_single DOJO1_BLACKBELT2, Dojo1_Blackbelt2_Intro, Dojo1_Blackbelt2_Outro, Dojo1_Blackbelt2_PostScript
	return


Dojo1_Blackbelt2_PostScript::
# 64 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 2, Movement_RafterBlackbelt_ToRafter
# 65 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 1, Movement_Expert_To_Battle
# 66 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	waitmovement 1
# 67 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	trainerbattle_single DOJO1_EXPERT, Dojo1_Expert_Intro, Dojo1_Expert_Outro, Dojo1_Beaten_Postscript
	return


Dojo1_Beaten_Postscript::
# 71 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox Dojo1_Beaten_Postscript_Text_0
# 72 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 1, Movement_ExpertToTM
# 73 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	waitmovement 1
# 74 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	setflag FLAG_DOJO1_BEATEN
# 75 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	removeobject 5
# 76 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	applymovement 1, Movement_Dojo1_Expert_To_Player
# 77 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	waitmovement 1
# 78 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox Dojo1_Beaten_Postscript_Text_1, MSGBOX_DEFAULT
# 79 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	giveitem ITEM_TM_BULK_UP
# 80 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox Dojo1_Beaten_Postscript_Text_2
# 81 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	msgbox Dojo1_Beaten_Postscript_Text_3
# 82 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	releaseall
	return


# 113 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_RightBlackbelt_ToRafters:
# 114 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 115 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 116 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 117 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 118 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_left
	step_end

# 121 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_PlayerTo_Battle_1:
# 122 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 123 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 124 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 125 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 126 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_left
	step_end

# 129 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_LeftBlackbelt_ToRafters:
# 130 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 131 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 132 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 133 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 134 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_right
	step_end

# 137 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_RafterBlackbelt_To_Battle:
# 138 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 139 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 140 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 141 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 142 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 143 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 144 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_right
	step_end

# 147 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_RafterBlackbelt_ToRafter:
# 148 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_up
# 149 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 150 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 151 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 152 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 153 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 154 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_right
	step_end

# 157 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_Expert_To_Battle:
# 158 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 159 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 160 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 161 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 162 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 163 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_left
# 164 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	face_right
	step_end

# 167 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_ExpertToTM:
# 168 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
# 169 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_up
# 170 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_up
# 171 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_up
	step_end

# 174 "data/maps/GranitePeak_Dojo_1/scripts.pory"
Movement_Dojo1_Expert_To_Player:
# 175 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 176 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 177 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_down
# 178 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	walk_right
	step_end

GranitePeak_Dojo_1_EventScript_BlackBelt_Text_0:
# 7 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Our master is just so strong, no matter\n"
	.string "how much I train she can defend against\l"
	.string "it.$"

GranitePeak_Dojo_1_EventScript_BlackBelt_2_Text_0:
# 14 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Training here take so much out of me\n"
	.string "and my Pokemon.$"

GranitePeak_Dojo_1_EventScript_BlackBelt_3_Text_0:
# 21 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "I'm going to take on the league\n"
	.string "challenge soon, I just need to finish my\l"
	.string "training here.$"

GranitePeak_Dojo_1_EventScript_ItemBall_Text_0:
# 27 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "I can't just take thing's that don't\n"
	.string "belong to me.$"

GranitePeak_Dojo_1_EventScript_Expert_Text_0:
# 35 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Keep up with your training!$"

GranitePeak_Dojo_1_EventScript_Expert_Text_1:
# 38 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Welcome to my Dojo, this is where I\n"
	.string "teach my students the art of patience\l"
	.string "in a battle.$"

GranitePeak_Dojo_1_EventScript_Expert_Text_2:
# 39 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "We focus on taking our time to tire our\n"
	.string "opponents to gain the upper hand. A\l"
	.string "rare skill but invaluable.$"

GranitePeak_Dojo_1_EventScript_Expert_Text_3:
# 40 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "I see you're a Pokemon trainer yourself,\n"
	.string "do you think you have what it takes to\l"
	.string "overcome the Test of Patience?$"

GranitePeak_Dojo_1_EventScript_Expert_Text_4:
# 42 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Let's see if you have what it takes.$"

GranitePeak_Dojo_1_EventScript_Expert_Text_5:
# 49 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "That's not surprising. It's not a\n"
	.string "challenge for everyone.$"

Dojo1_Beaten_Postscript_Text_0:
# 71 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Wow you are strong. Not many trainers\n"
	.string "have been able to break through my\l"
	.string "defence.$"

Dojo1_Beaten_Postscript_Text_1:
# 78 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "You should take this TM, it contains\n"
	.string "Bulk Up.$"

Dojo1_Beaten_Postscript_Text_2:
# 80 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "It can help bring up the offence and\n"
	.string "defence of a Pokemon.$"

Dojo1_Beaten_Postscript_Text_3:
# 81 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "You've impressed today, you should come\n"
	.string "back when you've earnt you own black\l"
	.string "belt and maybe we could spar again.$"

Dojo1_Blackbelt1_Intro::
# 86 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Don't think I'll take it easy on you\n"
	.string "because you're new.$"

Dojo1_Blackbelt1_Outro::
# 90 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Again I have underestimated my\n"
	.string "opponent.$"

Dojo1_Blackbelt2_Intro::
# 94 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Offence will only get you so far.$"

Dojo1_Blackbelt2_Outro::
# 98 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "That was fierce, but it's not over yet.$"

Dojo1_Expert_Intro::
# 103 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "Well you're better than we could of\n"
	.string "expected but can you get past a true\l"
	.string "defensive master?$"

Dojo1_Expert_Outro::
# 107 "data/maps/GranitePeak_Dojo_1/scripts.pory"
	.string "...$"
