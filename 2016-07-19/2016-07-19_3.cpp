/*// const

// C ������ const : ���ȭ - ������ ���� ������ �� ������ ����

#include <iostream>

using namespace std;

void main()
{
	const int MAX = 100;
//	MAX = 10;
// ���� ������ �Ұ����ϴ�

	int No = 10;
	const int *p = &No;

//	*p = 200;	   �Ұ���
	p = p + 1;	  // ����
	cout << *p << endl;
}*/