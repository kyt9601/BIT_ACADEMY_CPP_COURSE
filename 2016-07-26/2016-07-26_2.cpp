/*// ������ �����ε�

// �����ε� : ���� ����
// �Լ� �����ε� : ���� �̸��� �Լ��� ������

// ������ �����ε� : ���� �����ڰ� �������� �ǹ̷� ���Ǵ� ��
// ����Ÿ�� operator ������ (�Ű�����)
// void operator << (int x)

#include <iostream>

using namespace std;

class MyCout	// int �� 1�� �޾� ����ϴ� <<
{
public :
	// ����Ÿ�� operator ������ (�Ű�����)
//	void operator << (int x)
//	{
//		printf("%d",x);
//	}
	MyCout &operator << (int x)
	{
		printf("%d",x);
		return (*this);	// ������ ������ ���� ��ü
	}
	void operator << (double x)
	{
		printf("%g",x);
	}
	void print(int x)
	{
		printf("%d",x);
	}
	void print(double x)
	{
		printf("%g",x);
	}
//	�����ڴ� �ƹ��ų� �Ǵ°� �ƴ�
//	void operator ?? (int x)
//	{
//		printf("%d",x);
//	}
};

//COUT �� ���� ��ü�� ����
MyCout COUT;

void main()
{
	printf("%d\n",10 << 2);	//	1010 -> 101000
	printf("%d\n",10 >> 2);	//	1010 -> 10

	// ������ �����ε� : ������ �Լ�
	cout << "ABC" << endl;
	cout.operator << ("ABC") << endl;

	COUT.print(10);
	COUT.operator << (10);	//	�Ϲ����� �Լ��� ȣ��
	COUT << 10;				//	������ ��ü�� ȣ��

	COUT.print(5.5);
	COUT.operator << (5.5);
	COUT << 5.5;

	cout << 10 << 20 << endl;
	COUT << 10 << 20;

//	COUT ?? 5;
}*/