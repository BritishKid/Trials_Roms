EmberDunes_3_MapScripts::
	.byte 0


EmberDune_EventScript_GymSign::
# 9 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 10 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_EventScript_GymSign_Text_0, MSGBOX_AUTOCLOSE
# 11 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return


EmberDune_Trigger_FirstTimeToGym_Center::
# 15 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 16 "data/maps/EmberDunes_3/scripts.pory"
	goto_if_set FLAG_VISITED_EMBERFALL_TOWN, EmberDune_Trigger_FirstTimeToGym_Center_2
EmberDune_Trigger_FirstTimeToGym_Center_1:
# 23 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EmberDune_Trigger_FirstTimeToGym_Center_2:
# 18 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_Trigger_FirstTimeToGym_Center_Text_0, MSGBOX_AUTOCLOSE
# 19 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 1, Movement_NurseToPlayer_Center_EmberDune
# 20 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 1
# 21 "data/maps/EmberDunes_3/scripts.pory"
	call EmberDune_NurseEncounter
	goto EmberDune_Trigger_FirstTimeToGym_Center_1


EmberDune_Trigger_FirstTimeToGym_Right::
# 27 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 28 "data/maps/EmberDunes_3/scripts.pory"
	goto_if_set FLAG_VISITED_EMBERFALL_TOWN, EmberDune_Trigger_FirstTimeToGym_Right_2
EmberDune_Trigger_FirstTimeToGym_Right_1:
# 35 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EmberDune_Trigger_FirstTimeToGym_Right_2:
# 30 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_Trigger_FirstTimeToGym_Center_Text_0, MSGBOX_AUTOCLOSE
# 31 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 1, Movement_NurseToPlayer_Right_EmberDune
# 32 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 1
# 33 "data/maps/EmberDunes_3/scripts.pory"
	call EmberDune_NurseEncounter
	goto EmberDune_Trigger_FirstTimeToGym_Right_1


EmberDune_Trigger_FirstTimeToGym_Left::
# 39 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 40 "data/maps/EmberDunes_3/scripts.pory"
	goto_if_set FLAG_VISITED_EMBERFALL_TOWN, EmberDune_Trigger_FirstTimeToGym_Left_2
EmberDune_Trigger_FirstTimeToGym_Left_1:
# 47 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EmberDune_Trigger_FirstTimeToGym_Left_2:
# 42 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_Trigger_FirstTimeToGym_Center_Text_0, MSGBOX_AUTOCLOSE
# 43 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 1, Movement_NurseToPlayer_Left_EmberDune
# 44 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 1
# 45 "data/maps/EmberDunes_3/scripts.pory"
	call EmberDune_NurseEncounter
	goto EmberDune_Trigger_FirstTimeToGym_Left_1


EmberDune_NurseEncounter::
# 51 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_NurseEncounter_Text_0, MSGBOX_AUTOCLOSE
# 52 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_NurseEncounter_Text_1, MSGBOX_AUTOCLOSE
# 53 "data/maps/EmberDunes_3/scripts.pory"
	special HealPlayerParty
# 54 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EmberDune_NurseEncounter_Text_2, MSGBOX_AUTOCLOSE
# 55 "data/maps/EmberDunes_3/scripts.pory"
	setvar VAR_EMBER_DUNES_GYM_STATE, 1
# 56 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 1, Movement_NurseToGround
# 57 "data/maps/EmberDunes_3/scripts.pory"
	setflag FLAG_HIDE_EMBERDUNES_NURSE
# 58 "data/maps/EmberDunes_3/scripts.pory"
	removeobject 1
# 59 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return


EmberDune_Trigger_SkipGymIntro::
# 63 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 64 "data/maps/EmberDunes_3/scripts.pory"
	goto_if_set FLAG_VISITED_EMBERFALL_TOWN, EmberDune_Trigger_SkipGymIntro_1
	return

EmberDune_Trigger_SkipGymIntro_1:
# 65 "data/maps/EmberDunes_3/scripts.pory"
	setflag FLAG_HIDE_EMBERDUNES_NURSE
# 66 "data/maps/EmberDunes_3/scripts.pory"
	setvar VAR_EMBER_DUNES_GYM_STATE, 1
# 67 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return


EventScript_Gym4_MeetRob::
# 73 "data/maps/EmberDunes_3/scripts.pory"
	lockall
# 74 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_0
# 75 "data/maps/EmberDunes_3/scripts.pory"
	removeobject 2
