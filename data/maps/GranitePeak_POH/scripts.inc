GranitePeak_POH_MapScripts::
	.byte 0


GranitePeak_HouseSeller::
# 4 "data/maps/GranitePeak_POH/scripts.pory"
	lockall
# 5 "data/maps/GranitePeak_POH/scripts.pory"
	msgbox GranitePeak_HouseSeller_Text_0
# 6 "data/maps/GranitePeak_POH/scripts.pory"
	setvar VAR_0x8005, 50000
# 7 "data/maps/GranitePeak_POH/scripts.pory"
	msgbox GranitePeak_HouseSeller_Text_1, MSGBOX_YESNO
# 8 "data/maps/GranitePeak_POH/scripts.pory"
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_HouseSeller_2
GranitePeak_HouseSeller_1:
# 11 "data/maps/GranitePeak_POH/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_HouseSeller_5
GranitePeak_HouseSeller_4:
# 22 "data/maps/GranitePeak_POH/scripts.pory"
	releaseall
	return

GranitePeak_HouseSeller_2:
# 9 "data/maps/GranitePeak_POH/scripts.pory"
	msgbox GranitePeak_HouseSeller_Text_2
	goto GranitePeak_HouseSeller_1

GranitePeak_HouseSeller_5:
# 12 "data/maps/GranitePeak_POH/scripts.pory"
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
# 13 "data/maps/GranitePeak_POH/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_ne GranitePeak_HouseSeller_7
# 19 "data/maps/GranitePeak_POH/scripts.pory"
	msgbox GranitePeak_HouseSeller_Text_4, MSGBOX_AUTOCLOSE
	goto GranitePeak_HouseSeller_4

GranitePeak_HouseSeller_7:
# 14 "data/maps/GranitePeak_POH/scripts.pory"
	special SubtractMoneyFromVar0x8005
# 15 "data/maps/GranitePeak_POH/scripts.pory"
	msgbox GranitePeak_HouseSeller_Text_3, MSGBOX_AUTOCLOSE
# 16 "data/maps/GranitePeak_POH/scripts.pory"
	setflag FLAG_HOUSE_OWNED
	goto GranitePeak_HouseSeller_4


GranitePeak_HouseSeller_Text_0:
# 5 "data/maps/GranitePeak_POH/scripts.pory"
	.string "Hi.\n"
	.string "Are you interested in buying this\l"
	.string "house?$"

GranitePeak_HouseSeller_Text_1:
# 7 "data/maps/GranitePeak_POH/scripts.pory"
	.string "You can buy it for 50,000$"

GranitePeak_HouseSeller_Text_2:
# 9 "data/maps/GranitePeak_POH/scripts.pory"
	.string "Maybe some other time$"

GranitePeak_HouseSeller_Text_3:
# 15 "data/maps/GranitePeak_POH/scripts.pory"
	.string "Congratulations you are now a home\n"
	.string "owner! Come visit me anytime in the\l"
	.string "estate agents to buy upgrades or\l"
	.string "furniture!$"

GranitePeak_HouseSeller_Text_4:
# 19 "data/maps/GranitePeak_POH/scripts.pory"
	.string "You cannot afford to buy the house\n"
	.string "currently.$"
