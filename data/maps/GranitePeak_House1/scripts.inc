GranitePeak_House1_MapScripts::
	.byte 0


GranitePeak_House1_EventScript_Man::
# 6 "data/maps/GranitePeak_House1/scripts.pory"
	lock
# 7 "data/maps/GranitePeak_House1/scripts.pory"
	faceplayer
# 8 "data/maps/GranitePeak_House1/scripts.pory"
	msgbox GranitePeak_House1_EventScript_Man_Text_0
# 9 "data/maps/GranitePeak_House1/scripts.pory"
	release
	return


GranitePeak_House1_EventScript_Woman::
# 13 "data/maps/GranitePeak_House1/scripts.pory"
	lock
# 14 "data/maps/GranitePeak_House1/scripts.pory"
	faceplayer
# 15 "data/maps/GranitePeak_House1/scripts.pory"
	msgbox GranitePeak_House1_EventScript_Woman_Text_0
# 26 "data/maps/GranitePeak_House1/scripts.pory"
	release
	return


GranitePeak_House1_EventScript_Man_Text_0:
# 8 "data/maps/GranitePeak_House1/scripts.pory"
	.string "My Daughter loves Pokémon but it just\n"
	.string "seems so unsafe out there$"

GranitePeak_House1_EventScript_Woman_Text_0:
# 15 "data/maps/GranitePeak_House1/scripts.pory"
	.string "You have so many cool Pokémon!\n"
	.string "I wish I could explore but my dad won't\l"
	.string "let me.\p"
	.string "$"
