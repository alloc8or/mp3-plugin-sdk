#pragma once

#include <string>

inline constexpr char ToLower(const char c)
{
	return (c >= 'A' && c <= 'Z') ? (c - 'A' + 'a') : c;
}

inline constexpr char ToUpper(const char c)
{
	return (c >= 'a' && c <= 'z') ? (c - 'a' + 'A') : c;
}

inline constexpr uint32_t HashString(const char* string)
{
	uint32_t hash = 0;

	for (; *string; ++string)
	{
		hash += ToLower(*string);
		hash += (hash << 10);
		hash ^= (hash >> 6);
	}

	hash += (hash << 3);
	hash ^= (hash >> 11);
	hash += (hash << 15);

	return hash;
}

inline constexpr uint16_t GetEntityBoneNameHash(const char* boneName)
{
	uint32_t hash = 0;

	for (; *boneName; ++boneName)
	{
		hash = ToUpper(*boneName) + 16 * hash;
		if (hash & 0xF0000000)
			hash ^= hash & 0xF0000000 ^ ((hash & 0xF0000000) >> 24);
	}

	return hash % 0xFE8F + 0x170;
}

static const std::string weaponNames[] = {
	"WEAPON_AMMO_BAG",
	"WEAPON_BEANBAG_LAUNCHER",
	"WEAPON_BOOBYTRAP",
	"WEAPON_CATTLE_PROD",
	"WEAPON_GRENADE_LAUNCHER",
	"WEAPON_GRENADE_LAUNCHER_BECKER",
	"WEAPON_GRENADE_LAUNCHER_FINALE",
	"WEAPON_GRENADE_LAUNCHER_G9",
	"WEAPON_LAW",
	"WEAPON_MG_21E",
	"WEAPON_MG_RPD",
	"WEAPON_MONEY_BAG",
	"WEAPON_NIGHT_STICK",
	"WEAPON_PEPPER_SPRAY",
	"WEAPON_PISTOL_38",
	"WEAPON_PISTOL_COLT1911",
	"WEAPON_PISTOL_DEAGLE",
	"WEAPON_PISTOL_GLOCK18",
	"WEAPON_PISTOL_PT92",
	"WEAPON_PISTOL_PT92_BOTTLE",
	"WEAPON_PISTOL_TAURUS608",
	"WEAPON_RIFLE_97LC",
	"WEAPON_RIFLE_AK47",
	"WEAPON_RIFLE_FAL",
	"WEAPON_RIFLE_FAL_RUBBER",
	"WEAPON_RIFLE_G36K",
	"WEAPON_RIFLE_GALIL",
	"WEAPON_RIFLE_IA2",
	"WEAPON_RIFLE_M4",
	"WEAPON_RIFLE_RUG30",
	"WEAPON_RIFLE_RUG30_HELI",
	"WEAPON_RIFLE_TAR",
	"WEAPON_RIOT_SHIELD",
	"WEAPON_RPG",
	"WEAPON_SHOTGUN_BENELLIM3",
	"WEAPON_SHOTGUN_DOUBLEBARREL",
	"WEAPON_SHOTGUN_HAMMERHEAD",
	"WEAPON_SHOTGUN_MOSSBERG590",
	"WEAPON_SHOTGUN_SPAS15",
	"WEAPON_SHOTGUN_WINCHESTERSX3",
	"WEAPON_SMG_FAMAEMT40",
	"WEAPON_SMG_MAC10",
	"WEAPON_SMG_MP5",
	"WEAPON_SMG_PM12",
	"WEAPON_SMG_UZI",
	"WEAPON_SNIPER_M24",
	"WEAPON_SNIPER_M82",
	"WEAPON_SNIPER_SG1",
	"WEAPON_STUN_GUN",
	"WEAPON_TASER",
	"WEAPON_THROWN_FLASH",
	"WEAPON_THROWN_GRENADE",
	"WEAPON_THROWN_GRENADE_SCRIPT",
	"WEAPON_THROWN_GRENADE_SMALL",
	"WEAPON_THROWN_INCENDIARY",
	"WEAPON_THROWN_INCENDIARY_FAST",
	"WEAPON_THROWN_SMOKE",
	"WEAPON_THROWN_TEAR_GAS",
	"WEAPON_THROWN_TEAR_GAS_INF",
	"WEAPON_THROWN_TIN_CAN",
	"WEAPON_TRAM_TEAR_GAS",
	"WEAPON_XMG_21E",
	"WEAPON_XPISTOL_DUMMY",
	"WEAPON_XRIFLE_97LC",
	"WEAPON_XRIFLE_RUG30",
	"WEAPON_XRPG",
	"WEAPON_XSMG_MAC10",
	"WEAPON_XSMG_PM12",
	"WEAPON_XSNIPER_DUMMY"
};

