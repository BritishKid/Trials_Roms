SandyCliffBase_MapScripts::
	.byte 0


SandyCliffBase_Colin::
	trainerbattle_single TRAINER_SANDYCLIFFCOLIN, SandyCliffColin_Intro, SandyCliffColin_Intro
	msgbox PostBattle_EvolutionBoy1, MSGBOX_AUTOCLOSE
	end


SandyCliffColin_Intro::
	.string "Fossils are like gems, STURDY AND\n"
	.string "POWERFUL$"

SandyCliffColin_Outro::
	.string "MY GEMS!!$"

PostBattle_SandyCliffColin::
	.string "I'm always hunting for new and stronger\n"
	.string "fossil pokemon.$"
