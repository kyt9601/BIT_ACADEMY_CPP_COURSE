// C++ �� ���ο� ������

// new ==> malloc, realloc, calloc
// delete ==> free

#include <iostream>
// #include <malloc.h>
// #include <stdio.h>

using namespace std;

void main()
{
	// ������ 10���� ������ �� �ִ� �޸� ������ �Ҵ��ض�

	int *p = new int[10];
	// int *p = (int*)malloc(sizeof(int)*10);
	// malloc �� void �����Ͱ� �⺻��. � �����̵� ���� �� �ִ�.

	cout << _msize(p) << endl; // _msize(p) �� p �� �Ҵ�� ���� �޸��� ũ�� ==> sizeof(p)
	// printf("%d\n",sizeof(p));

	delete []p; // �迭�̴ϱ� []p, �ƴҶ� p
	// �迭p
	// free(p);
}