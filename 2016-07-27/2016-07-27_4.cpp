/*// ex) 덧셈
// 정수 + 정수, 실수 + 실수, 정수 + 실수, 실수 + 정수

#include <iostream>

using namespace std;

template <typename T1, typename T2>
T2 plus1(T1 x, T2 y) { return x + y; }

template <typename T1, typename T2>
T2 plus2(T1 x, T2 y) { return *x + y; }

void main()
{
	int x = 20;
	cout << plus1 <int, double> (10,30.14) << endl;
	cout << plus2 <int*, double> (&x,30.14) << endl;
}*/