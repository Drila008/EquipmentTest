#include "Enemy.h"

Enemy::Enemy(string Name, int MapPosX, int MapPosY, int Strength, int Health, int Armor)
{
	name = Name;
	mapPosX = MapPosX;
	mapPosY = MapPosY;
	mapSymbol = name[0];
	strength = Strength;
	health = Health;
	armorClass = Armor;
}

