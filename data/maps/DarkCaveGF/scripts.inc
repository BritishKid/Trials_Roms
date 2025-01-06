DarkCaveGF_MapScripts::
	.byte 0


DarkCaveGF_Battle_LostYoungster::
# 5 "data/maps/DarkCaveGF/scripts.pory"
	trainerbattle_single DARKCAVE_YOUNGSTER, DarkCave_Youngster_Intro, DarkCave_Youngster_Outro, Increase_Trainers_Beaten
# 6 "data/maps/DarkCaveGF/scripts.pory"
	msgbox DarkCave_Youngster_PostBattle, MSGBOX_AUTOCLOSE
	return


DarkCaveGF_Battle_LostThug::
# 10 "data/maps/DarkCaveGF/scripts.pory"
	trainerbattle_single DARKCAVE_THUG, DarkCave_Thug_Intro, DarkCave_Thug_Outro, Increase_Trainers_Beaten
# 11 "data/maps/DarkCaveGF/scripts.pory"
	msgbox DarkCave_Thug_PostBattle, MSGBOX_AUTOCLOSE
	return


DarkCave_Youngster_Intro::
# 17 "data/maps/DarkCaveGF/scripts.pory"
	.string "HOW DO I GET OUT OF HERE!$"

DarkCave_Youngster_Outro::
# 21 "data/maps/DarkCaveGF/scripts.pory"
	.string "I can't find the exit...$"

DarkCave_Youngster_PostBattle::
# 25 "data/maps/DarkCaveGF/scripts.pory"
	.string "Oh I'm not that far, that's good.$"

DarkCave_Thug_Intro::
# 29 "data/maps/DarkCaveGF/scripts.pory"
	.string "How did you get past the rest of us?$"

DarkCave_Thug_Outro::
# 33 "data/maps/DarkCaveGF/scripts.pory"
	.string "I guess you really did beat them all.$"

DarkCave_Thug_PostBattle::
# 37 "data/maps/DarkCaveGF/scripts.pory"
	.string "They've just abandoned me in this cave.$"
