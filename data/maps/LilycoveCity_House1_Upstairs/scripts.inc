LilycoveCity_House1_Upstairs_MapScripts::
	.byte 0


LilycoveCity_House1_Upstairs_Gamer::
	trainerbattle_single LILYCOVE_GAMER, Lilycove_Gamer_Intro, Lilycove_Gamer_Intro, Lilycove_Game_PostScript
	msgbox Lilycove_Gamer_Postbattle, MSGBOX_AUTOCLOSE
	end


Lilycove_Game_PostScript::
	msgbox Lilycove_Game_PostScript_Text_0
	giveitem ITEM_UPGRADE
	playfanfare MUS_OBTAIN_ITEM
	releaseall
	return


Lilycove_Game_PostScript_Text_0:
	.string "Game rules mean you should have a prize\n"
	.string "for beating me, but I've only got this.$"

Lilycove_Gamer_Intro::
	.string "I prefer staying inside, I hate the\n"
	.string "feeling of grass$"

Lilycove_Gamer_Outro::
	.string "Well it's been a while since I've been\n"
	.string "beaten$"

Lilycove_Gamer_Postbattle::
	.string "Maybe I'll train up after this match.$"
