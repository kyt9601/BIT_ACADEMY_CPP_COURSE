// OOP (��ü ����)

// ��ü��?

// �Ӽ� (������) �� �ൿ (�޼ҵ�) ���� ��Ÿ�� �� �ִ� ��
// ������ �Ӽ��� �־�� ��
/*// �� �Ӽ��� �����ϱ� ���� �ൿ�� �־�� ��

// 1) �߻�ȭ : ���� ���迡 �����ϴ� ��ü�� �����ϰ� ǥ���ϴ� ���
// ���� ������ ��ü�� ���α׷����� �ʿ��� ��ŭ�� �Ӽ��� �ൿ���� �����ϴ� ���

// ex) �޴���
// �Ӽ� : ��ȭ��ȣ, �Ϸù�ȣ, CPU, ȭ��ũ��, ������, �𵨸�, ī�޶�
// �ൿ : �߽�, ����, �Կ�, ������, ���ڼ۽�

// C ��� ������ ����ü�� �̿��Ͽ� �߻�ȭ
// #include <stdio.h>
// 
// struct Car
// {
// 	int CarSpeed;		// ���� �ӵ�
// 	int CarNo;			// ���� ��ȣ
// 	char CarNmae[20];	// ���� �̸�
// };


#include <iostream>

using namespace std;

// �ڵ����� �Ӽ�
struct Car
{
	int CarSpeed;		// ���� �ӵ�
	int CarNo;			// ���� ��ȣ
	char CarNmae[20];	// ���� �̸�
};

// �ڵ����� ������ ���
void ShowCar(int CarSpeed, int CarNo, char *CarNmae)
{
	cout << CarSpeed << " " << CarNo << " " << CarNmae << endl;
}
void ShowCar(Car MyCar)
// void ShowCar(struct Car MyCar)
{
	cout << MyCar.CarSpeed << " " << MyCar.CarNo << " " << MyCar.CarNmae << endl;
}

void main()
{
	Car YourCar,MyCar = {100, 4885, "�׷���"}; // YourCar, MyCar ��� ����ü�� Car �������� ������� MyCar �� �ʱ�ȭ ���־���
	// struct Car YourCar, MyCar;
	ShowCar(MyCar);
}*/