ObsidianThicket_Gym3_HiddenBase_MapScripts::
	.byte 0


ObsidianThicket_PleaseSuggest::
	lockall
	faceplayer
	msgbox ObsidianThicket_PleaseSuggest_Text_0
	releaseall
	return


ObsidianThicket_PleaseSuggest_Text_0:
	.string "This is an empty hidden base, make a\n"
	.string "suggestion in the discord and I can add\l"
	.string "you here.$"
