DeeperQuarryGF_MapScripts::
	.byte 0


Trigger_Quarry_Entrance::
	lockall
	playmoncry SPECIES_STEELIX, CRY_MODE_ENCOUNTER
	releaseall
	return

