#include <iostream>

using namespace std;

// ����
class Animal
{
private :
	int age;
public :
	void Move() {}		// �̵�
	void Feeding() {}	// ���� Ȱ��
};

// ����
class Bird : public Animal
{
private :
	int wing;
public :
	void Fly() {}
};

// ������
class Eagles : public Bird
{
private :
public :
	void Feeding() {}	// ������ (�������̵�)
	void Attack() {}
};

void main()
{

}