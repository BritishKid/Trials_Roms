BedrockTown_MapScripts::
	.byte 0


BedrockTown_TownSign::
# 6 "data/maps/BedrockTown/scripts.pory"
	lockall
# 7 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_TownSign_Text_0, MSGBOX_DEFAULT
# 8 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_LabSign::
# 12 "data/maps/BedrockTown/scripts.pory"
	lockall
# 13 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_LabSign_Text_0, MSGBOX_DEFAULT
# 14 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


BedrockTown_TownSign_Text_0:
# 7 "data/maps/BedrockTown/scripts.pory"
	.string "Bedrock Town:\n"
	.string "An ancient lake now full of life.$"

BedrockTown_LabSign_Text_0:
# 13 "data/maps/BedrockTown/scripts.pory"
	.string "Professor Holly's Lab.\n"
	.string "Leading the research into a lost past.$"
