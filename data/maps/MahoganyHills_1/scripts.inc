MahoganyHills_1_MapScripts::
	.byte 0


MahoganyTown_EventScript_ItemPokeBall_RockTomb::
	finditem ITEM_TM39
	return


MahoganyTown_EventScript_ItemPokeBall_ShockWave::
	finditem ITEM_TM34
	return


MahoganyTown_EventScript_Battle_Frank::
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_FRANK, MahoganyHills2_BugCatcher_Frank_Intro, MahoganyHills2_BugCatcher_Frank_Outro
	msgbox PostBattle_MahoganyHills2_BugCatcher_Frank, MSGBOX_AUTOCLOSE
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


MahoganyTown_EventScript_Battle_Tough::
	trainerbattle_single TRAINER_MAHOGANYHILLS_TOUGH_TRAINER, MahoganyHills2_ToughTrainer_Intro, MahoganyHills2_ToughTrainer_Outro
	msgbox PostBattle_MahoganyHills1_ToughTrainer
	setvar VAR_FIRST_TRAINERS_BEATEN_CHECK, VAR_FIRST_TRAINERS_BEATEN_CHECK + 1
	waitmessage
	end


MahoganyTown_EventScript_LostGirl_Right::
	lockall
	addobject 5
	setobjectxy 5, 23, 31
	call MahoganyScript_EventScript_ChildRunning
	applymovement 5, Movement_Child_Hidding_Behind_Player_Right
	waitmovement 5
	call MahoganyScript_EventScript_Monster_Setup
	call MahoganyScript_EventScript_Monster_Beaten
	releaseall
	return


MahoganyTown_EventScript_LostGirl_Left::
	lockall
	addobject 5
	setobjectxy 5, 23, 31
	call MahoganyScript_EventScript_ChildRunning
	applymovement 5, Movement_Child_Hidding_Behind_Player_Left
	waitmovement 5
	call MahoganyScript_EventScript_Monster_Setup
	call MahoganyScript_EventScript_Monster_Beaten
	releaseall
	return


MahoganyScript_EventScript_ChildRunning::
	msgbox MahoganyScript_EventScript_ChildRunning_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_MahoganyHills_ExclamationMark
	applymovement 5, Movement_Child_Being_Chased
	waitmovement 5
	msgbox MahoganyScript_EventScript_ChildRunning_Text_1
	return


MahoganyScript_EventScript_Monster_Setup::
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_0
	addobject 7
	setobjectxy 7, 23, 31
	applymovement 7, Movement_Child_Being_Chased
	waitmovement 7
	msgbox MahoganyScript_EventScript_Monster_Setup_Text_1
	settotemboost 1, 1, 1, 1, 0, 0, 0, 0
	setwildbattle SPECIES_POOCHYENA, 12, ITEM_BERRY_JUICE
	dowildbattle
	return


MahoganyScript_EventScript_Monster_Beaten::
	removeobject 7
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_0
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_1
	applymovement 5, Movement_Child_Being_Chased
	waitmovement 5
	removeobject 5
	msgbox MahoganyScript_EventScript_Monster_Beaten_Text_2
	giveitem ITEM_TM41, 1
	playfanfare MUS_OBTAIN_ITEM
	setvar VAR_TOWN_2_QUEST_STATE, 2
	clearflag FLAG_HIDE_TOWN2_HOUSE3_GIRL
	return


MahoganyScript_EventScript_HiddenArea::
	lockall
	warp MAP_MAHOGANY_HILLS_SECRET_AREA, 4, 16
	releaseall
	return


Joke_Script::
	msgbox Joke_Script_Text_0
	fadescreen FADE_TO_BLACK
	msgbox Joke_Script_Text_1
	return


Kidney_Easter_Egg::
	lock
	msgbox Kidney_Easter_Egg_Text_0
	release
	return


Movement_Child_Being_Chased:
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

Movement_Child_Hidding_Behind_Player_Right:
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_right
	face_down
	step_end

Movement_Child_Hidding_Behind_Player_Left:
	walk_fast_up
	walk_fast_up
	walk_fast_left
	face_down
	step_end

Movement_MahoganyHills_ExclamationMark:
	emote_exclamation_mark
	step_end

MahoganyScript_EventScript_ChildRunning_Text_0:
	.string "AHHHHH! HELP!$"

MahoganyScript_EventScript_ChildRunning_Text_1:
	.string "PLEASE HELP ME, IT'S A MONSTER$"

MahoganyScript_EventScript_Monster_Setup_Text_0:
	.string "IT'S GETTING CLOSER!$"

MahoganyScript_EventScript_Monster_Setup_Text_1:
	.string "A giant Poochyena charges up to you!$"

MahoganyScript_EventScript_Monster_Beaten_Text_0:
	.string "Oh wow you did it!$"

MahoganyScript_EventScript_Monster_Beaten_Text_1:
	.string "What my dad want's me back? I should\n"
	.string "rush home. Thanks again!$"

MahoganyScript_EventScript_Monster_Beaten_Text_2:
	.string "The Poochyena dropped something in the\n"
	.string "battle$"

Joke_Script_Text_0:
	.string "SHE STOLE MY KIDNEYS!$"

Joke_Script_Text_1:
	.string "You slowly pass out and head for the\n"
	.string "light.$"

Kidney_Easter_Egg_Text_0:
	.string "There is lots of blood around here.$"

MahoganyHills2_BugCatcher_Frank_Intro::
	.string "I'M THE TRASH MAN$"

MahoganyHills2_BugCatcher_Frank_Outro::
	.string "Oh$"

PostBattle_MahoganyHills2_BugCatcher_Frank::
	.string "Just toss me into the garbage$"

MahoganyHills2_ToughTrainer_Intro::
	.string "I keep seeing this guy appear and take\n"
	.string "a nap nearby.$"

MahoganyHills2_ToughTrainer_Outro::
	.string "I might have been in the sun too long.$"

PostBattle_MahoganyHills1_ToughTrainer::
	.string "They keep appearing and yelling\n"
	.string "something about his kidneys$"
