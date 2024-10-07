MahoganyHills_1_MapScripts::
	.byte 0


MahoganyTown_EventScript_ItemPokeBall_ShockWave::
# 5 "data/maps/MahoganyHills_1/scripts.pory"
	finditem ITEM_TM34
	return


MahoganyTown_EventScript_Battle_Frank::
# 9 "data/maps/MahoganyHills_1/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_FRANK, MahoganyHills2_BugCatcher_Frank_Intro, MahoganyHills2_BugCatcher_Frank_Outro, Increase_Trainers_Beaten
# 10 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox PostBattle_MahoganyHills2_BugCatcher_Frank, MSGBOX_AUTOCLOSE
# 11 "data/maps/MahoganyHills_1/scripts.pory"
	waitmessage
	end


MahoganyTown_EventScript_Battle_Tough::
# 16 "data/maps/MahoganyHills_1/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_TOUGH_TRAINER, MahoganyHills2_ToughTrainer_Intro, MahoganyHills2_ToughTrainer_Outro, Increase_Trainers_Beaten
# 17 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox PostBattle_MahoganyHills1_ToughTrainer
# 18 "data/maps/MahoganyHills_1/scripts.pory"
	waitmessage
	end


MahoganyTown_EventScript_LostGirl_Right::
# 23 "data/maps/MahoganyHills_1/scripts.pory"
	lockall
# 24 "data/maps/MahoganyHills_1/scripts.pory"
	addobject 5
# 25 "data/maps/MahoganyHills_1/scripts.pory"
	setobjectxy 5, 23, 31
# 26 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 27 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Hidding_Behind_Player_Right
# 28 "data/maps/MahoganyHills_1/scripts.pory"
	waitmovement 5
# 29 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 30 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 31 "data/maps/MahoganyHills_1/scripts.pory"
	releaseall
	return


MahoganyTown_EventScript_LostGirl_Left::
# 35 "data/maps/MahoganyHills_1/scripts.pory"
	lockall
# 36 "data/maps/MahoganyHills_1/scripts.pory"
	addobject 5
# 37 "data/maps/MahoganyHills_1/scripts.pory"
	setobjectxy 5, 23, 31
# 38 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_ChildRunning
# 39 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Hidding_Behind_Player_Left
# 40 "data/maps/MahoganyHills_1/scripts.pory"
	waitmovement 5
# 41 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Setup
# 42 "data/maps/MahoganyHills_1/scripts.pory"
	call MahoganyScript_EventScript_Monster_Beaten
# 43 "data/maps/MahoganyHills_1/scripts.pory"
	releaseall
	return


MahoganyScript_EventScript_ChildRunning::
# 47 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_0
# 48 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_ExclamationMark
# 49 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Being_Chased
# 50 "data/maps/MahoganyHills_1/scripts.pory"
	waitmovement 5
# 51 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_ChildRunning_Text_1
	return


MahoganyScript_EventScript_Monster_Setup::
# 55 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_0
# 56 "data/maps/MahoganyHills_1/scripts.pory"
	addobject 7
# 57 "data/maps/MahoganyHills_1/scripts.pory"
	setobjectxy 7, 23, 31
# 58 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement 7, Movement_Child_Being_Chased
# 59 "data/maps/MahoganyHills_1/scripts.pory"
	waitmovement 7
# 60 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_1
# 61 "data/maps/MahoganyHills_1/scripts.pory"
	setflag FLAG_CANT_CATCH_MON
# 62 "data/maps/MahoganyHills_1/scripts.pory"
	settotemboost 1, 1, 1, 1, 0, 0, 0, 0
# 63 "data/maps/MahoganyHills_1/scripts.pory"
	setwildbattle SPECIES_POOCHYENA, 12, ITEM_BERRY_JUICE
# 64 "data/maps/MahoganyHills_1/scripts.pory"
	dowildbattle
	return


MahoganyScript_EventScript_Monster_Beaten::
# 68 "data/maps/MahoganyHills_1/scripts.pory"
	removeobject 7
# 69 "data/maps/MahoganyHills_1/scripts.pory"
	clearflag FLAG_CANT_CATCH_MON
# 70 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_0
# 71 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_1
# 72 "data/maps/MahoganyHills_1/scripts.pory"
	applymovement 5, Movement_Child_Being_Chased
# 73 "data/maps/MahoganyHills_1/scripts.pory"
	waitmovement 5
# 74 "data/maps/MahoganyHills_1/scripts.pory"
	removeobject 5
# 75 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_2
# 76 "data/maps/MahoganyHills_1/scripts.pory"
	giveitem ITEM_TM41, 1
# 77 "data/maps/MahoganyHills_1/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 78 "data/maps/MahoganyHills_1/scripts.pory"
	setvar VAR_TOWN_2_QUEST_STATE, 2
# 79 "data/maps/MahoganyHills_1/scripts.pory"
	clearflag FLAG_HIDE_TOWN2_HOUSE3_GIRL
	return


