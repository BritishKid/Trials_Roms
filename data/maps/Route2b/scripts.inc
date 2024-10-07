Route2b_MapScripts::
	.byte 0


Battle_Route2_Genki::
	trainerbattle_single TRAINER_ROUTE2_GENKI, Route2_Genki_Intro, Route2_Genki_Outro, Increase_Trainers_Beaten
	msgbox PostBattle_Route2_Genki, MSGBOX_AUTOCLOSE
	waitmessage
	end


EventScript_Route2b_ItemBall_UltraBall::
	finditem ITEM_SUN_STONE, 1
	return

