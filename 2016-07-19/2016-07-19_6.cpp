/*// const 멤버 변수
// 클래스의 멤버 변수들 중에서 값이 상수인 경우

#include <iostream>

using namespace std;

class Person
{
private :
	int age;
	const char btype;			// 혈액형
//	const char birthday[20];	// 생일
	const	 char *birthday;
public :	// const 멤버 변수를 초기화 할때는, 반드시 "초기화 리스트" 를 사용
	Person() : btype('A'), birthday("1996-01-04") // birthday("1996-01-04")
	{
		age = 1;
		// btype = 'A';
		// birthday = "1996-01-04";		불가능
		// strcpy(birthday,"1996-01-04");
	}
};

// const 로 선언된 문자열은 어떻게도 초기화가 불가능
// => const 문자열은 포인터, 이니셜라이저 로
//	const	 char *birthday;
//	birthday("1996-01-04")

void main()
{
	Person sh;
}*/