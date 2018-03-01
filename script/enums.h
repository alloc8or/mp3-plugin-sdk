#pragma once

#include <Windows.h>
#include "types.h"

enum eInput
{
	INPUT_NEXT_CAMERA,
	INPUT_SPRINT,
	INPUT_JUMP,
	INPUT_ENTER,
	INPUT_ATTACK,
	INPUT_ATTACK2,
	INPUT_AIM,
	INPUT_LOOK_BEHIND,
	INPUT_NEXT_WEAPON,
	INPUT_PREV_WEAPON,
	INPUT_MOVE_LEFT,
	INPUT_MOVE_RIGHT,
	INPUT_MOVE_UP,
	INPUT_MOVE_DOWN,
	INPUT_LOOK_LEFT,
	INPUT_LOOK_RIGHT,
	INPUT_LOOK_UP,
	INPUT_LOOK_DOWN,
	INPUT_DUCK,
	INPUT_PAYNE_KILLER,
	INPUT_TOGGLE_ATTACHMENT,
	INPUT_LETHAL_GRENADE,
	INPUT_PICKUP,
	INPUT_SNIPER_ZOOM_IN,
	INPUT_SNIPER_ZOOM_OUT,
	INPUT_SNIPER_ZOOM_IN_ALTERNATE,
	INPUT_SNIPER_ZOOM_OUT_ALTERNATE,
	INPUT_COVER,
	INPUT_RELOAD,
	INPUT_BULLET_TIME,
	INPUT_ACTION,
	INPUT_DROP_WEAPON,
	INPUT_MELEE_ATTACK_HIGH,
	INPUT_MELEE_ATTACK_MID,
	INPUT_MELEE_ATTACK_LOW,
	INPUT_MELEE_KICK,
	INPUT_MELEE_BLOCK,
	INPUT_MELEE_ATTACK4,
	INPUT_MP_ACTION,
	INPUT_SCOREBOARD,
	INPUT_VEH_MOVE_LEFT,
	INPUT_VEH_MOVE_RIGHT,
	INPUT_VEH_MOVE_UP,
	INPUT_VEH_MOVE_DOWN,
	INPUT_VEH_GUN_LEFT,
	INPUT_VEH_GUN_RIGHT,
	INPUT_VEH_GUN_UP,
	INPUT_VEH_GUN_DOWN,
	INPUT_VEH_ATTACK,
	INPUT_VEH_ATTACK2,
	INPUT_VEH_ACCELERATE,
	INPUT_VEH_BRAKE,
	INPUT_VEH_HEADLIGHT,
	INPUT_VEH_EXIT,
	INPUT_VEH_HANDBRAKE,
	INPUT_VEH_HANDBRAKE_ALT,
	INPUT_VEH_HOTWIRE_LEFT,
	INPUT_VEH_HOTWIRE_RIGHT,
	INPUT_VEH_LOOK_LEFT,
	INPUT_VEH_LOOK_RIGHT,
	INPUT_VEH_LOOK_BEHIND,
	INPUT_VEH_CIN_CAM,
	INPUT_VEH_NEXT_RADIO,
	INPUT_VEH_PREV_RADIO,
	INPUT_VEH_HORN,
	INPUT_VEH_FLY_THROTTLE_UP,
	INPUT_VEH_FLY_THROTTLE_DOWN,
	INPUT_VEH_FLY_YAW_LEFT,
	INPUT_VEH_FLY_YAW_RIGHT,
	INPUT_FRONTEND_DOWN,
	INPUT_FRONTEND_UP,
	INPUT_FRONTEND_LEFT,
	INPUT_FRONTEND_RIGHT,
	INPUT_FRONTEND_RDOWN,
	INPUT_FRONTEND_RUP,
	INPUT_FRONTEND_RLEFT,
	INPUT_FRONTEND_RRIGHT,
	INPUT_FRONTEND_AXIS_X,
	INPUT_FRONTEND_AXIS_Y,
	INPUT_FRONTEND_RIGHT_AXIS_X,
	INPUT_FRONTEND_RIGHT_AXIS_Y,
	INPUT_FRONTEND_PAUSE,
	INPUT_FRONTEND_ACCEPT,
	INPUT_FRONTEND_CANCEL,
	INPUT_FRONTEND_X,
	INPUT_FRONTEND_Y,
	INPUT_FRONTEND_LB,
	INPUT_FRONTEND_RB,
	INPUT_FRONTEND_LT,
	INPUT_FRONTEND_RT,
	INPUT_FRONTEND_LAUNCHGAME,
	INPUT_FRONTEND_ATTRACT,
	INPUT_FRONTEND_SOCIALCLUB,
	INPUT_FRONTEND_VENDETTA,
	INPUT_FRONTEND_RESPAWN,
	INPUT_FRONTEND_SUICIDE,
	INPUT_FRONTEND_SELECT,
	INPUT_BCAMERA_SLOW,
	INPUT_FRONTEND_WAGER,
	INPUT_FRONTEND_HIDETUTORIAL,
	INPUT_TEXTCHAT_ALL,
	INPUT_TEXTCHAT_TEAM,
	INPUT_FRONTEND_PUSHTOTALK,
	INPUT_MOUSE_UD,
	INPUT_MOUSE_LR,
	INPUT_MOUSE_WHEEL_UP,
	INPUT_MOUSE_WHEEL_DOWN,
	INPUT_WEAPON_LEFT,
	INPUT_WEAPON_RIGHT,
	INPUT_WEAPON_DUAL,
	INPUT_WEAPON_TWOHAND,
	INPUT_VAULT,
	INPUT_ROLLDODGE,
	INPUT_QUICKTHROW,
	INPUT_BCAMERA_SKIP,
	INPUT_WEAPON_GRENADE,
	NUM_EINPUT
};

enum eHudColor
{
	HUD_COLOUR_PURE_WHITE,
	HUD_COLOUR_WHITE,
	HUD_COLOUR_BLACK,
	HUD_COLOUR_GREY,
	HUD_COLOUR_RED,
	HUD_COLOUR_REDLIGHT,
	HUD_COLOUR_REDDARK,
	HUD_COLOUR_BLUE,
	HUD_COLOUR_BLUELIGHT,
	HUD_COLOUR_BLUEDARK,
	HUD_COLOUR_YELLOW,
	HUD_COLOUR_YELLOWLIGHT,
	HUD_COLOUR_YELLOWDARK,
	HUD_COLOUR_ORANGE,
	HUD_COLOUR_ORANGELIGHT,
	HUD_COLOUR_ORANGEDARK,
	HUD_COLOUR_GREEN,
	HUD_COLOUR_GREENLIGHT,
	HUD_COLOUR_GREENDARK,
	HUD_COLOUR_PURPLE,
	HUD_COLOUR_PURPLELIGHT,
	HUD_COLOUR_PURPLEDARK,
	HUD_COLOUR_PINK,
	HUD_COLOUR_RADAR_HEALTH,
	HUD_COLOUR_RADAR_ARMOUR,
	HUD_COLOUR_RADAR_DAMAGE,
	HUD_COLOUR_NET_PLAYER1,
	HUD_COLOUR_NET_PLAYER2,
	HUD_COLOUR_NET_PLAYER3,
	HUD_COLOUR_NET_PLAYER4,
	HUD_COLOUR_NET_PLAYER5,
	HUD_COLOUR_NET_PLAYER6,
	HUD_COLOUR_NET_PLAYER7,
	HUD_COLOUR_NET_PLAYER8,
	HUD_COLOUR_NET_PLAYER9,
	HUD_COLOUR_NET_PLAYER10,
	HUD_COLOUR_NET_PLAYER11,
	HUD_COLOUR_NET_PLAYER12,
	HUD_COLOUR_NET_PLAYER13,
	HUD_COLOUR_NET_PLAYER14,
	HUD_COLOUR_NET_PLAYER15,
	HUD_COLOUR_NET_PLAYER16,
	HUD_COLOUR_SIMPLEBLIP_DEFAULT,
	HUD_COLOUR_MENU_BLUE,
	HUD_COLOUR_MENU_GREY_LIGHT,
	HUD_COLOUR_MENU_BLUE_EXTRA_DARK,
	HUD_COLOUR_MENU_YELLOW,
	HUD_COLOUR_MENU_YELLOW_DARK,
	HUD_COLOUR_MENU_GREEN,
	HUD_COLOUR_MENU_GREY,
	HUD_COLOUR_MENU_GREY_DARK,
	HUD_COLOUR_MENU_HIGHLIGHT,
	HUD_COLOUR_MENU_STANDARD,
	HUD_COLOUR_MENU_DIMMED,
	HUD_COLOUR_MENU_EXTRA_DIMMED,
	HUD_COLOUR_BRIEF_TITLE,
	HUD_COLOUR_MID_GREY_MP,
	HUD_COLOUR_INTERNAL_GREY
};

