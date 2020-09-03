/*// = 연산자를 꼭 오버로딩 해야하는 경우
// 포인터가 있을 때

#include <iostream>

using namespace std;

class Person
{
private :
	int age;
	char *name;
public :
	Person(int age, char *name)
	{
		this->age = age;
		this->name = new char[strlen(name)+1];
		strcpy(this->name,name);
//		this->name = strdup(p.name);
	}
	Person(const Person &p)	// 깊은 복사를 하는 복사 생성자
	{
		this->age = p.age;
		this->name= new char[strlen(p.name)+1];
		strcpy(this->name,name);
//		this->name = strdup(p.name);
	}
	// = 연산자 오버로딩
	Person &operator = (const Person &p)	// 깊은 복사를 하는 복사 생성자
	{
		this->age = p.age;

		delete []this->name;

		this->name= new char[strlen(p.name)+1];
		strcpy(this->name,name);
//		this->name = strdup(p.name);

		return (*this);
	}

	void Show() const
	{
		cout << "나이 : " << age << endl;
		cout << "이름 : " << name << endl;
	}

	~Person() { delete []name; }
};

ostream &operator << (ostream &os, Person &p)
{
	p.Show();
	return os;
}

void main()
{
	Person p1(10,"김철수");
	Person p2(20,"김영수");

	Person p3(p1);

	p1 = p2;	// 복사 생성자와 같은 문제 발생

	cout << p1 << endl;
}*/