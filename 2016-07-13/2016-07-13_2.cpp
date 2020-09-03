// ��ü = �Ӽ� + �ൿ
// C �� �Լ� �߽��� ���
// ����ü�� ��� : ������ ����, �̵�, ���� ����

// C ���ó�� C++ �ۼ��ϱ�
/*
#include <iostream>

using namespace std;

// �ڵ���
struct Car
{
	int speed;	// ���� �ӵ�
	int fuel;	// ���� ����
	int km;		// ���� �Ÿ�
};

// ��������Ʈ
void Acc(Car &car) // Call by Reference
{
	car.speed++;
	car.km++;
	car.fuel--;
}
// void Acc(Car car) // Call by Value
// {
//		car.speed++;
//		car.km++;
//		car.fuel--;
// }

// ���� ���� ���
void Show(Car car)
{
	cout << "�������� : " << car.speed << " " << car.km << " " << car.fuel << endl;
}

// �ڵ��� ���� ����
void main()
{
	// �÷��̾��� �ڵ���
	Car car = {0, 0, 100};

	// ���
	Acc(car); // car ����ü (�Ǵ� �ּҰ�) �� ����
	Show(car);
}
*/

// C++ ��� �ۼ��ϱ�
#include <iostream>

using namespace std;

// �ڵ���
struct Car
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

// �ڵ��� ���� ����
void main()
{
	// �÷��̾��� �ڵ���
	Car car = {0, 100, 0};

	car.Show();
	car.Acc();
	car.Show();
}

// �Լ��߽� ���� ��ü�߽� ���� �ٲ����