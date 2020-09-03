// inline 처리를 피하기 위함

#include "Car.h"

void Car::createCar(int Km = 0, int Speed = 0, int Maxfuel = 50, int Fuel = 20)
{
	km = Km;
	speed = Speed;
	maxfuel = Maxfuel;
	fuel = Fuel;
}

void Car::Accel()
{
	speed++;
	km++;

	if (0 <= fuel)
		fuel--;
	else
		Break();
}
void Car::Break()
{
	speed--;
}
void Car::insertFuel(int Fuel)
{
	if (maxfuel <= fuel+Fuel)
		fuel = maxfuel; // 최대량 주유
	else
		fuel += Fuel;
}