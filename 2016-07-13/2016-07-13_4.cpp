/*// C++ ������ ��ü

// Ŭ����
// struct �� ��ü�ϴ�, ��ü�� �����ϴ� ���

// ���� �������� ����
// struct �� ������ ���� ==> public	(�ۿ����� �� �� �ִ�)
//			class		==>	private		(Ŭ���� �ȿ����� �� �� �ִ�)
// ĸ��ȭ

#include <iostream>

using namespace std;

class Car
{
	// �Ӽ�
	int speed;	// ���� �ӵ�
	int fuel;	// ���� ����
	int km;		// ���� �Ÿ�

	// �ൿ
	void Acc() // �ڵ����� ��������Ʈ ���
	{
		speed++;
		fuel--;
		km++;
	}

	// ���� ���� ���
	void Show()
	{
		cout << "���� ���� : " << speed << " " << fuel << " " << km << endl;
	}
};

void main()
{
	Car car;
	car.Acc();
}*/