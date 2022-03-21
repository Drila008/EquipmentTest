#pragma once
#include "Equipment.h"

class Armor : public Equipment
{
public:
	int armorClass;

	//Constructors
	Armor(string name, int ArmorClass, float weight)
	{
		itemName = name;
		armorClass = ArmorClass;
		itemWeight = weight;
		itemType = eItemType::Armor; //Give the enum a value in constructor
	};
	Armor();

};