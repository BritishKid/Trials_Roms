VerdanturfTown_FriendshipRatersHouse_MapScripts::
	.byte 0


VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu::
	lockall
	faceplayer
	playmoncry SPECIES_PIKACHU, CRY_MODE_NORMAL
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_0
	goto_if_unset FLAG_RECIEVED_LIGHT_BALL, VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_2
VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_1:
	releaseall
	return

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_2:
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_1
	giveitem ITEM_LIGHT_BALL
	setflag FLAG_RECIEVED_LIGHT_BALL
	goto VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_1


VerdanturfTown_FriendshipRatersHouse_EventScript_Woman::
	lockall
	faceplayer
	msgbox VerdanturfTown_FriendshipRatersHouse_EventScript_Woman_Text_0
	releaseall
	return


VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_0:
	.string "PIKACHU: Pika pika!$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Pikachu_Text_1:
	.string "The Pikachu gives you something.$"

VerdanturfTown_FriendshipRatersHouse_EventScript_Woman_Text_0:
	.string "Did you know a Pikachu holding a Light\n"
	.string "Ball has it's offensive powers improved!$"
