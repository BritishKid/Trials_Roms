MeteorFalls_B1F_1R_MapScripts::
	.byte 0


LostLake_Area2_Aide::
# 6 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lockall
# 7 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	faceplayer
# 8 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_Area2_Aide_Text_0
# 9 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	releaseall
	return


LostLake_B1F_1R_Trigger_GoodraFight::
# 12 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	lockall
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_B1F_1R_Trigger_GoodraFight_Text_0
# 14 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	playmoncry SPECIES_GOODRA_HISUIAN, CRY_MODE_ENCOUNTER
# 15 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_LostLake_Surprise
# 16 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	waitmovement OBJ_EVENT_ID_PLAYER
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_B1F_1R_Trigger_GoodraFight_Text_1, MSGBOX_AUTOCLOSE
# 18 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement 1, Movement_LostLake_GoodraComing
# 19 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	waitmovement 1
# 20 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	releaseall
# 21 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	call LostLake_GoodraTotem
# 22 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	call LostLake_PostGoodraFight
# 23 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	releaseall
	return


LostLake_GoodraTotem::
# 27 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 28 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	settotemboost 1, 1, 1, 1, 2, 1, 0, 0
# 29 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setwildbattle SPECIES_GOODRA_HISUIAN, 40
# 30 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	dowildbattle
	return


LostLake_PostGoodraFight::
# 34 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_HIDE_GOODRA_HISUIAN
# 35 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 1
# 36 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 37 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	clearflag FLAG_HIDE_LOSTLAKE_AREA2_HOLLYCREW
# 38 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_PostGoodraFight_Text_0, MSGBOX_DEFAULT
# 39 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement 2, Movement_ProffessorAndAideToPlayer_LostLake2
# 40 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerFacesUp
# 41 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement 3, Movement_ProffessorAndAideToPlayer_LostLake2
# 42 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	waitmovement 2
# 43 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_PostGoodraFight_Text_1, MSGBOX_DEFAULT
# 44 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	msgbox LostLake_PostGoodraFight_Text_2, MSGBOX_DEFAULT
# 45 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerMovesOutTheWay
# 46 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	applymovement 2, Movement_ProfessorRunsToArea3_LostLake
# 47 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	waitmovement 2
# 48 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setflag FLAG_HIDE_LOSTLAKE_AREA2_HOLLYCREW
# 49 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	removeobject 2
# 50 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	setvar VAR_LOST_LAKE_STATE, 3
# 51 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	releaseall
	return


# 63 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_LostLake_Surprise:
# 64 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	face_down
# 65 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	emote_exclamation_mark
	step_end

# 68 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_LostLake_GoodraComing:
# 69 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
# 70 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
# 71 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
# 72 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
# 73 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
# 74 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_up
	step_end

# 77 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_ProffessorAndAideToPlayer_LostLake2:
# 78 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 79 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 80 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 81 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 82 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 83 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
# 84 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_down
	step_end

# 87 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_PlayerFacesUp:
# 88 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	face_up
	step_end

# 91 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_PlayerMovesOutTheWay:
# 92 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_left
# 93 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	face_down
	step_end

# 96 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
Movement_ProfessorRunsToArea3_LostLake:
# 97 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 98 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 99 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 100 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 101 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 102 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 103 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_down
# 104 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_right
# 105 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_right
# 106 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_right
# 107 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_right
# 108 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	walk_fast_right
	step_end

LostLake_Area2_Aide_Text_0:
# 8 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "We are getting so close, I'm sure of it.$"

LostLake_B1F_1R_Trigger_GoodraFight_Text_0:
# 13 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "GOOOOOOO!$"

LostLake_B1F_1R_Trigger_GoodraFight_Text_1:
# 17 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "You see a large Pokemon in the shadows\n"
	.string "getting closer.$"

LostLake_PostGoodraFight_Text_0:
# 38 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "The Goodra retreats$"

LostLake_PostGoodraFight_Text_1:
# 43 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "That was incredible! That Pokémon… it\n"
	.string "wasn’t just defending itself, it was\l"
	.string "guarding something. Was it her nest or\l"
	.string "something bigger?$"

LostLake_PostGoodraFight_Text_2:
# 44 "data/maps/MeteorFalls_B1F_1R/scripts.pory"
	.string "Every attempt we've had to try and go\n"
	.string "deeper that Pokemon kept pushing us\l"
	.string "back, now we can finally see what is\l"
	.string "ahead.$"
