#include "Marin.h"

void Marin::upDamage()
{
	if (damage_count < 3)
		damage++;
	damage_count++;
}
void Marin::upRange()
{
	if (range_up == 0)
		range += 2;
	range_up = 2;
}
void Marin::Damaged(int damaged)
{
	hp -= damaged;
}
void Marin::Move(int x, int y)
{
	this->x = x;
	this->y = y;
}
void Marin::Medic()
{
	if (hp < 40)
		hp++;
}