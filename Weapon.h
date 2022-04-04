#pragma once
#include "Equipment.h"

class Weapon : public Equipment
{
public:
	int weaponDamage;

	//Constructors
	Weapon(string name, int wpnDmg, float Weight)
	{
		itemName = name;
		weaponDamage = wpnDmg;
		weight = Weight;
	};
	Weapon();

};