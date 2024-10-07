MahoganyHills_2_MapScripts::
	.byte 0


MahoganyHills_Bridge_Meet_Rival1::
	lockall
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_0
	applymovement 5, Movement_Rival_To_Bridge_MahoganyHill1
	waitmovement 5
	goto_if_unset FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN, MahoganyHills_Bridge_Meet_Rival1_2
MahoganyHills_Bridge_Meet_Rival1_1:
	call MahoganyHills_Rival_Battle
	return

MahoganyHills_Bridge_Meet_Rival1_2:
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_1
	setflag FLAG_BEDROCK_RIVAL_HOUSE_RIVAL_BEATEN
	goto MahoganyHills_Bridge_Meet_Rival1_1


MahoganyHills_Bridge_Meet_Rival2::
	lockall
	msgbox MahoganyHills_Bridge_Meet_Rival1_Text_0
	applymovement 5, Movement_Rival_To_Bridge_MahoganyHill2
	waitmovement 5
	call MahoganyHills_Rival_Battle
	return


MahoganyHills2_Battle_BugCatcher_Charlie::
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_CHARLIE, MahoganyHills2_BugCatcher_Charlie_Intro, MahoganyHills2_BugCatcher_Charlie_Outro, Bugcatcher_Trainer_Beaten
	msgbox PostBattle_MahoganyHills2_BugCatcher_Charlie, MSGBOX_AUTOCLOSE
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Ronald::
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_RONALD, MahoganyHills2_BugCatcher_Ronald_Intro, MahoganyHills2_BugCatcher_Ronald_Outro, Bugcatcher_Trainer_Beaten
	msgbox PostBattle_MahoganyHills2_BugCatcher_Ronald, MSGBOX_AUTOCLOSE
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Deandra::
	trainerbattle_double TRAINER_MAHOGANYHILLS_BUGCATCHER_DEE, MahoganyHills2_BugCatcher_Dee_Intro, MahoganyHills2_BugCatcher_Dee_Outro, MahoganyHills2_BugCatcher_Dee_NotEnoughMons, Bugcatcher_Trainer_Beaten
	msgbox PostBattle_MahoganyHills2_BugCatcher_Dee, MSGBOX_AUTOCLOSE
	waitmessage
	end


MahoganyHills2_Battle_BugCatcher_Dennis::
	lockall
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 4
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_2
MahoganyHills2_Battle_BugCatcher_Dennis_1:
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 5
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_5
MahoganyHills2_Battle_BugCatcher_Dennis_4:
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_11
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_3
MahoganyHills2_Battle_BugCatcher_Dennis_10:
	releaseall
	return

MahoganyHills2_Battle_BugCatcher_Dennis_2:
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills2_Battle_BugCatcher_Dennis_7
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_1
	goto MahoganyHills2_Battle_BugCatcher_Dennis_1

MahoganyHills2_Battle_BugCatcher_Dennis_5:
	call PostDennis_MH_Reward
	goto MahoganyHills2_Battle_BugCatcher_Dennis_4

MahoganyHills2_Battle_BugCatcher_Dennis_7:
	call Bugcatch_Dennis_MH2_Battle
	goto MahoganyHills2_Battle_BugCatcher_Dennis_1

MahoganyHills2_Battle_BugCatcher_Dennis_11:
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_2
	goto MahoganyHills2_Battle_BugCatcher_Dennis_10


MahoganyHills2_Trigger_Bugcatcher_Prize::
	lockall
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, Movement_Face_Dennis
	waitmovement OBJ_EVENT_ID_PLAYER
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_1
	giveitem ITEM_SILVER_POWDER
	playfanfare MUS_OBTAIN_ITEM
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 4
	msgbox MahoganyHills2_Trigger_Bugcatcher_Prize_Text_2, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills2_Trigger_Bugcatcher_Prize_2
	msgbox MahoganyHills2_Battle_BugCatcher_Dennis_Text_1
MahoganyHills2_Trigger_Bugcatcher_Prize_1:
	releaseall
	return

