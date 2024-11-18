MahoganyHills_GymEntrance_MapScripts::
	.byte 0


MahoganyHills1_GymEntrance_Trigger_RobEncounter::
# 5 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	clearflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
# 7 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setvar VAR_ROBERT_STATUS, 1
# 8 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setobjectxy 1, 17, 21
# 9 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement 1, Movement_Robert_Gym1_TowardsPlayer
# 10 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	waitmovement 1
# 11 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_0
# 12 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_gt MahoganyHills1_GymEntrance_Trigger_RobEncounter_2
# 17 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_2
# 18 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	applymovement 1, Movement_Robert_Gym1_ResetPosition
MahoganyHills1_GymEntrance_Trigger_RobEncounter_1:
# 20 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return

MahoganyHills1_GymEntrance_Trigger_RobEncounter_2:
# 13 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_1
# 14 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	call MahoganyHills1_GymEntrance_Robert_Battle
	goto MahoganyHills1_GymEntrance_Trigger_RobEncounter_1


MahoganyHills1_GymEntrance_EventScript_RobertSpoke::
# 24 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 25 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	faceplayer
# 26 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_eq MahoganyHills1_GymEntrance_EventScript_RobertSpoke_2
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_1:
# 29 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_gt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_6
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4:
# 33 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 8
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_11
MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9:
# 36 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_2:
# 27 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_0
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_1

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_5:
# 30 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_1
# 31 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	call MahoganyHills1_GymEntrance_Robert_Battle
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_6:
# 29 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_5
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_4

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_10:
# 34 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_2
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_11:
# 33 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	compare VAR_ROBERT_STATUS, 2
	goto_if_lt MahoganyHills1_GymEntrance_EventScript_RobertSpoke_10
	goto MahoganyHills1_GymEntrance_EventScript_RobertSpoke_9


MahoganyHills1_GymEntrance_Robert_Battle::
# 40 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	trainerbattle_single TRAINER_ROBERT_MAHOGANYHILLSGYM, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, MahoganyHills_Robert_Postbattle
	return


MahoganyHills_Robert_Postbattle::
# 44 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_0
# 45 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_1
# 46 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 47 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills_Robert_Postbattle_Text_2
# 48 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setvar VAR_ROBERT_STATUS, 2
# 49 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	setflag FLAG_HIDE_FIRST_ENCOUNTER_ROB
	return


MahoganyHills1_GymEntrance_EventScript_GymSign::
# 53 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	lockall
# 54 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	msgbox MahoganyHills1_GymEntrance_EventScript_GymSign_Text_0
# 55 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	releaseall
	return


# 68 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
Movement_Robert_Gym1_TowardsPlayer:
# 69 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 70 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 71 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 72 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 73 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
# 74 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
Movement_Robert_Gym1_ResetPosition:
# 78 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_right
# 79 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	walk_right
# 80 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	face_down
	step_end

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_0:
# 11 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I've been hearing all about a tough\n"
	.string "trainer, could it be you?$"

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_1:
# 13 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Yes you fit the desription.$"

MahoganyHills1_GymEntrance_Trigger_RobEncounter_Text_2:
# 17 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "But you don't fit the description.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_0:
# 27 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I can't wait to battle you again when we\n"
	.string "are stronger.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_1:
# 30 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "I've been hearing alot about you.$"

MahoganyHills1_GymEntrance_EventScript_RobertSpoke_Text_2:
# 34 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Can I help you with something?$"

MahoganyHills_Robert_Postbattle_Text_0:
# 44 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "That was an incredible battle, you are\n"
	.string "stronger than people say.$"

MahoganyHills_Robert_Postbattle_Text_1:
# 45 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Why don't you take this, it will be very\n"
	.string "helpful.$"

MahoganyHills_Robert_Postbattle_Text_2:
# 47 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "You can use it on a Pokemon to unlock\n"
	.string "their hidden ability.$"

MahoganyHills1_GymEntrance_EventScript_GymSign_Text_0:
# 54 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "Mahogany Hills Gym - Leader Jaiden$"

MahoganyHills_Robert_Intro::
# 59 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "This will be an exciting battle!$"

MahoganyHills_Robert_Outro::
# 63 "data/maps/MahoganyHills_GymEntrance/scripts.pory"
	.string "The rumours where wrong,\l"
	.string "you're much stronger.$"
