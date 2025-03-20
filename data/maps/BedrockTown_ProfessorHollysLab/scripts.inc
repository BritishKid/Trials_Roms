BedrockTown_ProfessorHollysLab_MapScripts::
	.byte 0


BedrockTownLab_EventScript_ProfessorHolly::
# 5 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	lockall
# 6 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	faceplayer
# 7 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_0
# 8 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	goto_if_set FLAG_BADGE04_GET, BedrockTownLab_EventScript_ProfessorHolly_2
# 14 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_3
BedrockTownLab_EventScript_ProfessorHolly_1:
# 16 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	releaseall
	return

BedrockTownLab_EventScript_ProfessorHolly_2:
# 9 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_1
# 10 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	clearflag FLAG_HIDE_BEDROCK_AIDE
# 11 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	setvar VAR_LOST_LAKE_STATE, 1
# 12 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_2
	goto BedrockTownLab_EventScript_ProfessorHolly_1


BedrockTownLab_EventScript_ProfessorAssistant::
# 20 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	lockall
# 21 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	faceplayer
# 22 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ProfessorAssistant_Text_0
# 23 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	releaseall
	return


BedrockTownLab_EventScript_ExitAide::
# 27 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	lockall
# 28 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	compare VAR_LOST_LAKE_STATE, 0
	goto_if_gt BedrockTownLab_EventScript_ExitAide_2
# 35 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ExitAide_Text_1
BedrockTownLab_EventScript_ExitAide_1:
# 37 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	releaseall
	return

BedrockTownLab_EventScript_ExitAide_2:
# 29 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	msgbox BedrockTownLab_EventScript_ExitAide_Text_0
# 30 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	applymovement 2, Movement_HollysLabAide_AwayFromExit
# 31 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	waitmovement 2
# 32 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	removeobject 2
	goto BedrockTownLab_EventScript_ExitAide_1


# 41 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
Movement_HollysLabAide_AwayFromExit:
# 42 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	walk_up
	step_end

BedrockTownLab_EventScript_ProfessorHolly_Text_0:
# 7 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "Hi welcome to my lab. I'm Professor\n"
	.string "Holly.\p"
	.string "I'm currently putting together a team\n"
	.string "to do an expedition into the cave\l"
	.string "beneath the town.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_1:
# 9 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "Oh well done you've managed to get 4\n"
	.string "badges! Maybe you could assist me.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_2:
# 12 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "Head through that door and come help\n"
	.string "me on an my next research expedition.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_3:
# 14 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "Prove you're strong enough by getting 4\n"
	.string "badges then you can assist me.$"

BedrockTownLab_EventScript_ProfessorAssistant_Text_0:
# 22 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "Professor Holly is doing incredible\n"
	.string "research into the legendary Pokémon\l"
	.string "that created the lakes. As this one has\l"
	.string "dried out revealing a deep cavern it\l"
	.string "makes it the easiest place to research.$"

BedrockTownLab_EventScript_ExitAide_Text_0:
# 29 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "I heard Holly wanted your help in the\n"
	.string "lake, please join us down there.$"

BedrockTownLab_EventScript_ExitAide_Text_1:
# 35 "data/maps/BedrockTown_ProfessorHollysLab/scripts.pory"
	.string "You need Professor Holly's permission\n"
	.string "to go back here.$"
