Route2b_MapScripts::
	.byte 0


Battle_Route2_Genki::
# 4 "data/maps/Route2b/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_GENKI, Route2_Genki_Intro, Route2_Genki_Outro, Increase_Trainers_Beaten
# 5 "data/maps/Route2b/scripts.pory"
	msgbox PostBattle_Route2_Genki, MSGBOX_AUTOCLOSE
# 6 "data/maps/Route2b/scripts.pory"
	waitmessage
	end


EventScript_Route2b_ItemBall_UltraBall::
# 12 "data/maps/Route2b/scripts.pory"
	finditem ITEM_SUN_STONE, 1
	return