static const std::string weatherTypeNames[] = {
	"EXTRASUNNY",
	"SUNNY",
	"SUNNY_WINDY",
	"CLOUDY",
	"FOGGY",
	"DRIZZLE",
	"RAIN",
	"STORMY"
};

static const std::string unlockSemantics[] = {
	"16BIT_MAX",
	"1HITKILL",
	"ASSOC",
	"AVATAR_CUST_UL",
	"AVATAR_SLOT_AWODEN_HR",
	"AVATAR_SLOT_BACHMEYER",
	"AVATAR_SLOT_BAD_DAY_BECKER",
	"AVATAR_SLOT_BG_PASSOS",
	"AVATAR_SLOT_CLAUDIO",
	"AVATAR_SLOT_COMANDO_SOMBRE_F",
	"AVATAR_SLOT_COMANDO_SOMBRE_M",
	"AVATAR_SLOT_CRACHA_PRETO_F",
	"AVATAR_SLOT_CRACHA_PRETO_M",
	"AVATAR_SLOT_DE_MARCOS_F",
	"AVATAR_SLOT_DE_MARCOS_M",
	"AVATAR_SLOT_DR_FISCHER",
	"AVATAR_SLOT_FABIANA",
	"AVATAR_SLOT_FDO_F",
	"AVATAR_SLOT_FDO_M",
	"AVATAR_SLOT_GIOVANNA_BUS",
	"AVATAR_SLOT_IT_GUY",
	"AVATAR_SLOT_JACK_LUP_HR",
	"AVATAR_SLOT_MARCELO_YACHT",
	"AVATAR_SLOT_MAX_BOOZE_PILLS",
	"AVATAR_SLOT_MAX_PAYNE1_HR",
	"AVATAR_SLOT_MILO",
	"AVATAR_SLOT_MONA_SAX_HR",
	"AVATAR_SLOT_MP2_HR",
	"AVATAR_SLOT_NIC_HORNE_HR",
	"AVATAR_SLOT_NYBAR_GIRL",
	"AVATAR_SLOT_PASSOS_DOCKS",
	"AVATAR_SLOT_PASSOS_NY",
	"AVATAR_SLOT_PASSOS_PILOT",
	"AVATAR_SLOT_PUNCHINELLOS_F",
	"AVATAR_SLOT_PUNCHINELLOS_M",
	"AVATAR_SLOT_RODRIGO_CASUAL",
	"AVATAR_SLOT_RUDY",
	"AVATAR_SLOT_SPP_F",
	"AVATAR_SLOT_SPP_M",
	"AVATAR_SLOT_STRIP_BT",
	"AVATAR_SLOT_TERCEIRO_FALANGE_F",
	"AVATAR_SLOT_TERCEIRO_FALANGE_M",
	"AVATAR_SLOT_UFE_F",
	"AVATAR_SLOT_UFE_M",
	"AVATAR_SLOT_USP_F",
	"AVATAR_SLOT_USP_M",
	"AVATAR_SLOT_VAL_WINTERSON_HR",
	"AVATAR_SLOT_VICTOR_TUX",
	"AVATAR_SLOT_VIN_GOG_HR",
	"AVATAR_SLOT_VLAD_HR",
	"AVATAR_SLOT_YCHT_F",
	"AVATAR_SLOT_YCHT_M",
	"AV_UL_FEMALE",
	"AV_UL_MALE",
	"BECKER_HEAD",
	"BIKER",
	"BW_MAX",
	"CAPO",
	"CLST_KID",
	"CONSIG",
	"COOLBULLETS",
	"CREW_OUTFIT_UNLOCK",
	"CREW_OUTFIT_UNLOCK_DE_MARCO_MALE",
	"CUSTOM_MAX",
	"DC_UL_LOOKOUT",
	"DEALER",
	"DEMARCO_HEAD",
	"EXPAMMO",
	"FAV_GEN",
	"FLD_COP",
	"FTBALL",
	"GRINDS",
	"HEADSHOTSONLY",
	"HPREGEN",
	"INCAMMO",
	"INFAMMO",
	"INFBT",
	"INFPAYNEKILLERS",
	"INVISIBLE_UNLOCK",
	"IS_UL_CHEST",
	"IS_UL_GEAR_ONE",
	"IS_UL_GEAR_THREE",
	"IS_UL_GEAR_TWO",
	"IS_UL_HEAD",
	"LEVEL1GRIND",
	"LEVEL2GRIND",
	"LEVEL3GRIND",
	"LOADOUT_SLOT_1",
	"LOADOUT_SLOT_2",
	"LOADOUT_SLOT_3",
	"LOADOUT_SLOT_4",
	"LOADOUT_SLOT_5",
	"LOADOUT_WEIGHT_16",
	"LOADOUT_WEIGHT_17",
	"LOADOUT_WEIGHT_18",
	"LOADOUT_WEIGHT_19",
	"LOADOUT_WEIGHT_20",
	"LOADOUT_WEIGHT_21",
	"LOADOUT_WEIGHT_22",
	"LOADOUT_WEIGHT_23",
	"LOADOUT_WEIGHT_24",
	"LOADOUT_WEIGHT_25",
	"LOADOUT_WEIGHT_26",
	"LONEWOLF",
	"LOOKOUT",
	"LOWAMMO",
	"MAX_HEAD",
	"MAX_LEG1",
	"MAX_LEG10",
	"MAX_LEG10",
	"MAX_LEG2",
	"MAX_LEG3",
	"MAX_LEG4",
	"MAX_LEG5",
	"MAX_LEG6",
	"MAX_LEG6",
	"MAX_LEG7",
	"MAX_LEG7",
	"MAX_LEG8",
	"MAX_LEG8",
	"MAX_LEG9",
	"MAX_LEG9",
	"MOB_MEET",
	"MOON_DET",
	"MUGGER_HEAD",
	"NEVES_HEAD",
	"NGHT_OUT",
	"NOIREMODE",
	"OLSKLARCADE",
	"PATCH_1",
	"PATCH_2",
	"PATCH_3",
	"PATCH_4",
	"PL_UL_DLC",
	"PL_UL_DM_HCL",
	"PL_UL_DM_HL",
	"PL_UL_DM_ML",
	"PL_UL_DM_TF",
	"PL_UL_DM_TL",
	"PL_UL_GSTOP_FR",
	"PL_UL_GSTOP_LK",
	"PL_UL_GWS_H",
	"PL_UL_GWS_HC",
	"PL_UL_GWS_M",
	"PL_UL_LMS_H",
	"PL_UL_LMS_M",
	"PL_UL_PK_H",
	"PL_UL_PK_M",
	"PL_UL_SDM_FA",
	"PL_UL_SDM_SL",
	"PL_UL_STDM_FA",
	"PL_UL_STDM_SL",
	"PL_UL_TDM_HCL",
	"PL_UL_TDM_HL",
	"PL_UL_TDM_ML",
	"PL_UL_TDM_TF",
	"PL_UL_TDM_TL",
	"PRESTIGE_UP",
	"PUNCH_HEAD",
	"REPLAY_A1",
	"REPLAY_A10",
	"REPLAY_A11",
	"REPLAY_A12",
	"REPLAY_A13",
	"REPLAY_A14",
	"REPLAY_A15",
	"REPLAY_A16",
	"REPLAY_A17",
	"REPLAY_A18",
	"REPLAY_A19",
	"REPLAY_A2",
	"REPLAY_A20",
	"REPLAY_A21",
	"REPLAY_A22",
	"REPLAY_A23",
	"REPLAY_A24",
	"REPLAY_A25",
	"REPLAY_A26",
	"REPLAY_A27",
	"REPLAY_A28",
	"REPLAY_A29",
	"REPLAY_A3",
	"REPLAY_A30",
	"REPLAY_A4",
	"REPLAY_A5",
	"REPLAY_A6",
	"REPLAY_A7",
	"REPLAY_A8",
	"REPLAY_A9",
	"REPLAY_B1",
	"REPLAY_B10",
	"REPLAY_B11",
	"REPLAY_B12",
	"REPLAY_B13",
	"REPLAY_B14",
	"REPLAY_B15",
	"REPLAY_B16",
	"REPLAY_B17",
	"REPLAY_B18",
	"REPLAY_B19",
	"REPLAY_B2",
	"REPLAY_B20",
	"REPLAY_B21",
	"REPLAY_B22",
	"REPLAY_B23",
	"REPLAY_B24",
	"REPLAY_B25",
	"REPLAY_B26",
	"REPLAY_B27",
	"REPLAY_B28",
	"REPLAY_B29",
	"REPLAY_B3",
	"REPLAY_B30",
	"REPLAY_B4",
	"REPLAY_B5",
	"REPLAY_B6",
	"REPLAY_B7",
	"REPLAY_B8",
	"REPLAY_B9",
	"REPLAY_C1",
	"REPLAY_C10",
	"REPLAY_C11",
	"REPLAY_C12",
	"REPLAY_C13",
	"REPLAY_C14",
	"REPLAY_C15",
	"REPLAY_C16",
	"REPLAY_C17",
	"REPLAY_C18",
	"REPLAY_C19",
	"REPLAY_C2",
	"REPLAY_C20",
	"REPLAY_C21",
	"REPLAY_C22",
	"REPLAY_C23",
	"REPLAY_C24",
	"REPLAY_C25",
	"REPLAY_C26",
	"REPLAY_C27",
	"REPLAY_C28",
	"REPLAY_C29",
	"REPLAY_C3",
	"REPLAY_C30",
	"REPLAY_C4",
	"REPLAY_C5",
	"REPLAY_C6",
	"REPLAY_C7",
	"REPLAY_C8",
	"REPLAY_C9",
	"SC_MEMBER_PLAYLIST",
	"SERRANO_HEAD",
	"SPCL_OP",
	"SPP_DASILVA_HEAD",
	"SPP_MAX_PAYNE_HEAD",
	"TZ_DJ",
	"T_UL_15_CORONEL",
	"T_UL_1_SARGENTO",
	"T_UL_1_TENENTE",
	"T_UL_2_SARGENTO",
	"T_UL_2_TENENTE",
	"T_UL_3_SARGENTO",
	"T_UL_3_TENENTE",
	"T_UL_9_LIVES",
	"T_UL_AMBIDEXTROUS",
	"T_UL_ASPIRANTE",
	"T_UL_BULLETPROOF",
	"T_UL_CABO",
	"T_UL_CADETE",
	"T_UL_CAPTAIN",
	"T_UL_CHIEF",
	"T_UL_CHIEF",
	"T_UL_COMMANDO",
	"T_UL_DEADEYE",
	"T_UL_DEDICATED",
	"T_UL_DEFENDER",
	"T_UL_DIFFUSER",
	"T_UL_DIVE_BOMBER",
	"T_UL_DOCTOR",
	"T_UL_DOMINATOR",
	"T_UL_DUALIST",
	"T_UL_EXECUTIONER",
	"T_UL_FEARLESS",
	"T_UL_FUGITIVE",
	"T_UL_GATE_CRASHER",
	"T_UL_GLADIATOR",
	"T_UL_GOLDEN",
	"T_UL_GOLDEN",
	"T_UL_GRIM_REAPER",
	"T_UL_GUN_COLLECTOR",
	"T_UL_HARD_KNUCKLED",
	"T_UL_HEAD_OF_CLASS",
	"T_UL_HIGHSTRUNG",
	"T_UL_INDOMIDABLE",
	"T_UL_INVISIBLE",
	"T_UL_JUGGERNAUT",
	"T_UL_KLEPTO",
	"T_UL_K_CAPPER",
	"T_UL_LIGHTNING",
	"T_UL_LIVINGLEGEND",
	"T_UL_LUCKY",
	"T_UL_MAJOR",
	"T_UL_MARKED",
	"T_UL_MARKED",
	"T_UL_MASTER_OF_ARMS",
	"T_UL_MONEYBAGS",
	"T_UL_NINJA",
	"T_UL_ONE_MAN_ARMY",
	"T_UL_OT_SPOT",
	"T_UL_PACKRAT",
	"T_UL_PATIENT",
	"T_UL_PEERLESS",
	"T_UL_PEERLESS",
	"T_UL_PLAYBOY",
	"T_UL_POSTMASTER",
	"T_UL_PYRO",
	"T_UL_QUATERMASTER",
	"T_UL_RENOWNED",
	"T_UL_RESPECTED",
	"T_UL_SLIPPERY",
	"T_UL_SMOKEY",
	"T_UL_SNAKE",
	"T_UL_SOLDADO",
	"T_UL_SPEEDY",
	"T_UL_SPOTTER",
	"T_UL_STEAMROLLER",
	"T_UL_SUB_TENETE",
	"T_UL_SURESHOT",
	"T_UL_SURVIVALIST",
	"T_UL_SURVIVOR",
	"T_UL_TACTITIAN",
	"T_UL_THEFEARED",
	"T_UL_TRUSTWORTHY",
	"T_UL_UNRIVALED",
	"T_UL_UNRIVALED",
	"T_UL_UNSTOPBLE",
	"T_UL_VENGEFUL",
	"T_UL_WARLORD",
	"T_UL_WAR_CRIMINAL",
	"T_UL_X_RAY",
	"UFE_CMBT_SPPT",
	"UL_ARMOUR_BOMB_SUIT",
	"UL_ARMOUR_HEAVY",
	"UL_ARMOUR_HELMET",
	"UL_ARMOUR_HELMET_HEAVY",
	"UL_ARMOUR_MAX",
	"UL_ARMOUR_STANDARD",
	"UL_BADGEOFHONOR",
	"UL_BOOBY_TRAP",
	"UL_DLC_3_PACK",
	"UL_GAS_MASK",
	"UL_HOLLOWPOINTS",
	"UL_IDCARD",
	"UL_LMS_BT_ACTIVATOR",
	"UL_MANUFACTURER_GUARANTEE",
	"UL_MAX_PRESTIGE_LEVEL",
	"UL_MILITARY_GOGGLES",
	"UL_MP_SPECIAL_AMMO_HOOVER",
	"UL_MP_SPECIAL_AMMO_POUCH",
	"UL_MP_SPECIAL_ANTISTUNGUN",
	"UL_MP_SPECIAL_BALACLAVA",
	"UL_MP_SPECIAL_BETTING_SLIP",
	"UL_MP_SPECIAL_BOUNTY_ORDERS",
	"UL_MP_SPECIAL_CALCULATOR",
	"UL_MP_SPECIAL_CANCERSTICKS",
	"UL_MP_SPECIAL_FIELDBANDAGES",
	"UL_MP_SPECIAL_FIREPROOF_SPRAY",
	"UL_MP_SPECIAL_HIP_FLASK",
	"UL_MP_SPECIAL_INTIMIDATION",
	"UL_MP_SPECIAL_LIGHT_FINGERS",
	"UL_MP_SPECIAL_LOCKBOX",
	"UL_MP_SPECIAL_LUCKY_COIN",
	"UL_MP_SPECIAL_PILLBOTTLE",
	"UL_MP_SPECIAL_POKERCHIP",
	"UL_MP_SPECIAL_QUICK_HOLSTER",
	"UL_MP_SPECIAL_SC_ARCANE_SKULL",
	"UL_MP_SPECIAL_SC_DEAD_SKULL",
	"UL_MP_SPECIAL_SC_DEMON_SKULL",
	"UL_MP_SPECIAL_SC_HUMAN_SKULL",
	"UL_MP_SPECIAL_SC_WEDD_SKULL",
	"UL_MP_SPECIAL_SMARTPHONE",
	"UL_MP_SPECIAL_SNIPER_DETECTOR",
	"UL_MP_SPECIAL_SPRAYCAN",
	"UL_MP_SPECIAL_STEALTH_BOOTS",
	"UL_MP_SPECIAL_STICKY_TAPE",
	"UL_MP_SPECIAL_SUTURES",
	"UL_MP_SPECIAL_TRACKINGDEVICE",
	"UL_MP_SPECIAL_WALKIE_TALKIE",
	"UL_MP_SPECIAL_WRESTLEMASK",
	"UL_MP_STREAK_BB_LVL2",
	"UL_MP_STREAK_BB_LVL3",
	"UL_MP_STREAK_BIGDOG",
	"UL_MP_STREAK_BIGDOG_LVL2",
	"UL_MP_STREAK_BIGDOG_LVL3",
	"UL_MP_STREAK_BT_LVL2",
	"UL_MP_STREAK_BT_LVL3",
	"UL_MP_STREAK_BULLETTIME",
	"UL_MP_STREAK_BURSTBUBBLE",
	"UL_MP_STREAK_DEATHSQUAD",
	"UL_MP_STREAK_DEATHSQUAD_LVL2",
	"UL_MP_STREAK_DEATHSQUAD_LVL3",
	"UL_MP_STREAK_EXPLOSIVES",
	"UL_MP_STREAK_EX_LVL2",
	"UL_MP_STREAK_EX_LVL3",
	"UL_MP_STREAK_FB_LVL2",
	"UL_MP_STREAK_FB_LVL3",
	"UL_MP_STREAK_FRESHBLOOD",
	"UL_MP_STREAK_GRNDED_LVL2",
	"UL_MP_STREAK_GRNDED_LVL3",
	"UL_MP_STREAK_GROUNDED",
	"UL_MP_STREAK_HANGOVER",
	"UL_MP_STREAK_HANGOVER_LVL2",
	"UL_MP_STREAK_HANGOVER_LVL3",
	"UL_MP_STREAK_INTUITION",
	"UL_MP_STREAK_INT_LVL2",
	"UL_MP_STREAK_INT_LVL3",
	"UL_MP_STREAK_PARANOIA",
	"UL_MP_STREAK_PARANOIA_LVL2",
	"UL_MP_STREAK_PARANOIA_LVL3",
	"UL_MP_STREAK_SC_LVL2",
	"UL_MP_STREAK_SC_LVL3",
	"UL_MP_STREAK_SLIPPERYCHARACTER",
	"UL_MP_STREAK_SNEAKY",
	"UL_MP_STREAK_SNEAKY_LVL2",
	"UL_MP_STREAK_SNEAKY_LVL3",
	"UL_MP_STREAK_TRIGGERHAPPY",
	"UL_MP_STREAK_TRIGGERHAPPY_LVL2",
	"UL_MP_STREAK_TRIGGERHAPPY_LVL3",
	"UL_MP_STREAK_UNSTOPPABLE",
	"UL_MP_STREAK_UNSTOPPABLE_LVL2",
	"UL_MP_STREAK_UNSTOPPABLE_LVL3",
	"UL_MP_STREAK_WDD_LVL2",
	"UL_MP_STREAK_WDD_LVL3",
	"UL_MP_STREAK_WD_LVL2",
	"UL_MP_STREAK_WD_LVL3",
	"UL_MP_STREAK_WEAPONDEALER",
	"UL_MP_STREAK_WEAPONDOUBLEDEALER",
	"UL_PAID_DLC4",
	"UL_PAID_DLC5",
	"UL_PAID_DLC6",
	"UL_POCKETWATCH",
	"UL_PRECINCT_DLC",
	"UL_SPECIAL_EDITION",
	"UL_SWISS_ARMY_KNIFE",
	"UL_URBAN_CAMO",
	"UL_VAMPIRIC",
	"UL_WEAPON_CATTLE_PROD",
	"UL_WEAPON_GRENADE_LAUNCHER",
	"UL_WEAPON_GRENADE_LAUNCHER_G9",
	"UL_WEAPON_LAW",
	"UL_WEAPON_MG_21E",
	"UL_WEAPON_MG_RPD",
	"UL_WEAPON_NIGHT_STICK",
	"UL_WEAPON_PEPPER_SPRAY",
	"UL_WEAPON_PISTOL_38",
	"UL_WEAPON_PISTOL_COLT1911",
	"UL_WEAPON_PISTOL_DEAGLE",
	"UL_WEAPON_PISTOL_GLOCK18",
	"UL_WEAPON_PISTOL_PT92",
	"UL_WEAPON_PISTOL_TAURUS608",
	"UL_WEAPON_RIFLE_97LC",
	"UL_WEAPON_RIFLE_AK47",
	"UL_WEAPON_RIFLE_FAL",
	"UL_WEAPON_RIFLE_G36K",
	"UL_WEAPON_RIFLE_GALIL",
	"UL_WEAPON_RIFLE_IA2",
	"UL_WEAPON_RIFLE_M24",
	"UL_WEAPON_RIFLE_M4",
	"UL_WEAPON_RIFLE_RUG30",
	"UL_WEAPON_RIFLE_TAR",
	"UL_WEAPON_RPG",
	"UL_WEAPON_SHOTGUN_BENELLIM3",
	"UL_WEAPON_SHOTGUN_DOUBLEBARREL",
	"UL_WEAPON_SHOTGUN_HAMMERHEAD",
	"UL_WEAPON_SHOTGUN_MOSSBERG590",
	"UL_WEAPON_SHOTGUN_SPAS15",
	"UL_WEAPON_SHOTGUN_WINCHESTERSX3",
	"UL_WEAPON_SMG_FAMAEMT40",
	"UL_WEAPON_SMG_MAC10",
	"UL_WEAPON_SMG_MP5",
	"UL_WEAPON_SMG_PM12",
	"UL_WEAPON_SMG_UZI",
	"UL_WEAPON_SNIPER_M82",
	"UL_WEAPON_SNIPER_SG1",
	"UL_WEAPON_STUN_GUN",
	"UL_WEAPON_THROWN_BOUNCING_BETTY",
	"UL_WEAPON_THROWN_FLASH",
	"UL_WEAPON_THROWN_GRENADE",
	"UL_WEAPON_THROWN_INCENDIARY_MP",
	"UL_WEAPON_THROWN_SMOKE",
	"UL_WEAPON_THROWN_TEAR_GAS",
	"UL_WEAPON_THROWN_TIN_CAN",
	"UN_REP",
	"URBN_CMBT",
	"VENDETTAS",
	"WAGERS",
	"WEAPON_CATTLE_PROD_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_CATTLE_PROD_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_GRENADE_LAUNCHER_G9_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_GRENADE_LAUNCHER_G9_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_GRENADE_LAUNCHER_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_GRENADE_LAUNCHER_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_LAW_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_LAW_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_MG_21E_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_MG_RPD_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_NIGHT_STICK_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_NIGHT_STICK_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PEPPER_SPRAY_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PEPPER_SPRAY_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_38_DUAL_WIELD",
	"WEAPON_PISTOL_38_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_PISTOL_38_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_38_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_PISTOL_38_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_PISTOL_38_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_COLT1911_DUAL_WIELD",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_PISTOL_COLT1911_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_PISTOL_DEAGLE_DUAL_WIELD",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_PISTOL_DEAGLE_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_PISTOL_GLOCK18_DUAL_WIELD",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_PISTOL_GLOCK18_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_PISTOL_PT92_DUAL_WIELD",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_PISTOL_PT92_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_PISTOL_TAURUS608_DUAL_WIELD",
	"WEAPON_PISTOL_TAURUS608_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_PISTOL_TAURUS608_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_PISTOL_TAURUS608_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_PISTOL_TAURUS608_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_PISTOL_TAURUS608_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_97LC_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_AK47_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_FAL_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_G36K_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_RIFLE_GALIL_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_IA2_WEAPON_ATTACHMENT_SNIPER_SCOPE",
	"WEAPON_RIFLE_M4_CHROME",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_RIFLE_M4_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_SNIPER_SCOPE",
	"WEAPON_RIFLE_RUG30_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_RIFLE_TAR_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_RPG_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_RPG_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_BENELLIM3_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SHOTGUN_DOUBLEBARREL_DUAL_WIELD",
	"WEAPON_SHOTGUN_DOUBLEBARREL_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_DOUBLEBARREL_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_HAMMERHEAD_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SHOTGUN_MOSSBERG590_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SHOTGUN_SPAS15_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SHOTGUN_WINCHESTERSX3_WEAPON_ATTACHMENT_RED_DOT_SCOPE",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SMG_FAMAEMT40_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_SMG_MAC10_DUAL_WIELD",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SMG_MAC10_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SMG_MP5_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_SMG_PM12_DUAL_WIELD",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SMG_PM12_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SMG_UZI_DUAL_WIELD",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_LASER_SIGHT",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SMG_UZI_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SNIPER_M24_WEAPON_ATTACHMENT_SUPPRESSOR",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_COMPENSATOR",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SNIPER_M82_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_BARREL_UPGRADES",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_GAS_BLOCK",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_GAS_SYSTEMS",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_GOLD",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP",
	"WEAPON_SNIPER_SG1_WEAPON_ATTACHMENT_MAG_GUIDE",
	"WEAPON_STUN_GUN_WEAPON_ATTACHMENT_CHROME",
	"WEAPON_STUN_GUN_WEAPON_ATTACHMENT_GOLD"
};