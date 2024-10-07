BedrockTown_ProfessorHollyLab_MapScripts::
	.byte 0


BedrockTownLab_EventScript_ProfessorHolly::
	lockall
	faceplayer
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_0
	goto_if_set FLAG_BADGE04_GET, BedrockTownLab_EventScript_ProfessorHolly_2
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_3
BedrockTownLab_EventScript_ProfessorHolly_1:
	releaseall
	return

BedrockTownLab_EventScript_ProfessorHolly_2:
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_1
	setflag FLAG_ACCESS_BEDROCK_LAKE_CAVE
	setvar VAR_METEOR_FALLS_STATE, 1
	msgbox BedrockTownLab_EventScript_ProfessorHolly_Text_2
	goto BedrockTownLab_EventScript_ProfessorHolly_1


BedrockTownLab_EventScript_ProfessorAssistant::
	lockall
	faceplayer
	msgbox BedrockTownLab_EventScript_ProfessorAssistant_Text_0
	releaseall
	return


BedrockTownLab_EventScript_Exit::
	lockall
	goto_if_set FLAG_ACCESS_BEDROCK_LAKE_CAVE, BedrockTownLab_EventScript_Exit_2
	msgbox BedrockTownLab_EventScript_Exit_Text_0
BedrockTownLab_EventScript_Exit_1:
	releaseall
	return

BedrockTownLab_EventScript_Exit_2:
	warp MAP_BEDROCK_TOWN, 24, 12
	goto BedrockTownLab_EventScript_Exit_1


BedrockTownLab_EventScript_ProfessorHolly_Text_0:
	.string "Hi welcome to my lab. I'm Professor\n"
	.string "Holly.\p"
	.string "I'm currently putting together a team\n"
	.string "to do an expedition into the cave\l"
	.string "beneath the town.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_1:
	.string "Oh well done you've managed to get 4\n"
	.string "badges! Maybe you could assist me.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_2:
	.string "Head through that door and come help\n"
	.string "me on an my next research expedition.$"

BedrockTownLab_EventScript_ProfessorHolly_Text_3:
	.string "Prove you're strong enough by getting 4\n"
	.string "badges and you can assist me.$"

BedrockTownLab_EventScript_ProfessorAssistant_Text_0:
	.string "Professor Holly is doing incredible\n"
	.string "research into the legendary Pokémon\l"
	.string "that created the lakes. As this one has\l"
	.string "dried out revealing a deep cavern it\l"
	.string "makes it the easiest place to research.$"

BedrockTownLab_EventScript_Exit_Text_0:
	.string "I don't have permission to go back here\n"
	.string "yet.$"
