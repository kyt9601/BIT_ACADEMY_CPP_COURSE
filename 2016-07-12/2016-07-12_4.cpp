/*// �Լ� �����ε� (�Լ� ���� ����)
// ���� �̸��� �Լ��� ������ ������ �� �ִ� (C ������ �Ұ���)

// Ÿ���� �޶� ������ ���� ���

// ��, �̸��� ���Ƶ�
// �Ű������� ����, �Ű������� Ÿ���� �޶�� �Ѵ�

#include <iostream>

using namespace std;

int plus(int x, int y)
{
	return x + y;
}
double plus (float x, float y)
{
	return x + y;
}
double plus (int x, float y)
{
	return x + y;
}
double plus (float x, int y)
{
	return x + y;
}

void main()
{
	cout << plus(int(3.14),int(3.14)) << endl;
	cout << plus((float)3.14,(int)3.14) << endl;
	cout << plus(int(3.14),(float)3.14) << endl;
	cout << plus((float)3.14,float(3.14)) << endl;
}*/