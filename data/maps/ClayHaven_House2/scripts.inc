ClayHaven_House2_MapScripts::
	.byte 0


Town2_House2_Woman::
	lockall
	faceplayer
	msgbox Town2_House2_Woman_Text_0
	msgbox Town2_House2_Woman_Text_1
	releaseall
	return


Town2_House2_Man::
	lockall
	faceplayer
	msgbox Town2_House2_Man_Text_0
	releaseall
	return


Town2_House2_TV::
	lockall
	msgbox Town2_House2_TV_Text_0
	releaseall
	return


Town2_House2_Sink::
	lockall
	msgbox Town2_House2_Sink_Text_0
	releaseall
	return


Town2_House2_Woman_Text_0:
	.string "This town was founded thousand of\n"
	.string "years ago after some explorers found a\l"
	.string "strange plate in the mountains.$"

Town2_House2_Woman_Text_1:
	.string "It was the reason why lots of rare\n"
	.string "Pokémon used to be found in these\l"
	.string "mountains but it's since been stolen.$"

Town2_House2_Man_Text_0:
	.string "I heard that someone in this town can\n"
	.string "turn berries into juice.$"

Town2_House2_TV_Text_0:
	.string "It's a show about the History of Triver.\n"
	.string "It talks about how the 3 main islands\l"
	.string "where created as gifts to ancient\l"
	.string "Pokémon$"

Town2_House2_Sink_Text_0:
	.string "I wouldn't sink so low as to look in here$"
