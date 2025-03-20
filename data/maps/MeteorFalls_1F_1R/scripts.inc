MeteorFalls_1F_1R_MapScripts::
	.byte 0


LostLake_1F_1R_EventScript_StartingTheExpedition::
# 6 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 7 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Movement_Proffessor_InFalls_MovingOver
# 8 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 5
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_StartingTheExpedition_Text_0
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_StartingTheExpedition_Text_1
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_StartingTheExpedition_Text_2
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_StartingTheExpedition_Text_3
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_StartingTheExpedition_Text_4
# 14 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	setvar VAR_LOST_LAKE_STATE, 2
# 15 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	applymovement 5, Movement_Proffessor_InFalls_Heading_Back
# 16 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	waitmovement 5
# 17 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return


LostLake_1F_1R_EventScript_ProfHolly::
# 22 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_ProfHolly_Text_0
# 24 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return


LostLake_1F_1R_EventScript_ProfHollyAssisstant::
# 29 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	lockall
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	msgbox LostLake_1F_1R_EventScript_ProfHollyAssisstant_Text_0
# 31 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	releaseall
	return


# 35 "data/maps/MeteorFalls_1F_1R/scripts.pory"
Movement_Proffessor_InFalls_MovingOver:
# 36 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 37 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 38 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 39 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
# 40 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_right
	step_end

# 43 "data/maps/MeteorFalls_1F_1R/scripts.pory"
Movement_Proffessor_InFalls_Heading_Back:
# 44 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 45 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 46 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 47 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 48 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_left
# 49 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
# 50 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	walk_up
	step_end

LostLake_1F_1R_EventScript_StartingTheExpedition_Text_0:
# 9 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "You made it!$"

LostLake_1F_1R_EventScript_StartingTheExpedition_Text_1:
# 10 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "I'm glad you are here, we really think\n"
	.string "you'll enjoy this!$"

LostLake_1F_1R_EventScript_StartingTheExpedition_Text_2:
# 11 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Bedrock used to be a vibrant lake but\n"
	.string "over millions of years the water from\l"
	.string "the mountains carved this expansive\l"
	.string "cave before it ended up draining the\l"
	.string "lake.$"

LostLake_1F_1R_EventScript_StartingTheExpedition_Text_3:
# 12 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We believe many Pokémon adapted to the\n"
	.string "new conditions but possibly some\l"
	.string "Pokémon could of been preserved in\l"
	.string "their ancient state, we are hoping to\l"
	.string "find them.$"

LostLake_1F_1R_EventScript_StartingTheExpedition_Text_4:
# 13 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "We need your help to fend of some of\n"
	.string "the Pokémon while we look around, it\l"
	.string "gets very treacherous down here.$"

LostLake_1F_1R_EventScript_ProfHolly_Text_0:
# 23 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "Everytime we have tried to go deeper an\n"
	.string "very powerful Pokemon has blocked our\l"
	.string "way.\l"
	.string "Protecting her nest maybe..?$"

LostLake_1F_1R_EventScript_ProfHollyAssisstant_Text_0:
# 30 "data/maps/MeteorFalls_1F_1R/scripts.pory"
	.string "With you here we might finally be able\n"
	.string "to go deeper it gets very treacherous.$"
