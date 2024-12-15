MahoganyHills_GymEntrance_MapScripts::
	.byte 0


MahoganyHills1_GymEntrance_Trigger_RobEncounter::
# 5 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	addobject 1
# 7 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setobjectxy 1, 17, 21
# 8 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	clearflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
# 9 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setvar VAR_ROBERT_STATUS, 1
# 10 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerSurprised_MHGE
# 12 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement 1, Movement_Robert_Gym1_TowardsPlayer
# 13 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	waitmovement 1
# 14 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_gt MahoganyHills1_GymEntrance_Trigger_RobEncounter_2
# 19 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_2, MSGBOX_AUTOCLOSE
# 20 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement 1, Movement_Robert_Gym1_ResetPosition
# 21 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	waitmovement 1
MahoganyHills1_GymEntrance_Trigger_RobEncounter_1:
# 23 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return

MahoganyHills1_GymEntrance_Trigger_RobEncounter_2:
# 15 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_1, MSGBOX_AUTOCLOSE
# 16 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	call MahoganyHills1_GymEntrance_Robert_Battle
	goto MahoganyHills1_GymEntrance_Trigger_RobEncounter_1


MahoganyHills1_GymEntrance_EventScript_RobertSpoke::
# 27 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 28 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	faceplayer
# 29 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_eq MahoganyHills1_GymEntrance_EventScript_RobertSpoke_2
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_1:
# 32 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_gt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_6
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4:
# 36 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_11
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9:
# 39 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_2:
# 30 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_0, MSGBOX_AUTOCLOSE
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_1

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_5:
# 33 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_1, MSGBOX_AUTOCLOSE
# 34 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	call MahoganyHills1_GymEntrance_Robert_Battle
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_6:
# 32 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_5
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_10:
# 37 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_2, MSGBOX_AUTOCLOSE
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_11:
# 36 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_10
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9


MahoganyHills1_GymEntrance_Robert_Battle::
# 43 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Robert_Battle_Text_0, MSGBOX_YESNO
# 44 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills1_GymEntrance_Robert_Battle_1
# 48 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Robert_Battle_Text_1, MSGBOX_AUTOCLOSE
# 49 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement 1, Movement_Robert_Gym1_ResetPosition
# 50 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	waitmovement 1
	end

MahoganyHills1_GymEntrance_Robert_Battle_1:
# 45 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_MAHOGANYHILLSGYM, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, MahoganyHills_Robert_Postbattle
	return


MahoganyHills_Robert_Postbattle::
# 56 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_0, MSGBOX_AUTOCLOSE
# 57 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_1, MSGBOX_AUTOCLOSE
# 58 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 59 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_2, MSGBOX_AUTOCLOSE
# 60 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setvar VAR_ROBERT_STATUS, 2
# 61 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
	return


MahoganyHills1_GymEntrance_EventScript_GymSign::
# 65 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 66 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_GymSign_Text_0, MSGBOX_AUTOCLOSE
# 67 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return


# 80 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
Movement_Robert_Gym1_TowardsPlayer:
# 81 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 82 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 83 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 84 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 85 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 86 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
	step_end

# 89 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
Movement_Robert_Gym1_ResetPosition:
# 90 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_right
# 91 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_right
# 92 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	face_down
	step_end

# 95 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
Movement_PlayerSurprised_MHGE:
# 96 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	emote_exclamation_mark
# 97 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	face_down
	step_end

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_0:
# 10 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I've been hearing all about a tough\n"
	.string "trainer, could it be you?$"

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_1:
# 15 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Yes you fit the desription.$"

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_2:
# 19 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "But you don't fit the description.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_0:
# 30 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I can't wait to battle you again when we\n"
	.string "are stronger.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_1:
# 33 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I've been hearing alot about you.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_2:
# 37 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Can I help you with something?$"

MahoganyHills1_GymEntrance_Robert_Battle_Text_0:
# 43 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Would you like to battle, or are the\n"
	.string "rumours a lie?$"

MahoganyHills1_GymEntrance_Robert_Battle_Text_1:
# 48 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Oh okay$"

MahoganyHills_Robert_Postbattle_Text_0:
# 56 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "That was an incredible battle, you are\n"
	.string "stronger than people say.$"

MahoganyHills_Robert_Postbattle_Text_1:
# 57 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Why don't you take this, it will be very\n"
	.string "helpful.$"

MahoganyHills_Robert_Postbattle_Text_2:
# 59 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "You can use it on a Pokemon to unlock\n"
	.string "their hidden ability.$"

MahoganyHills1_GymEntrance_EventScript_GymSign_Text_0:
# 66 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Mahogany Hills Gym - Leader Jaiden$"

MahoganyHills_Robert_Intro::
# 71 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "This will be an exciting battle!$"

MahoganyHills_Robert_Outro::
# 75 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "The rumours where wrong,\l"
	.string "you're much stronger.$"
