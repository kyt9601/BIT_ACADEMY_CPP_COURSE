/*// private : ���� ����
// public : ���� (����)

// protected : �ڱ� �ڽ� Ŭ���� + �ڱ� �ڽ� Ŭ����
// ������ ������ ������ ���

#include <iostream>

using namespace std;

class AAA
{
private :
	int a;
protected :
	int b;
public :
	int c;
};
class BBB : public AAA
{
public :
	void show()
	{
		cout << b << endl;
	}
};

void main()
{
	AAA aaa;
	BBB bbb;

//	cout << aaa.a << endl;		private ����� �ܺο��� ��µ� �Ұ��� (���� �Ұ���)
//	cout << aaa.b << endl;		// �Ұ���
	cout << aaa.c << endl;

	cout << bbb.a << endl;
	cout << bbb.b << endl;
	cout << bbb.c << endl;

}*/

// Ŭ������ �ܺο��� ���, ���� ������ ���� public ��