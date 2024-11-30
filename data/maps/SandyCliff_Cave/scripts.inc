SandyCliff_Cave_MapScripts::
	.byte 0


SandyCliffBase_Colin::
# 4 "data/maps/SandyCliff_Cave/scripts.pory"
	trainerbattle_single TRAINER_SANDYCLIFFCOLIN, SandyCliffColin_Intro, SandyCliffColin_Intro, Increase_Trainers_Beaten
# 5 "data/maps/SandyCliff_Cave/scripts.pory"
	msgbox PostBattle_SandyCliffColin, MSGBOX_AUTOCLOSE
	end


SandyCliffColin_Intro::
# 11 "data/maps/SandyCliff_Cave/scripts.pory"
	.string "Fossils are like gems, STURDY AND\n"
	.string "POWERFUL$"

SandyCliffColin_Outro::
# 15 "data/maps/SandyCliff_Cave/scripts.pory"
	.string "MY GEMS!!$"

PostBattle_SandyCliffColin::
# 19 "data/maps/SandyCliff_Cave/scripts.pory"
	.string "I'm always hunting for new and stronger\n"
	.string "fossil Pokémon.$"
