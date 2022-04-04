#pragma once
#include "Equipment.h"

class Armor : public Equipment
{
public:
	int armorClass;

	//Constructors
	Armor(string name, int ArmorClass, float Weight)
	{
		itemName = name;
		armorClass = ArmorClass;
		itemType = eItemType::Armor; //Give the enum a value in constructor
		weight = Weight;
	};
	Armor();

};