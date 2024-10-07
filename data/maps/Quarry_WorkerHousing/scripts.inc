Quarry_WorkerHousing_MapScripts::
	.byte 0


Quarry_WorkerHousing_Worker1::
# 4 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 5 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 6 "data/maps/Quarry_WorkerHousing/scripts.pory"
	goto_if_unset FLAG_RECIEVED_PICKAXE, Quarry_WorkerHousing_Worker1_2
# 9 "data/maps/Quarry_WorkerHousing/scripts.pory"
	goto_if_set FLAG_RECIEVED_PICKAXE, Quarry_WorkerHousing_Worker1_5
Quarry_WorkerHousing_Worker1_4:
# 16 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker1_Text_2
Quarry_WorkerHousing_Worker1_1:
# 18 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return

Quarry_WorkerHousing_Worker1_2:
# 7 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker1_Text_0
	goto Quarry_WorkerHousing_Worker1_1

Quarry_WorkerHousing_Worker1_3:
# 10 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker1_Text_1
# 11 "data/maps/Quarry_WorkerHousing/scripts.pory"
	giveitem ITEM_STEEL_GEM, 1
# 12 "data/maps/Quarry_WorkerHousing/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/Quarry_WorkerHousing/scripts.pory"
	setflag FLAG_STEEL_GEM_GIVEN
	goto Quarry_WorkerHousing_Worker1_1

Quarry_WorkerHousing_Worker1_5:
# 9 "data/maps/Quarry_WorkerHousing/scripts.pory"
	goto_if_set FLAG_STEEL_GEM_GIVEN, Quarry_WorkerHousing_Worker1_3
	goto Quarry_WorkerHousing_Worker1_4


Quarry_WorkerHousing_Worker2::
# 22 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 23 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 24 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker2_Text_0
# 25 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker3::
# 29 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 30 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 31 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker3_Text_0
# 32 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker4::
# 36 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 37 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 38 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker4_Text_0
# 39 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker1_Text_0:
# 7 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "A giant silver rock Pokémon has taken\n"
	.string "over the Quarry, if it doesn't calm down\l"
	.string "it will collapse it all.$"

Quarry_WorkerHousing_Worker1_Text_1:
# 10 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "Thank you for saving my colleagues,\n"
	.string "please take this!$"

Quarry_WorkerHousing_Worker1_Text_2:
# 16 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "I should get back to work, but it's very\n"
	.string "comfortable here.$"

Quarry_WorkerHousing_Worker2_Text_0:
# 24 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "Some of the workers are still trapped!\n"
	.string "When will the rescue team get here to\l"
	.string "help them?$"

Quarry_WorkerHousing_Worker3_Text_0:
# 31 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "If I had my Pokémon with me I'd save the\n"
	.string "Quarry$"

Quarry_WorkerHousing_Worker4_Text_0:
# 38 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "If Pokémon keep causing issue we will\n"
	.string "have to close the quarry down\l"
	.string "permanently.$"