# 76 "data/maps/EmberDunes_3/scripts.pory"
	addobject 2
# 77 "data/maps/EmberDunes_3/scripts.pory"
	setobjectxy 2, 27, 20
# 78 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 2, Movement_Gym2_Robert_Approaches
# 79 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 2
# 80 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_1
# 81 "data/maps/EmberDunes_3/scripts.pory"
	clearflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
# 82 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_MeetRob_2
# 94 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_4
# 95 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 2, Movement_Gym4_RobToRight
# 96 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 2
# 97 "data/maps/EmberDunes_3/scripts.pory"
	setvar VAR_ROBERT_STATUS, 7
EventScript_Gym4_MeetRob_1:
# 99 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EventScript_Gym4_MeetRob_2:
# 83 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_2, MSGBOX_YESNO
# 84 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_MeetRob_5
# 88 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_3
# 89 "data/maps/EmberDunes_3/scripts.pory"
	applymovement 2, Movement_Gym4_RobToRight
# 90 "data/maps/EmberDunes_3/scripts.pory"
	waitmovement 2
# 91 "data/maps/EmberDunes_3/scripts.pory"
	setvar VAR_ROBERT_STATUS, 7
	goto EventScript_Gym4_MeetRob_1

EventScript_Gym4_MeetRob_5:
# 85 "data/maps/EmberDunes_3/scripts.pory"
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym4_RobertBeaten
	goto EventScript_Gym4_MeetRob_1


EventScript_Gym4_Robert_FindLater::
# 103 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 7
	goto_if_eq EventScript_Gym4_Robert_FindLater_2
EventScript_Gym4_Robert_FindLater_1:
# 114 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 8
	goto_if_eq EventScript_Gym4_Robert_FindLater_5
EventScript_Gym4_Robert_FindLater_4:
# 117 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EventScript_Gym4_Robert_FindLater_2:
# 104 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_Robert_FindLater_Text_0
# 105 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_TRAINERS_BEATEN_CHECK, 60
	goto_if_ge EventScript_Gym4_Robert_FindLater_7
# 111 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_3
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_5:
# 115 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_Robert_FindLater_Text_1
	goto EventScript_Gym4_Robert_FindLater_4

EventScript_Gym4_Robert_FindLater_7:
# 106 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_MeetRob_Text_2, MSGBOX_YESNO
# 107 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq EventScript_Gym4_Robert_FindLater_10
	goto EventScript_Gym4_Robert_FindLater_1

EventScript_Gym4_Robert_FindLater_10:
# 108 "data/maps/EmberDunes_3/scripts.pory"
	trainerbattle_single TRAINER_FOURTH_ENCOUNTER_ROBERT, MahoganyHills_Robert_Intro, MahoganyHills_Robert_Outro, EventScript_Gym2_RobertBeaten
	goto EventScript_Gym4_Robert_FindLater_1


EventScript_Gym4_RobertBeaten::
# 122 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_0
# 123 "data/maps/EmberDunes_3/scripts.pory"
	giveitem ITEM_ABILITY_PATCH, 1
# 124 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_1
# 125 "data/maps/EmberDunes_3/scripts.pory"
	compare VAR_ROBERT_STATUS, 6
	goto_if_eq EventScript_Gym4_RobertBeaten_2
EventScript_Gym4_RobertBeaten_1:
# 129 "data/maps/EmberDunes_3/scripts.pory"
	setvar VAR_ROBERT_STATUS, 8
# 130 "data/maps/EmberDunes_3/scripts.pory"
	setflag FLAG_HIDE_FOURTH_ENCOUNTER_ROB
# 131 "data/maps/EmberDunes_3/scripts.pory"
	releaseall
	return

EventScript_Gym4_RobertBeaten_2:
# 126 "data/maps/EmberDunes_3/scripts.pory"
	msgbox EventScript_Gym4_RobertBeaten_Text_2
# 127 "data/maps/EmberDunes_3/scripts.pory"
	call EventScript_Gym3_RobertLeaves
	goto EventScript_Gym4_RobertBeaten_1


# 135 "data/maps/EmberDunes_3/scripts.pory"
Movement_NurseToPlayer_Center_EmberDune:
# 136 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 137 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 138 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 139 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 140 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
	step_end

# 143 "data/maps/EmberDunes_3/scripts.pory"
Movement_NurseToPlayer_Right_EmberDune:
# 144 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 145 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 146 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 147 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 148 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 149 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 150 "data/maps/EmberDunes_3/scripts.pory"
	face_right
	step_end

