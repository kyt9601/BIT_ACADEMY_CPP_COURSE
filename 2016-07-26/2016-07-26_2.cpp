/*// 연산자 오버로딩

// 오버로딩 : 다중 정의
// 함수 오버로딩 : 같은 이름의 함수가 여러개

// 연산자 오버로딩 : 같은 연산자가 여러가지 의미로 사용되는 것
// 리턴타입 operator 연산자 (매개변수)
// void operator << (int x)

#include <iostream>

using namespace std;

class MyCout	// int 를 1개 받아 출력하는 <<
{
public :
	// 리턴타입 operator 연산자 (매개변수)
//	void operator << (int x)
//	{
//		printf("%d",x);
//	}
	MyCout &operator << (int x)
	{
		printf("%d",x);
		return (*this);	// 역참조 했으니 실제 객체
	}
	void operator << (double x)
	{
		printf("%g",x);
	}
	void print(int x)
	{
		printf("%d",x);
	}
	void print(double x)
	{
		printf("%g",x);
	}
//	연산자는 아무거나 되는게 아님
//	void operator ?? (int x)
//	{
//		printf("%d",x);
//	}
};

//COUT 을 전역 객체로 선언
MyCout COUT;

void main()
{
	printf("%d\n",10 << 2);	//	1010 -> 101000
	printf("%d\n",10 >> 2);	//	1010 -> 10

	// 연산자 오버로딩 : 연산자 함수
	cout << "ABC" << endl;
	cout.operator << ("ABC") << endl;

	COUT.print(10);
	COUT.operator << (10);	//	일반적인 함수의 호출
	COUT << 10;				//	연산자 자체를 호출

	COUT.print(5.5);
	COUT.operator << (5.5);
	COUT << 5.5;

	cout << 10 << 20 << endl;
	COUT << 10 << 20;

//	COUT ?? 5;
}*/