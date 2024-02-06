JokeMap_MapScripts::
	.byte 0


oldmanJoke::
	lock
	msgbox oldmanJoke_Text_0
	fadescreen FADE_TO_BLACK
	removeobject 1
	msgbox oldmanJoke_Text_1
	fadescreen FADE_FROM_BLACK
	release
	return


oldmanJoke2::
	lock
	msgbox oldmanJoke2_Text_0
	fadescreen FADE_TO_BLACK
	removeobject 2
	msgbox oldmanJoke2_Text_1
	fadescreen FADE_FROM_BLACK
	release
	return


grave1::
	lock
	msgbox grave1_Text_0
	release
	return


grave2::
	lock
	msgbox grave2_Text_0
	release
	return


grave3::
	lock
	msgbox grave3_Text_0
	fadescreen FADE_TO_BLACK
	msgbox grave3_Text_1
	release
	return


oldmanJoke_Text_0:
	.string "THERE IS NO WAY OUT$"

oldmanJoke_Text_1:
	.string "YOU'RE HERE FOREVER$"

oldmanJoke2_Text_0:
	.string "No$"

oldmanJoke2_Text_1:
	.string "NO MORE$"

grave1_Text_0:
	.string "It's the grave for your mother?$"

grave2_Text_0:
	.string "Your father lies here?$"

grave3_Text_0:
	.string "It's your grave?$"

grave3_Text_1:
	.string "...$"
