/*// �Լ� ��ü (Functor)

// () �����ڸ� �����ε��ؼ�, ��ü�� �Լ�ó�� ����ϴ� ���
// ��ü���� �Լ�ó�� ()�� �Ű� ������ �����ؼ� ���

#include <iostream>

using namespace std;

class PRINTF
{
public :
	// () ������ �����ε�
	int operator () (int x) { return printf("%d\n",x); }
	int operator () (float x) { return printf("%g\n",x); }
	int operator () (double x) { return printf("%f\n",x); }
	int operator () (char x) { return printf("%c\n",x); }

	int operator () (int x, int y) { return printf("%d %d\n",x,y); }
};

void main()
{
	PRINTF Printf;

	Printf(10);
	Printf(3.14);
	Printf(3.141592);
	Printf('A');

	Printf(11,22);
}*/