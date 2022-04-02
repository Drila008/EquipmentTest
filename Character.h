#pragma once
#include <iostream>
#include <memory>
#include <string>

using namespace std;

class Character
{
public:
	int health;
	int strength;
	int mapPosX, mapPosY;
	string name;
	char mapSymbol;
	int armorClass;

	Character() {};

	void TakeDamage(int dmg);
	virtual void Die();
};