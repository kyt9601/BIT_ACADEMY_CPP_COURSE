/*// ��ӿ��� �������� ȣ��� ��ü �ʱ�ȭ

// protected �� �� �ڽ� ��

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
	//	age �� �ʱ�ȭ�ϱ� ����, �θ��� �����ڸ� ȣ���Ѵ�
	eagles(int age, int wing) : animal(age)	// : age(age)	�Ұ���
	{ this->wing = wing; }

	void fly() {}
};

void main()
{
	eagles egles(3,10);
}*/