MahoganyHills2_Trigger_Bugcatcher_Prize_2:
	call Bugcatch_Dennis_MH2_Battle
	goto MahoganyHills2_Trigger_Bugcatcher_Prize_1


Bugcatcher_Trainer_Beaten::
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 2
	goto_if_eq Bugcatcher_Trainer_Beaten_2
Bugcatcher_Trainer_Beaten_1:
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 1
	goto_if_eq Bugcatcher_Trainer_Beaten_5
Bugcatcher_Trainer_Beaten_4:
	compare VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 0
	goto_if_eq Bugcatcher_Trainer_Beaten_7
	return

Bugcatcher_Trainer_Beaten_2:
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 3
	goto Bugcatcher_Trainer_Beaten_1

Bugcatcher_Trainer_Beaten_5:
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 2
	goto Bugcatcher_Trainer_Beaten_4

Bugcatcher_Trainer_Beaten_7:
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 1
	return


Bugcatch_Dennis_MH2_Battle::
	trainerbattle_single TRAINER_MAHOGANYHILLS_BUGCATCHER_DENNIS, MahoganyHills2_BugCatcher_Dennis_Intro, MahoganyHills2_BugCatcher_Dennis_Outro, Bugcatcher_Dennis_Beaten
	return


Bugcatcher_Dennis_Beaten::
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 5
	setvar VAR_TRAINERS_BEATEN_CHECK, VAR_TRAINERS_BEATEN_CHECK + 1
	msgbox Bugcatcher_Dennis_Beaten_Text_0
	releaseall
	return


PostDennis_MH_Reward::
	showmonpic SPECIES_SCYTHER, 10, 3
	givemon SPECIES_SCYTHER, 5
	playfanfare MUS_OBTAIN_ITEM
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq PostDennis_MH_Reward_1
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq PostDennis_MH_Reward_2
	hidemonpic
	msgbox PostDennis_MH_Reward_Text_1
	return

PostDennis_MH_Reward_1:
	msgbox PostDennis_MH_Reward_Text_0
	call NicknamePartyMon
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	return

PostDennis_MH_Reward_2:
	msgbox PostDennis_MH_Reward_Text_0
	call NicknamePartyMon
	setvar VAR_BUGCATCHERS_BEATEN_MAHOGANY_HILLS, 6
	return


MahoganyHills_Rival_Battle::
	msgbox MahoganyHills_Rival_Battle_Text_0
	switch VAR_STARTER_MON
	case 0, MahoganyHills_Rival_Battle_2
	case 1, MahoganyHills_Rival_Battle_3
	case 2, MahoganyHills_Rival_Battle_4
	return

MahoganyHills_Rival_Battle_2:
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_TREECKO, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return

MahoganyHills_Rival_Battle_3:
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_CYNDAQUIL, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return

MahoganyHills_Rival_Battle_4:
	trainerbattle_single TRAINER_RIVAL_MAHOGANYHILL_SQUIRTLE, MahoganyHills_Rival_Battle_Intro, MahoganyHills_Rival_Battle_Outro, MahoganyHills_RivalBeaten
	return


MahoganyHills_RivalBeaten::
	setvar VAR_RIVAL_FIGHT_2, 1
	setflag FLAG_MAHOGANY_TOWN_RIVAL_BEATEN
	msgbox MahoganyHills_RivalBeaten_Text_0
	msgbox MahoganyHills_RivalBeaten_Text_1
	giveitem ITEM_HM01, 1
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_RECEIVED_HM01
	goto_if_unset FLAG_RECEIVED_EXP_SHARE, MahoganyHills_RivalBeaten_2
MahoganyHills_RivalBeaten_1:
	msgbox MahoganyHills_RivalBeaten_Text_3
	applymovement 5, Movement_Rival_Off_Bridge_MahoganyHill
	waitmovement 5
	removeobject 5
	releaseall
	return

MahoganyHills_RivalBeaten_2:
	msgbox MahoganyHills_RivalBeaten_Text_2
	giveitem ITEM_EXP_SHARE, 1
	setflag FLAG_RECEIVED_EXP_SHARE
	goto MahoganyHills_RivalBeaten_1


