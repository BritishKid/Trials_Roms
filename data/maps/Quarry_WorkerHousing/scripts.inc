Quarry_WorkerHousing_MapScripts::
	.byte 0


Quarry_WorkerHousing_Worker1::
# 5 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 6 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 7 "data/maps/Quarry_WorkerHousing/scripts.pory"
	goto_if_unset FLAG_HIDE_QUARRY_WORKERS, Quarry_WorkerHousing_Worker1_2
# 10 "data/maps/Quarry_WorkerHousing/scripts.pory"
	goto_if_set FLAG_HIDE_QUARRY_WORKERS, Quarry_WorkerHousing_Worker1_3
Quarry_WorkerHousing_Worker1_1:
# 13 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return

Quarry_WorkerHousing_Worker1_2:
# 8 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker1_Text_0
	goto Quarry_WorkerHousing_Worker1_1

Quarry_WorkerHousing_Worker1_3:
# 11 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker1_Text_1
	goto Quarry_WorkerHousing_Worker1_1


Quarry_WorkerHousing_Worker2::
# 17 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 18 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 19 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker2_Text_0
# 20 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker3::
# 24 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 25 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 26 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker3_Text_0
# 27 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker4::
# 31 "data/maps/Quarry_WorkerHousing/scripts.pory"
	lockall
# 32 "data/maps/Quarry_WorkerHousing/scripts.pory"
	faceplayer
# 33 "data/maps/Quarry_WorkerHousing/scripts.pory"
	msgbox Quarry_WorkerHousing_Worker4_Text_0
# 34 "data/maps/Quarry_WorkerHousing/scripts.pory"
	releaseall
	return


Quarry_WorkerHousing_Worker1_Text_0:
# 8 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "A giant silver Pokémon has taken over\n"
	.string "the Quarry, if it doesn't calm down it\l"
	.string "will collapse it all.$"

Quarry_WorkerHousing_Worker1_Text_1:
# 11 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "I should get back to work, but it's very\n"
	.string "comfortable here.$"

Quarry_WorkerHousing_Worker2_Text_0:
# 19 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "Some of the workers are still trapped!\n"
	.string "When will the rescue team get here to\l"
	.string "help them?$"

Quarry_WorkerHousing_Worker3_Text_0:
# 26 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "If I had my Pokémon with me I'd save the\n"
	.string "Quarry$"

Quarry_WorkerHousing_Worker4_Text_0:
# 33 "data/maps/Quarry_WorkerHousing/scripts.pory"
	.string "If Pokémon keep causing issue we will\n"
	.string "have to close the quarry down\l"
	.string "permanently.$"
