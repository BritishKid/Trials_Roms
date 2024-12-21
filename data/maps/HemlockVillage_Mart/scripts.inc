HemlockVillage_Mart_MapScripts::
	.byte 0

HemlockVillage_Mart_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart HemlockVillage_Mart_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
HemlockVillage_Mart_Pokemart:
	.2byte ITEM_POKE_BALL
	.2byte ITEM_GREAT_BALL
	.2byte ITEM_NET_BALL
	.2byte ITEM_DIVE_BALL
	.2byte ITEM_HYPER_POTION
	.2byte ITEM_FULL_HEAL
	.2byte ITEM_REVIVE
	.2byte ITEM_MAX_REPEL
	.2byte ITEM_X_ATTACK
	.2byte ITEM_X_DEFENSE
	.2byte ITEM_NONE
	release
	end

HemlockVillage_Mart_EventScript_Woman::
	msgbox HemlockVillage_Mart_Text_ReviveIsFantastic, MSGBOX_NPC
	end

HemlockVillage_Mart_EventScript_Boy::
	msgbox HemlockVillage_Mart_Text_MaxRepelLastsLongest, MSGBOX_NPC
	end

HemlockVillage_Mart_EventScript_Sailor::
	msgbox HemlockVillage_Mart_Text_NetAndDiveBallsRare, MSGBOX_NPC
	end

HemlockVillage_Mart_Text_ReviveIsFantastic:
	.string "REVIVE is fantastic!\p"
	.string "Give it to a fainted POKéMON,\n"
	.string "and the POKéMON will arise.\p"
	.string "But be careful, REVIVE doesn't restore\n"
	.string "the used-up PP of moves.$"

HemlockVillage_Mart_Text_MaxRepelLastsLongest:
	.string "MAX REPEL keeps all weak POKéMON away.\p"
	.string "Out of all the REPEL sprays, it lasts\n"
	.string "the longest.$"

HemlockVillage_Mart_Text_NetAndDiveBallsRare:
	.string "The NET and DIVE BALLS are rare POKé\n"
	.string "BALLS that are only made in MOSSDEEP.\p"
	.string "A NET BALL is effective against\n"
	.string "BUG-type and WATER-type POKéMON.\p"
	.string "A DIVE BALL works best on POKéMON\n"
	.string "at the bottom of the sea.$"