MahoganyHills_MeetRoxanne::
	lockall
	addobject 6
	setobjectxy 6, 36, 2
	applymovement 6, Movement_Roxanne_Appearing
	waitmovement 6
	msgbox MahoganyHills_MeetRoxanne_Text_0
	trainerbattle_single TRAINER_ROXANNE_1, MahoganyHills_Roxanne_Battle_Intro, MahoganyHills_Roxanne_Battle_Outro, MahoganyHills_RoxanneBeaten
	releaseall
	return


MahoganyHills_RoxanneBeaten::
	lockall
	msgbox MahoganyHills_RoxanneBeaten_Text_0
	msgbox MahoganyHills_RoxanneBeaten_Text_1
	giveitem ITEM_TM37
	playfanfare MUS_OBTAIN_ITEM
	setflag FLAG_ITEM_MAHOGANY_HILLS_POKEBALL_ROCK_TOMB
	msgbox MahoganyHills_RoxanneBeaten_Text_2
	applymovement OBJ_EVENT_ID_PLAYER, Movement_PlayerLeft
	waitmovement OBJ_EVENT_ID_PLAYER
	applymovement 6, Movement_Roxanne_Leaving
	waitmovement 6
	removeobject 6
	setvar VAR_MAHOGANYHILLS_FOSSIL_ROXANNE, 1
	releaseall
	return


MahoganyHills_LegendaryDungeon::
	lockall
	compare VAR_MAHOGANCYHILLS_BUTTONS_PRESSED, 4
	goto_if_eq MahoganyHills_LegendaryDungeon_2
	msgbox MahoganyHills_LegendaryDungeon_Text_2
MahoganyHills_LegendaryDungeon_1:
	releaseall
	return

MahoganyHills_LegendaryDungeon_2:
	msgbox MahoganyHills_LegendaryDungeon_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHills_LegendaryDungeon_5
	goto MahoganyHills_LegendaryDungeon_1

MahoganyHills_LegendaryDungeon_5:
	msgbox MahoganyHills_LegendaryDungeon_Text_1
	goto MahoganyHills_LegendaryDungeon_1


MahongayHill2_ItemBall_SunStone::
	finditem ITEM_SUN_STONE
	return


MahongayHill2_EventScript_ItemPPUp::
	finditem ITEM_PP_UP
	return


Movement_Rival_To_Bridge_MahoganyHill1:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_Rival_To_Bridge_MahoganyHill2:
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Movement_Rival_Off_Bridge_MahoganyHill:
	face_up
	walk_up
	walk_up
	face_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

Movement_Face_Dennis:
	face_left
	step_end

Movement_Roxanne_Appearing:
	walk_down
	step_end

Movement_PlayerLeft:
	walk_left
	face_right
	step_end

Movement_Roxanne_Leaving:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

MahoganyHills_Bridge_Meet_Rival1_Text_0:
	.string "Hey you're finally here!$"

MahoganyHills_Bridge_Meet_Rival1_Text_1:
	.string "You finally decided to join me then! I\n"
	.string "thought you'd never get out of bed. You\l"
	.string "remember the bet you made last year?\p"
	.string "First one to become A champion wins.$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_0:
	.string "Ready for a real challenge then?$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_1:
	.string "Maybe another time then$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_2:
	.string "Never expected to find someone so\n"
	.string "strong here.$"

MahoganyHills2_Battle_BugCatcher_Dennis_Text_3:
	.string "Move along, you don't have a chance\n"
	.string "against me.$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_0:
	.string "Hey!$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_1:
	.string "Well done on beating the others. You\n"
	.string "deserve a reward.$"

MahoganyHills2_Trigger_Bugcatcher_Prize_Text_2:
	.string "If you want a real challenge you can try\n"
	.string "and beat me!\p"
	.string "Think you have what it takes?$"

Bugcatcher_Dennis_Beaten_Text_0:
	.string "That was crazy. Take this as a reward!$"

PostDennis_MH_Reward_Text_0:
	.string "Recieved Scyther$"

