ShayminGrotto_MapScripts::
	.byte 0


ShayminGrottoTrigger_DoesPlayerHaveGracideaFlower::
	lockall
	warp MAP_SHAYMIN_ENCOUNTER_GROTTO, 9, 15
	releaseall
	return

