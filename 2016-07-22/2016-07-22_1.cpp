/*// ��� :  �θ� Ŭ������ ���� ������ �����޾Ƽ�
// ���� Ŭ������ ����� ���

// ���� ��� : �������� �θ�� ���� ����� �޴� ����
// �θ� Ŭ������ ��� ������ ��������, ��ȣ���� �߻��� �� �ִ�
// - ��� �Լ��� 1���� �����ؼ� ���⶧����, ������ ����

// ���� ��� : ��ġ�� �θ� Ŭ������ 1���� ��ӹ޴´�
// class horse : virtual public animal
// class bird : virtual public animal

#include <iostream>

using namespace std;

class Car 
{
private: 
	int CarNo;	// ��ȣ 
	int Km;		// ����Ÿ� 
public : 
	 Car(int CarNo = 0, int Km = 0) { this->CarNo = CarNo; this->Km = Km; } 

	 void Accel() { cout << "���" << endl; }
	 void Break() { cout << "����" << endl; }
};

//  is-a =>  ������ �ڵ����̴�  
class Bus : public Car 
{
private:
	int LineNo;		// �뼱 ��ȣ 
public : 
	Bus(int CarNo = 0, int Km  = 0, int LineNo = 0) : Car(CarNo,Km) { this->LineNo = LineNo; }

	void PushBell() {} 
};

// ���� ���

class animal	// ����
{
public :
	int age;
public :
	void Move();
};
	// ���� ��� => virtual public animal
class horse : virtual public animal
{
private :
public :
	void run() {}
};
	// ���� ��� => virtual public animal
class bird : virtual public animal
{
private :
public :
	void fly() {}
};

class UNICON : public horse, public bird
{

};

void main()
{
	UNICON u;
	u.age = 1;
}*/