enum eExplosionTag
{
	EXP_TAG_DONTCARE = -1,
	EXP_TAG_GRENADE,
	EXP_TAG_MOLOTOV,
	EXP_TAG_ROCKET,
	EXP_TAG_HI_OCTANE,
	EXP_TAG_CAR,
	EXP_TAG_PLANE,
	EXP_TAG_PETROL_PUMP,
	EXP_TAG_BIKE,
	EXP_TAG_DIR_STEAM,
	EXP_TAG_DIR_FLAME,
	EXP_TAG_DIR_WATER_HYDRANT,
	EXP_TAG_DIR_GAS_CANISTER,
	EXP_TAG_BOAT,
	EXP_TAG_SHIP_DESTROY,
	EXP_TAG_FIRE_EXTINGUISHER,
	EXP_TAG_PHANTOM_FORCE,
	EXP_TAG_TRUCK,
	EXP_TAG_SMOKE_GRENADE,
	EXP_TAG_TEAR_GAS_GRENADE,
	EXP_TAG_FLASH_GRENADE,
	EXP_TAG_GRENADE_SMALL,
	EXP_TAG_JERRY_CAN,
	EXP_TAG_CHAMPAGNE,
	EXP_TAG_HE_AMMO,
	EXP_TAG_LAUNCHER_ROTARY,
	EXP_TAG_LAUNCHER_G,
	EXP_TAG_BOOBY_TRAP,
	EXP_TAG_EPISODIC_1,
	EXP_TAG_EPISODIC_2,
	EXP_TAG_EPISODIC_3,
	EXP_TAG_EPISODIC_4,
	EXP_TAG_EPISODIC_5,
	EXP_TAG_EPISODIC_6,
	EXP_TAG_EPISODIC_7,
	EXP_TAG_EPISODIC_8,
	EXP_TAG_EPISODIC_9,
	EXP_TAG_EPISODIC_10,
	EXP_TAG_SMOKE_GRENADE_INF,
	EXP_TAG_TEAR_GAS_GRENADE_INF,
	EXP_TAG_ROCKET_LAW,
	NUM_EEXPLOSIONTAG
};

// incomplete
enum eGameKey
{
	GameKey_F4 = 62,
	GameKey_F5 = 63,
	GameKey_F6 = 64,
	GameKey_Backspace = 56,
	GameKey_ESC = 1,
	GameKey_Spacebar = 57,
	GameKey_Numpad8 = 72,
	GameKey_Numpad4 = 75,
	GameKey_Numpad5 = 76,
	GameKey_Numpad6 = 77,
	GameKey_Numpad2 = 80,
	GameKey_Numpad0 = 82,
	GameKey_W = 17,
	GameKey_A = 30,
	GameKey_S = 31,
	GameKey_D = 32,
	GameKey_F = 33,
	GameKey_G = 34,
	GameKey_H = 35,
	GameKey_J = 36
};

enum eWeaponHash : Hash
{
	WEAPON_PISTOL_38 = 0x183AA38D,
	WEAPON_PISTOL_PT92 = 0x040DE373,
	WEAPON_PISTOL_COLT1911 = 0xCC9B512F,
	WEAPON_PISTOL_DEAGLE = 0x1B38D183,
	WEAPON_PISTOL_GLOCK18 = 0xA8AF8476,
	WEAPON_PISTOL_TAURUS608 = 0xDB7A2147,
	WEAPON_SMG_MAC10 = 0xD6CA055B,
	WEAPON_SMG_MP5 = 0x5818A173,
	WEAPON_SMG_PM12 = 0xAC4A0D35,
	WEAPON_SMG_UZI = 0x4731AEA4,
	WEAPON_SHOTGUN_MOSSBERG590 = 0xF5F785A7,
	WEAPON_SHOTGUN_BENELLIM3 = 0x19E69EBD,
	WEAPON_SHOTGUN_WINCHESTERSX3 = 0x1EA4D45D,
	WEAPON_SHOTGUN_DOUBLEBARREL = 0x6DFA071B,
	WEAPON_SHOTGUN_SPAS15 = 0xF4F9FED1,
	WEAPON_SHOTGUN_HAMMERHEAD = 0x3A48FFC7,
	WEAPON_RIFLE_AK47 = 0xBFF084B9,
	WEAPON_RIFLE_97LC = 0xC393F0CC,
	WEAPON_RIFLE_FAL = 0x4DFE88CD,
	WEAPON_RIFLE_G36K = 0x036DE6A2,
	WEAPON_SMG_FAMAEMT40 = 0x75146205,
	WEAPON_RIFLE_RUG30 = 0x2B351E15,
	WEAPON_RIFLE_M4 = 0x3DF2B633,
	WEAPON_RIFLE_IA2 = 0x191BD85A,
	WEAPON_RIFLE_GALIL = 0x637285D0,
	WEAPON_RIFLE_TAR = 0xEF71421B,
	WEAPON_SNIPER_M82 = 0x48F8EAEC,
	WEAPON_SNIPER_SG1 = 0x00A27A53,
	WEAPON_SNIPER_M24 = 0x5D1319A8,
	WEAPON_MG_21E = 0x130E6DFC,
	WEAPON_MG_RPD = 0xF964263C,
	WEAPON_RPG = 0xB1CA77B1,
	WEAPON_LAW = 0x16821557,
	WEAPON_GRENADE_LAUNCHER = 0x9D1D9087,
	WEAPON_GRENADE_LAUNCHER_G9 = 0xBCDFAD96,
	WEAPON_STUN_GUN = 0x73C97D3E,
	WEAPON_PEPPER_SPRAY = 0xE937867A,
	WEAPON_CATTLE_PROD = 0xAB0E51CB,
	WEAPON_NIGHT_STICK = 0xAE2805B3
};

enum eWeaponGuntype
{
	GUNTYPE_UNKNOWN,
	GUNTYPE_PISTOL,
	GUNTYPE_RIFLE,
	GUNTYPE_SNIPER,
	GUNTYPE_SHOTGUN,
	GUNTYPE_MACHINEGUN,
	GUNTYPE_ROCKET,
	GUNTYPE_DLC_1,
	GUNTYPE_DLC_2,
	GUNTYPE_DLC_3,
	GUNTYPE_DLC_4,
	GUNTYPE_DLC_5,
	NUM_EWEAPONGUNTYPE
};

enum eWeaponAttachmentType
{
	WEAPON_ATTACHMENT_CLIP,
	WEAPON_ATTACHMENT_TRIGGER,
	WEAPON_ATTACHMENT_HAMMER,
	WEAPON_ATTACHMENT_DIAL,
	WEAPON_ATTACHMENT_SLIDE,
	WEAPON_ATTACHMENT_FIRE_MODE_SELECTOR,
	WEAPON_ATTACHMENT_HIGH_CAPACITY_CLIP,
	WEAPON_ATTACHMENT_GRENADE_PIN,
	WEAPON_ATTACHMENT_SUPPRESSOR,
	WEAPON_ATTACHMENT_COMPENSATOR,
	WEAPON_ATTACHMENT_BIPOD,
	WEAPON_ATTACHMENT_SNIPER_SCOPE,
	WEAPON_ATTACHMENT_RED_DOT_SCOPE,
	WEAPON_ATTACHMENT_LASER_SIGHT,
	WEAPON_ATTACHMENT_FLASHLIGHT,
	WEAPON_ATTACHMENT_SECONDARY_MODE,
	WEAPON_ATTACHMENT_HE_AMMO,
	WEAPON_ATTACHMENT_AP_AMMO,
	WEAPON_ATTACHMENT_FLECHETTE_AMMO,
	WEAPON_ATTACHMENT_INCENDIARY_AMMO,
	WEAPON_ATTACHMENT_GAS_BLOCK,
	WEAPON_ATTACHMENT_GAS_SYSTEMS,
	WEAPON_ATTACHMENT_BARREL_UPGRADES,
	WEAPON_ATTACHMENT_MAG_GUIDE,
	WEAPON_ATTACHMENT_GOLD,
	WEAPON_ATTACHMENT_CHROME,
	NUM_EWEAPONATTACHMENTTYPE
};

