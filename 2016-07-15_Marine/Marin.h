#include <iostream>

using namespace std;

#ifndef __MARIN_H_
#define __MARIN_H_

class Marin
{
private :
	// ��� ����
	int max_hp;		// �� ü��
	int hp;			// ���� ü��
	int range;		// ��Ÿ�
	int x;			// x��ǥ
	int y;			// y��ǥ

public :
	// getter, setter
	void Move(int x, int y);
	void Attack();
	void Patroll();
};

#endif