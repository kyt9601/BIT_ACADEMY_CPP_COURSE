// 헤더 파일은 선언부
// 보통 클래스 이름이랑 똑같이 만듬

// 헤더 파일의 중복을 제거
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
		int km;			// 주행 거리
		int speed;		// 주행 속도
		int maxfuel;	// 최대 연료량
		int fuel;		// 연료 잔량

	public :
		int getKm()			{ return km; }		// 주행 거리 확인
		int getSpeed()		{ return speed; }	// 현재 속도 확인
		int getMaxfuel()	{ return maxfuel; }	// 최대 연료 확인
		int getFuel()		{ return fuel; }	// 연료 잔량 확인
		void createCar(int Km, int Speed, int Maxfuel, int Fuel); // 차량 생성
		void Accel(); // 엑셀레이트
		void Break(); // 정지
		void insertFuel(int Fuel); // 주유
};

#endif