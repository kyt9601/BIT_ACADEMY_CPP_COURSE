// C++ 의 새로운 연산자

// new ==> malloc, realloc, calloc
// delete ==> free

#include <iostream>
// #include <malloc.h>
// #include <stdio.h>

using namespace std;

void main()
{
	// 정수형 10개를 저장할 수 있는 메모리 공간을 할당해라

	int *p = new int[10];
	// int *p = (int*)malloc(sizeof(int)*10);
	// malloc 은 void 포인터가 기본값. 어떤 형식이든 담을 수 있다.

	cout << _msize(p) << endl; // _msize(p) 는 p 에 할당된 동적 메모리의 크기 ==> sizeof(p)
	// printf("%d\n",sizeof(p));

	delete []p; // 배열이니까 []p, 아닐땐 p
	// 배열p
	// free(p);
}