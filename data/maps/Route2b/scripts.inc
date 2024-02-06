Route2b_MapScripts::
	.byte 0


Battle_Route2_Genki::
	trainerbattle_single TRAINER_ROUTE2_GENKI, Route2_Genki_Intro, Route2_Genki_Outro
	msgbox PostBattle_Route2_Genki, MSGBOX_AUTOCLOSE
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


EventScript_Route2_MeetRob::
	lockall
	msgbox EventScript_Route2_MeetRob_Text_0
	removeobject 1
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Route2_ExclamationMark
	waitmovement OBJ_EVENT_ID_PLAYER
	addobject 1
	setobjectxy 1, 10, 24
	applymovement 1, Movement_Route2_Robert_Approaches
	waitmovement 1
	msgbox EventScript_Route2_MeetRob_Text_1
	compare VAR_FIRST_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_Route2_MeetRob_2
	msgbox EventScript_Route2_MeetRob_Text_4
	call EventScript_Route2_RobertLeaves
EventScript_Route2_MeetRob_1:
	releaseall
	return

EventScript_Route2_MeetRob_2:
	msgbox EventScript_Route2_MeetRob_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route2_MeetRob_5
	msgbox EventScript_Route2_MeetRob_Text_3
	call EventScript_Route2_RobertLeaves
	goto EventScript_Route2_MeetRob_1

EventScript_Route2_MeetRob_5:
	trainerbattle_single TRAINER_ROUTE2_ROBERT, Route2_Robert_Intro, Route2_Robert_Outro, EventScript_Route2_RobertBeaten
	goto EventScript_Route2_MeetRob_1


EventScript_Route2b_ItemBall_UltraBall::
	finditem ITEM_ULTRA_BALL, 3
	return


EventScript_Route2_Robert_FindLater::
	compare VAR_ROBERT_STATE, 1
	goto_if_eq EventScript_Route2_Robert_FindLater_2
EventScript_Route2_Robert_FindLater_1:
	compare VAR_ROBERT_STATE, 2
	goto_if_eq EventScript_Route2_Robert_FindLater_5
EventScript_Route2_Robert_FindLater_4:
	releaseall
	return

EventScript_Route2_Robert_FindLater_2:
	msgbox EventScript_Route2_Robert_FindLater_Text_0
	compare VAR_FIRST_TRAINERS_BEATEN_CHECK, 10
	goto_if_ge EventScript_Route2_Robert_FindLater_7
	msgbox EventScript_Route2_Robert_FindLater_Text_2
	goto EventScript_Route2_Robert_FindLater_1

EventScript_Route2_Robert_FindLater_5:
	msgbox EventScript_Route2_Robert_FindLater_Text_3
	goto EventScript_Route2_Robert_FindLater_4

EventScript_Route2_Robert_FindLater_7:
	msgbox EventScript_Route2_Robert_FindLater_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Route2_Robert_FindLater_10
	goto EventScript_Route2_Robert_FindLater_1

EventScript_Route2_Robert_FindLater_10:
	trainerbattle_single TRAINER_ROUTE2_ROBERT, Route2_Robert_Intro, Route2_Robert_Outro, EventScript_Route2_RobertBeaten
	goto EventScript_Route2_Robert_FindLater_1


EventScript_Route2_RobertBeaten::
	msgbox EventScript_Route2_RobertBeaten_Text_0
	giveitem ITEM_ABILITY_PATCH, 1
	msgbox EventScript_Route2_RobertBeaten_Text_1
	compare VAR_ROBERT_STATE, 0
	goto_if_eq EventScript_Route2_RobertBeaten_2
EventScript_Route2_RobertBeaten_1:
	setvar VAR_ROBERT_STATE, 2
	releaseall
	return

EventScript_Route2_RobertBeaten_2:
	msgbox EventScript_Route2_RobertBeaten_Text_2
	call EventScript_Route2_RobertLeaves
	goto EventScript_Route2_RobertBeaten_1


EventScript_Route2_RobertLeaves::
	applymovement 1, Movement_Route2_Robert_Leaves
	waitmovement 1
	setobjectxy 1, 12, 0
	setvar VAR_ROBERT_STATE, 1
	return


EventScript_Route2_Unfinished::
	lockall
	msgbox EventScript_Route2_Unfinished_Text_0
	releaseall
	return


Movement_Route2_ExclamationMark:
	emote_exclamation_mark
	step_end

Movement_Route2_Robert_Approaches:
	face_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_Route2_Robert_Leaves:
	face_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	face_right
	step_end

EventScript_Route2_MeetRob_Text_0:
	.string "So it's you!$"

EventScript_Route2_MeetRob_Text_1:
	.string "I've been hearing word of a new training\n"
	.string "beating everyone.$"

EventScript_Route2_MeetRob_Text_2:
	.string "It must be you, everyones been saying\n"
	.string "about how you destroy them in battle.\p"
	.string "Well how about it, care to show me how\n"
	.string "strong you are?$"

EventScript_Route2_MeetRob_Text_3:
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Route2_MeetRob_Text_4:
	.string "But no it's not you, you're not the one\n"
	.string "they are talking about.\p"
	.string "If you find out who's been winning\n"
	.string "against all the trainers around here\l"
	.string "please come find me so I can see how\l"
	.string "strong they are.$"

EventScript_Route2_Robert_FindLater_Text_0:
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Route2_Robert_FindLater_Text_1:
	.string "I've heard you've been winning alot of\n"
	.string "battles.\p"
	.string "But do you think you're good enough to\n"
	.string "beat me?$"

EventScript_Route2_Robert_FindLater_Text_2:
	.string "I'm still trying to find that strong\n"
	.string "trainer$"

EventScript_Route2_Robert_FindLater_Text_3:
	.string "I'll train some more and beat you next\n"
	.string "time we meet.$"

EventScript_Route2_RobertBeaten_Text_0:
	.string "Wow you're incredible, here take this!$"

EventScript_Route2_RobertBeaten_Text_1:
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokemon.\p"
	.string "It can make your pokemon much\n"
	.string "stronger!$"

EventScript_Route2_RobertBeaten_Text_2:
	.string "Anyway I'll catch you later!$"

EventScript_Route2_Unfinished_Text_0:
	.string "End of the current ROM. Please make\n"
	.string "suggestsion for more to be added$"