enum ePedComponent
{
	PED_COMPONENT_HEAD,
	PED_COMPONENT_HAIR,
	PED_COMPONENT_UPPR,
	PED_COMPONENT_LOWR,
	PED_COMPONENT_SUSE,
	PED_COMPONENT_HAND,
	PED_COMPONENT_FEET,
	PED_COMPONENT_JACK,
	PED_COMPONENT_SUS2,
	PED_COMPONENT_TEEF,
	PED_COMPONENT_ACCS,
	PED_COMPONENT_TASK,
	PED_COMPONENT_DECL,
	NUM_EPEDCOMPONENT
};

enum ePedProp
{
	PED_PROP_HEAD,
	PED_PROP_HELM,
	PED_PROP_EYES,
	PED_PROP_EARS,
	PED_PROP_MOUTH,
	PED_PROP_LHAND,
	PED_PROP_RHAND,
	PED_PROP_LWRIST,
	PED_PROP_RWRIST,
	PED_PROP_HIP,
	PED_PROP_LFOOT,
	PED_PROP_RFOOT,
	PED_PROP_LPROP,
	PED_PROP_RPROP,
	PED_PROP_LFINGER,
	PED_PROP_RFINGER,
	NUM_EPEDPROP
};

enum eHandType
{
	HAND_R,
	HAND_L,
	NUM_EHANDTYPE
};

enum eHolsterType
{
	HOLSTER_PISTOL_R,
	HOLSTER_PISTOL_L,
	HOLSTER_RIFLE,
	HOLSTER_MP_BAG,
	HOLSTER_SHIELD,
	HOLSTER_GRENADE,
	HOLSTER_SPECIAL,
	NUM_EHOLSTERTYPE
};

enum eEmotionState
{
	ES_INVALID,
	ES_ALERT,
	ES_ANGRY,
	ES_RELAXED,
	ES_RELAXED_EXTREME,
	ES_SAD,
	ES_SCARED,
	ES_SCARED_EXTREME,
	ES_CALM,
	ES_AGITATED,
	NUM_EEMOTIONSTATE
};

