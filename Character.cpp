#include "Character.h"

void Character::TakeDamage(int dmg)
{
	health -= dmg;
	if (health <= 0)
		Die();
}