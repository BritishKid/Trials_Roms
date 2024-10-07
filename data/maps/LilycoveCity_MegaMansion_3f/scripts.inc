LilycoveCity_MegaMansion_3f_MapScripts::
	.byte 0


MegaMansion_Secret3::
	lockall
	compare VAR__MEGA_MANSION_STATE, 3
	goto_if_eq MegaMansion_Secret3_2
MegaMansion_Secret3_1:
	releaseall
	return

MegaMansion_Secret3_2:
	setvar VAR__MEGA_MANSION_STATE, 4
	msgbox MegaMansion_Secret3_Text_0
	goto MegaMansion_Secret3_1


MegaMansion_Trainer6::
	trainerbattle_single MEGAMANSION_TRAINER6, MegaMansion_Trainer6_Intro, MegaMansion_Trainer6_Outro, MegaMansion_Trainer_PostbattleScript
	msgbox MegaMansion_Trainer6_Postbattle, MSGBOX_AUTOCLOSE
	release
	return


MegaMansion_Mat_Left::
	msgbox MegaMansion_Mat_Left_Text_0
	applymovement 2, Movement_MegaMansion_MatTowardsPlayer_Left
	waitmovement 2
	msgbox MegaMansion_Mat_Left_Text_1
	msgbox MegaMansion_Mat_Left_Text_2
	msgbox MegaMansion_Mat_Left_Text_3
	trainerbattle_no_intro MEGAMANSION_MATBATTLE, MegaMansion_Mat_Outro
	msgbox MegaMansion_Mat_Left_Text_4
	applymovement 2, Movement_MegaMansion_MatLeaves1_Left
	waitmovement 2
	removeobject 2
	setvar VAR_MAT_STATE, 2
	setflag FLAG_HIDE_MAT_MEGA_MANSION
	return


MegaMansion_Mat_Right::
	msgbox MegaMansion_Mat_Left_Text_0
	applymovement 2, Movement_MegaMansion_MatTowardsPlayer_Right
	waitmovement 2
	msgbox MegaMansion_Mat_Left_Text_1
	msgbox MegaMansion_Mat_Left_Text_2
	msgbox MegaMansion_Mat_Left_Text_3
	trainerbattle_no_intro MEGAMANSION_MATBATTLE, MegaMansion_Mat_Outro
	msgbox MegaMansion_Mat_Left_Text_4
	call MegaMansion_Trainer_PostbattleScript
	applymovement 2, Movement_MegaMansion_MatLeaves1_Right
	waitmovement 2
	removeobject 2
	setvar VAR_MAT_STATE, 2
	setflag FLAG_HIDE_MAT_MEGA_MANSION
	return


Movement_MegaMansion_MatTowardsPlayer_Left:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	emote_exclamation_mark
	step_end

Movement_MegaMansion_MatLeaves1_Left:
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

Movement_MegaMansion_MatTowardsPlayer_Right:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	face_down
	emote_exclamation_mark
	step_end

Movement_MegaMansion_MatLeaves1_Right:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MegaMansion_Secret3_Text_0:
	.string "It's a fully grown bonsai tree$"

MegaMansion_Mat_Left_Text_0:
	.string "It must be somewhere, or am I missing a\n"
	.string "step. Let me go back to the bottom$"

MegaMansion_Mat_Left_Text_1:
	.string "Oh hey it's you! You look like you've\n"
	.string "been getting stronger since the school.\l"
	.string "Are you here to get your Mega Ring\l"
	.string "aswell?$"

MegaMansion_Mat_Left_Text_2:
	.string "I almost have enough stars to be in the\n"
	.string "top 8 so I thought I could spend some\l"
	.string "time looking for the secret garden but\l"
	.string "it's so hard to find.$"

MegaMansion_Mat_Left_Text_3:
	.string "Before I do that let me take you on and\n"
	.string "get that last star. I've got so much\l"
	.string "stronger since last time we faced that\l"
	.string "this will be easy!$"

MegaMansion_Mat_Left_Text_4:
	.string "You're still a tough trainer to fight,\n"
	.string "but when I get my Mega Ring you've got\l"
	.string "no chance!$"

MegaMansion_Trainer6_Intro::
	.string "I can't wait to get my Mega Ring$"

MegaMansion_Trainer6_Outro::
	.string "Although I doubt I'll win the\n"
	.string "tournament$"

MegaMansion_Trainer6_Postbattle::
	.string "You're tough, you might be able to get\n"
	.string "the bonus prize for being the top\l"
	.string "trainer!$"

MegaMansion_Mat_Outro::
	.string "You kept getting stronger to.$"
