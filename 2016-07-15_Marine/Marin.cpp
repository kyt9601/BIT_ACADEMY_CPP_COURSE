#include "Marin.h"

void Marin::Move(int x, int y)
{
	this->x = y; // 멤버 변수 = 파라미터
	this->y = y; // 멤버 변수 = 파라미터
}

void Marin::Attack()
{
	cout << "공격" << endl;
}

void Marin::Patroll()
{
	cout << "정찰" << endl;
}