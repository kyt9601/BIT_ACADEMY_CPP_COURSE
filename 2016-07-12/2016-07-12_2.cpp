/*// 태그가 타입으로 승격

// C 언어의 구조체란?
// 기본 타입으로 표현하기 어려운 복합 데이터를
// 표현하기 위한 기보타입의 조합

// C++ 의 클래스 = C 의 구조체

// C 에서는 typedef 로 이름을 바꿔줘야 했지만
// C++ 에서는 그냥 사용 가능

#include <iostream>

using namespace std;

struct person // 구조체의 태그
{
	char name[20];	// 이름
	int age;		// 나이
	char phone[13];	// 연락처
	int money;		// 자금
};

void main()
{
	struct person p1,p2; // person 형식의 p1,p2 구조체를 만든다
	p1 = {"장성훈",30,"010-9420-2174",100};
}*/