BedrockTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, BedrockTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BedrockTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
	setflag FLAG_VISITED_BEDROCK_TOWN
	return


BedrockTown_EventScript_HollyLabSign::
	lockall
	msgbox BedrockTown_EventScript_HollyLabSign_Text_0
	releaseall
	return


BedrockTown_EventScript_TownSign::
	lockall
	faceplayer
	msgbox BedrockTown_EventScript_TownSign_Text_0
	releaseall
	return


BedrockTown_EventScript_PlayersHouse::
	lockall
	msgbox BedrockTown_EventScript_PlayersHouse_Text_0
	releaseall
	return


BedrockTown_EventScript_ItemPokeBall::
	finditem ITEM_REPEL, 2
	return


BedrockTown_EventScript_OldMan::
	lockall
	msgbox BedrockTown_EventScript_OldMan_Text_0
	releaseall
	return


BedrockTown_EventScript_Assistant::
	lockall
	faceplayer
	msgbox BedrockTown_EventScript_Assistant_Text_0
	releaseall
	return


BedrockTown_EventScript_HollyLabSign_Text_0:
	.string "Professor Holly's Lab.\p"
	.string "Studying ancient Pokémon legends$"

BedrockTown_EventScript_TownSign_Text_0:
	.string "Bedrock Town.\p"
	.string "Once a deep lake is now a vibrant town.$"

BedrockTown_EventScript_PlayersHouse_Text_0:
	.string "{PLAYER}'s House$"

BedrockTown_EventScript_OldMan_Text_0:
	.string "Thousands of years ago this was a lake\n"
	.string "was created a mysterious Pokémon. It\l"
	.string "dried out as the water carved out a\l"
	.string "cavern underneath which allows us to\l"
	.string "have such a vibrant town!$"

BedrockTown_EventScript_Assistant_Text_0:
	.string "You'll need to speak to Professor Holly\n"
	.string "to go back here, it's full of dangerous\l"
	.string "powerful Pokémon$"
