/*// 디폴트 파라미터 (기본 매개변수)
// 매개변수에 기본적으로 설정값을 주는 것

// 오직 C++ 에서만 가능

#include <iostream>

using namespace std;

// 사용자의 전화번호
void UserInfo(char *phone = "010")
{
	cout << phone << endl;
}
// void UserInfo(char *phone = "010", int age = 1)
// {
// 	cout << phone << " " << age << endl;
// }
// 없을때, 문자열만, 둘다
// 숫자만일 때는 불가능
// 모호함이 발생하기 때문에 UserInfo("010-9420-2174") 도 불가능
void UserInfo(char *phone = 017, int age = 1, int money = 1)
{
	cout << phone << " " << age << " " << money << endl;
}
// 디폴트 파라미터 는 왼쪽부터 생략할 수 있다

void main()
{
	char *p = "sdddfsdkflmdkslmfklsdmfklsmfklsmklf";

	cout << p << endl;

	UserInfo();
	UserInfo("010-9420-2174");
}*/