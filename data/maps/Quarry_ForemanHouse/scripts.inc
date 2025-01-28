Quarry_ForemanHouse_MapScripts::
	.byte 0


Quarry_Foreman_InHouse::
# 5 "data/maps/Quarry_ForemanHouse/scripts.pory"
	lockall
# 6 "data/maps/Quarry_ForemanHouse/scripts.pory"
	faceplayer
# 7 "data/maps/Quarry_ForemanHouse/scripts.pory"
	compare VAR_QUARRY_STATE, 4
	goto_if_eq Quarry_Foreman_InHouse_2
Quarry_Foreman_InHouse_1:
# 10 "data/maps/Quarry_ForemanHouse/scripts.pory"
	compare VAR_QUARRY_STATE, 0
	goto_if_eq Quarry_Foreman_InHouse_5
# 13 "data/maps/Quarry_ForemanHouse/scripts.pory"
	compare VAR_QUARRY_STATE, 3
	goto_if_gt Quarry_Foreman_InHouse_6
# 16 "data/maps/Quarry_ForemanHouse/scripts.pory"
	compare VAR_QUARRY_STATE, 3
	goto_if_eq Quarry_Foreman_InHouse_7
Quarry_Foreman_InHouse_4:
# 23 "data/maps/Quarry_ForemanHouse/scripts.pory"
	releaseall
	return

Quarry_Foreman_InHouse_2:
# 8 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_0
	goto Quarry_Foreman_InHouse_1

Quarry_Foreman_InHouse_5:
# 11 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_1
	goto Quarry_Foreman_InHouse_4

Quarry_Foreman_InHouse_6:
# 14 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_2
	goto Quarry_Foreman_InHouse_4

Quarry_Foreman_InHouse_7:
# 17 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_3
# 18 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_4
# 19 "data/maps/Quarry_ForemanHouse/scripts.pory"
	giveitem ITEM_TM_IRON_TAIL
# 20 "data/maps/Quarry_ForemanHouse/scripts.pory"
	msgbox Quarry_Foreman_InHouse_Text_5
# 21 "data/maps/Quarry_ForemanHouse/scripts.pory"
	setvar VAR_QUARRY_STATE, 4
	goto Quarry_Foreman_InHouse_4


Quarry_Foreman_InHouse_Text_0:
# 8 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "We are finally able to get back to work\n"
	.string "in the Quarry$"

Quarry_Foreman_InHouse_Text_1:
# 11 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "We've had to close the Quarry due to\n"
	.string "the wild Pokémon running rampant$"

Quarry_Foreman_InHouse_Text_2:
# 14 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "I told you to stay out the Quarry, it's\n"
	.string "very dangerous right now.$"

Quarry_Foreman_InHouse_Text_3:
# 17 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "You're the one who cleared out the\n"
	.string "quarry and saved my men? That's\l"
	.string "amazing!$"

Quarry_Foreman_InHouse_Text_4:
# 18 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "Please take this as a thank you$"

Quarry_Foreman_InHouse_Text_5:
# 20 "data/maps/Quarry_ForemanHouse/scripts.pory"
	.string "It contains Iron Tail, a lot of the\n"
	.string "miners use it with their Pokémon to help\l"
	.string "with their work.$"
