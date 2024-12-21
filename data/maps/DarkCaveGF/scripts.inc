DarkCaveGF_MapScripts::
	.byte 0


DarkCaveGF_Battle_LostYoungster::
# 5 "data/maps/DarkCaveGF/scripts.pory"
	trainerbattle_single DARKCAVE_YOUNGSTER, DarkCave_Youngster_Intro, DarkCave_Youngster_Outro, Increase_Trainers_Beaten
# 6 "data/maps/DarkCaveGF/scripts.pory"
	msgbox DarkCave_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	return


DarkCave_Youngster_Intro::
# 12 "data/maps/DarkCaveGF/scripts.pory"
	.string "HOW DO I GET OUT OF HERE!$"

DarkCave_Youngster_Outro::
# 16 "data/maps/DarkCaveGF/scripts.pory"
	.string "I can't find the exit...$"

DarkCave_Youngster_PostBattle::
# 20 "data/maps/DarkCaveGF/scripts.pory"
	.string "Oh I'm not that far, that's good.$"
