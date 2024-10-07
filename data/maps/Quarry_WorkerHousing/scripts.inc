Quarry_WorkerHousing_MapScripts::
	.byte 0


Quarry_WorkerHousing_Worker1::
	lockall
	faceplayer
	goto_if_unset FLAG_RECIEVED_PICKAXE, Quarry_WorkerHousing_Worker1_2
	goto_if_set FLAG_RECIEVED_PICKAXE, Quarry_WorkerHousing_Worker1_5
Quarry_WorkerHousing_Worker1_4:
	msgbox Quarry_WorkerHousing_Worker1_Text_2
Quarry_WorkerHousing_Worker1_1:
	releaseall
	return

Quarry_WorkerHousing_Worker1_2:
	msgbox Quarry_WorkerHousing_Worker1_Text_0
	goto Quarry_WorkerHousing_Worker1_1

Quarry_WorkerHousing_Worker1_3:
	msgbox Quarry_WorkerHousing_Worker1_Text_1
	giveitem ITEM_STEEL_GEM, 1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_STEEL_GEM_GIVEN
	goto Quarry_WorkerHousing_Worker1_1

Quarry_WorkerHousing_Worker1_5:
	goto_if_set FLAG_STEEL_GEM_GIVEN, Quarry_WorkerHousing_Worker1_3
	goto Quarry_WorkerHousing_Worker1_4


Quarry_WorkerHousing_Worker2::
	lockall
	faceplayer
	msgbox Quarry_WorkerHousing_Worker2_Text_0
	releaseall
	return


Quarry_WorkerHousing_Worker3::
	lockall
	faceplayer
	msgbox Quarry_WorkerHousing_Worker3_Text_0
	releaseall
	return


Quarry_WorkerHousing_Worker4::
	lockall
	faceplayer
	msgbox Quarry_WorkerHousing_Worker4_Text_0
	releaseall
	return


Quarry_WorkerHousing_Worker1_Text_0:
	.string "A giant silver rock Pokémon has taken\n"
	.string "over the Quarry, if it doesn't calm down\l"
	.string "it will collapse it all.$"

Quarry_WorkerHousing_Worker1_Text_1:
	.string "Thank you for saving my colleagues,\n"
	.string "please take this!$"

Quarry_WorkerHousing_Worker1_Text_2:
	.string "I should get back to work, but it's very\n"
	.string "comfortable here.$"

Quarry_WorkerHousing_Worker2_Text_0:
	.string "Some of the workers are still trapped!\n"
	.string "When will the rescue team get here to\l"
	.string "help them?$"

Quarry_WorkerHousing_Worker3_Text_0:
	.string "If I had my Pokémon with me I'd save the\n"
	.string "Quarry$"

Quarry_WorkerHousing_Worker4_Text_0:
	.string "If Pokémon keep causing issue we will\n"
	.string "have to close the quarry down\l"
	.string "permanently.$"
