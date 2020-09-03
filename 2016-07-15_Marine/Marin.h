#include <iostream>

using namespace std;

#ifndef __MARIN_H_
#define __MARIN_H_

class Marin
{
private :
	// 멤버 변수
	int max_hp;		// 총 체력
	int hp;			// 현재 체력
	int range;		// 사거리
	int x;			// x좌표
	int y;			// y좌표

public :
	// getter, setter
	void Move(int x, int y);
	void Attack();
	void Patroll();
};

#endif