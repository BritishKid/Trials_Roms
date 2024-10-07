Route2_MapScripts::
	.byte 0


Route2_EventScript_BerryGirl::
# 4 "data/maps/Route2/scripts.pory"
	lock
# 5 "data/maps/Route2/scripts.pory"
	faceplayer
# 6 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route2_EventScript_BerryGirl_2
Route2_EventScript_BerryGirl_1:
# 18 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_2
# 19 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_EventScript_BerryGirl_2:
# 7 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_0
# 8 "data/maps/Route2/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 3
# 9 "data/maps/Route2/scripts.pory"
	giveitem ITEM_ORAN_BERRY, 3
# 10 "data/maps/Route2/scripts.pory"
	giveitem ITEM_PECHA_BERRY, 3
# 11 "data/maps/Route2/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 3
# 12 "data/maps/Route2/scripts.pory"
	giveitem ITEM_COBA_BERRY, 3
# 13 "data/maps/Route2/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 3
# 14 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_1
# 15 "data/maps/Route2/scripts.pory"
	giveitem ITEM_WAILMER_PAIL, 1
# 16 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route2_EventScript_BerryGirl_1


Battle_Route2_Trainer1::
# 23 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TRAINER1, Route2_Trainer1_Intro, Route2_Trainer1_Outro
# 24 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Route2_Trainer1, MSGBOX_AUTOCLOSE
# 25 "data/maps/Route2/scripts.pory"
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
# 26 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Battle_Route2_Trainer2::
# 31 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TRAINER2, Route2_Trainer2_Intro, Route2_Trainer2_Outro, Increase_Trainers_Beaten
# 32 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Route2_Trainer2, MSGBOX_AUTOCLOSE
# 33 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Battle_Route2_Trainer3::
# 38 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TRAINER3, Route2_Trainer3_Intro, Route2_Trainer3_Outro, Increase_Trainers_Beaten
# 39 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Route2_Trainer3, MSGBOX_AUTOCLOSE
# 40 "data/maps/Route2/scripts.pory"
	waitmessage
	end


EventScript_Route2_ItemBall_QuickClaw::
# 45 "data/maps/Route2/scripts.pory"
	finditem ITEM_QUICK_CLAW
	return


Route2_EventScript_BerryGirl_Text_0:
# 7 "data/maps/Route2/scripts.pory"
	.string "Hey you must have seen all these berry\n"
	.string "patches aorund the place.\p"
	.string "They let you grow your berries so you\n"
	.string "can get more.\p"
	.string "Here take some!$"

Route2_EventScript_BerryGirl_Text_1:
# 14 "data/maps/Route2/scripts.pory"
	.string "If you plant them you can grow more.\n"
	.string "Hold on you'll need this though!$"

Route2_EventScript_BerryGirl_Text_2:
# 18 "data/maps/Route2/scripts.pory"
	.string "Berrys are just incredible, give them to\n"
	.string "a Pokémon to hold and they will use them\l"
	.string "when they are weak.$"

Route2_Trainer1_Intro::
# 49 "data/maps/Route2/scripts.pory"
	.string "Mahogany Hills Gym is meant to be really\n"
	.string "tough!$"

Route2_Trainer1_Outro::
# 53 "data/maps/Route2/scripts.pory"
	.string "I don't think i'm ready to take it on yet$"

PostBattle_Route2_Trainer1::
# 57 "data/maps/Route2/scripts.pory"
	.string "I heard the gym leader came from a city\n"
	.string "full of powerful flying types.$"

Route2_Trainer2_Intro::
# 61 "data/maps/Route2/scripts.pory"
	.string "I have the best Ratata in the world!$"

Route2_Trainer2_Outro::
# 65 "data/maps/Route2/scripts.pory"
	.string "I haven't finished training it yet.$"

PostBattle_Route2_Trainer2::
# 69 "data/maps/Route2/scripts.pory"
	.string "It's going to be the best Pokémon in\n"
	.string "the world one day$"

Route2_Trainer3_Intro::
# 73 "data/maps/Route2/scripts.pory"
	.string "My sister loves planting Berries, she\n"
	.string "travels all over the region to find more.$"

Route2_Trainer3_Outro::
# 77 "data/maps/Route2/scripts.pory"
	.string "Even with my sisters berries I was no\n"
	.string "good.$"

PostBattle_Route2_Trainer3::
# 81 "data/maps/Route2/scripts.pory"
	.string "You should go speak to her, she would\n"
	.string "likely share some with you.$"

Route2_Genki_Intro::
# 85 "data/maps/Route2/scripts.pory"
	.string "Let's have a quackin' good time!.$"

Route2_Genki_Outro::
# 89 "data/maps/Route2/scripts.pory"
	.string "Ducks ducks.$"

PostBattle_Route2_Genki::
# 93 "data/maps/Route2/scripts.pory"
	.string "I'll have to go get more ducks.$"

Route2_Robert_Intro::
# 97 "data/maps/Route2/scripts.pory"
	.string "Alright then, prepare yourself.$"

Route2_Robert_Outro::
# 101 "data/maps/Route2/scripts.pory"
	.string "Damn you're good.$"
