#pragma once
#include "Character.h"
#include "Equipment.h"
#include <list>

class Player : public Character
{
public:
	list<unique_ptr<Equipment>> equippedItems;
	list<unique_ptr<Equipment>> inventoryItems;

	Player(string Name, int str, int AC);
	float CalculateWeight();

private:
	void Equip(Equipment itemToEquip);
	void PrintEquipment();
	Equipment AddItemToInventory();
};