# 154 "data/maps/EmberDunes_3/scripts.pory"
Movement_NurseToPlayer_Left_EmberDune:
# 155 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 156 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 157 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 158 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 159 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 160 "data/maps/EmberDunes_3/scripts.pory"
	walk_down
# 161 "data/maps/EmberDunes_3/scripts.pory"
	face_left
	step_end

# 164 "data/maps/EmberDunes_3/scripts.pory"
Movement_NurseToGround:
# 165 "data/maps/EmberDunes_3/scripts.pory"
	walk_up
# 166 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 167 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 168 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 169 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 170 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 171 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 172 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 173 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
# 174 "data/maps/EmberDunes_3/scripts.pory"
	walk_left
	step_end

# 177 "data/maps/EmberDunes_3/scripts.pory"
Movement_Gym4_RobToRight:
# 178 "data/maps/EmberDunes_3/scripts.pory"
	walk_right
# 179 "data/maps/EmberDunes_3/scripts.pory"
	walk_up
# 180 "data/maps/EmberDunes_3/scripts.pory"
	face_down
	step_end

EmberDune_EventScript_GymSign_Text_0:
# 10 "data/maps/EmberDunes_3/scripts.pory"
	.string "Ember Dunes Gym\l"
	.string "Battle the chill down your spine.$"

EmberDune_Trigger_FirstTimeToGym_Center_Text_0:
# 18 "data/maps/EmberDunes_3/scripts.pory"
	.string "You're nearly there!$"

EmberDune_NurseEncounter_Text_0:
# 51 "data/maps/EmberDunes_3/scripts.pory"
	.string "Up here is the Ember Dunes gym and you\n"
	.string "look like you've been a long way already.\l"
	.string "Sarah is a strong trainer that you\l"
	.string "should probably go to town first, its\l"
	.string "just down the stairs and left through\l"
	.string "the cave.$"

EmberDune_NurseEncounter_Text_1:
# 52 "data/maps/EmberDunes_3/scripts.pory"
	.string "Although it's not like I can ever stop a\n"
	.string "determined trainer but atleast let me\l"
	.string "heal your party.$"

EmberDune_NurseEncounter_Text_2:
# 54 "data/maps/EmberDunes_3/scripts.pory"
	.string "If you need me I'm setting up a\n"
	.string "travelling healing spot brave trainers\l"
	.string "in the desert.$"

EventScript_Gym4_MeetRob_Text_0:
# 74 "data/maps/EmberDunes_3/scripts.pory"
	.string "You made it!$"

EventScript_Gym4_MeetRob_Text_1:
# 80 "data/maps/EmberDunes_3/scripts.pory"
	.string "You've been making huge wave as\n"
	.string "amongst the trainers on your way here.$"

EventScript_Gym4_MeetRob_Text_2:
# 83 "data/maps/EmberDunes_3/scripts.pory"
	.string "Are you ready to go again?$"

EventScript_Gym4_MeetRob_Text_3:
# 88 "data/maps/EmberDunes_3/scripts.pory"
	.string "Oh that's a shame. I'll see you another\n"
	.string "time then.$"

EventScript_Gym4_MeetRob_Text_4:
# 94 "data/maps/EmberDunes_3/scripts.pory"
	.string "Oh you've been slacking, you're not\n"
	.string "ready.$"

EventScript_Gym4_Robert_FindLater_Text_0:
# 104 "data/maps/EmberDunes_3/scripts.pory"
	.string "Oh it's you.\n"
	.string "Hello$"

EventScript_Gym4_Robert_FindLater_Text_1:
# 115 "data/maps/EmberDunes_3/scripts.pory"
	.string "I'll train some more and beat you by the\n"
	.string "next gym.$"

EventScript_Gym4_RobertBeaten_Text_0:
# 122 "data/maps/EmberDunes_3/scripts.pory"
	.string "Wow you're incredible, here take this!$"

EventScript_Gym4_RobertBeaten_Text_1:
# 124 "data/maps/EmberDunes_3/scripts.pory"
	.string "You can use it to bring out the Hidden\n"
	.string "Ability for your Pokémon.\p"
	.string "It can make your Pokémon much\n"
	.string "stronger!$"

EventScript_Gym4_RobertBeaten_Text_2:
# 126 "data/maps/EmberDunes_3/scripts.pory"
	.string "Anyway I'll catch you later!$"