enum ePedHash : Hash
{
	a_ufe_sold_a = 0x3CC33E33,
	a_ufe_sold_b = 0x777BB39B,
	a_ufe_sold_d = 0x8FEFE483,
	a_ufe_sold_e = 0x7DFE40A0,
	alph_club = 0xE8459C03,
	amb_man_avg = 0x647FFDD9,
	andr_suit = 0x023449FC,
	andr_uc = 0x7752E610,
	armo_suit = 0x7469FF18,
	armo_unif = 0x5B1D196A,
	armo_unif_1 = 0x94B1E690,
	armo_unif_fkd_up = 0x3FA66A2E,
	bach_unif = 0xD2A43031,
	bar_girl_f_avg = 0x6F275C01,
	bar_tend_fat = 0x6E7681CC,
	bope_stf_mus = 0xF257E429,
	bope_stf_mus_1 = 0x4DA074F4,
	c_busd_driv_f = 0x068B65AD,
	c_f1_os_anos = 0xD9DA0B59,
	c_rt_party_f = 0x96F833ED,
	c_rt_party_fc = 0x8B25F9F2,
	c_rt_party_m = 0x9D7BC0C4,
	c_rt_party_mc = 0x974632BE,
	c_rt_phw_f = 0xB61D55C5,
	c_rt_staff_m = 0x50B88EDA,
	c_rtpl_ded = 0xD9443D37,
	clau_club = 0x94006A9E,
	clau_club_ded = 0x62E493E9,
	clau_club_low = 0x696821D7,
	crazy_man = 0x0B1939E1,
	dr_arth_doc = 0xD9AAE8BD,
	f_ap_civ_z = 0x36E16FC4,
	f_f1_misc_a = 0x6770560F,
	f_f1_misc_b = 0x7631F392,
	f_f1_misc_b_jp = 0xC20EAD0E,
	f_f1_misc_c = 0x12D92CE2,
	f_f1_misc_x = 0x97F53714,
	f_f1_misc_z = 0x32D0ECC9,
	f_f2_misc_a = 0x2E0E3CDE,
	f_f2_misc_b1 = 0xB7037583,
	f_f2_misc_b = 0x0FC70050,
	f_hotl_pris_a = 0x67DA8068,
	f_nc_misc_b = 0xC6787CBF,
	f_nc_misc_c = 0x6C1B4806,
	f_nc_patr_a1 = 0x480629D9,
	f_nc_patr_a = 0x5710E643,
	f_nc_patr_b = 0x9DFCF41A,
	f_nc_patr_b_low = 0x4F459BD8,
	f_pa_misc_a = 0x37870CC0,
	f_pa_misc_b = 0x6562E877,
	f_pa_misc_b_d = 0x6FCB504B,
	f_pa_misc_c = 0xE271E29F,
	f_pa_misc_d = 0xD1E8418C,
	f_pan_front = 0xE576B323,
	f_pp_civ_a = 0x8927AE8E,
	f_ufe_rcpt_a = 0x2D435209,
	fabi_club = 0x52819A6E,
	fabi_club_low = 0xF780F0F9,
	fabi_docks = 0x6B3CB30B,
	fabi_fav_1 = 0x4CAB0E25,
	fabi_roof = 0x94B4AE79,
	fav1_sc_bart = 0x05036E61,
	fav2_old_lady = 0x833228C3,
	fav_dj_fat = 0xC91DEA81,
	fav_fw_kid = 0xF4AE9A7D,
	fav_max_kid = 0x063B6224,
	fav_mc_avg = 0x436BDBAC,
	fave_resi_avg = 0xCF5B0D8A,
	fave_resi_thn = 0x2E2B3D02,
	fb_daph_dead = 0x9A049F0C,
	fb_daph_yaht = 0xED3C92F7,
	fb_de_marc = 0x88B27802,
	fb_pass_ny = 0x78AE7267,
	fb_tony_d = 0xD684FE2B,
	fun1_civ_ward_fat = 0x53FF125E,
	g_cs_bag_avg = 0x8567820F,
	g_cs_dock_a = 0xFB79F7A4,
	g_cs_dock_b = 0x2FFFE0AF,
	g_cs_dock_c = 0x2738CF21,
	g_cs_dock_d = 0x5C5BB966,
	g_cs_dock_e2 = 0xB72CD16A,
	g_cs_dock_e = 0x41BF842E,
	g_cs_dock_f = 0x7EF4FE98,
	g_cs_k_avg = 0x8076B4AF,
	g_cs_k_elva_pr = 0x24E709DD,
	g_cs_k_elvb_pr = 0x311DB8E2,
	g_cs_k_m_mus = 0xFF799C1D,
	g_cs_k_mony_pb = 0x64B92973,
	g_cs_k_mus = 0xCACB6525,
	g_cs_k_sold_hl = 0x10A222C0,
	g_cs_k_sold_pb = 0xE5A5D5C4,
	g_cs_k_sold_pr = 0x811C8CAF,
	g_cs_k_sold_sr = 0x9A47B989,
	g_cs_kidn_a = 0xBCE3E9CD,
	g_cs_kidn_aw = 0xDE7DEC70,
	g_cs_kidn_b = 0xCEBC8D7E,
	g_cs_kidn_c = 0x986620D2,
	g_cs_ncck = 0xBB3C5F60,
	g_cs_ncsm_a1 = 0x87BA0520,
	g_cs_ncsm_a = 0x3512AFED,
	g_cs_ncsm_b1 = 0xBC0D5D02,
	g_cs_ncsm_b1l = 0x58138E3A,
	g_cs_ncsm_b = 0x234C0C60,
	g_cs_ncsm_c1 = 0x4FAA1269,
	g_cs_ncsm_c2 = 0x143E9B97,
	g_cs_ncsm_c = 0x8D9DE102,
	g_cs_ncsm_d1 = 0x69F4C82A,
	g_cs_ncsm_d = 0x7FE4458F,
	g_cs_ncsm_e1 = 0xB1D454FC,
	g_cs_ncsm_e = 0xCC10DDE7,
	g_cs_rail_a = 0x0545E708,
	g_cs_rail_ax = 0x18DFEE7C,
	g_cs_slip_a = 0xBCCB4CC2,
	g_cs_slip_b = 0xEE072F39,
	g_cs_sold_b = 0x0ECDE116,
	g_cs_sold_d = 0x357FAE79,
	g_cs_sold_f = 0xD7D27320,
	g_cs_sold_x = 0x169BF07E,
	g_cs_uc_avg = 0x5520F584,
	g_cs_uc_nm_lt_mus = 0x403E87B2,
	g_fav_mug_avg = 0x747C0FF5,
	g_ny_c_drive_a = 0x11FFAF4A,
	g_ny_c_gdig_a = 0xE2E838B8,
	g_ny_c_gren = 0x04A8BE70,
	g_ny_c_gunp_c = 0xAB7D127F,
	g_ny_c_snip_a = 0x1DD0AA97,
	g_ny_c_sold_a = 0x61D69F3C,
	g_ny_c_sold_b = 0x6FFA3B83,
	g_ny_c_sold_c = 0xBE645856,
	g_ny_c_sold_d = 0x949A04C2,
	g_ny_c_sold_e = 0xA5B0A6EF,
	g_ny_c_sold_f = 0xF37DC288,
	g_ny_c_sold_g = 0x09CBEF24,
	g_ny_c_sold_h = 0xD7E10B4F,
	g_ny_c_thug_a = 0xB555B8E8,
	g_ny_c_thug_b = 0xC317D46C,
	g_ny_d_dead_a = 0x9FDF7CAE,
	g_ny_g_barp_a = 0xC7182B98,
	g_ny_t_blow_up = 0xA6E674C1,
	g_ny_t_sold_a = 0xD81D091D,
	g_ny_t_sold_b = 0x1F4A9777,
	g_ny_t_sold_bb = 0x2FD5DCBF,
	g_ny_t_sold_c = 0x2D0B32F8,
	g_ny_t_sold_d = 0x0DEB74B9,
	g_ny_t_sold_e = 0x9B971012,
	g_ny_t_sold_f = 0xF1D5BC8E,
	g_ny_t_thug_a = 0x7BFF23CE,
	g_ny_t_thug_b = 0xA8917CF2,
	g_ny_t_thug_c = 0x9657D87F,
	g_pp_pris_a = 0x4691468F,
	g_pp_riot_a = 0xAFE5A5B1,
	g_pp_riot_b = 0x1C4C7E7D,
	g_pp_riot_c1 = 0x577CE382,
	g_pp_riot_c = 0x9C2EFE44,
	g_pp_riot_d = 0x6A7E1AE3,
	g_pp_riot_e = 0x78DC379F,
	giov_bus = 0xB8368028,
	giov_club = 0x1FA0704D,
	giov_club_b = 0x075B3C0D,
	giov_club_c = 0xD5C858E8,
	giov_club_low = 0xCD1A8CAB,
	giov_fav = 0xD6B199EA,
	giov_fav_low = 0xCDEDEED3,
	h_crac_sold_a = 0x2D6FBD3A,
	h_crac_sold_b = 0x4922F498,
	h_crac_sold_c = 0x37595105,
	k_f1_misc_a = 0xFF7E9CB1,
	k_f1_misc_b = 0x0E1739DE,
	m7_pmc_01_avg = 0x678BB0DA,
	m_ap_civ_b = 0x2634C958,
	m_ap_civ_br = 0x00070C62,
	m_ap_emp_a = 0x499762B5,
	m_ap_sec_a = 0xC30EA5A6,
	m_crac_snip_avg = 0x5B9FB4F7,
	m_crac_sold_a = 0x5CAC7F10,
	m_crac_sold_avg = 0x3ECB6593,
	m_crac_sold_b = 0x13566C55,
	m_crac_sold_bb = 0x5327FA16,
	m_crac_sold_c = 0xDE1401D1,
	m_crac_sold_d = 0xB8F9379C,
	m_crac_sold_ded = 0xDE0D1140,
	m_crac_sold_e = 0x02B0CB0A,
	m_crac_sold_jy = 0x783D4DA8,
	m_crac_sold_of = 0x9D950A1E,
	m_crac_sold_sr = 0xDECC8CCC,
	m_crac_sold_tt = 0x00DC588F,
	m_crac_sold_z2 = 0x675E99C7,
	m_crac_sold_z = 0x60248600,
	m_crac_w_sold_avg = 0xEB80AFBE,
	m_f1_gcs_a = 0x3A079D89,
	m_f1_gcs_b = 0x72438E00,
	m_f1_gcs_c = 0x808A2A8D,
	m_f1_hood_a = 0xC40A8021,
	m_f1_hood_b = 0x2E81D512,
	m_f1_hood_c = 0x409CF948,
	m_f1_hood_d = 0x0AF00DEF,
	m_f1_hood_e = 0x1D423293,
	m_f1_misc_a = 0x1CC99D8C,
	m_f1_misc_b1 = 0x79EDD358,
	m_f1_misc_b2 = 0x8C3577E7,
	m_f1_misc_c = 0x516A86D1,
	m_f1_misc_d1 = 0x2ECF4CE0,
	m_f1_misc_d2 = 0x1C78A833,
	m_f1_misc_d3 = 0x4B5705EF,
	m_f1_misc_d = 0x64A1AD3F,
	m_f1_misc_e = 0x3592CF1A,
	m_f1_misc_f = 0x475EF2B2,
	m_f1_misc_fw = 0x3DD4E8D7,
	m_f1_misc_fx = 0x2B07C33D,
	m_f1_misc_g = 0xCBB7FB6A,
	m_f1_misc_h1 = 0xAB842FC8,
	m_f1_misc_h = 0x9DE91FCD,
	m_f1_misc_i = 0x6EC9C18F,
	m_f1_misc_ia = 0x533C7BDE,
	m_f1_misc_ib = 0x44EEDF43,
	m_f1_misc_x = 0x815566A2,
	m_f1_misc_y = 0x539F0B36,
	m_f2_gcs_a = 0x2C5E05FE,
	m_f2_gcs_b = 0x1DFEE944,
	m_f2_gcs_d = 0x82BE32BD,
	m_f2_gcs_e = 0x74779630,
	m_f2_gcs_h = 0xC412B569,
	m_f2_gcs_i = 0xB4D016E4,
	m_f2_gcs_y1 = 0xA821D519,
	m_f2_gcs_y = 0xE8187D80,
	m_f2_gcs_z = 0xB5B598BB,
	m_f2_mcp_a1 = 0x041B7B35,
	m_f2_mcp_a = 0xC4A3820C,
	m_f2_misc_a = 0xD6BC8CE5,
	m_f2_misc_b = 0x98CA10E9,
	m_f2_ufe_b = 0x8FCE4DB7,
	m_f2_ufe_c = 0x10F9CFF8,
	m_f2_ufe_e = 0xF46E16E1,
	m_f2_ufe_f1 = 0xCFFD857C,
	m_f2_ufe_f = 0xE62FFA65,
	m_f2_ufe_g = 0x77D71D79,
	m_f2_ufe_h = 0x8A1841FB,
	m_f2_ufe_i = 0xBAF3239C,
	m_hotl_pris_a = 0xF35733E7,
	m_nc_civs_a = 0x81D59E87,
	m_nc_civs_b = 0x4C0A32E9,
	m_nc_civs_c = 0x9D60559C,
	m_nc_hall_a = 0x5E18289A,
	m_nc_pack_a1 = 0xA716E1B3,
	m_nc_patr_a = 0xC04A7BC1,
	m_nc_patr_b = 0x8D6C1605,
	m_nc_patr_b_low = 0xC694E647,
	m_nc_staf_a = 0xE247009D,
	m_nc_staf_b = 0x10EF5DED,
	m_nc_staf_c = 0x41353E78,
	m_pa_dead_a = 0x9D61F8FE,
	m_pa_dead_z = 0xD2466262,
	m_pa_misc_a = 0x5EC7F821,
	m_pa_misc_b = 0x51855D9C,
	m_pa_rebl_a = 0x46DE1075,
	m_pa_rebl_b = 0x5D213CFB,
	m_pa_rebl_b_d = 0x9393517E,
	m_pa_rebl_c = 0xD0A52401,
	m_pa_rebl_d = 0xA08DC3D3,
	m_pa_rebl_d_1 = 0xFB3968FA,
	m_pa_rebl_d_2 = 0xE189359A,
	m_pa_rebl_e_1 = 0x31FB0CE7,
	m_pa_rebl_e_2 = 0x3FA9A844,
	m_pa_rebl_f = 0x83F80AA8,
	m_pa_rzip_a = 0x49CA4819,
	m_pan_front = 0x38281580,
	m_pp_misc_a = 0xB2E4395B,
	marc_casu = 0x3DD7B2BC,
	marc_casu_low = 0x4F3BABA7,
	marc_fav2 = 0xEAC1C7A6,
	marc_fav = 0xE8C726E9,
	marc_fav_low = 0xC934A675,
	marc_form = 0xE1457BFC,
	marc_suit = 0xEF6602EB,
	marc_yaht = 0xB1BBA014,
	maxpayne_mirrored = 0x5796EE80,
	milo_unif = 0xABA5597B,
	nevs_unif = 0x6DEDC74B,
	offi_tech_avg = 0x885031CC,
	offi_tech_ded = 0x46D98458,
	p_rt_secg_m = 0x234592CF,
	p_ufe_sold_a1 = 0xC8FE8AA7,
	p_ufe_sold_a2 = 0x2F365715,
	p_ufe_sold_a = 0xD8AA4513,
	p_ufe_sold_b1 = 0x4ED6909D,
	p_ufe_sold_b = 0xE716E1EC,
	p_ufe_sold_c = 0xD8D34561,
	p_ufe_sold_d = 0xE653E062,
	p_ufe_sold_e = 0xBCFD8DB6,
	p_ufe_sold_f = 0xCABF2939,
	p_ufe_sold_g = 0xA131D61F,
	p_ufe_sold_x = 0x203D5400,
	pass_club_h = 0xF34B0E8E,
	pass_comb = 0xC01AE62E,
	pass_dock = 0x890BEDB2,
	pass_heli_pilo = 0x4B0ABAAA,
	pass_ny_h = 0xE4FB5BF9,
	pass_ny_w = 0xDA59C6BA,
	pass_roof = 0x37DD7F36,
	pass_suit = 0x04B2BBB8,
	pass_yaht = 0xCE4A4D28,
	r_crac_heavy_g = 0x24E58F54,
	r_spp_sold_a = 0xE4D54E4F,
	r_ufe_sold_a = 0x292EBD5C,
	rcpt_f_avg = 0x5BE3F7B1,
	rodr_form = 0x6C3805F4,
	rodr_form_dead = 0x90E800C1,
	rodr_suit = 0x4BF6B715,
	secr_f_avg = 0x245EDE9A,
	sero_club = 0xBF544563,
	sero_club_low = 0xF1CFD4A3,
	sero_unif_1 = 0x281A0CD2,
	sero_unif_2 = 0x55B5E809,
	sero_unif_3 = 0x048345A5,
	sext_dave = 0x251CA0F7,
	sext_dave_pp = 0x6C2E931D,
	superlod = 0xAE4B15D6,
	uppr_pty_f_avg = 0xEEF6B616,
	vict_crash = 0xD85BA5B1,
	vict_form = 0xDC1B5517,
	vict_police = 0x5276B8FC,
	vict_suit = 0xF87AA0CE,
	wlsn_spp_noj = 0x756AD77E,
	wlsn_spp_unif = 0xE16AEB67,
	wlsn_undr_1a = 0x71FC09BA
};

