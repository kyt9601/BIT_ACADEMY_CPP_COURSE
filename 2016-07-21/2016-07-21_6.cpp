/*// 상속과 객체의 생성

#include <iostream>

using namespace std;

class Person	// 사람
{
private :
	int age;
	int pvtage;
private :
	int prtage;
public :
	int pblage;

public :
	Person() { cout << "Person()" << endl; }

	~Person() { cout << "~Person()" << endl; }
};

class Student : public Person
{
private :
	int sno;	// 학번
public :
//	Student() : Person()		부모의 기본 생성자를 자동으로 호출한다
	Student()				// 동일
	{ cout << "Student()" << endl; }

	~Student() { cout << "~Student()" << endl; }
};

class pvtStudent : private Person
{
private :
	int sno;	// 학번
public :
	pvtStudent() { cout << "pvtStudent()" << endl; }
};
class prtStudent : protected Person
{
private :
	int sno;	// 학번
public :
	prtStudent() { cout << "prtStudent()" << endl; }
};
class pblStudent : public Person
{
private :
	int sno;	// 학번
public :
	pblStudent() { cout << "pblStudent()" << endl; }
};

void main()
{
	Student s;

	pvtStudent pvts;
	prtStudent prts;
	pblStudent pbls;

	// Person 과 Student 생성자가 모두 호출된다

	// Person 객체가 먼저 생성되고
	// Student 객체가 Stack 에서 먼저 사라진다

	// 부모가 먼저 생겨나고, 자식을 낳는다

	// Student 가 Person 을 내포하고 있다
	// 자식 객체가 부모의 것을 가지고 있다
}*/