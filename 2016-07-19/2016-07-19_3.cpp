/*// const

// C 에서의 const : 상수화 - 변수의 값을 변경할 수 없도록 고정

#include <iostream>

using namespace std;

void main()
{
	const int MAX = 100;
//	MAX = 10;
// 값의 변경이 불가능하다

	int No = 10;
	const int *p = &No;

//	*p = 200;	   불가능
	p = p + 1;	  // 가능
	cout << *p << endl;
}*/