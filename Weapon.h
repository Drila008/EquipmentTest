#pragma once
#include "Equipment.h"

class Weapon : public Equipment
{
public:
	enum class eDamageType { Slash, Stab, Crush};
	int weaponDamage;
	eDamageType damageType;

	//Constructors
	Weapon(string name, eDamageType DamageType, int wpnDmg, float weight)
	{
		itemName = name;
		damageType = DamageType;
		weaponDamage = wpnDmg;
		itemWeight = weight;
		itemType = eItemType::Weapon; //Give the enum a value in constructor
	};
	Weapon();

};