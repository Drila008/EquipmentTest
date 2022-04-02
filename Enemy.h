#pragma once
#include "Character.h"

class Enemy : public Character
{
public:

	void onDeath();

	Enemy(string Name, int MapPosX, int MapPosY, int Strength, int Health, int Armor);
	~Enemy();
};