HauntedMansionGF_MapScripts::
	.byte 0


HauntedMansion_RotomEncounter::
	lockall
	setwildbattle SPECIES_ROTOM, 25
	dowildbattle
	releaseall
	return

