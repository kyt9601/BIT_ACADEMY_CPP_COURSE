// ��� ������ �����
// ���� Ŭ���� �̸��̶� �Ȱ��� ����

// ��� ������ �ߺ��� ����
// #ifndef __CAR_H_
// #define __CAR_H_
// :
// :
// #endif

#include <iostream>

using namespace std;

// Car.h
#ifndef __CAR_H_
#define __CAR_H_

class Car
{
	private :
		int km;			// ���� �Ÿ�
		int speed;		// ���� �ӵ�
		int maxfuel;	// �ִ� ���ᷮ
		int fuel;		// ���� �ܷ�

	public :
		int getKm()			{ return km; }		// ���� �Ÿ� Ȯ��
		int getSpeed()		{ return speed; }	// ���� �ӵ� Ȯ��
		int getMaxfuel()	{ return maxfuel; }	// �ִ� ���� Ȯ��
		int getFuel()		{ return fuel; }	// ���� �ܷ� Ȯ��
		void createCar(int Km, int Speed, int Maxfuel, int Fuel); // ���� ����
		void Accel(); // ��������Ʈ
		void Break(); // ����
		void insertFuel(int Fuel); // ����
};

#endif