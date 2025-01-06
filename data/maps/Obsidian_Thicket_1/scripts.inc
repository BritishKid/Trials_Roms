Obsidian_Thicket_1_MapScripts::
	.byte 0


ObsidianThicket1_TrainerBattle_Youngster::
# 5 "data/maps/Obsidian_Thicket_1/scripts.pory"
	trainerbattle_single OT1YOUNSGTER, OT_Youngster_Intro, OT_Youngster_Outro, Increase_Trainers_Beaten
# 6 "data/maps/Obsidian_Thicket_1/scripts.pory"
	msgbox OT_Youngster_Postbattle, MSGBOX_AUTOCLOSE
	end


ObsidianThicket1_TrainerBattle_Katty::
# 11 "data/maps/Obsidian_Thicket_1/scripts.pory"
	trainerbattle_single CAMPER_KATTY, OT_Katty_Intro, OT_Katty_Outro, Katty_Postbattle_Script
# 12 "data/maps/Obsidian_Thicket_1/scripts.pory"
	msgbox OT_Katty_Postbattle, MSGBOX_AUTOCLOSE
	end


Katty_Postbattle_Script::
# 17 "data/maps/Obsidian_Thicket_1/scripts.pory"
	msgbox Katty_Postbattle_Script_Text_0
# 18 "data/maps/Obsidian_Thicket_1/scripts.pory"
	giveegg SPECIES_GROWLITHE
# 19 "data/maps/Obsidian_Thicket_1/scripts.pory"
	msgbox Katty_Postbattle_Script_Text_1
# 20 "data/maps/Obsidian_Thicket_1/scripts.pory"
	call Increase_Trainers_Beaten
# 21 "data/maps/Obsidian_Thicket_1/scripts.pory"
	releaseall
	return


Katherine_ObsidianThicket1::
# 25 "data/maps/Obsidian_Thicket_1/scripts.pory"
	trainerbattle_single TRAINER_KATHERINE_OBSIDIAN_THICKET, Katherine_ObisidianThicket_Intro, Katherine_ObisidianThicket_Outro, Increase_Trainers_Beaten
# 26 "data/maps/Obsidian_Thicket_1/scripts.pory"
	msgbox PostBattle_Katherine_ObisidianThicket, MSGBOX_AUTOCLOSE
	return


Katty_Postbattle_Script_Text_0:
# 17 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "I think you've earned this.$"

Katty_Postbattle_Script_Text_1:
# 19 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "Take good care of it.$"

Katherine_ObisidianThicket_Intro::
# 31 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "Have you seen this big cuddly Pokémon I\n"
	.string "found?$"

Katherine_ObisidianThicket_Outro::
# 35 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "It's still adorable even when napping$"

PostBattle_Katherine_ObisidianThicket::
# 39 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "I took me ages to find it, but I love\n"
	.string "this Munchlax$"

OT_Youngster_Intro::
# 43 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "I love all the Pokémon here.$"

OT_Youngster_Outro::
# 47 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "I'm going to keep training.$"

OT_Youngster_Postbattle::
# 51 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "Battle, battle, battle, get stronger...$"

OT_Katty_Intro::
# 55 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "Hey! You there!\l"
	.string "Are you going to Hemlock Village too?$"

OT_Katty_Outro::
# 59 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "What an electrifying battle...$"

OT_Katty_Postbattle::
# 63 "data/maps/Obsidian_Thicket_1/scripts.pory"
	.string "Did that egg hatch yet?$"
