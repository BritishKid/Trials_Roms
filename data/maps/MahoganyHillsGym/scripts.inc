MahoganyHillsGym_MapScripts::
	.byte 0


MahoganyHillsGym_EventScript_PodiumText::
# 5 "data/maps/MahoganyHillsGym/scripts.pory"
	lockall
# 6 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_0
# 7 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_1
# 8 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_2
# 9 "data/maps/MahoganyHillsGym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, MahoganyHillsGym_EventScript_PodiumText_2
MahoganyHillsGym_EventScript_PodiumText_1:
# 12 "data/maps/MahoganyHillsGym/scripts.pory"
	releaseall
	return

MahoganyHillsGym_EventScript_PodiumText_2:
# 10 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_PodiumText_Text_3
	goto MahoganyHillsGym_EventScript_PodiumText_1


MahoganyHillsGym_EventScript_Greeter::
# 16 "data/maps/MahoganyHillsGym/scripts.pory"
	lockall
# 17 "data/maps/MahoganyHillsGym/scripts.pory"
	faceplayer
# 18 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_Greeter_Text_0
# 19 "data/maps/MahoganyHillsGym/scripts.pory"
	goto_if_unset FLAG_BADGE01_GET, MahoganyHillsGym_EventScript_Greeter_3
MahoganyHillsGym_EventScript_Greeter_1:
# 25 "data/maps/MahoganyHillsGym/scripts.pory"
	releaseall
	return

MahoganyHillsGym_EventScript_Greeter_2:
# 20 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_EventScript_Greeter_Text_1, MSGBOX_YESNO
# 21 "data/maps/MahoganyHillsGym/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq MahoganyHillsGym_EventScript_Greeter_6
	goto MahoganyHillsGym_EventScript_Greeter_1

MahoganyHillsGym_EventScript_Greeter_3:
# 19 "data/maps/MahoganyHillsGym/scripts.pory"
	goto_if_set FLAG_LEVEL_CAPS, MahoganyHillsGym_EventScript_Greeter_2
	goto MahoganyHillsGym_EventScript_Greeter_1

MahoganyHillsGym_EventScript_Greeter_6:
# 22 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_no_intro GYM_XP_DUMP, GymXpDump_Outro
	goto MahoganyHillsGym_EventScript_Greeter_1


MahoganyHillsGym_Trainer_Andy::
# 29 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_ANDY, MahoganyHillsGym_Andy_Intro, MahoganyHillsGym_Andy_Outro, Increase_Trainers_Beaten
# 30 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Andy_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Skye::
# 35 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_SKYE, MahoganyHillsGym_Skye_Intro, MahoganyHillsGym_Skye_Outro, Increase_Trainers_Beaten
# 36 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Skye_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Wright::
# 41 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_WRIGHT, MahoganyHillsGym_Wright_Intro, MahoganyHillsGym_Wright_Outro, Increase_Trainers_Beaten
# 42 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Wright_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_Trainer_Ollie::
# 47 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_single MAHOGANYHILLSGYM_TRAINER_OLLIE, MahoganyHillsGym_Ollie_Intro, MahoganyHillsGym_Ollie_Outro, Increase_Trainers_Beaten
# 48 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Ollie_PostbattleScript, MSGBOX_AUTOCLOSE
	end


MahoganyHillsGym_EventScript_GymLeader::
# 53 "data/maps/MahoganyHillsGym/scripts.pory"
	lockall
# 54 "data/maps/MahoganyHillsGym/scripts.pory"
	trainerbattle_single TRAINER_MAHOGANYHILLS_GYM_LEADER, MahoganyHillsGym_Gym_Leader_Intro, MahoganyHillsGym_Gym_Leader_Outro, MahoganyHillsGym_Gym_Leader_PostbattleScript
# 55 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Gym_Leader_PostBattle, MSGBOX_AUTOCLOSE
# 56 "data/maps/MahoganyHillsGym/scripts.pory"
	releaseall
	return


MahoganyHillsGym_Gym_Leader_PostbattleScript::
# 60 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_0
# 61 "data/maps/MahoganyHillsGym/scripts.pory"
	playfanfare MUS_OBTAIN_BADGE
# 62 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_1
# 63 "data/maps/MahoganyHillsGym/scripts.pory"
	special DoDomeConfetti
