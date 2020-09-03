/*// 상속 :  부모 클래스의 구현 내용을 물려받아서
// 새로 클래스를 만드는 기법

// 다중 상속 : 여러개의 부모로 부터 상속을 받는 행위
// 부모 클래스의 멤버 변수가 겹쳐져서, 모호성이 발생할 수 있다
// - 멤버 함수는 1개로 공유해서 쓰기때문에, 문제가 없다

// 가상 상속 : 겹치는 부모 클래스는 1개만 상속받는다
// class horse : virtual public animal
// class bird : virtual public animal

#include <iostream>

using namespace std;

class Car 
{
private: 
	int CarNo;	// 번호 
	int Km;		// 주행거리 
public : 
	 Car(int CarNo = 0, int Km = 0) { this->CarNo = CarNo; this->Km = Km; } 

	 void Accel() { cout << "출발" << endl; }
	 void Break() { cout << "정지" << endl; }
};

//  is-a =>  버스는 자동차이다  
class Bus : public Car 
{
private:
	int LineNo;		// 노선 번호 
public : 
	Bus(int CarNo = 0, int Km  = 0, int LineNo = 0) : Car(CarNo,Km) { this->LineNo = LineNo; }

	void PushBell() {} 
};

// 다중 상속

class animal	// 동물
{
public :
	int age;
public :
	void Move();
};
	// 가상 상속 => virtual public animal
class horse : virtual public animal
{
private :
public :
	void run() {}
};
	// 가상 상속 => virtual public animal
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