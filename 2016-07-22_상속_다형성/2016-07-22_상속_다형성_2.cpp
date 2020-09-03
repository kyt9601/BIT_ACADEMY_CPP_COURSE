/*// 함수의 오버라이딩 (함수 재정의)

// => 부모 클래스로부터 물려받은 행동을
//    자식에서 새롭게 구현하는 것

// 반환 타입, 이름, 매개 변수
// 가 모두 똑같은 함수를 자식 클래스에서 1개 더 만든다
// 전역변수, 지역변수 의 우선순위와 비슷하다

// 오버로딩 : 같은 이름의 함수가 여러개 존재하는 것
// 오버라이딩 : 같은 함수를 자식 클래스에서 재정의하는 것

#include <iostream>

using namespace std;

// 동물
class Animal
{
private :
	int age;
public :
	void feed() { cout << "먹다" << endl; }
};

class TIGER : public Animal
{
private :
public :
	int age;

	TIGER(int age) : age(age) {}

	// feed 함수를 새롭게 재정의
	void feed() { cout << "고기를 먹다" << endl; }
};
class Horse : public Animal
{
public :
	void feed() {cout << "당근을 먹다" << endl;}
};

// 유닛
class UNIT
{
public :
	void Attack() { cout << "공격" << endl; }
};

class Marin : public UNIT
{
public :
	void Attack() { cout << "탕탕탕탕탕" << endl; }
};
class Firebat : public UNIT
{
public :
	void Attack() { cout << "활활활활활" << endl; }
};

void main()
{
	TIGER tiger(5);

	tiger.feed();
	cout << tiger.age << endl;	// 멤버 변수도 오버라이딩이 가능하다

	Horse horse;

	horse.feed();
}*/