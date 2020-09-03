#ifndef __MARIN_H_
#define __MARIN_H_

#include <iostream>
using namespace std;

class Marin
{
private :
	int hp;				// ü��
	int damage;			// ������
	int damage_count;	// ������ ���׷��̵� Ƚ��
	int range;			// ��Ÿ�
	int range_up;		// ��Ÿ� ���׷��̵�
	int x;				// x ��ǥ
	int y;				// y ��ǥ
public :
	Marin() : damage(4), range(3), hp(40), x(50), y(50)
	{
		damage += damage_count;
	}

	int getHp() { return hp; }
	int getDamage() { return damage; }
	int getRange() { return range; }

	void upDamage();
	void upRange();
	void Damaged(int damaged);
	void Move(int x, int y);
	void Medic();

	~Marin()
	{
	}
};

#endif