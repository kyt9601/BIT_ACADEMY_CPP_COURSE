/*// �Լ��� �������̵� (�Լ� ������)

// => �θ� Ŭ�����κ��� �������� �ൿ��
//    �ڽĿ��� ���Ӱ� �����ϴ� ��

// ��ȯ Ÿ��, �̸�, �Ű� ����
// �� ��� �Ȱ��� �Լ��� �ڽ� Ŭ�������� 1�� �� �����
// ��������, �������� �� �켱������ ����ϴ�

// �����ε� : ���� �̸��� �Լ��� ������ �����ϴ� ��
// �������̵� : ���� �Լ��� �ڽ� Ŭ�������� �������ϴ� ��

#include <iostream>

using namespace std;

// ����
class Animal
{
private :
	int age;
public :
	void feed() { cout << "�Դ�" << endl; }
};

class TIGER : public Animal
{
private :
public :
	int age;

	TIGER(int age) : age(age) {}

	// feed �Լ��� ���Ӱ� ������
	void feed() { cout << "��⸦ �Դ�" << endl; }
};
class Horse : public Animal
{
public :
	void feed() {cout << "����� �Դ�" << endl;}
};

// ����
class UNIT
{
public :
	void Attack() { cout << "����" << endl; }
};

class Marin : public UNIT
{
public :
	void Attack() { cout << "����������" << endl; }
};
class Firebat : public UNIT
{
public :
	void Attack() { cout << "ȰȰȰȰȰ" << endl; }
};

void main()
{
	TIGER tiger(5);

	tiger.feed();
	cout << tiger.age << endl;	// ��� ������ �������̵��� �����ϴ�

	Horse horse;

	horse.feed();
}*/