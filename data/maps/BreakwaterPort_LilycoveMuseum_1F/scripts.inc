.set LOCALID_CURATOR, 2
.set LOCALID_ARTIST_2, 8

BreakwaterPort_LilycoveMuseum_1F_MapScripts::
	.byte 0

BreakwaterPort_LilycoveMuseum_1F_EventScript_Greeter::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_Curator::
	lockall
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	message BreakwaterPort_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	waitmessage
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
	goto_if_eq VAR_RESULT, 0, BreakwaterPort_LilycoveMuseum_1F_EventScript_SawPaintings
	goto_if_eq VAR_RESULT, 1, BreakwaterPort_LilycoveMuseum_1F_EventScript_NotYet
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_NotYet::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_SawPaintings::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, BreakwaterPort_LilycoveMuseum_1F_EventScript_NotInterested
	goto_if_eq VAR_RESULT, YES, BreakwaterPort_LilycoveMuseum_1F_EventScript_InterestedInPaintings
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_NotInterested::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
	releaseall
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
	applymovement LOCALID_CURATOR, BreakwaterPort_LilycoveMuseum_1F_Movement_CuratorEnterStairs
	waitmovement 0
	removeobject LOCALID_CURATOR
	switch VAR_FACING
	case DIR_NORTH, BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
	case DIR_WEST, BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorWest
	case DIR_EAST, BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorEast
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorNorth
	waitmovement 0
	warp MAP_BREAKWATER_PORT_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorWest
	waitmovement 0
	warp MAP_BREAKWATER_PORT_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorEast
	waitmovement 0
	warp MAP_BREAKWATER_PORT_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

BreakwaterPort_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
	walk_up
	step_end

BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorWest:
	walk_left
	walk_up
	step_end

BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorEast:
	walk_right
	walk_up
	step_end

BreakwaterPort_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
	walk_up
	walk_up
	step_end

BreakwaterPort_LilycoveMuseum_1F_EventScript_OldPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_FantasyPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_WomanPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_BerryPainting::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_EventScript_BirdSculpture::
	msgbox BreakwaterPort_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_StoneTablet::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_SchoolKidM::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_Artist1::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_NinjaBoy::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_Woman1::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_Woman2::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_PsychicM::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_Artist2::
	lock
	faceplayer
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

BreakwaterPort_LilycoveMuseum_1F_EventScript_FatMan::
	msgbox BreakwaterPort_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
	end

BreakwaterPort_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
	.string "Welcome to LILYCOVE MUSEUM.\p"
	.string "Please take the time to enjoy our\n"
	.string "collection of fantastic artwork\l"
	.string "featuring POKéMON.$"

BreakwaterPort_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
	.string "I'm the CURATOR of this MUSEUM of\n"
	.string "fine arts.\p"
	.string "It's heartening to see someone so\n"
	.string "young as you in our MUSEUM.\p"
	.string "Have you viewed our collection of\n"
	.string "paintings already?$"

BreakwaterPort_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
	.string "Ah, then let me not disturb you.\n"
	.string "Please, do take your time.$"

BreakwaterPort_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
	.string "Oh? I do believe that you seem to\n"
	.string "be a POKéMON TRAINER.\p"
	.string "Have you an interest in paintings,\n"
	.string "too?$"

BreakwaterPort_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
	.string "I see…\p"
	.string "I'm honored that you would visit\n"
	.string "us in spite of that.$"

BreakwaterPort_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
	.string "Ah, excellent!\n"
	.string "You do like paintings!\p"
	.string "Then, may I ask you to come with me?$"

BreakwaterPort_LilycoveMuseum_1F_Text_VeryOldPainting:
	.string "It's a very old painting.\n"
	.string "The paint is peeling here and there.$"

BreakwaterPort_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
	.string "It's an odd landscape with bizarre\n"
	.string "and fantastic scenery.$"

BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
	.string "It's a painting of a beautiful, smiling\n"
	.string "woman with a POKéMON on her lap.$"

BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
	.string "It's a painting of a legendary POKéMON\n"
	.string "from long ago.\p"
	.string "The artist painted this from\n"
	.string "imagination.$"

BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
	.string "It's a painting of GRASS POKéMON\n"
	.string "swaying in a breeze.\p"
	.string "They appear to be enjoying the wind's\n"
	.string "gentle caress.$"

BreakwaterPort_LilycoveMuseum_1F_Text_PaintingOfBerries:
	.string "It's a delicious-looking painting\n"
	.string "of BERRIES.\p"
	.string "This painting could make you hungry!$"

BreakwaterPort_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
	.string "It's a replica of a famous sculpture.\p"
	.string "It depicts an ancient BIRD POKéMON.$"

BreakwaterPort_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
	.string "It's a big POKé BALL carved from\n"
	.string "a black stone.\p"
	.string "It was apparently used in festivals\n"
	.string "in the olden days.$"

BreakwaterPort_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
	.string "It's a huge stone tablet inscribed\n"
	.string "with POKéMON and dense text in the\l"
	.string "small characters of an ancient,\l"
	.string "unreadable language.$"

BreakwaterPort_LilycoveMuseum_1F_Text_WorksOfMagnificence:
	.string "Hmmm…\n"
	.string "What works of great magnificence…$"

BreakwaterPort_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
	.string "Battling with POKéMON is fun,\n"
	.string "I'll grant you that.\p"
	.string "But one mustn't forget our love for\n"
	.string "the fine arts.$"

BreakwaterPort_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
	.string "This ART MUSEUM… Well, you could\n"
	.string "see many fantastic paintings.\p"
	.string "And the CURATOR is a wonderful person.\p"
	.string "Among artists like myself, this MUSEUM\n"
	.string "is an inspiration.$"

BreakwaterPort_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
	.string "This lady is pretty!\n"
	.string "She's like Mommy!$"

BreakwaterPort_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
	.string "This POKéMON is adorable!\n"
	.string "Just like our little boy!$"

BreakwaterPort_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
	.string "I'd heard that this ART MUSEUM got\n"
	.string "in some new paintings.\p"
	.string "So, naturally I hurried over.\p"
	.string "Are the new paintings up on\n"
	.string "the second floor?$"

BreakwaterPort_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
	.string "Lately, the CURATOR has been\n"
	.string "unusually cheerful.\p"
	.string "I bet something good happened for him.\n"
	.string "Definitely.$"

BreakwaterPort_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
	.string "I aim to see many great paintings\n"
	.string "here and learn from them.\p"
	.string "I have this dream of one day having\n"
	.string "my artwork exhibited here.$"

BreakwaterPort_LilycoveMuseum_1F_Text_MuseumTouristDestination:
	.string "The ART MUSEUM has become a favorite\n"
	.string "tourist destination.\p"
	.string "It's great for LILYCOVE…\n"
	.string "No, great for the HOENN region!\p"
	.string "This is what I've heard--a lone TRAINER\n"
	.string "procured all the paintings upstairs.$"

