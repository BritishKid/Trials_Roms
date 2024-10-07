BedrockTown_MapScripts::
# 2 "data/maps/BedrockTown/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, BedrockTown_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

BedrockTown_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/BedrockTown/scripts.pory"
	setflag FLAG_VISITED_BEDROCK_TOWN
	return


BedrockTown_EventScript_HollyLabSign::
# 8 "data/maps/BedrockTown/scripts.pory"
	lockall
# 9 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_HollyLabSign_Text_0
# 10 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_EventScript_TownSign::
# 14 "data/maps/BedrockTown/scripts.pory"
	lockall
# 15 "data/maps/BedrockTown/scripts.pory"
	faceplayer
# 16 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_TownSign_Text_0
# 17 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_EventScript_PlayersHouse::
# 21 "data/maps/BedrockTown/scripts.pory"
	lockall
# 22 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_PlayersHouse_Text_0
# 23 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_EventScript_ItemPokeBall::
# 27 "data/maps/BedrockTown/scripts.pory"
	finditem ITEM_REPEL, 2
	return


BedrockTown_EventScript_OldMan::
# 31 "data/maps/BedrockTown/scripts.pory"
	lockall
# 32 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_OldMan_Text_0
# 33 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_EventScript_Assistant::
# 37 "data/maps/BedrockTown/scripts.pory"
	lockall
# 38 "data/maps/BedrockTown/scripts.pory"
	faceplayer
# 39 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_Assistant_Text_0
# 40 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_EventScript_HollyLabSign_Text_0:
# 9 "data/maps/BedrockTown/scripts.pory"
	.string "Professor Holly's Lab.\p"
	.string "Studying ancient Pokémon legends$"

BedrockTown_EventScript_TownSign_Text_0:
# 16 "data/maps/BedrockTown/scripts.pory"
	.string "Bedrock Town.\p"
	.string "Once a deep lake is now a vibrant town.$"

BedrockTown_EventScript_PlayersHouse_Text_0:
# 22 "data/maps/BedrockTown/scripts.pory"
	.string "{PLAYER}'s House$"

BedrockTown_EventScript_OldMan_Text_0:
# 32 "data/maps/BedrockTown/scripts.pory"
	.string "Thousands of years ago this was a lake\n"
	.string "was created a mysterious Pokémon. It\l"
	.string "dried out as the water carved out a\l"
	.string "cavern underneath which allows us to\l"
	.string "have such a vibrant town!$"

BedrockTown_EventScript_Assistant_Text_0:
# 39 "data/maps/BedrockTown/scripts.pory"
	.string "You'll need to speak to Professor Holly\n"
	.string "to go back here, it's full of dangerous\l"
	.string "powerful Pokémon$"
