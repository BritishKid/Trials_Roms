Route4_Dojo_MapScripts::
	.byte 0


Brawley_Route4_Dojo::
# 4 "data/maps/Route4_Dojo/scripts.pory"
	lockall
# 5 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 1
	goto_if_eq Brawley_Route4_Dojo_2
Brawley_Route4_Dojo_1:
# 8 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 0
	goto_if_eq Brawley_Route4_Dojo_5
Brawley_Route4_Dojo_4:
# 15 "data/maps/Route4_Dojo/scripts.pory"
	releaseall
	return

Brawley_Route4_Dojo_2:
# 6 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_0
	goto Brawley_Route4_Dojo_1

Brawley_Route4_Dojo_5:
# 9 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_1
# 10 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_2
# 11 "data/maps/Route4_Dojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, Brawley_Route4_Outro
# 12 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_3
# 13 "data/maps/Route4_Dojo/scripts.pory"
	setvar VAR_ROUTE4_DOJO_STATE, 1
	goto Brawley_Route4_Dojo_4


Brawley_Route4_Dojo_Text_0:
# 6 "data/maps/Route4_Dojo/scripts.pory"
	.string "Have you found any of the masters\n"
	.string "hidden in the mountains?$"

Brawley_Route4_Dojo_Text_1:
# 9 "data/maps/Route4_Dojo/scripts.pory"
	.string "Welcome to my new Dojo!\l"
	.string "This will soon be full of martial artists\l"
	.string "from all over the world hunting down the\l"
	.string "ancient dojos in these mountains.$"

Brawley_Route4_Dojo_Text_2:
# 10 "data/maps/Route4_Dojo/scripts.pory"
	.string "Enough talk, I can see you're a Pokemon\n"
	.string "Trainer so I know what you came for.$"

Brawley_Route4_Dojo_Text_3:
# 12 "data/maps/Route4_Dojo/scripts.pory"
	.string "Well done kid, you might have what it\n"
	.string "takes to become a black belt$"

Brawley_Route4_Outro::
# 19 "data/maps/Route4_Dojo/scripts.pory"
	.string "Damn kid$"
