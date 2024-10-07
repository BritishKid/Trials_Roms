Quarry_ForemanHouse_MapScripts::
	.byte 0


Quarry_Foreman_InHouse::
	lockall
	faceplayer
	compare VAR_QUARRY_STATE, 0
	goto_if_eq Quarry_Foreman_InHouse_2
	compare VAR_QUARRY_STATE, 3
	goto_if_gt Quarry_Foreman_InHouse_3
	goto_if_unset FLAG_RECIEVED_PICKAXE, Quarry_Foreman_InHouse_7
	msgbox Quarry_Foreman_InHouse_Text_6
Quarry_Foreman_InHouse_1:
	releaseall
	return

Quarry_Foreman_InHouse_2:
	msgbox Quarry_Foreman_InHouse_Text_0
	goto Quarry_Foreman_InHouse_1

Quarry_Foreman_InHouse_3:
	msgbox Quarry_Foreman_InHouse_Text_1
	goto Quarry_Foreman_InHouse_1

Quarry_Foreman_InHouse_7:
	msgbox Quarry_Foreman_InHouse_Text_2
	msgbox Quarry_Foreman_InHouse_Text_3
	msgbox Quarry_Foreman_InHouse_Text_4
	msgbox Quarry_Foreman_InHouse_Text_5
	goto Quarry_Foreman_InHouse_1


Quarry_Foreman_InHouse_Text_0:
	.string "We've had to close the Quarry due to\n"
	.string "the wild Pokémon running rampant$"

Quarry_Foreman_InHouse_Text_1:
	.string "I told you to stay out the Quarry, it's\n"
	.string "very dangerous right now.$"

Quarry_Foreman_InHouse_Text_2:
	.string "You're the one who cleared out the\n"
	.string "quarry and saved my men? That's\l"
	.string "amazing!$"

Quarry_Foreman_InHouse_Text_3:
	.string "Please take this as a thank you$"

Quarry_Foreman_InHouse_Text_4:
	.string "It's a pickaxe you can use to break\n"
	.string "rocks, you won't have to use HMs any\l"
	.string "more!$"

Quarry_Foreman_InHouse_Text_5:
	.string "PICKAXE ISN'T IMPLEMENTED YET AND\n"
	.string "WILL COME IN FUTURE UPDATE$"

Quarry_Foreman_InHouse_Text_6:
	.string "We are finally able to get back to work\n"
	.string "in the Quarry$"
