Gym2Entrance_MapScripts::
	.byte 0


Gym2Entrance_JerichoBattle::
	trainerbattle_single GYM2ENTRANCE_JERICHO, Jericho_Intro, Jericho_Outro
	msgbox Jericho_PostBattle, MSGBOX_AUTOCLOSE
	end


Jericho_Intro::
	.string "Boo!$"

Jericho_Outro::
	.string "Gotta go fast$"

Jericho_PostBattle::
	.string "Gotta keep running, gotta keep fast$"
