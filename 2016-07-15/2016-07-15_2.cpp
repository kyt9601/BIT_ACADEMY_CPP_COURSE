/*// ��ӹ��� �¼� Ŭ����

#include <iostream>

using namespace std;

class Seat
{
private :
	int SeatNo;		// �¼� ��ȣ
	int pay;		// ���
	bool bReserve;	// ���� ����,�Ұ���

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
	
	// �����ε��� �����ϴٺ���, �ߺ��� �ڵ��� �ݺ��� ������

	// ����Ʈ �Ķ���͸� ����Ѵ�
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

	// ����Ʈ �Ķ���Ͱ� ���� C#, Java ������
	// �����ڿ��� �����ڸ� ȣ��
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