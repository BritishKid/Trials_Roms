#ifndef GUARD_CONSTANTS_QUESTS_H
#define GUARD_CONSTANTS_QUESTS_H

//questmenu scripting command params
#define QUEST_MENU_OPEN                 0   //opens the quest menu (questId = 0)
#define QUEST_MENU_UNLOCK_QUEST         1   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_ACTIVE           2   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_SET_REWARD           3   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_COMPLETE_QUEST       4   //questId = QUEST_X (0-indexed)
#define QUEST_MENU_CHECK_UNLOCKED       5   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_INACTIVE       6 //check if a questID is inactive. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_ACTIVE         7   //checks if questId has been unlocked. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_REWARD         8  //checks if questId is in Reward state. Returns result to gSpecialVar_Result
#define QUEST_MENU_CHECK_COMPLETE       9   //checks if questId has been completed. Returns result to gSpecialVar_Result
#define QUEST_MENU_BUFFER_QUEST_NAME    10   //buffers a quest name to gStringVar1

// quest number defines
#define QUEST_POKEMON_LEAGUE          0
#define QUEST_HIDDEN_DOLLS            1
#define QUEST_LOST_GIRL               2
#define QUEST_SALT7_GYRADOS           3
#define QUEST_LOCKED_GATEWAY          4
#define QUEST_ARCEUS_PLATES           5
#define QUEST_THUG_TOWN          6
#define QUEST_WATERFALL_CAVE          7
#define QUEST_SCHOOL_TOURNAMENT          8
#define QUEST_EVOLUTION_STONE_MART         9
#define QUEST_GIANT_FISH        10
#define QUEST_FINDING_TREECKO        11
#define QUEST_13        12
#define QUEST_14        13
#define QUEST_15        14
#define QUEST_16        15
#define QUEST_17        16
#define QUEST_18        17
#define QUEST_19        18
#define QUEST_20        19
#define QUEST_21        20
#define QUEST_22        21
#define QUEST_23        22
#define QUEST_24        23
#define QUEST_25        24
#define QUEST_26        25
#define QUEST_27        26
#define QUEST_28        27
#define QUEST_29        28
#define QUEST_30        29
#define QUEST_COUNT     (QUEST_30 + 1)

