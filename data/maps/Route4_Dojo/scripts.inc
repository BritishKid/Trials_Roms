Route4_Dojo_MapScripts::
# 2 "data/maps/Route4_Dojo/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION
	.byte 0

Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION:
# 3 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_DOJOS_CLEARED, 0
	goto_if_gt Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_2
	return

Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1:
# 4 "data/maps/Route4_Dojo/scripts.pory"
	clearflag FLAG_HIDE_ROUTE4_DOJONPCS_1
	return

Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_2:
# 3 "data/maps/Route4_Dojo/scripts.pory"
	goto_if_set FLAG_HIDE_ROUTE4_DOJONPCS_1, Route4_Dojo_MapScripts_MAP_SCRIPT_ON_TRANSITION_1
	return


Brawley_Route4_Dojo::
# 10 "data/maps/Route4_Dojo/scripts.pory"
	lockall
# 11 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 1
	goto_if_eq Brawley_Route4_Dojo_2
Brawley_Route4_Dojo_1:
# 14 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 0
	goto_if_eq Brawley_Route4_Dojo_5
Brawley_Route4_Dojo_4:
# 21 "data/maps/Route4_Dojo/scripts.pory"
	releaseall
	return

Brawley_Route4_Dojo_2:
# 12 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_0
	goto Brawley_Route4_Dojo_1

Brawley_Route4_Dojo_5:
# 15 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_1
# 16 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_2
# 17 "data/maps/Route4_Dojo/scripts.pory"
	trainerbattle_no_intro TRAINER_BRAWLY_1, Brawley_Route4_Outro
# 18 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Brawley_Route4_Dojo_Text_3
# 19 "data/maps/Route4_Dojo/scripts.pory"
	setvar VAR_ROUTE4_DOJO_STATE, 1
	goto Brawley_Route4_Dojo_4


Route4_Dojo_EventScript_BlackBelt1::
# 25 "data/maps/Route4_Dojo/scripts.pory"
	lockall
# 26 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt1_Text_0
# 28 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 1
	goto_if_eq Route4_Dojo_EventScript_BlackBelt1_2
Route4_Dojo_EventScript_BlackBelt1_1:
# 34 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_ROUTE4_DOJO_STATE, 2
	goto_if_eq Route4_Dojo_EventScript_BlackBelt1_6
Route4_Dojo_EventScript_BlackBelt1_4:
# 43 "data/maps/Route4_Dojo/scripts.pory"
	releaseall
	return

Route4_Dojo_EventScript_BlackBelt1_2:
# 29 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt1_Text_1
# 30 "data/maps/Route4_Dojo/scripts.pory"
	giveitem ITEM_FOCUS_BAND
# 31 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt1_Text_2
# 32 "data/maps/Route4_Dojo/scripts.pory"
	setvar VAR_ROUTE4_DOJO_STATE, 2
	goto Route4_Dojo_EventScript_BlackBelt1_1

Route4_Dojo_EventScript_BlackBelt1_5:
# 35 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt1_Text_3
# 36 "data/maps/Route4_Dojo/scripts.pory"
	giveitem ITEM_EXPERT_BELT
# 37 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt1_Text_4
# 38 "data/maps/Route4_Dojo/scripts.pory"
	setvar VAR_ROUTE4_DOJO_STATE, 3
	goto Route4_Dojo_EventScript_BlackBelt1_4

Route4_Dojo_EventScript_BlackBelt1_6:
# 34 "data/maps/Route4_Dojo/scripts.pory"
	compare VAR_DOJOS_CLEARED, 0
	goto_if_gt Route4_Dojo_EventScript_BlackBelt1_5
	goto Route4_Dojo_EventScript_BlackBelt1_4


Route4_Dojo_EventScript_BlackBelt2::
# 47 "data/maps/Route4_Dojo/scripts.pory"
	lockall
# 48 "data/maps/Route4_Dojo/scripts.pory"
	msgbox Route4_Dojo_EventScript_BlackBelt2_Text_0
# 49 "data/maps/Route4_Dojo/scripts.pory"
	releaseall
	return


Brawley_Route4_Dojo_Text_0:
# 12 "data/maps/Route4_Dojo/scripts.pory"
	.string "Have you found any of the masters\n"
	.string "hidden in the mountains?$"

Brawley_Route4_Dojo_Text_1:
# 15 "data/maps/Route4_Dojo/scripts.pory"
	.string "Welcome to my new Dojo!\l"
	.string "This will soon be full of martial artists\l"
	.string "from all over the world hunting down the\l"
	.string "ancient dojos in these mountains.$"

Brawley_Route4_Dojo_Text_2:
# 16 "data/maps/Route4_Dojo/scripts.pory"
	.string "Enough talk, I can see you're a Pokémon\n"
	.string "Trainer so I know what you came for.$"

Brawley_Route4_Dojo_Text_3:
# 18 "data/maps/Route4_Dojo/scripts.pory"
	.string "Well done kid, you might have what it\n"
	.string "takes to become a black belt$"

Route4_Dojo_EventScript_BlackBelt1_Text_0:
# 26 "data/maps/Route4_Dojo/scripts.pory"
	.string "Yo how is your training going?$"

Route4_Dojo_EventScript_BlackBelt1_Text_1:
# 29 "data/maps/Route4_Dojo/scripts.pory"
	.string "You beat Brawley, that battle was\n"
	.string "intense!\n"
	.string "You should take this!$"

Route4_Dojo_EventScript_BlackBelt1_Text_2:
# 31 "data/maps/Route4_Dojo/scripts.pory"
	.string "A Focus Band can help your Pokemon\n"
	.string "take a hit and keep on fighting.$"

Route4_Dojo_EventScript_BlackBelt1_Text_3:
# 35 "data/maps/Route4_Dojo/scripts.pory"
	.string "Word is you've found some hidden\n"
	.string "masters in these mountains and showed\l"
	.string "them your skill.\n"
	.string "You're going to be a blackbelt in no\l"
	.string "time.$"

Route4_Dojo_EventScript_BlackBelt1_Text_4:
# 37 "data/maps/Route4_Dojo/scripts.pory"
	.string "Keep looking for more masters it'll be\n"
	.string "worth it!$"

Route4_Dojo_EventScript_BlackBelt2_Text_0:
# 48 "data/maps/Route4_Dojo/scripts.pory"
	.string "I've heard that the strongest fighters\n"
	.string "can go to a special scroll to evolve a\l"
	.string "Pokemon into its ultimate form.\n"
	.string "I haven't met anyone do it themselves\l"
	.string "though.$"

Brawley_Route4_Outro::
# 54 "data/maps/Route4_Dojo/scripts.pory"
	.string "Damn kid$"
