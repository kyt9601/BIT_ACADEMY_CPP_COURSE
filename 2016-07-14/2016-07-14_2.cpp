/*
// 객체지향 (OOP) 의 3요소

// 1) 캡슐화 : 분산된 데이터를 하나로 묶어서 관리하고 보호하는 것
// - 데이터 은닉, 정보 보호

// 2) 상속 : 기존에 만들어 두었던 코드를 재사용 하는 것

// 3) 다형성

// 접근 지정자
// public : 어디서든 접근이 가능
// private : 자기자신 만 접근이 가능
// protected : 자기자신 + 상속 에서 접근이 가능

#include <iostream>

using namespace std;

class Person // 사람
{
private :
// 아래에 있는 변수, 함수 모두에 적용된다

// 속성 : 멤버 변수 (관습 m_)
	int m_age;			// 나이
	char m_name[20];	// 이름
	char m_phone[14];	//연락처

public :

// 행동 : 멤버 함수
	void Create(int age = 1, char *name = "", char *phone = "")
	{
		m_age = age;
//		m_name = name;		// 변수의 주소값을 바꿀 수는 없다
//		m_phone = phone;	// 변수의 주소값을 바꿀 수는 없다

	}
	void BirthDay()
	{
		m_age++;
	}
};

// 일반적인 class 작성 기법
// 멤버 변수는 private
// 멤버 함수는 public
/*
void main()
{
	// Person 의 객체를 1개 생성
	Person person;

//	person.m_age++;
//	m_age 를 직접 바꾸지는 못하고, BirthDay() 를 통해서만 바꿀 수 있다

	person.Create(1, "김철수", "010");
	person.BirthDay();
}
*/