ShayminGrotto_MapScripts::
	.byte 0


ShayminGrottoTrigger_DoesPlayerHaveGracideaFlower::
# 4 "data/maps/ShayminGrotto/scripts.pory"
	lockall
# 5 "data/maps/ShayminGrotto/scripts.pory"
	warp MAP_SHAYMIN_ENCOUNTER_GROTTO, 9, 15
# 6 "data/maps/ShayminGrotto/scripts.pory"
	releaseall
	return