#define SUB_QUEST_GALE_BADGE          0
#define SUB_QUEST_SHOAL_BADGE         1
#define SUB_QUEST_PALOS_BADGE          2
#define SUB_QUEST_RUIN_BADGE          3
#define SUB_QUEST_5          4
#define SUB_QUEST_6          5
#define SUB_QUEST_7          6
#define SUB_QUEST_8          7
#define SUB_QUEST_9          8
#define SUB_QUEST_10         9
#define SUB_QUEST_CHIKORITA_DOLL        10
#define SUB_QUEST_GULPIN_DOLL        11
#define SUB_QUEST_MUDKIP_DOLL        12
#define SUB_QUEST_LOTAD_DOLL        13
#define SUB_QUEST_MEOWTH_DOLL        14
#define SUB_QUEST_SWABLU_DOLL      15
#define SUB_QUEST_17        16
#define SUB_QUEST_18        17
#define SUB_QUEST_19        18
#define SUB_QUEST_20        19
#define SUB_QUEST_21        20
#define SUB_QUEST_22        21
#define SUB_QUEST_23        22
#define SUB_QUEST_24        23
#define SUB_QUEST_25        24
#define SUB_QUEST_26        25
#define SUB_QUEST_27        26
#define SUB_QUEST_28        27
#define SUB_QUEST_29        28
#define SUB_QUEST_30        29
#define SUB_QUEST_MET_SALT 30
#define SUB_QUEST_SALT_EVOLVING 31
#define SUB_QUEST_SALT_RED_GYRADOS 32
#define SUB_QUEST_SALT7_QUARRY 33
#define SUQ_QUEST_SALT_5 34
#define SUB_QUEST_SCHOOL_EVOLUTION_PATCH 35
#define SUB_QUEST_SCHOOL_ABILITY_PATCH 36
#define SUB_QUEST_SCHOOL_MOVE_PATCH 37
#define SUB_QUEST_SCHOOL_ITEM_PATCH 38
#define SUB_QUEST_SCHOOL_TOURNAMENT 39
#define SUB_QUEST_ADAMANT_ORB 40
#define SUB_QUEST_GRISEOUS_ORB 41
#define SUB_QUEST_LUSTROUS_ORB 42
#define SUB_QUEST_DISTORTION_GATEWAY 43
#define SUB_QUEST_GIRITINA_BATTLE 44
#define SUB_QUEST_DRACO_PLATE 45
#define SUB_QUEST_DREAD_PLATE 46
#define SUB_QUEST_EARTH_PLATE 47
#define SUB_QUEST_FIST_PLATE 48
#define SUB_QUEST_FLAME_PLATE 49
#define SUB_QUEST_ICICLE_PLATE 50
#define SUB_QUEST_INSECT_PLATE 51
#define SUB_QUEST_IRON_PLATE 52
#define SUB_QUEST_MEADOW_PLATE 53
#define SUB_QUEST_MIND_PLATE 54
#define SUB_QUEST_PIXIE_PLATE 55
#define SUB_QUEST_SKY_PLATE 56
#define SUB_QUEST_SPLASH_PLATE 57
#define SUB_QUEST_SPOOKY_PLATE 58
#define SUB_QUEST_STONE_PLATE 59
#define SUB_QUEST_TOXIC_PLATE 60
#define SUB_QUEST_ZAP_PLATE 61
#define SUB_QUEST_LEGENDS_PLATE 62
#define SUB_QUEST_HALL_OF_ORIGIN 63
#define SUB_QUEST_ARCEUS_DEFATED 64
#define SUB_QUEST_FIRE_STONE 65
#define SUB_QUEST_WATER_STONE 66
#define SUB_QUEST_THUNDER_STONE 67
#define SUB_QUEST_LEAF_STONE 68
#define SUB_QUEST_MOON_STONE 69
#define SUB_QUEST_SUN_STONE 70
#define SUB_QUEST_SHINY_STONE 71
#define SUB_QUEST_DUSK_STONE 72
#define SUB_QUEST_DAWN_STONE 73
#define SUB_QUEST_ICE_STONE 74
#define SUB_QUEST_LINK_STONE 75
#define SUB_QUEST_GIANT_FISH_1 76
#define SUB_QUEST_GIANT_FISH_2 77
#define SUB_QUEST_GIANT_FISH_3 78
#define SUB_QUEST_GIANT_FISH_4 79
#define SUB_QUEST_GIANT_FISH_5 80
#define SUB_QUEST_GIANT_FISH_6 81
#define SUB_QUEST_GIANT_FISH_7 82
#define SUB_QUEST_GIANT_FISH_8 83

#define QUEST_POKEMON_LEAGUE_SUB_COUNT 10 
#define QUEST_HIDDEN_DOLLS_SUB_COUNT 20
#define QUEST_SALT_SUB_COUNT 5 //placeholder
#define QUEST_SCHOOL_SUB_COUNT 5
#define QUEST_LOCKED_GATEWAY_SUB_COUNT 5
#define QUEST_LOST_PLATES_SUB_COUNT 20
#define QUEST_EVOSTONE_SUB_COUNT 11
#define QUEST_GIANT_FISH_SUB_COUNT 8
#define SUB_QUEST_COUNT (QUEST_POKEMON_LEAGUE_SUB_COUNT + QUEST_HIDDEN_DOLLS_SUB_COUNT + QUEST_SALT_SUB_COUNT + QUEST_SCHOOL_SUB_COUNT + QUEST_LOCKED_GATEWAY_SUB_COUNT + QUEST_LOST_PLATES_SUB_COUNT + QUEST_EVOSTONE_SUB_COUNT + QUEST_GIANT_FISH_SUB_COUNT)

#define QUEST_ARRAY_COUNT (SUB_QUEST_COUNT > QUEST_COUNT ? SUB_QUEST_COUNT : QUEST_COUNT)
#endif // GUARD_CONSTANTS_QUESTS_H

//max 100 parents quest and 168 sub quests