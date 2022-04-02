#pragma once
#include "Character.h"
#include "Equipment.h"
#include <list>

class Player : public Character
{
	list<unique_ptr<Equipment>> items;

	void CalculateStats();
};