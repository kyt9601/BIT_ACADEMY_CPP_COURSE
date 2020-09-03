/*// 일반화 프로그래밍

// C 에서의 일반화 프로그래밍
// - void * : malloc 함수
// - int 동적 할당 => (int*)malloc(sizeof(int)*10);
// - char 동적 할당 => (char*)malloc(sizeof(char)*10);

// 템플릿 (Template)
// - C++ 에서의 일반화 프로그래밍
// - 실제 코드가 되는것이 아니라, 코드의 틀을 만들어준다

// 1) 함수 템플릿
// 2) 클래스 템플릿

// ex) 덧셈 연산

// C 에서는
int		plus1(int x, int y)			{ return x + y; }
double	plus2(double x, double y)	{ return x + y; }
double	plus3(int x, double y)		{ return x + y; }
double	plus4(double x, int y)		{ return x + y; }

// C++ 에서는

// template <typename 이름>			이름은 들어갈 타입
// class 든 typename 이든 상관없다
// template 하나당 함수 1개

// template <typename T>
// T plus(T x, T y)
// {
//		return x + y;
// }
// 타입 plus(T x, T y)
// {
//		return x + y;
// }
// template <class cT>
// cT plus(cT x, cT y)
// {
// 		return x + y;
// }
// 타입 plus(cT x, cT y)
// {
//		return x + y;
// }

#include <iostream>
using namespace std;

template <typename TYPE>
void Swap(TYPE *x, TYPE *y)
{
	TYPE temp = *x;
	*x = *y;
	*y = temp;
}
//	void Swap(int *x, int *y)
//	{
//		int temp = *x;
//		*x = *y;
//		*y = temp;
//	}

void main()
{
	int x = 10, y = 20;
	cout << "x : " << x << endl << "y : " << y << endl;

	Swap <int> (&x,&y);
	cout << "x : " << x << endl << "y : " << y << endl;
}*/