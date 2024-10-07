ObsidianThicket_Gym3_HiddenBase_MapScripts::
	.byte 0


ObsidianThicket_PleaseSuggest::
# 4 "data/maps/ObsidianThicket_Gym3_HiddenBase/scripts.pory"
	lockall
# 5 "data/maps/ObsidianThicket_Gym3_HiddenBase/scripts.pory"
	faceplayer
# 6 "data/maps/ObsidianThicket_Gym3_HiddenBase/scripts.pory"
	msgbox ObsidianThicket_PleaseSuggest_Text_0
# 7 "data/maps/ObsidianThicket_Gym3_HiddenBase/scripts.pory"
	releaseall
	return


ObsidianThicket_PleaseSuggest_Text_0:
# 6 "data/maps/ObsidianThicket_Gym3_HiddenBase/scripts.pory"
	.string "This is an empty hidden base, make a\n"
	.string "suggestion in the discord and I can add\l"
	.string "you here.$"
