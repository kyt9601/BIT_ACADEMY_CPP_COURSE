/*// 다형성 : 부모 클래스의 포인터로 자식 객체를 참조 가능하다

// 부모의 개념으로 자식을 가리킨다
// is-a 관계를 만족해야 한다

// => 객체와 포인터

#include <iostream>

using namespace std;

class Person
{
public :
	void Love() {}
};

class Student : public Person
{
public :
	void study() {}
};

void main()
{
	// 학생을 사람이라고 부르다
	Person *p = new Student;			// 학생은 사람이다

//	p->Study();		불가능
//	p 는 Person 의 멤버만 사용할 수 있다
	p->Love();

//	Student *s = new Person;	불가능
//	사람은 학생이다 (X)
}*/