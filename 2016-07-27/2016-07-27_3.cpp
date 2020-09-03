/*// �Ϲ�ȭ ���α׷���

// C ������ �Ϲ�ȭ ���α׷���
// - void * : malloc �Լ�
// - int ���� �Ҵ� => (int*)malloc(sizeof(int)*10);
// - char ���� �Ҵ� => (char*)malloc(sizeof(char)*10);

// ���ø� (Template)
// - C++ ������ �Ϲ�ȭ ���α׷���
// - ���� �ڵ尡 �Ǵ°��� �ƴ϶�, �ڵ��� Ʋ�� ������ش�

// 1) �Լ� ���ø�
// 2) Ŭ���� ���ø�

// ex) ���� ����

// C ������
int		plus1(int x, int y)			{ return x + y; }
double	plus2(double x, double y)	{ return x + y; }
double	plus3(int x, double y)		{ return x + y; }
double	plus4(double x, int y)		{ return x + y; }

// C++ ������

// template <typename �̸�>			�̸��� �� Ÿ��
// class �� typename �̵� �������
// template �ϳ��� �Լ� 1��

// template <typename T>
// T plus(T x, T y)
// {
//		return x + y;
// }
// Ÿ�� plus(T x, T y)
// {
//		return x + y;
// }
// template <class cT>
// cT plus(cT x, cT y)
// {
// 		return x + y;
// }
// Ÿ�� plus(cT x, cT y)
// {
//		return x + y;
// }

#include <iostream>
using namespace std;

template <typename TYPE>
void Swap(TYPE *x, TYPE *y)
{
	TYPE temp = *x;
	*x = *y;
	*y = temp;
}
//	void Swap(int *x, int *y)
//	{
//		int temp = *x;
//		*x = *y;
//		*y = temp;
//	}

void main()
{
	int x = 10, y = 20;
	cout << "x : " << x << endl << "y : " << y << endl;

	Swap <int> (&x,&y);
	cout << "x : " << x << endl << "y : " << y << endl;
}*/