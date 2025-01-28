# 1 "data/maps/Quarry_BF2/scripts.pory"

# 2 "data/maps/Quarry_BF2/scripts.pory"
Quarry_BF2_MapScripts::
# 3 "data/maps/Quarry_BF2/scripts.pory"
	map_script MAP_SCRIPT_ON_RESUME, Quarry_BF2_SetHoleWarp
# 4 "data/maps/Quarry_BF2/scripts.pory"
	.byte 0
# 5 "data/maps/Quarry_BF2/scripts.pory"

# 6 "data/maps/Quarry_BF2/scripts.pory"
Quarry_BF2_SetHoleWarp::
# 7 "data/maps/Quarry_BF2/scripts.pory"
	setstepcallback STEP_CB_CRACKED_FLOOR
# 8 "data/maps/Quarry_BF2/scripts.pory"
	setholewarp MAP_QUARRY_END
# 9 "data/maps/Quarry_BF2/scripts.pory"
	end
