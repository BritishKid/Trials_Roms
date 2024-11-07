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


BedrockTown_EventScript_HollyAid::
# 18 "data/maps/BedrockTown/scripts.pory"
	lockall
# 19 "data/maps/BedrockTown/scripts.pory"
	msgbox BedrockTown_EventScript_HollyAid_Text_0, MSGBOX_DEFAULT
# 20 "data/maps/BedrockTown/scripts.pory"
	releaseall
	return


COMINGSOON::
# 24 "data/maps/BedrockTown/scripts.pory"
	lockall
# 25 "data/maps/BedrockTown/scripts.pory"
	msgbox COMINGSOON_Text_0
# 26 "data/maps/BedrockTown/scripts.pory"
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

BedrockTown_EventScript_HollyAid_Text_0:
# 19 "data/maps/BedrockTown/scripts.pory"
	.string "Sorry no one is allowed through with\n"
	.string "Professor Holly's permission.$"

COMINGSOON_Text_0:
# 25 "data/maps/BedrockTown/scripts.pory"
	.string "COMING SOON$"