enum eLobbyOption
{
	LOBBY_OPT_LOCATION,
	LOBBY_OPT_DURATION,
	LOBBY_OPT_TEAM,
	LOBBY_OPT_HEALTH,
	LOBBY_OPT_LOCKON,
	LOBBY_OPT_BT_FRIENDLY_TRANSMIT,
	LOBBY_OPT_DEBUG_BLIPS,
	LOBBY_OPT_LMS_LIVES,
	LOBBY_OPT_PEDS,
	LOBBY_OPT_BLIPS,
	LOBBY_OPT_NAME,
	LOBBY_OPT_RETICULE,
	LOBBY_OPT_TEAMCHAT,
	LOBBY_OPT_SPAWNDIST,
	LOBBY_OPT_SPAWNTIME,
	LOBBY_OPT_TIMEOFDAY,
	LOBBY_OPT_WEATHER,
	LOBBY_OPT_INFO,
	LOBBY_OPT_SHOOT_DODGE_MODE,
	LOBBY_OPT_JIP_ALLOWED,
	LOBBY_OPT_WINNING_COND,
	LOBBY_OPT_NONETWORKSTART,
	LOBBY_OPT_FALLING_DAMAGE,
	LOBBY_OPT_SILHOUETTE,
	LOBBY_OPT_GW_GAMEMODE,
	LOBBY_OPT_MO_SPECOP,
	LOBBY_OPT_MO_SPECPW,
	LOBBY_OPT_MO_RANKRES,
	LOBBY_OPT_MO_NUMPLYR,
	LOBBY_OPT_MO_DIFFICULTY,
	LOBBY_OPT_GWLASTSTAND,
	LOBBY_OPT_MPDISPDEBUG,
	LOBBY_OPT_DM_VARIANT,
	LOBBY_OPT_ROUNDS_LIMIT,
	LOBBY_OPT_GW_SMALLSERVERSHUTDOWN,
	LOBBY_OPT_GW_FORCESETUP,
	LOBBY_OPT_NAME_TAGS,
	LOBBY_OPT_MP_BOT,
	LOBBY_OPT_MO_DMWSOAK,
	LOBBY_OPT_MP_RESIZEMAP,
	LOBBY_OPT_GW_ROUND1,
	LOBBY_OPT_GW_ROUND2,
	LOBBY_OPT_GW_ROUND3,
	LOBBY_OPT_GW_ROUND4,
	LOBBY_OPT_GW_ROUND5,
	LOBBY_OPT_SOCIALCLUB,
	LOBBY_OPT_XP_BONUSMULTIPLIER,
	LOBBY_OPT_BURSTSALLOWED,
	LOBBY_OPT_PK_PRIMARY,
	LOBBY_OPT_PK_SECONDARY,
	NUM_ELOBBYOPTION
};

