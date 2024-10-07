Route2_MapScripts::
	.byte 0


Route2_EventScript_BerryGirl::
	lock
	faceplayer
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route2_EventScript_BerryGirl_2
Route2_EventScript_BerryGirl_1:
	msgbox Route2_EventScript_BerryGirl_Text_2
	releaseall
	return

Route2_EventScript_BerryGirl_2:
	msgbox Route2_EventScript_BerryGirl_Text_0
	giveitem ITEM_CHERI_BERRY, 3
	giveitem ITEM_ORAN_BERRY, 3
	giveitem ITEM_PECHA_BERRY, 3
	giveitem ITEM_LEPPA_BERRY, 3
	giveitem ITEM_COBA_BERRY, 3
	giveitem ITEM_PERSIM_BERRY, 3
	msgbox Route2_EventScript_BerryGirl_Text_1
	giveitem ITEM_WAILMER_PAIL, 1
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route2_EventScript_BerryGirl_1


Battle_Route2_Trainer1::
	trainerbattle_single TRAINER_ROUTE2_TRAINER1, Route2_Trainer1_Intro, Route2_Trainer1_Outro
	msgbox PostBattle_Route2_Trainer1, MSGBOX_AUTOCLOSE
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


Battle_Route2_Trainer2::
	trainerbattle_single TRAINER_ROUTE2_TRAINER2, Route2_Trainer2_Intro, Route2_Trainer2_Outro, Increase_Trainers_Beaten
	msgbox PostBattle_Route2_Trainer2, MSGBOX_AUTOCLOSE
	waitmessage
	end


Battle_Route2_Trainer3::
	trainerbattle_single TRAINER_ROUTE2_TRAINER3, Route2_Trainer3_Intro, Route2_Trainer3_Outro, Increase_Trainers_Beaten
	msgbox PostBattle_Route2_Trainer3, MSGBOX_AUTOCLOSE
	waitmessage
	end


EventScript_Route2_ItemBall_QuickClaw::
	finditem ITEM_QUICK_CLAW
	return


Route2_EventScript_BerryGirl_Text_0:
	.string "Hey you must have seen all these berry\n"
	.string "patches aorund the place.\p"
	.string "They let you grow your berries so you\n"
	.string "can get more.\p"
	.string "Here take some!$"

Route2_EventScript_BerryGirl_Text_1:
	.string "If you plant them you can grow more.\n"
	.string "Hold on you'll need this though!$"

Route2_EventScript_BerryGirl_Text_2:
	.string "Berrys are just incredible, give them to\n"
	.string "a Pokémon to hold and they will use them\l"
	.string "when they are weak.$"

Route2_Trainer1_Intro::
	.string "Mahogany Hills Gym is meant to be really\n"
	.string "tough!$"

Route2_Trainer1_Outro::
	.string "I don't think i'm ready to take it on yet$"

PostBattle_Route2_Trainer1::
	.string "I heard the gym leader came from a city\n"
	.string "full of powerful flying types.$"

Route2_Trainer2_Intro::
	.string "I have the best Ratata in the world!$"

Route2_Trainer2_Outro::
	.string "I haven't finished training it yet.$"

PostBattle_Route2_Trainer2::
	.string "It's going to be the best Pokémon in\n"
	.string "the world one day$"

Route2_Trainer3_Intro::
	.string "My sister loves planting Berries, she\n"
	.string "travels all over the region to find more.$"

Route2_Trainer3_Outro::
	.string "Even with my sisters berries I was no\n"
	.string "good.$"

PostBattle_Route2_Trainer3::
	.string "You should go speak to her, she would\n"
	.string "likely share some with you.$"

Route2_Genki_Intro::
	.string "Let's have a quackin' good time!.$"

Route2_Genki_Outro::
	.string "Ducks ducks.$"

PostBattle_Route2_Genki::
	.string "I'll have to go get more ducks.$"

Route2_Robert_Intro::
	.string "Alright then, prepare yourself.$"

Route2_Robert_Outro::
	.string "Damn you're good.$"
