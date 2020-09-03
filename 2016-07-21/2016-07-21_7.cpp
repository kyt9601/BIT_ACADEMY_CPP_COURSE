/*// 상속에서 생성자의 호출과 객체 초기화

// protected 나 와 자식 만

#include <iostream>

using namespace std;

class animal
{
private :
	int age;
public :
	animal() { age = 1; cout << age << endl; }
	animal(int age) { this->age = age; cout << this->age << endl; }

	void move() {}
};

class eagles : public animal
{
private :
	int wing;
public :
	//	age 를 초기화하기 위해, 부모의 생성자를 호출한다
	eagles(int age, int wing) : animal(age)	// : age(age)	불가능
	{ this->wing = wing; }

	void fly() {}
};

void main()
{
	eagles egles(3,10);
}*/