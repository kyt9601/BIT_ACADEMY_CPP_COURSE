/*// 고속버스 좌석 클래스

#include <iostream>

using namespace std;

class Seat
{
private :
	int SeatNo;		// 좌석 번호
	int pay;		// 요금
	bool bReserve;	// 예약 가능,불가능

public :
	/*
	Seat()
	{
		SeatNo = 0;
		pay = 1000;
		bReserve = false;
	}
	Seat(int seatno)
	{
		SeatNo = seatno;
		pay = 1000;
		bReserve = false;
	}
	Seat(int seatno, int pay)
	{
		SeatNo = seatno;
		this->pay = pay;
		bReserve = false;
	}
	Seat(int seatno, int pay, bool reserve)
	{
		SeatNo = seatno;
		this->pay = pay;
		bReserve = reserve;
	}
	
	// 오버로딩을 과용하다보면, 중복된 코드의 반복이 많아짐

	// 디폴트 파라미터를 사용한다
	Seat(int seatno = 0, int pay = 1000, bool reserve = false)
	{
		SeatNo = seatno;
		this->pay = pay;
		bReserve = reserve;
	}

	int getSeatNo()	{ return SeatNo; }
	int getPay()	{ return pay; }
	bool getReserver()	{ return bReserve; }
	void setReserve(bool Reserve)	{ bReserve = Reserve; }

	void Reservation() {}
	void UnReservation() {}

	// 디폴트 파라미터가 없는 C#, Java 에서는
	// 생성자에서 생성자를 호출
	/*
	Seat()
	{
		Seat(0, 1000, false);
	}
	Seat(int seatno)
	{
		Seat(seatno, 1000, false);
//		this(seatno, 1000, false); - Java
	}
	Seat(int seatno, int pay)
	{
		Seat(seatno, pay, false);
	}
	Seat(int seatno, int pay, bool reserve)
	{
		SeatNo = seatno;
		this->pay = pay;
		bReserve = reserve;
	}
	
};

void main()
{
	Seat seat();
}*/