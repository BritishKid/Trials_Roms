StartArea_MapScripts::
	.byte 0

AdoptionSign::
	lockall
	msgbox AdoptionSign_Text_0
	releaseall
	return


AdoptionSign_Text_0:
	.string "Pokemon Adoption Center$"
