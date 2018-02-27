#pragma once

#include <Windows.h>

typedef int Entity;
typedef int Ped;
typedef int Vehicle;
typedef int Cam;
typedef int Group;
typedef int Pickup;
typedef int Object;
typedef int Weapon;
typedef int Blip;
typedef int Camera;
typedef int ScrHandle;
typedef int FireId;
typedef int Rope;
typedef int Interior;
typedef unsigned int Player;
typedef unsigned long Hash;
typedef unsigned long Void;
typedef unsigned long Any;

struct Request_s
{
	int index;
	int unk;
};

typedef struct Vector3
{
	float x, y, z;
} Vector3;