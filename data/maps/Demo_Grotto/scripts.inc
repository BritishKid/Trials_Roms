Demo_Grotto_MapScripts::
	.byte 0


Battle_TRAINER_TOWN2_PLATEFALL_GUARD::
# 5 "data/maps/Demo_Grotto/scripts.pory"
	trainerbattle_single TRAINER_TOWN2_PLATEFALL_GUARD, Demo_Intro, Demo_Outro
# 6 "data/maps/Demo_Grotto/scripts.pory"
	msgbox PostBattle_Demo, MSGBOX_AUTOCLOSE
# 7 "data/maps/Demo_Grotto/scripts.pory"
	waitmessage
	end


Demo_Intro::
# 12 "data/maps/Demo_Grotto/scripts.pory"
	.string "Testing Tangela Triver$"

Demo_Outro::
# 16 "data/maps/Demo_Grotto/scripts.pory"
	.string "Did it work$"

PostBattle_Demo::
# 20 "data/maps/Demo_Grotto/scripts.pory"
	.string "Reset$"