# 64 "data/maps/MahoganyHillsGym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 65 "data/maps/MahoganyHillsGym/scripts.pory"
	subquestmenu QUEST_MENU_COMPLETE_QUEST, QUEST_POKEMON_LEAGUE, SUB_QUEST_GALE_BADGE
# 66 "data/maps/MahoganyHillsGym/scripts.pory"
	msgbox MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_2
# 67 "data/maps/MahoganyHillsGym/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 68 "data/maps/MahoganyHillsGym/scripts.pory"
	giveitem ITEM_TM51_PLUCK
# 69 "data/maps/MahoganyHillsGym/scripts.pory"
	releaseall
	return


MahoganyHillsGym_EventScript_PodiumText_Text_0:
# 6 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Mahogany Hill Gym. Making trainers soar\n"
	.string "to new heights$"

MahoganyHillsGym_EventScript_PodiumText_Text_1:
# 7 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Certified Trainers$"

MahoganyHillsGym_EventScript_PodiumText_Text_2:
# 8 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Nathan, Tanski, KoraidonFan783,\n"
	.string "LimblessCarpet, Tapdabtap 84, The TC,\l"
	.string "BitBeads, Jordan, Robert$"

MahoganyHillsGym_EventScript_PodiumText_Text_3:
# 10 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "{PLAYER}$"

MahoganyHillsGym_EventScript_Greeter_Text_0:
# 18 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Yo champ in the making! This gym\n"
	.string "specialises in flying types. Rock,\l"
	.string "Electric and Ice is the best way to\l"
	.string "take them out$"

MahoganyHillsGym_EventScript_Greeter_Text_1:
# 20 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Are you interested in getting some fast\n"
	.string "levels?$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_0:
# 60 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Well done for beating me, here take this\n"
	.string "badge to show you've proven yourself.$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_1:
# 62 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "You obtained the Gale Badge.$"

MahoganyHillsGym_Gym_Leader_PostbattleScript_Text_2:
# 66 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Also please take this TM$"

MahoganyHillsGym_Gym_Leader_Intro::
# 74 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Hi! My name is Jaiden!\n"
	.string "It seems you have come to fight.\n"
	.string "Be prepared to be gusted away by my\l"
	.string "Flying Types!$"

MahoganyHillsGym_Gym_Leader_Outro::
# 78 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "It appears you have the power of a\n"
	.string "tornado!$"

MahoganyHillsGym_Gym_Leader_PostBattle::
# 82 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Good luck on getting the other badges,\n"
	.string "you'll be a champion in no time$"

MahoganyHillsGym_Andy_Intro::
# 86 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "I'm getting ready for the battle\n"
	.string "champion dojo!$"

MahoganyHillsGym_Andy_Outro::
# 90 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Hawlucha no!$"

MahoganyHillsGym_Andy_PostbattleScript::
# 94 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "I'll have to keep training Hawlucha\n"
	.string "before the tournament starts.$"

MahoganyHillsGym_Ollie_Intro::
# 98 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "This gym is a great place for me to\n"
	.string "master the flying type$"

MahoganyHillsGym_Ollie_Outro::
# 102 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Well that took the air out of my balloon$"

MahoganyHillsGym_Ollie_PostbattleScript::
# 106 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "I've learnt enough, time to learn about\n"
	.string "water Pokémon$"

MahoganyHillsGym_Skye_Intro::
# 110 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Welcome to Mahogany Hills Gym. You've\n"
	.string "got no chance against our leader\l"
	.string "Jaiden.$"

MahoganyHillsGym_Skye_Outro::
# 114 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Oh maybe you do.$"

MahoganyHillsGym_Skye_PostbattleScript::
# 118 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Jaiden comes from Peak City, they train\n"
	.string "the strongest flying type Pokémon up\l"
	.string "there.$"

MahoganyHillsGym_Wright_Intro::
# 122 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Have you ever been to Peak City?$"

MahoganyHillsGym_Wright_Outro::
# 126 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "It's meant to be amazing$"

MahoganyHillsGym_Wright_PostbattleScript::
# 130 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "I really can't wait to finally get to\n"
	.string "Peak City$"

GymXpDump_Intro::
# 134 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Let's go then$"

GymXpDump_Outro::
# 138 "data/maps/MahoganyHillsGym/scripts.pory"
	.string "Very good$"
