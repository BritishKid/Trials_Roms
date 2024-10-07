MahoganyHillsGym_MapScripts::
	.byte 0


MahoganyHillsGym_EventScript_PodiumText::
	lockall
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_0
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_1
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_2
	goto_if_set FLAG_BADGE01_GET, MahoganyHillsGym_EventScript_PodiumText_2
MahoganyHillsGym_EventScript_PodiumText_1:
	releaseall
	return

MahoganyHillsGym_EventScript_PodiumText_2:
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_3
	goto MahoganyHillsGym_EventScript_PodiumText_1


MahoganyHillsGym_EventScript_Greeter::
	lockall
	faceplayer
	msgbox MahoganyHillsGym_EventScript_Greeter_Text_0
	goto_if_unset FLAG_BADGE01_GET, MahoganyHillsGym_EventScript_Greeter_3
MahoganyHillsGym_EventScript_Greeter_1:
	releaseall
	return

MahoganyHillsGym_EventScript_Greeter_2:
	msgbox MahoganyHillsGym_EventScript_Greeter_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHillsGym_EventScript_Greeter_6
	goto MahoganyHillsGym_EventScript_Greeter_1

MahoganyHillsGym_EventScript_Greeter_3:
	goto_if_set FLAG_LEVEL_CAPS, MahoganyHillsGym_EventScript_Greeter_2
	goto MahoganyHillsGym_EventScript_Greeter_1

MahoganyHillsGym_EventScript_Greeter_6:
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto MahoganyHillsGym_EventScript_Greeter_1


MahoganyHillsGym_Trainer_Andy::
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_ANDY, MahoganyHillsGym_Andy_Intro, MahoganyHillsGym_Andy_Outro, Increase_Trainers_Beaten
	msgbox MahoganyHillsGym_Andy_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Skye::
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_SKYE, MahoganyHillsGym_Skye_Intro, MahoganyHillsGym_Skye_Outro, Increase_Trainers_Beaten
	msgbox MahoganyHillsGym_Skye_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Wright::
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_WRIGHT, MahoganyHillsGym_Wright_Intro, MahoganyHillsGym_Wright_Outro, Increase_Trainers_Beaten
	msgbox MahoganyHillsGym_Wright_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Ollie::
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_OLLIE, MahoganyHillsGym_Ollie_Intro, MahoganyHillsGym_Ollie_Outro, Increase_Trainers_Beaten
	msgbox MahoganyHillsGym_Ollie_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_EventScript_GymLeader::
	lockall
	trainerbattle_single TRAINER_MAHOGANYHILLS_GYM_LEADER, MahoganyHillsGym_Gym_Leader_Intro, MahoganyHillsGym_Gym_Leader_Outro, MahoganyHillsGym_Gym_Leader_PostbattleScript
	msgbox MahoganyHillsGym_Gym_Leader_PostBattle, MSGBOX_AUTOCLOSE
	releaseall
	return


MahoganyHillsGym_Gym_Leader_PostbattleScript::
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_0
	playfanfare MUS_OBTAIN_BADGE
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_1
	special DoDomeConfetti
	setflag FLAG_BADGE01_GET
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GALE_BADGE
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_2
	playfanfare MUS_OBTAIN_ITEM
	giveitem ITEM_TM51_PLUCK
	releaseall
	return


MahoganyHillsGym_EventScript_PodiumText_Text_0:
	.string "Mahogany Hill Gym. Making trainers soar\n"
	.string "to new heights$"

MahoganyHillsGym_EventScript_PodiumText_Text_1:
	.string "Certified Trainers$"

MahoganyHillsGym_EventScript_PodiumText_Text_2:
	.string "Nathan, Tanski, KoraidonFan783,\n"
	.string "LimblessCarpet, Tapdabtap 84, The TC,\l"
	.string "BitBeads, Jordan, Robert$"

MahoganyHillsGym_EventScript_PodiumText_Text_3:
	.string "{PLAYER}$"

MahoganyHillsGym_EventScript_Greeter_Text_0:
	.string "Yo champ in the making! This gym\n"
	.string "specialises in flying types. Rock,\l"
	.string "Electric and Ice is the best way to\l"
	.string "take them out$"

MahoganyHillsGym_EventScript_Greeter_Text_1:
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_0:
	.string "Well done for beating me, here take this\n"
	.string "badge to show you've proven yourself.$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_1:
	.string "You obtained the Gale Badge.$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_2:
	.string "Also please take this TM$"

MahoganyHillsGym_Gym_Leader_Intro::
	.string "Hi! My name is Jaiden!\n"
	.string "It seems you have come to fight.\n"
	.string "Be prepared to be gusted away by my\l"
	.string "Flying Types!$"

MahoganyHillsGym_Gym_Leader_Outro::
	.string "It appears you have the power of a\n"
	.string "tornado!$"

MahoganyHillsGym_Gym_Leader_PostBattle::
	.string "Good luck on getting the other badges,\n"
	.string "you'll be a champion in no time$"

MahoganyHillsGym_Andy_Intro::
	.string "I'm getting ready for the battle\n"
	.string "champion dojo!$"

MahoganyHillsGym_Andy_Outro::
	.string "Hawlucha no!$"

MahoganyHillsGym_Andy_PostbattleScript::
	.string "I'll have to keep training Hawlucha\n"
	.string "before the tournament starts.$"

MahoganyHillsGym_Ollie_Intro::
	.string "This gym is a great place for me to\n"
	.string "master the flying type$"

MahoganyHillsGym_Ollie_Outro::
	.string "Well that took the air out of my balloon$"

MahoganyHillsGym_Ollie_PostbattleScript::
	.string "I've learnt enough, time to learn about\n"
	.string "water Pokémon$"

MahoganyHillsGym_Skye_Intro::
	.string "Welcome to Mahogany Hills Gym. You've\n"
	.string "got no chance against our leader\l"
	.string "Jaiden.$"

MahoganyHillsGym_Skye_Outro::
	.string "Oh maybe you do.$"

MahoganyHillsGym_Skye_PostbattleScript::
	.string "Jaiden comes from Peak City, they train\n"
	.string "the strongest flying type Pokémon up\l"
	.string "there.$"

MahoganyHillsGym_Wright_Intro::
	.string "Have you ever been to Peak City?$"

MahoganyHillsGym_Wright_Outro::
	.string "It's meant to be amazing$"

MahoganyHillsGym_Wright_PostbattleScript::
	.string "I really can't wait to finally get to\n"
	.string "Peak City$"

GymXpDump_Intro::
	.string "Let's go then$"

GymXpDump_Outro::
	.string "Very good$"