MahoganyScript_EventScript_HiddenArea::
# 83 "data/maps/MahoganyHills_1/scripts.pory"
	lockall
# 84 "data/maps/MahoganyHills_1/scripts.pory"
	warp MAP_MAHOGANY_HILLS_SECRET_AREA, 4, 16
# 85 "data/maps/MahoganyHills_1/scripts.pory"
	releaseall
	return


Joke_Script::
# 89 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox Joke_Script_Text_0
# 90 "data/maps/MahoganyHills_1/scripts.pory"
	fadescreen FADE_TO_BLACK
# 91 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox Joke_Script_Text_1
	return


Kidney_Easter_Egg::
# 95 "data/maps/MahoganyHills_1/scripts.pory"
	lock
# 96 "data/maps/MahoganyHills_1/scripts.pory"
	msgbox Kidney_Easter_Egg_Text_0
# 97 "data/maps/MahoganyHills_1/scripts.pory"
	release
	return


# 102 "data/maps/MahoganyHills_1/scripts.pory"
Movement_Child_Being_Chased:
# 103 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 104 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 105 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 106 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 107 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 108 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 109 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 110 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
	step_end

# 113 "data/maps/MahoganyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Right:
# 114 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_left
# 115 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 116 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 117 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_right
# 118 "data/maps/MahoganyHills_1/scripts.pory"
	face_down
	step_end

# 120 "data/maps/MahoganyHills_1/scripts.pory"
Movement_Child_Hidding_Behind_Player_Left:
# 121 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 122 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_up
# 123 "data/maps/MahoganyHills_1/scripts.pory"
	walk_fast_left
# 124 "data/maps/MahoganyHills_1/scripts.pory"
	face_down
	step_end

# 127 "data/maps/MahoganyHills_1/scripts.pory"
Movement_MahoganyHills_ExclamationMark:
# 128 "data/maps/MahoganyHills_1/scripts.pory"
	emote_exclamation_mark
	step_end

MahoganyScript_EventScript_ChildRunning_Text_0:
# 47 "data/maps/MahoganyHills_1/scripts.pory"
	.string "AHHHHH! HELP!$"

MahoganyScript_EventScript_ChildRunning_Text_1:
# 51 "data/maps/MahoganyHills_1/scripts.pory"
	.string "PLEASE HELP ME, IT'S A MONSTER$"

MahoganyScript_EventScript_Monster_Setup_Text_0:
# 55 "data/maps/MahoganyHills_1/scripts.pory"
	.string "IT'S GETTING CLOSER!$"

MahoganyScript_EventScript_Monster_Setup_Text_1:
# 60 "data/maps/MahoganyHills_1/scripts.pory"
	.string "A giant Poochyena charges up to you!$"

MahoganyScript_EventScript_Monster_Beaten_Text_0:
# 70 "data/maps/MahoganyHills_1/scripts.pory"
	.string "Oh wow you did it!$"

MahoganyScript_EventScript_Monster_Beaten_Text_1:
# 71 "data/maps/MahoganyHills_1/scripts.pory"
	.string "What my dad want's me back? I should\n"
	.string "rush home. Thanks again!$"

MahoganyScript_EventScript_Monster_Beaten_Text_2:
# 75 "data/maps/MahoganyHills_1/scripts.pory"
	.string "The Poochyena dropped something in the\n"
	.string "battle$"

Joke_Script_Text_0:
# 89 "data/maps/MahoganyHills_1/scripts.pory"
	.string "SHE STOLE MY KIDNEYS!$"

Joke_Script_Text_1:
# 91 "data/maps/MahoganyHills_1/scripts.pory"
	.string "You slowly pass out and head for the\n"
	.string "light.$"

Kidney_Easter_Egg_Text_0:
# 96 "data/maps/MahoganyHills_1/scripts.pory"
	.string "There is lots of blood around here.$"

MahoganyHills2_BugCatcher_Frank_Intro::
# 133 "data/maps/MahoganyHills_1/scripts.pory"
	.string "I'M THE TRASH MAN$"

MahoganyHills2_BugCatcher_Frank_Outro::
# 137 "data/maps/MahoganyHills_1/scripts.pory"
	.string "Oh$"

PostBattle_MahoganyHills2_BugCatcher_Frank::
# 141 "data/maps/MahoganyHills_1/scripts.pory"
	.string "Just toss me into the garbage$"

MahoganyHills2_ToughTrainer_Intro::
# 145 "data/maps/MahoganyHills_1/scripts.pory"
	.string "Let's start this battle.$"

MahoganyHills2_ToughTrainer_Outro::
# 149 "data/maps/MahoganyHills_1/scripts.pory"
	.string "You're an amazing battler$"

PostBattle_MahoganyHills1_ToughTrainer::
# 153 "data/maps/MahoganyHills_1/scripts.pory"
	.string "I'm going to train harder to be just like\n"
	.string "you$"
