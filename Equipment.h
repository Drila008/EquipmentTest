#pragma once
#include <string>
#include <iostream>
#include <vector>

using namespace std;

class Equipment
{
public:

	enum class eItemType {Weapon, Armor};
	eItemType itemType;
	string itemName;
	float weight;

	//Constructors

	Equipment() {};

	//Destructor
	~Equipment()
	{
		cout << itemName << " destroyed";
	};

};