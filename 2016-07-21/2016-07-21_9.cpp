/*// 동물 - 포유류, 조류
// 포유류 - 사람, 원숭이
// 조류 - 닭, 오리

// 1) 스타크래프트 테란 종족 유닛
// 2) 동물원 동물들
// 3) 부르마블

#include <siotream>

using namespace std;

class Unit
{
private :
	int hp;
	int x;
	int y;
public :
	Unit(int hp) { this->hp = hp; x = 0; y = 0; }

	int getHp() { return hp; }

	void Move(int x, int y) { this->x = x; this->y = y; }
	void Damaged() { hp--; }
};
class Bio : public Unit
{
private :
	int AttackUp;
	int DefUp;
public :
	Bio() : AttackUp(0), DefUp(0) {}

	void BioAttackUp() { AttackUp++; }
	void BioDefUp() { DefUp+; }
};
class Mec : public Unit
{
private :
	int AttackUp;
	int DefUp;
public :
	Mec() : AttackUp(0), DefUp(0) {}

	void MecAttackUp() { AttackUp++; }
	void MecDefUp() { DefUp+; }
};
};

class AttackUnit : public Unit
{
private :
	int damage;
	int range;
	bool gndattack;
	bool flyattack;
public :
	AttackUnit(int hp = 50, int damage = 5, int range = 1, bool gndattack = true, bool flyattack = false) : Unit(hp) {}

	int getDamage() { return damage; }

	void Attack() { cout << "공격" << endl; }
};
class Marin : public AttackUnit
{
public :
	Marin(int hp = 50, int damage = 5, int range = 1, bool gndattack = true, bool flyattack = false)
	{
		AttackUnit(hp,damage,range,gndattack,flyattack);
	}
};

void main()
{
	Marin marin(50,3,3,true,true);
}*/