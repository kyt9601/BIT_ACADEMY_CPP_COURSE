// static 멤버 함수

// 객체 없이 호출 가능한 메소드
// 객체가 아닌, 클래스의 행동
// this 가 넘어가지 않는다

#include <iostream>

using namespace std;

class Calc
{
// private 은 함수도 외부에서 사용이 불가능
public :
static	int plus(int x, int y) { return x + y; }
static	int minus(int x, int y) { return x - y; }
};

class Marin
{
private :
		int hp;			// 체력
static	int AttUp;		// 공업
static	int DefUp;		// 방업
public :
		void Attack() { cout << "탕탕탕탕탕" << endl; }
//		void AttUpgrade() { AttUp++; }
//		void DefUpgrade() { DefUp++; }
static 	void AttUpgrade() { AttUp++; }
static	void DefUpgrade() { DefUp++; }

};
// 중요!!
int Marin::AttUp = 0;
int Marin::DefUp = 0;

void main()
{
	Calc calc;
//	cout << calc.plus(5,15) << endl;
	cout << Calc::plus(5,15) << endl;

	Marin m;
	m.Attack();

//	m.AttUpgrade();				마린 1기의 업그레이드가 아닌
	Marin::AttUpgrade();	//	마린 클래스의 업그레이드
	Marin::DefUpgrade();
//	static 멤버 함수는 this 가 넘어가지 않는다

//	그러므로, 일반 멤버 변수는 접근이 불가능하고
//	static 멤버 변수만 사용이 가능하다

	m.Attack();
}