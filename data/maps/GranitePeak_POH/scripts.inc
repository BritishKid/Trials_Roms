GranitePeak_POH_MapScripts::
	.byte 0


GranitePeak_HouseSeller::
	lockall
	msgbox GranitePeak_HouseSeller_Text_0
	setvar VAR_0x8005, 50000
	msgbox GranitePeak_HouseSeller_Text_1, MSGBOX_YESNO
	compare VAR_RESULT, NO
	goto_if_eq GranitePeak_HouseSeller_2
GranitePeak_HouseSeller_1:
	compare VAR_RESULT, YES
	goto_if_eq GranitePeak_HouseSeller_5
GranitePeak_HouseSeller_4:
	releaseall
	return

GranitePeak_HouseSeller_2:
	msgbox GranitePeak_HouseSeller_Text_2
	goto GranitePeak_HouseSeller_1

GranitePeak_HouseSeller_5:
	specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
	compare VAR_RESULT, 0
	goto_if_ne GranitePeak_HouseSeller_7
	msgbox GranitePeak_HouseSeller_Text_4, MSGBOX_AUTOCLOSE
	goto GranitePeak_HouseSeller_4

GranitePeak_HouseSeller_7:
	special SubtractMoneyFromVar0x8005
	msgbox GranitePeak_HouseSeller_Text_3, MSGBOX_AUTOCLOSE
	setflag FLAG_HOUSE_OWNED
	goto GranitePeak_HouseSeller_4


GranitePeak_HouseSeller_Text_0:
	.string "Hi.\n"
	.string "Are you interested in buying this\l"
	.string "house?$"

GranitePeak_HouseSeller_Text_1:
	.string "You can buy it for 50,000$"

GranitePeak_HouseSeller_Text_2:
	.string "Maybe some other time$"

GranitePeak_HouseSeller_Text_3:
	.string "Congratulations you are now a home\n"
	.string "owner! Come visit me anytime in the\l"
	.string "estate agents to buy upgrades or\l"
	.string "furniture!$"

GranitePeak_HouseSeller_Text_4:
	.string "You cannot afford to buy the house\n"
	.string "currently.$"
