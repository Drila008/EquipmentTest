#include "Player.h"




Player::Player(string Name, int str, int AC)
{
	name = Name;
	strength = str;
	armorClass = AC;
}

float Player::CalculateWeight()
{
	float totalWeight = 0;
	for (auto& items : inventoryItems)
	{
		totalWeight += items->weight;
	}

	for (auto& items : equippedItems)
	{
		totalWeight += items->weight;
	}

	return totalWeight;
}


