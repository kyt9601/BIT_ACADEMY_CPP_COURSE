#include <iostream>

using namespace std;

// 동물
class Animal
{
private :
	int age;
public :
	void Move() {}		// 이동
	void Feeding() {}	// 먹이 활동
};

// 조류
class Bird : public Animal
{
private :
	int wing;
public :
	void Fly() {}
};

// 독수리
class Eagles : public Bird
{
private :
public :
	void Feeding() {}	// 재정의 (오버라이딩)
	void Attack() {}
};

void main()
{

}