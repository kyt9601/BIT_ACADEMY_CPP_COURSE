// 레퍼런스 (Reference) : 참조자

// 데이터 (변수) 를 참조하는 문법
// 포인터와 비슷한 성격
// 포인터 없이 포인터 처럼 사용하기 위한 기능 (C++ 에서 추가된 기능)
// Call by Reference

// 참조자 : Alias (별칭) ==> 변수의 또 다른 이름
// 변수에 또 다른 이름을 붙여주는 것

#include <iostream>

using namespace std;

// Call by Value (값을 전달)
void foo(int val)
{
	// main 에서의 val 과
	// foo 에서의 val 은 다른 변수이다
	val++;
}

// Call by Reference - Pointer (참조를 전달)
void foo(int *val)
{
	(*val)++;
}
// Call by Reference - Reference (참조를 전달)
void rfoo(int &ref)
{
	ref++;
}
// 포인터와 같이 *을 사용하지 않고서도 참조가 가능함

void main()
{
	int val = 100;
	int &r = val; // val 에 대한 레퍼런스 r 을 선언
	// 역참조가 되어있는 포인터

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