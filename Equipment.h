#pragma once
#include <string>
#include <iostream>

using namespace std;

class Equipment
{
public:

	enum class eItemType {Weapon, Armor, Consumable};
	eItemType itemType;
	string itemName;
	int itemID;
	float itemWeight;

	//Constructors
	Equipment(eItemType type, string name, int weight, int id)
	{
		itemType = type;
		itemName = name;
		itemWeight = itemWeight;
		itemID = id;
	};
	Equipment() {};

	//Destructor
	~Equipment()
	{
		cout << itemName << " destroyed";
	};


};