/*// static (����)

// C ����
// - ���� ������ ������ ��
// - �Լ��� ���� ������ �Ҹ����� ���� ��

#include <iostream>

using namespace std;

// �Լ��� ȣ��� Ƚ���� ȭ�鿡 ���
void IncreateCount()
{
	int count = 1;
	static int cnt = 1;
	// ���� ���� => stack
	// static ������ ���� : �������� => �������� - ����ؼ� �޸𸮿� �����ϴ� ����

	cout << "count : " << count++ << endl;
	cout << "static cnt : " << cnt++ << endl;
}

void main()
{
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
}*/