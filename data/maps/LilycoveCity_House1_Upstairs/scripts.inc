LilycoveCity_House1_Upstairs_MapScripts::
	.byte 0


LilycoveCity_House1_Upstairs_Gamer::
# 5 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	trainerbattle_single LILYCOVE_GAMER, Lilycove_Gamer_Intro, Lilycove_Gamer_Intro, Lilycove_Game_PostScript
# 6 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	msgbox Lilycove_Gamer_Postbattle, MSGBOX_AUTOCLOSE
	end


Lilycove_Game_PostScript::
# 11 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	msgbox Lilycove_Game_PostScript_Text_0
# 12 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	giveitem ITEM_UPGRADE
# 13 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 14 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	releaseall
	return


Lilycove_Game_PostScript_Text_0:
# 11 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	.string "Game rules mean you should have a prize\n"
	.string "for beating me, but I've only got this.$"

Lilycove_Gamer_Intro::
# 19 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	.string "I prefer staying inside, I hate the\n"
	.string "feeling of grass$"

Lilycove_Gamer_Outro::
# 23 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	.string "Well it's been a while since I've been\n"
	.string "beaten$"

Lilycove_Gamer_Postbattle::
# 27 "data/maps/LilycoveCity_House1_Upstairs/scripts.pory"
	.string "Maybe I'll train up after this match.$"
