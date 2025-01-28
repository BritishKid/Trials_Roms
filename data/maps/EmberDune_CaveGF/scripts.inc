EmberDune_CaveGF_MapScripts::
	.byte 0


EmbderDune_CaveGF_TrainerBattle_IceMan::
# 5 "data/maps/EmberDune_CaveGF/scripts.pory"
	trainerbattle_single EMBERDUNECAVE_ICEMAN, EmberDune_CaveGF_IceMan_Intro, EmberDune_CaveGF_IceMan_Outro, EmberDune_CaveGF_IceMan_PostScript
# 6 "data/maps/EmberDune_CaveGF/scripts.pory"
	msgbox EmberDune_CaveGF_IceMan_Postbattle
	return


EmberDune_CaveGF_IceMan_PostScript::
# 11 "data/maps/EmberDune_CaveGF/scripts.pory"
	msgbox EmberDune_CaveGF_IceMan_PostScript_Text_0
# 12 "data/maps/EmberDune_CaveGF/scripts.pory"
	msgbox EmberDune_CaveGF_IceMan_PostScript_Text_1
# 13 "data/maps/EmberDune_CaveGF/scripts.pory"
	giveitem ITEM_NEVER_MELT_ICE, 1
# 14 "data/maps/EmberDune_CaveGF/scripts.pory"
	call Increase_Trainers_Beaten
# 15 "data/maps/EmberDune_CaveGF/scripts.pory"
	releaseall
	return


EmberDune_CaveGF_IceMan_PostScript_Text_0:
# 11 "data/maps/EmberDune_CaveGF/scripts.pory"
	.string "I hid in this cave to stay out the heat,\n"
	.string "but I've also got this ice to keep me\l"
	.string "cool.$"

EmberDune_CaveGF_IceMan_PostScript_Text_1:
# 12 "data/maps/EmberDune_CaveGF/scripts.pory"
	.string "Here take a bit it will help with the\n"
	.string "intense sun.$"

EmberDune_CaveGF_IceMan_Intro::
# 22 "data/maps/EmberDune_CaveGF/scripts.pory"
	.string "I love dessert$"

EmberDune_CaveGF_IceMan_Outro::
# 26 "data/maps/EmberDune_CaveGF/scripts.pory"
	.string "It's the only thing keeping me cool.$"

EmberDune_CaveGF_IceMan_Postbattle::
# 30 "data/maps/EmberDune_CaveGF/scripts.pory"
	.string "I hope that's helping with this heat.$"
