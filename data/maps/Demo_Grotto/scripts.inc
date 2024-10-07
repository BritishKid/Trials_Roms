Demo_Grotto_MapScripts::
	.byte 0


Battle_TRAINER_TOWN2_PLATEFALL_GUARD::
	trainerbattle_single TRAINER_TOWN2_PLATEFALL_GUARD, Demo_Intro, Demo_Outro
	msgbox PostBattle_Demo, MSGBOX_AUTOCLOSE
	waitmessage
	end


Demo_Intro::
	.string "Testing Tangela Triver$"

Demo_Outro::
	.string "Did it work$"

PostBattle_Demo::
	.string "Reset$"
