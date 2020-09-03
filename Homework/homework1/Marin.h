#ifndef __MARIN_H_
#define __MARIN_H_

#include <iostream>
using namespace std;

class Marin
{
private :
	int hp;				// 체력
	int damage;			// 데미지
	int damage_count;	// 데미지 업그레이드 횟수
	int range;			// 사거리
	int range_up;		// 사거리 업그레이드
	int x;				// x 좌표
	int y;				// y 좌표
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