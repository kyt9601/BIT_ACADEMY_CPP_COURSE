// ���۷��� (Reference) : ������

// ������ (����) �� �����ϴ� ����
// �����Ϳ� ����� ����
// ������ ���� ������ ó�� ����ϱ� ���� ��� (C++ ���� �߰��� ���)
// Call by Reference

// ������ : Alias (��Ī) ==> ������ �� �ٸ� �̸�
// ������ �� �ٸ� �̸��� �ٿ��ִ� ��

#include <iostream>

using namespace std;

// Call by Value (���� ����)
void foo(int val)
{
	// main ������ val ��
	// foo ������ val �� �ٸ� �����̴�
	val++;
}

// Call by Reference - Pointer (������ ����)
void foo(int *val)
{
	(*val)++;
}
// Call by Reference - Reference (������ ����)
void rfoo(int &ref)
{
	ref++;
}
// �����Ϳ� ���� *�� ������� �ʰ��� ������ ������

void main()
{
	int val = 100;
	int &r = val; // val �� ���� ���۷��� r �� ����
	// �������� �Ǿ��ִ� ������

	cout << val << endl;

	foo(val);
	cout << val << endl;

	foo(&val);
	cout << val << endl;

	foo(&r);
	cout << val << endl;

	cout << r << endl;
	r++;
	cout << val << endl;

	rfoo(val);
	cout << val << endl;
}