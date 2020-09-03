/*// 함수 객체 (Functor)

// () 연산자를 오버로딩해서, 객체를 함수처럼 사용하는 방법
// 객체지만 함수처럼 ()로 매개 변수를 전달해서 사용

#include <iostream>

using namespace std;

class PRINTF
{
public :
	// () 연산자 오버로딩
	int operator () (int x) { return printf("%d\n",x); }
	int operator () (float x) { return printf("%g\n",x); }
	int operator () (double x) { return printf("%f\n",x); }
	int operator () (char x) { return printf("%c\n",x); }

	int operator () (int x, int y) { return printf("%d %d\n",x,y); }
};

void main()
{
	PRINTF Printf;

	Printf(10);
	Printf(3.14);
	Printf(3.141592);
	Printf('A');

	Printf(11,22);
}*/