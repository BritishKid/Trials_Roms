LilycoveCity_House4_MapScripts::
	.byte 0


LilycoveCity_House4_EventScript_Man2::
	lockall
	faceplayer
	msgbox LilycoveCity_House4_EventScript_Man2_Text_0
	releaseall
	return


LilycoveCity_House4_EventScript_Man1::
	lockall
	faceplayer
	msgbox LilycoveCity_House4_EventScript_Man1_Text_0
	releaseall
	return


LilycoveCity_House4_EventScript_Man2_Text_0:
	.string "Triver is known for it's 3 large islands\n"
	.string "but there is hundreds of smaller ones\l"
	.string "full of rare Pokémon. It's why lots of\l"
	.string "people came here thousands of years\l"
	.string "ago.$"

LilycoveCity_House4_EventScript_Man1_Text_0:
	.string "I was once a trainer but I retired not\n"
	.string "long after the set up the Mega Mansion.\l"
	.string "So many strong trainers started coming\l"
	.string "from all over the world I couldn't keep\l"
	.string "up!$"
