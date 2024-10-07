LilycoveCity_MegaMansion_3f_MapScripts::
	.byte 0


MegaMansion_Secret3::
# 4 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	lockall
# 5 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	compare VAR__MEGA_MANSION_STATE, 3
	goto_if_eq MegaMansion_Secret3_2
MegaMansion_Secret3_1:
# 9 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	releaseall
	return

MegaMansion_Secret3_2:
# 6 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	setvar VAR__MEGA_MANSION_STATE, 4
# 7 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Secret3_Text_0
	goto MegaMansion_Secret3_1


MegaMansion_Trainer6::
# 14 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	trainerbattle_single MEGAMANSION_TRAINER6, MegaMansion_Trainer6_Intro, MegaMansion_Trainer6_Outro, MegaMansion_Trainer_PostbattleScript
# 15 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Trainer6_Postbattle, MSGBOX_AUTOCLOSE
# 16 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	release
	return


MegaMansion_Mat_Left::
# 20 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_0
# 21 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	applymovement 2, Movement_MegaMansion_MatTowardsPlayer_Left
# 22 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	waitmovement 2
# 23 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_1
# 24 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_2
# 25 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_3
# 26 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	trainerbattle_no_intro MEGAMANSION_MATBATTLE, MegaMansion_Mat_Outro
# 27 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_4
# 28 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	applymovement 2, Movement_MegaMansion_MatLeaves1_Left
# 29 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	waitmovement 2
# 30 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	removeobject 2
# 31 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	setvar VAR_MAT_STATE, 2
# 32 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	setflag FLAG_HIDE_MAT_MEGA_MANSION
	return


MegaMansion_Mat_Right::
# 36 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_0
# 37 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	applymovement 2, Movement_MegaMansion_MatTowardsPlayer_Right
# 38 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	waitmovement 2
# 39 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_1
# 40 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_2
# 41 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_3
# 42 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	trainerbattle_no_intro MEGAMANSION_MATBATTLE, MegaMansion_Mat_Outro
# 43 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	msgbox MegaMansion_Mat_Left_Text_4
# 44 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	call MegaMansion_Trainer_PostbattleScript
# 45 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	applymovement 2, Movement_MegaMansion_MatLeaves1_Right
# 46 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	waitmovement 2
# 47 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	removeobject 2
# 48 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	setvar VAR_MAT_STATE, 2
# 49 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	setflag FLAG_HIDE_MAT_MEGA_MANSION
	return


# 70 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
Movement_MegaMansion_MatTowardsPlayer_Left:
# 71 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 72 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 73 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 74 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 75 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 76 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 77 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 78 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 79 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 80 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	face_down
# 81 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	emote_exclamation_mark
	step_end

# 84 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
Movement_MegaMansion_MatLeaves1_Left:
# 85 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 86 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 87 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 88 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 89 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 90 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 91 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 92 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 93 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
	step_end

# 96 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
Movement_MegaMansion_MatTowardsPlayer_Right:
# 97 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 98 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 99 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 100 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 101 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 102 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 103 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 104 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 105 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 106 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_fast_right
# 107 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	face_down
# 108 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	emote_exclamation_mark
	step_end

# 111 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
Movement_MegaMansion_MatLeaves1_Right:
# 112 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_left
# 113 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 114 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 115 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 116 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_down
# 117 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 118 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 119 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 120 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
# 121 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	walk_right
	step_end

MegaMansion_Secret3_Text_0:
# 7 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "It's a fully grown bonsai tree$"

MegaMansion_Mat_Left_Text_0:
# 20 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "It must be somewhere, or am I missing a\n"
	.string "step. Let me go back to the bottom$"

MegaMansion_Mat_Left_Text_1:
# 23 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "Oh hey it's you! You look like you've\n"
	.string "been getting stronger since the school.\l"
	.string "Are you here to get your Mega Ring\l"
	.string "aswell?$"

MegaMansion_Mat_Left_Text_2:
# 24 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "I almost have enough stars to be in the\n"
	.string "top 8 so I thought I could spend some\l"
	.string "time looking for the secret garden but\l"
	.string "it's so hard to find.$"

MegaMansion_Mat_Left_Text_3:
# 25 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "Before I do that let me take you on and\n"
	.string "get that last star. I've got so much\l"
	.string "stronger since last time we faced that\l"
	.string "this will be easy!$"

MegaMansion_Mat_Left_Text_4:
# 27 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "You're still a tough trainer to fight,\n"
	.string "but when I get my Mega Ring you've got\l"
	.string "no chance!$"

MegaMansion_Trainer6_Intro::
# 53 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "I can't wait to get my Mega Ring$"

MegaMansion_Trainer6_Outro::
# 57 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "Although I doubt I'll win the\n"
	.string "tournament$"

MegaMansion_Trainer6_Postbattle::
# 61 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "You're tough, you might be able to get\n"
	.string "the bonus prize for being the top\l"
	.string "trainer!$"

MegaMansion_Mat_Outro::
# 65 "data/maps/LilycoveCity_MegaMansion_3f/scripts.pory"
	.string "You kept getting stronger to.$"
