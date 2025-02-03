# 1 "data/maps/AlteringCave/scripts.pory"
AlteringCave_MapScripts::
# 2 "data/maps/AlteringCave/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, AlteringCave_OnTransition
# 3 "data/maps/AlteringCave/scripts.pory"
	.byte 0
# 4 "data/maps/AlteringCave/scripts.pory"

# 5 "data/maps/AlteringCave/scripts.pory"
AlteringCave_OnTransition:
# 6 "data/maps/AlteringCave/scripts.pory"
	setflag FLAG_LANDMARK_ALTERING_CAVE
# 7 "data/maps/AlteringCave/scripts.pory"
	end
