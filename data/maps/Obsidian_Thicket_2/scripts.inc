Obsidian_Thicket_2_MapScripts::
	.byte 0


Derek_ObsidianThicket2::
# 5 "data/maps/Obsidian_Thicket_2/scripts.pory"
	trainerbattle_single TRAINER_DEREK_OBSIDIAN_THICKET, Derek_ObisidianThicket_Intro, Derek_ObisidianThicket_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox PostBattle_Derek_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Obsidian_Thicket_2_EventScript_Flannery::
# 10 "data/maps/Obsidian_Thicket_2/scripts.pory"
	lockall
# 11 "data/maps/Obsidian_Thicket_2/scripts.pory"
	checkitem ITEM_TM_OVERHEAT
# 12 "data/maps/Obsidian_Thicket_2/scripts.pory"
	compare VAR_RESULT, FALSE
	goto_if_eq Obsidian_Thicket_2_EventScript_Flannery_2
# 18 "data/maps/Obsidian_Thicket_2/scripts.pory"
	faceplayer
# 19 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox Obsidian_Thicket_2_EventScript_Flannery_Text_1
Obsidian_Thicket_2_EventScript_Flannery_1:
# 21 "data/maps/Obsidian_Thicket_2/scripts.pory"
	releaseall
	return

Obsidian_Thicket_2_EventScript_Flannery_2:
# 13 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox Obsidian_Thicket_2_EventScript_Flannery_Text_0
# 14 "data/maps/Obsidian_Thicket_2/scripts.pory"
	faceplayer
# 15 "data/maps/Obsidian_Thicket_2/scripts.pory"
	trainerbattle_single TRAINER_FLANNERY_1, OT2_Flannery_Intro, OT2_Flannery_Outro, Obsidian_Thicket_2_EventScript_Flannery_Postbattle
	goto Obsidian_Thicket_2_EventScript_Flannery_1


Obsidian_Thicket_2_EventScript_Flannery_Postbattle::
# 25 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox Obsidian_Thicket_2_EventScript_Flannery_Postbattle_Text_0, MSGBOX_AUTOCLOSE
# 26 "data/maps/Obsidian_Thicket_2/scripts.pory"
	giveitem ITEM_TM_OVERHEAT
# 27 "data/maps/Obsidian_Thicket_2/scripts.pory"
	addvar VAR_TRAINERS_BEATEN_CHECK, 1
# 28 "data/maps/Obsidian_Thicket_2/scripts.pory"
	msgbox Obsidian_Thicket_2_EventScript_Flannery_Postbattle_Text_1
# 29 "data/maps/Obsidian_Thicket_2/scripts.pory"
	setflag FLAG_HIDE_FLANNERY_OBSIDIANTHICKET
# 31 "data/maps/Obsidian_Thicket_2/scripts.pory"
	releaseall
	return


Obsidian_Thicket_2_EventScript_Flannery_Text_0:
# 13 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "I've heard Mt. Obsidian has an\n"
	.string "incredibly strong fire Pokemon but I\l"
	.string "don't have any Pokemon that can surf\l"
	.string "across this water to reach it. I'll\l"
	.string "probably have to go all the way round\l"
	.string "instead.$"

Obsidian_Thicket_2_EventScript_Flannery_Text_1:
# 19 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "I wonder what i'll find in the Volcano.$"

Obsidian_Thicket_2_EventScript_Flannery_Postbattle_Text_0:
# 25 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Wow if we were in Hoenn that would be\n"
	.string "worthy of the Heat Badge, but over here\l"
	.string "I can't give you anything official but\l"
	.string "you could take the TM for Overheat.$"

Obsidian_Thicket_2_EventScript_Flannery_Postbattle_Text_1:
# 28 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Hoenn is so full of water you'd think I'd\n"
	.string "have taught a Pokemon surf by now.$"

Derek_ObisidianThicket_Intro::
# 43 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Treecko lives somewhere in these trees$"

Derek_ObisidianThicket_Outro::
# 47 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "I've heard a ton of rumours$"

PostBattle_Derek_ObisidianThicket::
# 51 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "If you find them please tell me$"

OT2_Flannery_Intro::
# 55 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Anyway you seem like a trainer so why\n"
	.string "don't we battle.$"

OT2_Flannery_Outro::
# 59 "data/maps/Obsidian_Thicket_2/scripts.pory"
	.string "Wow that got heated!$"
