// simple example

#include "stdafx.h"
#include "main.h"

#include "script.h"

#define MAX_PAINKILLERS 9

void main()
{
	while (true)
	{
		if (PLAYER::DOES_MAIN_PLAYER_EXIST())
		{
			Player player = PLAYER::GET_PLAYER_ID();
			Ped playerPed = PLAYER::GET_PLAYER_PED(player);

			PLAYER::SET_PLAYER_INVINCIBLE(player, true);

			int num = PLAYER::GET_PAYNEKILLER_AMT();
			if (num < MAX_PAINKILLERS)
			{
				PLAYER::SET_PAYNEKILLER_AMT(MAX_PAINKILLERS);
			}

			if (IsKeyJustUp(VK_F8))
			{
				if (!WEAPON::HAS_PED_GOT_WEAPON(playerPed, WEAPON_SMG_MP5))
					WEAPON::GIVE_WEAPON_TO_PED(playerPed, WEAPON_SMG_MP5, 9999, true);
			}

			if (IsKeyJustUp(VK_F9))
			{
				const int ARR_SIZE = 256;

				Ped peds[ARR_SIZE];
				int count = worldGetAllPeds(peds, ARR_SIZE);

				for (int i = 0; i < count; i++)
				{
					if (peds[i] != playerPed)
					{
						Vector3 coords = PED::GET_PED_COORDS(peds[i]);
						FIRE::ADD_EXPLOSION(coords.x, coords.y, coords.z, EXP_TAG_MOLOTOV, 1.0f, true, false, 1.0f);
					}
				}
			}
		}

		scriptWait(0);
	}
}

void ScriptMain()
{
	srand(GetTickCount());
	main();
}