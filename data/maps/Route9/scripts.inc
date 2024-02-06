Route9_MapScripts::
	.byte 0


Route9_BattleScript_Matthew_Fisher::
	trainerbattle_single ROUTE9_MATTHEW, MatthewFisher_Intro, MatthewFisher_Outro
	msgbox MatthewFisher_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


Route9_BattleScript_Mate::
	trainerbattle_single ROUTE9_MATE, Mate_Intro, Mate_Outro
	msgbox Mate_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


Route9_BattleScript_Woodland::
	trainerbattle_single ROUTE9_BIDOOFCRAZEDMAN, Woodland_Intro, Woodland_Outro
	msgbox Woodland_PostBattle, MSGBOX_AUTOCLOSE
	release
	return


MatthewFisher_Intro::
	.string "Hat! Look at your normal Pokemon! Mine\n"
	.string "is a shiny!$"

MatthewFisher_Outro::
	.string "Okay you got me, but shiny Pokemon are\n"
	.string "still the best$"

MatthewFisher_PostBattle::
	.string "I bet you've never seen a Red Gyrados\n"
	.string "before$"

Mate_Intro::
	.string "Say hello to my little friend$"

Mate_Outro::
	.string "Blastoise are okay$"

Mate_PostBattle::
	.string "$"

Woodland_Intro::
	.string "I'm unstoppable$"

Woodland_Outro::
	.string "How did you?-$"

Woodland_PostBattle::
	.string "I'm unstoppable$"
