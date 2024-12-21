DarkCave1F_MapScripts::
	.byte 0


DarkCave1F_EventScript_Steven::
# 5 "data/maps/DarkCave1F/scripts.pory"
	lockall
# 6 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_0
# 7 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave1F_EventScript_Steven_Text_1
# 8 "data/maps/DarkCave1F/scripts.pory"
	releaseall
	return


DarkCave_DepletedBlueStone::
# 14 "data/maps/DarkCave1F/scripts.pory"
	lockall
# 15 "data/maps/DarkCave1F/scripts.pory"
	msgbox DarkCave_DepletedBlueStone_Text_0
# 16 "data/maps/DarkCave1F/scripts.pory"
	releaseall
	return


DarkCave1F_EventScript_Steven_Text_0:
# 6 "data/maps/DarkCave1F/scripts.pory"
	.string "These crystals are fascinating.$"

DarkCave1F_EventScript_Steven_Text_1:
# 7 "data/maps/DarkCave1F/scripts.pory"
	.string "STEVEN QUEST COMING SOON!$"

DarkCave_DepletedBlueStone_Text_0:
# 15 "data/maps/DarkCave1F/scripts.pory"
	.string "It's been depleted$"
