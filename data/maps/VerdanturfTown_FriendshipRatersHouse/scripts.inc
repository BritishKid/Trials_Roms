VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0


VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
# 5 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lockall
# 6 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 7 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_0
# 9 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_2
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_1:
# 14 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	releaseall
	return

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_2:
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_1
# 11 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	giveitem ITEM_LIGHT_BALL
# 12 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	setflag FLAG_RECIEVED_LIGHT_BALL
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_1


VerdanturfTown_FriendshipRatersHouse_EventScript_Woman::
# 18 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	lockall
# 19 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	faceplayer
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Woman_Text_0
# 21 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	releaseall
	return


VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_0:
# 8 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "PIKACHU: Pika pika!$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_1:
# 10 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "The Pikachu gives you something.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Woman_Text_0:
# 20 "data/maps/VerdanturfTown_FriendshipRatersHouse/scripts.pory"
	.string "Did you know a Pikachu holding a Light\n"
	.string "Ball has it's offensive powers improved!$"
