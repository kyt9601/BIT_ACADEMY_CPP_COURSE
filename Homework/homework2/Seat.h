#ifndef __SEAT_H_
#define __SEAT_H_

#include <iostream>
using namespace std;

class Seat
{
private :
	int seatno;
	int age;
	int pay;
	bool seat_bool;
public :
	Seat(int no, int Age) : pay(1000), seat_bool(false)
	{
		seatno = no;
		age = Age;
	}

	int getSeatno() { return seatno; }
	int getAge(){ return age; }
	int getPay() { return pay; }
	int getSeat_bool() { return seat_bool; }
	void setPay();
	void setSeat_bool();
};

#endif __SEAT_H_