enum eNmMessage
{
	nm000_stopAllBehaviours,
	nm001,
	nm002_start,
	nm003_activePose,
	nm004,
	nm005_mask,
	nm006_incomingTransforms,
	nm007,
	nm008_bodyRelax,
	nm009,
	nm010_relaxation,
	nm011_mask,
	nm012_holdPose,
	nm013_damping,
	nm014_configureBalance,
	nm015,
	nm016_stepHeight,
	nm017_legsApartRestep,
	nm018_legsTogetherRestep,
	nm019_taperKneeStrength,
	nm020_legStiffness,
	nm021_leftLegSwingDamping,
	nm022_rightLegSwingDamping,
	nm023_balanceAbortThreshold,
	nm024_giveUpHeight,
	nm025_stepClampScale,
	nm026_stepClampScaleVariance,
	nm027_predictionTime,
	nm028_predictionTimeVariance,
	nm029_maxSteps,
	nm030_fallType,
	nm031_fallMult,
	nm032_fallReduceGravityComp,
	nm033_maxBalanceTime,
	nm034_stableLinSpeedThresh,
	nm035_stableRotSpeedThresh,
	nm036_balanceIndefinitely,
	nm037_rampHipPitchOnFail,
	nm038_movingFloor,
	nm039_airborneStep,
	nm040_useComDirTurnVelThresh,
	nm041_minKneeAngle,
	nm042_flatterSwingFeet,
	nm043_flatterStaticFeet,
	nm044_leanAgainstVelocity,
	nm045_stepDecisionThreshold,
	nm046_stepIfInSupport,
	nm047_alwaysStepWithFarthest,
	nm048_standUp,
	nm049_giveUpHeightEnd,
	nm050_balanceAbortThresholdEnd,
	nm051_giveUpRampDuration,
	nm052_leanToAbort,
	nm053_configureBalanceReset,
	nm054,
	nm055_defineAttachedObject,
	nm056,
	nm057_partIndex,
	nm058_worldPos,
	nm059_objectMass,
	nm060_setStiffness,
	nm061,
	nm062_mask,
	nm063_bodyStiffness,
	nm064_damping,
	nm065_bodyRollUp,
	nm066,
	nm067_mask,
	nm068_stiffness,
	nm069_legPush,
	nm070_armReachAmount,
	nm071_useArmToSlowDown,
	nm072_asymmetricalLegs,
	nm073_bodyWrithe,
	nm074,
	nm075_armStiffness,
	nm076_legStiffness,
	nm077_backStiffness,
	nm078_legPeriod,
	nm079_armPeriod,
	nm080_backPeriod,
	nm081_legDamping,
	nm082_armDamping,
	nm083_backDamping,
	nm084_legAmplitude,
	nm085_armAmplitude,
	nm086_backAmplitude,
	nm087_kneeAmplitude,
	nm088_elbowAmplitude,
	nm089_mask,
	nm090_rollOverFlag,
	nm091_armsWindmillAdaptive,
	nm092,
	nm093_armStiffness,
	nm094_bodyStiffness,
	nm095_period,
	nm096_amplitude,
	nm097_phase,
	nm098_leftElbowAngle,
	nm099_rightElbowAngle,
	nm100_armDirection,
	nm101_disableOnImpact,
	nm102_setBackAngles,
	nm103_useAngMom,
	nm104_bendLeftElbow,
	nm105_bendRightElbow,
	nm106_mask,
	nm107_pedalLegs,
	nm108,
	nm109_backPedal,
	nm110_legStiffness,
	nm111_pedalLeftLeg,
	nm112_pedalRightLeg,
	nm113_radius,
	nm114_angularSpeed,
	nm115_pedalOffset,
	nm116_speedAsymmetry,
	nm117_adaptivePedal4Dragging,
	nm118_angSpeedMultiplier4Dragging,
	nm119_radiusVariance,
	nm120_legAngleVariance,
	nm121_centreForwards,
	nm122_centreUp,
	nm123_centreOut,
	nm124_dragReduction,
	nm125_hula,
	nm126_bodyBalance,
	nm127_balance,
	nm128_armStiffness,
	nm129_armDamping,
	nm130_elbow,
	nm131_shoulder,
	nm132_useHeadLook,
	nm133_headLookPos,
	nm134_headLookInstanceIndex,
	nm135_somersaultAngle,
	nm136_somersaultAngleThreshold,
	nm137_sideSomersaultAngle,
	nm138_sideSomersaultAngleThreshold,
	nm139_returningToBalanceArmsOut,
	nm140_armsOutOnPush,
	nm141_armsOutStraightenElbows,
	nm142_armsOutMinLean2,
	nm143_angVelMultiplier,
	nm144_angVelThreshold,
	nm145_armsOutOnPushMultiplier,
	nm146_armsOutOnPushTimeout,
	nm147_useBodyTurn,
	nm148_elbowAngleOnContact,
	nm149_bendElbowsTime,
	nm150_bendElbowsGait,
	nm151_headLookAtVelProb,
	nm152_turnOffProb,
	nm153_turn2VelProb,
	nm154_turnAwayProb,
	nm155_turnLeftProb,
	nm156_turnRightProb,
	nm157_turn2TargetProb,
	nm158_leanInDirection,
	nm159,
	nm160_dir,
	nm161_leanAmount,
	nm162_applyAsForce,
	nm163_leanToPosition,
	nm164,
	nm165_pos,
	nm166_leanAmount,
	nm167_applyAsForce,
	nm168_leanTowardsObject,
	nm169,
	nm170_offset,
	nm171_leanAmount,
	nm172_instanceIndex,
	nm173_applyAsForce,
	nm174_forceLeanInDirection,
	nm175,
	nm176_dir,
	nm177_leanAmount,
	nm178_forceLeanToPosition,
	nm179,
	nm180_pos,
	nm181_leanAmount,
	nm182_forceLeanTowardsObject,
	nm183,
	nm184_offset,
	nm185_leanAmount,
	nm186_instanceIndex,
	nm187_braceForImpact,
	nm188_brace,
	nm189_pos,
	nm190_look,
	nm191_instanceIndex,
	nm192_braceDistance,
	nm193_reachAbsorbtionTime,
	nm194_targetPredictionTime,
	nm195_bodyStiffness,
	nm196_grabDontLetGo,
	nm197_grabStrength,
	nm198_grabDistance,
	nm199_grabReachAngle,
	nm200_grabHoldTimer,
	nm201_legStiffness,
	nm202_upperBodyFlinch,
	nm203,
	nm204_pos,
	nm205_leftHanded,
	nm206_rightHanded,
	nm207_handDistanceVertical,
	nm208_handDistanceLeftRight,
	nm209_handDistanceFrontBack,
	nm210_bodyStiffness,
	nm211_bodyDamping,
	nm212_backBendAmount,
	nm213_useLeftArm,
	nm214_useRightArm,
	nm215_noiseScale,
	nm216_newHit,
	nm217_turnTowards,
	nm218_protectHeadToggle,
	nm219_headLookAwayFromTarget,
	nm220_crushReaction,
	nm221,
	nm222_obstacleID,
	nm223_obstacleMass,
	nm224_obstacleVel,
	nm225_obstaclePos,
	nm226_flinchMode,
	nm227_useInjuries,
	nm228_stiffness,
	nm229_damping,
	nm230_mask,
	nm231_grab,
	nm232_rightArmGrab,
	nm233_bodyStiffness,
	nm234_grabStrength,
	nm235_pos1,
	nm236_pos2,
	nm237_pos3,
	nm238_pos4,
	nm239_normalL,
	nm240_normalR,
	nm241_linegrab,
	nm242_surfaceGrab,
	nm243_justbrace,
	nm244_tryToPullUp,
	nm245_useLeft,
	nm246_useRight,
	nm247_instanceIndex,
	nm248_dontLetGo,
	nm249_grabDist,
	nm250_reachAngle,
	nm251_oneSideReachAngle,
	nm252_pullUpStrengthLeft,
	nm253_pullUpStrengthRight,
	nm254_pullUpTime,
	nm255_grabHoldMaxTimer,
	nm256_instancePartIndex,
	nm257,
	nm258_leftArmGrab,
	nm259_catchFall,
	nm260_catchFall,
	nm261_legsStiffness,
	nm262_armsStiffness,
	nm263_torsoStiffness,
	nm264_backwardsMinArmOffset,
	nm265_forwardMaxArmOffset,
	nm266_zAxisSpinReduction,
	nm267_useHeadLook,
	nm268_shot,
	nm269_shot,
	nm270_bodyStiffness,
	nm271_neckStiffness,
	nm272_neckDamping,
	nm273_bodyPart,
	nm274_crouching,
	nm275_reachForWound,
	nm276_fling,
	nm277_chickenArms,
	nm278_pointGun,
	nm279_brace,
	nm280_antiSpinAmount,
	nm281_antiSpinTime,
	nm282_grabHoldTime,
	nm283_maxSteps,
	nm284_loosenessAmount,
	nm285_minArmsLooseness,
	nm286_minLegsLooseness,
	nm287_stableHandsAndNeck,
	nm288_useHeadLook,
	nm289_hitPoint,
	nm290_bulletVel,
	nm291_normal,
	nm292_headLook,
	nm293_timeBeforeReachForWound,
	nm294_timeBeforeCollapseWoundLeg,
	nm295_kMultOnLoose,
	nm296_kMult4Legs,
	nm297_alwaysResetLooseness,
	nm298_spineDamping,
	nm299_cpainSmooth2Time,
	nm300_cpainDuration,
	nm301_cpainMag,
	nm302_cpainTwistMag,
	nm303_cpainSmooth2Zero,
	nm304_armsHoldTime,
	nm305_armsPoseTime,
	nm306_armsBlendMotion,
	nm307_legLiftTime,
	nm308_legLiftStiffness,
	nm309_legLiftDamping,
	nm310_useCatchFallOnFall,
	nm311_bulletProofVest,
	nm312_allowInjuredLeg,
	nm313_allowInjuredLegReach,
	nm314_allowInjuredArm,
	nm315_injuredArmReactTime,
	nm316_snap,
	nm317_snapMag,
	nm318_snapDirectionRandomness,
	nm319_snapLeftArm,
	nm320_snapRightArm,
	nm321_snapLeftLeg,
	nm322_snapRightLeg,
	nm323_snapSpine,
	nm324_snapNeck,
	nm325_snapPhasedLegs,
	nm326_snapHipType,
	nm327_snapUseBulletDir,
	nm328_unSnapInterval,
	nm329_unSnapRatio,
	nm330_snapUseTorques,
	nm331_melee,
	nm332_initialWeaknessZeroDuration,
	nm333_initialWeaknessRampDuration,
	nm334_shotShockSpin,
	nm335_addShockSpin,
	nm336_randomizeShockSpinDirection,
	nm337_alwaysAddShockSpin,
	nm338_shockSpinMin,
	nm339_shockSpinMax,
	nm340_shockSpinLiftForceMult,
	nm341_shockSpinDecayMult,
	nm342_shockSpinScalePerComponent,
	nm343_shotFallToKnees,
	nm344_fallToKnees,
	nm345_ftkBalanceTime,
	nm346_ftkAlwaysChangeFall,
	nm347_ftkHelperForce,
	nm348_ftkHelperForceOnSpine,
	nm349_ftkLeanHelp,
	nm350_ftkSpineBend,
	nm351_ftkStiffSpine,
	nm352_ftkImpactLooseness,
	nm353_ftkImpactLoosenessTime,
	nm354_ftkOnKneesArmType,
	nm355_ftkReleaseReachForWound,
	nm356_ftkReleasePointGun,
	nm357_shotConfigureArms,
	nm358_brace,
	nm359_alwaysReachTime,
	nm360_useArmsWindmill,
	nm361_AWSpeedMult,
	nm362_AWRadiusMult,
	nm363_AWStiffnessAdd,
	nm364_forceLeftReachForWound,
	nm365_forceRightReachForWound,
	nm366_reachForWoundWithGun,
	nm367_allowTwoHandedReach,
	nm368_shotFromBehind,
	nm369_shotFromBehind,
	nm370_sfbSpineAmount,
	nm371_sfbNeckAmount,
	nm372_sfbHipAmount,
	nm373_sfbKneeAmount,
	nm374_sfbPeriod,
	nm375_sfbForceBalancePeriod,
	nm376_sfbArmsOnset,
	nm377_sfbKneesOnset,
	nm378_sfbNoiseGain,
	nm379_shotInGuts,
	nm380_shotInGuts,
	nm381_sigSpineAmount,
	nm382_sigNeckAmount,
	nm383_sigHipAmount,
	nm384_sigKneeAmount,
	nm385_sigPeriod,
	nm386_sigForceBalancePeriod,
	nm387_sigKneesOnset,
	nm388_shotHeadLook,
	nm389_useHeadLook,
	nm390_headLook,
	nm391_headLookAtWoundMinTimer,
	nm392_headLookAtWoundMaxTimer,
	nm393_headLookAtHeadPosMaxTimer,
	nm394_headLookAtHeadPosMinTimer,
	nm395_shotRelax,
	nm396_relaxPeriodUpper,
	nm397_relaxPeriodLower,
	nm398_splitBody,
	nm399_configureBullets,
	nm400_impulseSpreadOverParts,
	nm401_impulseLeakageStrengthScaled,
	nm402_impulsePeriod,
	nm403_impulseDelay,
	nm404_impulseReductionPerShot,
	nm405_impulseMinimumStrength,
	nm406_impulseRecoveryPerTick,
	nm407_impulseTorqueScale,
	nm408_torqueMode,
	nm409_torqueSpinMode,
	nm410_torqueFilterMode,
	nm411_torqueAlwaysSpine3,
	nm412_torqueDelay,
	nm413_torquePeriod,
	nm414_torqueGain,
	nm415_torqueCutoff,
	nm416_torqueReductionPerTick,
	nm417_liftGain,
	nm418_counterImpulseDelay,
	nm419_counterImpulseMag,
	nm420_counterAfterMagReached,
	nm421_doCounterImpulse,
	nm422_counterImpulse2Hips,
	nm423_impulseAirMult,
	nm424_impulseAirMultStart,
	nm425_impulseAirMax,
	nm426_impulseAirApplyAbove,
	nm427_impulseAirOn,
	nm428_loosenessFix,
	nm429_armScale,
	nm430_staggerFall,
	nm431_armStiffness,
	nm432_armDamping,
	nm433_spineDamping,
	nm434_spineStiffness,
	nm435_armStiffnessStart,
	nm436_armDampingStart,
	nm437_spineDampingStart,
	nm438_spineStiffnessStart,
	nm439_timeAtStartValues,
	nm440_rampTimeFromStartValues,
	nm441_staggerStepProb,
	nm442_stepsTillStartEnd,
	nm443_timeStartEnd,
	nm444_rampTimeToEndValues,
	nm445_lowerBodyStiffness,
	nm446_lowerBodyStiffnessEnd,
	nm447_predictionTime,
	nm448_perStepReduction1,
	nm449_leanInDirRate,
	nm450_leanInDirMax,
	nm451_hipBendMult,
	nm452_spineBendMult,
	nm453_useHeadLook,
	nm454_headLookPos,
	nm455_headLookInstanceIndex,
	nm456_headLookAtVelProb,
	nm457_turnOffProb,
	nm458_turn2TargetProb,
	nm459_turn2VelProb,
	nm460_turnAwayProb,
	nm461_turnLeftProb,
	nm462_turnRightProb,
	nm463_useBodyTurn,
	nm464_upperBodyReaction,
	nm465_rdsForceMag,
	nm466_rdsStiffnessDecayTime,
	nm467_mask,
	nm468_parent,
	nm469_headLook,
	nm470,
	nm471_damping,
	nm472_stiffness,
	nm473_instanceIndex,
	nm474_vel,
	nm475_pos,
	nm476_alwaysLook,
	nm477_alwaysEyesHorizontal,
	nm478_highFall,
	nm479_highFall,
	nm480_bodyStiffness,
	nm481_bodydamping,
	nm482_pdStrength,
	nm483_crashOrLandCutOff,
	nm484_catchfalltime,
	nm485_armsUp,
	nm486_legRadius,
	nm487_legAngSpeed,
	nm488_armPeriod,
	nm489_armAmplitude,
	nm490_fowardRoll,
	nm491_aimAngleBase,
	nm492_sideD,
	nm493_fowardOffsetOfLegIK,
	nm494_fowardVelRotation,
	nm495_orientateBodyToFallDirection,
	nm496_useZeroPose,
	nm497_ignoreWorldCollisions,
	nm498_footVelCompScale,
	nm499_fowardVelCutOff,
	nm500_legL,
	nm501_catchFallCutOff,
	nm502_legStrength,
	nm503_stayUpright,
	nm504,
	nm505_useForces,
	nm506_useTorques,
	nm507_velocityBased,
	nm508_torqueOnlyInAir,
	nm509_forceStrength,
	nm510_forceDamping,
	nm511_forceFeetMult,
	nm512_forceSpine3Share,
	nm513_forceLeanReduction,
	nm514_forceInAirShare,
	nm515_forceMin,
	nm516_forceMax,
	nm517_forceSaturationVel,
	nm518_forceThresholdVel,
	nm519_torqueStrength,
	nm520_torqueDamping,
	nm521_torqueSaturationVel,
	nm522_torqueThresholdVel,
	nm523_supportPosition,
	nm524_noSupportForceMult,
	nm525_rollDownStairs,
	nm526_rollDownStairs,
	nm527_stiffness,
	nm528_damping,
	nm529_forcemag,
	nm530_asymmetry,
	nm531_m_useArmToSlowDown,
	nm532_useZeroPose,
	nm533_spinWhenInAir,
	nm534_m_legPush,
	nm535_armReachLength,
	nm536_m_armReachAmount,
	nm537_tryToAvoidHeadbuttingGround,
	nm538_useCustomRollDir,
	nm539_customRollDir,
	nm540_stiffnessDecayTime,
	nm541_stiffnessDecayTarget,
	nm542_asymmetricalLegs,
	nm543_zAxisSpinReduction,
	nm544_targetLinearVelocityDecayTime,
	nm545_targetLinearVelocity,
	nm546_onlyApplyHelperForces,
	nm547_useVelocityOfObjectBelow,
	nm548_useRelativeVelocity,
	nm549_applyFoetalToLegs,
	nm550_movementLegsInFoetalPosition,
	nm551_maxAngVelAroundFrontwardAxis,
	nm552_minAngVel,
	nm553_applyNewRollingCheatingTorques,
	nm554_maxAngVel,
	nm555_magOfTorqueToRoll,
	nm556_applyHelPerTorqueToAlign,
	nm557_delayToAlignBody,
	nm558_magOfTorqueToAlign,
	nm559_airborneReduction,
	nm560_fallOverWall,
	nm561_fallOverWall,
	nm562_bodyStiffness,
	nm563_damping,
	nm564_magOfForce,
	nm565_maxDistanceFromPelToHitPoint,
	nm566_maxForceDist,
	nm567_stepExclusionZone,
	nm568_minLegHeight,
	nm569_bodyTwist,
	nm570_fallOverWallEndA,
	nm571_fallOverWallEndB,
	nm572_forceAngleAbort,
	nm573_forceTimeOut,
	nm574_moveArms,
	nm575_moveLegs,
	nm576_bendSpine,
	nm577_angleDirWithWallNormal,
	nm578_leaningAngleThreshold,
	nm579_maxAngVel,
	nm580_adaptForcesToLowWall,
	nm581_maxWallHeight,
	nm582_distanceToSendSuccessMessage,
	nm583_useArmIK,
	nm584_reachDistanceFromHitPoint,
	nm585_minReachDistanceFromHitPoint,
	nm586_angleTotallyBack,
	nm587_pointArm,
	nm588,
	nm589_target,
	nm590_twist,
	nm591_armStraightness,
	nm592_useLeftArm,
	nm593_armStiffness,
	nm594_armDamping,
	nm595_instanceIndex,
	nm596_pointSwingLimit,
	nm597_useZeroPoseWhenNotPointing,
	nm598_pointGun,
	nm599_pointGun,
	nm600_leftHandTarget,
	nm601_leftHandTargetIndex,
	nm602_leftHandParentEffector,
	nm603_leftHandParentOffset,
	nm604_rightHandTarget,
	nm605_rightHandTargetIndex,
	nm606_rightHandParentEffector,
	nm607_rightHandParentOffset,
	nm608_leadTarget,
	nm609_secondaryHandOffset,
	nm610_primaryHandWeaponDistance,
	nm611_armStiffness,
	nm612_armDamping,
	nm613_useHelperTorques,
	nm614_useHelperForces,
	nm615_useHelperTorquesSupport,
	nm616_useHelperForcesSupport,
	nm617_maxAngle,
	nm618_clavicleBlend,
	nm619_elbowAttitude,
	nm620_useIncomingTransforms,
	nm621_useConstraint,
	nm622_alwaysConstrain,
	nm623_makeConstraintDistance,
	nm624_weaponMask,
	nm625_leftHandWeaponIndex,
	nm626_rightHandWeaponIndex,
	nm627_stabilizeRifleStock,
	nm628_oriStiff,
	nm629_oriDamp,
	nm630_posStiff,
	nm631_posDamp,
	nm632_extraTilt,
	nm633_fireWeaponRelaxTime,
	nm634_fireWeaponRelaxAmount,
	nm635_fireWeaponRelaxDistance,
	nm636_gravityOpposition,
	nm637_constrainRifle,
	nm638_enableRight,
	nm639_enableLeft,
	nm640_disableArmCollision,
	nm641_poseArmWhenNotInUse,
	nm642_timeWarpActive,
	nm643_timeWarpStrengthScale,
	nm644_errorThreshold,
	nm645_rifleConstraintMinDistance,
	nm646_constraintMinDistance,
	nm647_usePistolIK,
	nm648_useSpineTwist,
	nm649_useTurnToTarget,
	nm650_useHeadLook,
	nm651_alwaysSupport,
	nm652_twoHandedPistols,
	nm653_allowShotLooseness,
	nm654_parent,
	nm655_exagHeightThreshold,
	nm656_exagDuration,
	nm657_exagMag,
	nm658_exagTwistMag,
	nm659_exagSmooth2Zero,
	nm660_exagZeroTime,
	nm661_shootDodge,
	nm662_ShootDodge,
	nm663_state,
	nm664_endCollisionReaction,
	nm665_headDamping,
	nm666_headStiffness,
	nm667_trunkDamping,
	nm668_trunkStiffness,
	nm669_legDamping,
	nm670_legStiffness,
	nm671_legStiffnessMin,
	nm672_legTaper,
	nm673_aimingArmStiffness,
	nm674_aimingArmDamping,
	nm675_notAimingArmStiffness,
	nm676_notAimingArmStiffnessMin,
	nm677_notAimingArmDamping,
	nm678_notAimingArmTaper,
	nm679_wristMuscleStiffness,
	nm680_rightArmTarget,
	nm681_leftArmTarget,
	nm682_collisionPoint,
	nm683_collisionNormal,
	nm684_collisionObjectVelocity,
	nm685_collisionTime,
	nm686_collisionTimeThreshold,
	nm687_collisionAccelThreshold,
	nm688_collisionVelThreshold,
	nm689_collisionIndex,
	nm690_useHeadLook,
	nm691_usePointGun,
	nm692_endDesiredImpactOrientation,
	nm693_predictedTimeToEndImpact,
	nm694_legGroundCollisionTime,
	nm695_legGroundCollisionHipLean1,
	nm696_legGroundCollisionKneeAngle,
	nm697_legGroundCollisionKneeStiffness,
	nm698_armAnimTask,
	nm699_leftArmAnimTaskParent,
	nm700_rightArmAnimTaskParent,
	nm701_oriStiff,
	nm702_oriDamp,
	nm703_oriSplit,
	nm704_velSmooth,
	nm705_stickyRootStiff,
	nm706_stickyRootDamp,
	nm707_stickyRootThresh,
	nm708_groundInstance,
	nm709_recoilRelaxAmount,
	nm710_recoilRelaxTime,
	nm711_pointGunUseConstraint,
	nm712_pointGunElbowAttitude,
	nm713_pointGunOriStiff,
	nm714_pointGunOriDamp,
	nm715_pointGunPosStiff,
	nm716_pointGunPosDamp,
	nm717_pointGunClavicleBlend,
	nm718_pointGunConstrainRifle,
	nm719_pointGunErrorThreshold,
	nm720_pointGunRifleConstraintMinDistance,
	nm721_pointGunConstraintMinDistance,
	nm722_pointGunGravityOpposition,
	nm723_bodyWritheArmStiffness,
	nm724_bodyWritheBackStiffness,
	nm725_bodyWritheLegStiffness,
	nm726_bodyWritheArmDamping,
	nm727_bodyWritheBackDamping,
	nm728_bodyWritheLegDamping,
	nm729_bodyWritheArmPeriod,
	nm730_bodyWritheBackPeriod,
	nm731_bodyWritheLegPeriod,
	nm732_bodyWritheMask,
	nm733_bodyWritheArmAmplitude,
	nm734_bodyWritheBackAmplitude,
	nm735_bodyWritheLegAmplitude,
	nm736_bodyWritheElbowAmplitude,
	nm737_bodyWritheKneeAmplitude,
	nm738_bodyWritheRollOverFlag,
	nm739_bodyWritheBlendArms,
	nm740_bodyWritheBlendBack,
	nm741_bodyWritheBlendLegs,
	nm742_bodyWritheApplyStiffness,
	nm743_legNoiseScale,
	nm744_breathingScale,
	nm745_timeWarpActive,
	nm746_reversingDirection,
	nm747_timeWarpStrengthScale,
	nm748_groundVelocity,
	nm749_frictionScale,
	nm750_restitutionScale,
	nm751_spineBlend,
	nm752_tuneWeaponMass,
	nm753_hardKey,
	nm754_hardKeyMask,
	nm755_hardKeyMaxDeviation,
	nm756_reOrientTime,
	nm757_reOrientScale,
	nm758_runtimeLimitsMargin,
	nm759_supportedHeightThreshold,
	nm760_disableRifleCollision,
	nm761_disableArmCollision,
	nm762_braceTime,
	nm763_remote,
	nm764_localFeedback,
	nm765_lastManStanding,
	nm766_target,
	nm767_stiffness,
	nm768_damping,
	nm769_recovery,
	nm770_part,
	nm771_timeWarpActive,
	nm772_timeWarpStrengthScale,
	nm773_scalePitch,
	nm774_dragScale,
	nm775_dragTime,
	nm776_groundIndex,
	nm777_animPose,
	nm778,
	nm779_muscleStiffness,
	nm780_stiffness,
	nm781_damping,
	nm782_effectorMask,
	nm783_overideHeadlook,
	nm784_overidePointArm,
	nm785_overidePointGun,
	nm786_useGravityCompensation,
	nm787_teeter,
	nm788_teeter,
	nm789_edgeLeft,
	nm790_edgeRight,
	nm791_useExclusionZone,
	nm792_balancerCollisionsReaction,
	nm793_numStepsTillSlump,
	nm794_stable2SlumpTime,
	nm795_exclusionZone,
	nm796_footFrictionMultStart,
	nm797_footFrictionMultRate,
	nm798_backFrictionMultStart,
	nm799_backFrictionMultRate,
	nm800_impactLegStiffReduction,
	nm801_slumpMode,
	nm802_slumpLegStiffReduction,
	nm803_slumpLegStiffRate,
	nm804_reactTime,
	nm805_glanceSpinTime,
	nm806_glanceSpinMag,
	nm807_glanceSpinDecayMult,
	nm808_ignoreColWithIndex,
	nm809_ignoreColMassBelow,
	nm810_ignoreColVolumeBelow,
	nm811_fallOverWallDrape,
	nm812_fallOverHighWalls,
	nm813_fallOverMagOfForce,
	nm814_bouyancy,
	nm815_surfacePoint,
	nm816_surfaceNormal,
	nm817_bouyancy,
	nm818_chestBouyancy,
	nm819_damping,
	nm820_righting,
	nm821_rightingStrength,
	nm822_rightingTime,
	nm823_configureLimits,
	nm824_mask,
	nm825_enable,
	nm826_toDesired,
	nm827_restore,
	nm828_toCurAnimation,
	nm829_index,
	nm830_lean1,
	nm831_lean2,
	nm832_twist,
	nm833_margin,
	nm834_nmstring_end
};