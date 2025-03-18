Route2_MapScripts::
	.byte 0


Route2_EventScript_BerryGirl::
# 6 "data/maps/Route2/scripts.pory"
	lockall
# 7 "data/maps/Route2/scripts.pory"
	faceplayer
# 8 "data/maps/Route2/scripts.pory"
	goto_if_unset FLAG_RECEIVED_WAILMER_PAIL, Route2_EventScript_BerryGirl_2
Route2_EventScript_BerryGirl_1:
# 17 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_2
# 18 "data/maps/Route2/scripts.pory"
	releaseall
	return

Route2_EventScript_BerryGirl_2:
# 9 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_0
# 10 "data/maps/Route2/scripts.pory"
	giveitem ITEM_CHERI_BERRY, 5
# 11 "data/maps/Route2/scripts.pory"
	giveitem ITEM_LEPPA_BERRY, 5
# 12 "data/maps/Route2/scripts.pory"
	giveitem ITEM_PERSIM_BERRY, 5
# 13 "data/maps/Route2/scripts.pory"
	msgbox Route2_EventScript_BerryGirl_Text_1
# 14 "data/maps/Route2/scripts.pory"
	giveitem ITEM_WAILMER_PAIL, 1
# 15 "data/maps/Route2/scripts.pory"
	setflag FLAG_RECEIVED_WAILMER_PAIL
	goto Route2_EventScript_BerryGirl_1


Battle_Route2_Trainer3::
# 22 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_TRAINER3, Route2_Trainer3_Intro, Route2_Trainer3_Outro, Increase_Trainers_Beaten
# 23 "data/maps/Route2/scripts.pory"
	msgbox PostBattle_Route2_Trainer3, MSGBOX_AUTOCLOSE
# 24 "data/maps/Route2/scripts.pory"
	waitmessage
	end


Battle_Route2_Coco::
# 29 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_COCO, Route2_Coco_Intro, Route2_Coco_Outro, Increase_Trainers_Beaten
# 30 "data/maps/Route2/scripts.pory"
	msgbox Route2_Coco_Postbattle, MSGBOX_AUTOCLOSE
	end


Battle_Route2_Jenova::
# 35 "data/maps/Route2/scripts.pory"
	trainerbattle_single TRAINER_ROUTE2_JENOVA, Route2_Jenova_Intro, Route2_Jenova_Outro, Increase_Trainers_Beaten
# 36 "data/maps/Route2/scripts.pory"
	msgbox Route2_Jenova_Postbattle, MSGBOX_AUTOCLOSE
	end


Increase_Trainers_Beaten::
# 80 "data/maps/Route2/scripts.pory"
	addvar VAR_TRAINERS_BEATEN_CHECK, 1
	return


Route2_EventScript_BerryGirl_Text_0:
# 9 "data/maps/Route2/scripts.pory"
	.string "Hey, you must have seen all these berry\n"
	.string "patches around the place. You can use\l"
	.string "them to grow your own berries. Here,\l"
	.string "take some; I have spare.$"

Route2_EventScript_BerryGirl_Text_1:
# 13 "data/maps/Route2/scripts.pory"
	.string "Use the spots next to me to grow more,\n"
	.string "but you will need this to help.$"

Route2_EventScript_BerryGirl_Text_2:
# 17 "data/maps/Route2/scripts.pory"
	.string "Using a berry in battle can make a big\n"
	.string "difference.$"

Route2_Trainer3_Intro::
# 42 "data/maps/Route2/scripts.pory"
	.string "My sister loves planting berries; she\n"
	.string "travels all over the region to find more.$"

Route2_Trainer3_Outro::
# 46 "data/maps/Route2/scripts.pory"
	.string "Even with my sisters berries I was no\n"
	.string "good.$"

PostBattle_Route2_Trainer3::
# 50 "data/maps/Route2/scripts.pory"
	.string "You should go speak to her, she would\n"
	.string "likely share some with you.$"

Route2_Coco_Intro::
# 54 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Coco_Outro::
# 58 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Coco_Postbattle::
# 62 "data/maps/Route2/scripts.pory"
	.string "$"

Route2_Jenova_Intro::
# 67 "data/maps/Route2/scripts.pory"
	.string "I got a Mew! It can't be beaten.$"

Route2_Jenova_Outro::
# 71 "data/maps/Route2/scripts.pory"
	.string "Oh, I guess my mum was lying when she\n"
	.string "said Mew couldn't be defeated$"

Route2_Jenova_Postbattle::
# 75 "data/maps/Route2/scripts.pory"
	.string "What else did she lie about?$"
