/*// ��ü �迭

// ����ü, Ŭ���� : ���ӵ� �޸� ������ �������� ����

// �迭 : ���ӵ� �޸� ������ '���� Ÿ��' �� �������� ����
// 1) �ε����� ���� ������ �����ϴ�
// 2) �ѹ� ũ�Ⱑ �������� ���� �ٲ� �� ����
//	  ==> �ذ�å : �����迭(malloc, new), ���� ����Ʈ
// 3) �迭�� ������ ==> �迭�� �̸��� �迭�� ���� �ּҰ��̴�

//	ex) int pArray[5];
//	[ ][ ][ ][ ][ ]
//
// ex) char Array[5];

#include <iostream>

using namespace std;

#define SIZE 100

void main()
{
	int size = 10;
	int buf[SIZE];
//	int buf[size];	// �迭�� ũ��� ������� �����ϴ� (C, C++ ��)

	int p[5] = {0};
	printf("p �� �ּ� = %p\n",p);
	printf("p+1 �� �ּ� = %p\n",p+1);	// ������ ����
	printf("p+100 �� �ּ� = %p\n",p+100);	// ������ ����

	int pt[3][4] = {{1,2,3,4,},
					{5,6,7,8,},
					{9,10,11,12}};
	// 8�� ����ϴ� ���
	// 1) ���ؽ��� �̿��ϴ� ���
	printf("%d\n",pt[1][3]);
	// 2) �����͸� �̿��ϴ� ���
	printf("%d\n",*(*(pt+1)+3));
	// 3) ȥ��
	printf("%d\n",*(pt[1]+3));
	printf("%d\n",(*(pt+1))[3]);
}*/