PostDennis_MH_Reward_Text_1:
	.string "You don't have enough space. Come back\n"
	.string "and you get it soon.$"

MahoganyHills_Rival_Battle_Text_0:
	.string "You're so slow, I've already got myself a\n"
	.string "badge. It was a breeze. My Pokémon\l"
	.string "barely broke a sweat. In fact I bet\l"
	.string "they could beat you here!$"

MahoganyHills_RivalBeaten_Text_0:
	.string "You may have won but I'm still the one\n"
	.string "with the most badges!$"

MahoganyHills_RivalBeaten_Text_1:
	.string "The badge let's me use cut now, here\n"
	.string "take the HM so you can catch up if you\l"
	.string "can beat the gym!$"

MahoganyHills_RivalBeaten_Text_2:
	.string "Also here is an extra gift for you, it\n"
	.string "should come in useful!$"

MahoganyHills_RivalBeaten_Text_3:
	.string "Seeya Slowpoke$"

MahoganyHills_MeetRoxanne_Text_0:
	.string "Oh hi there. I was just visiting Darwin\n"
	.string "and his incredible collection of\l"
	.string "fossils. Apparently Mahogany Hills is\l"
	.string "one of the best places to find them.$"

MahoganyHills_RoxanneBeaten_Text_0:
	.string "Well you are pretty tough! You would be\n"
	.string "a Hoenn Champion in no time if you where\l"
	.string "over there.$"

MahoganyHills_RoxanneBeaten_Text_1:
	.string "Take this as well!$"

MahoganyHills_RoxanneBeaten_Text_2:
	.string "I hope to see you again!$"

MahoganyHills_LegendaryDungeon_Text_0:
	.string "The boulder looks like it can be moved.\n"
	.string "Do you want to push it?$"

MahoganyHills_LegendaryDungeon_Text_1:
	.string "COMING SOON$"

MahoganyHills_LegendaryDungeon_Text_2:
	.string "It won't budge.$"

MahoganyHills_Rival_Battle_Intro::
	.string "Don't worry if you lose it's only natural$"

MahoganyHills_Rival_Battle_Outro::
	.string "Well that wasn't expected. Guess you'll\n"
	.string "have no issue in the gym.$"

MahoganyHills2_BugCatcher_Charlie_Intro::
	.string "This is an amazing place to find some\n"
	.string "night crawlers.$"

MahoganyHills2_BugCatcher_Charlie_Outro::
	.string "I'll just go play it at home instead,\n"
	.string "atleast I've got a chance$"

PostBattle_MahoganyHills2_BugCatcher_Charlie::
	.string "Have you seen Frank anywhere? He get's\n"
	.string "lost in the tall grass easily.$"

MahoganyHills2_BugCatcher_Ronald_Intro::
	.string "Hey you, I'm gonna fight ya!$"

MahoganyHills2_BugCatcher_Ronald_Outro::
	.string "God dammit dude$"

PostBattle_MahoganyHills2_BugCatcher_Ronald::
	.string "Need to tack on more mass to have a\n"
	.string "chance, get something huge.$"

MahoganyHills2_BugCatcher_Dee_Intro::
	.string "I ran out of things to say so we will fix\n"
	.string "this later$"

MahoganyHills2_BugCatcher_Dee_Outro::
	.string "Something something funny outro$"

MahoganyHills2_BugCatcher_Dee_NotEnoughMons::
	.string "You need two Pokémon to battle$"

PostBattle_MahoganyHills2_BugCatcher_Dee::
	.string "You must have been cheating...$"

MahoganyHills2_BugCatcher_Dennis_Intro::
	.string "Alright then, you're going to regret\n"
	.string "this$"

MahoganyHills2_BugCatcher_Dennis_Outro::
	.string "...$"

PostBattle_MahoganyHills2_BugCatcher_Dennis::
	.string "I haven't even begun to peak.$"

MahoganyHills_Roxanne_Battle_Intro::
	.string "Oh you're a Pokémon trainer. I could go\n"
	.string "for a battle before I head off.$"

MahoganyHills_Roxanne_Battle_Outro::
	.string "Incredible$"
