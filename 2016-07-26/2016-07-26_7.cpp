/*// = �����ڸ� �� �����ε� �ؾ��ϴ� ���
// �����Ͱ� ���� ��

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
	Person(const Person &p)	// ���� ���縦 �ϴ� ���� ������
	{
		this->age = p.age;
		this->name= new char[strlen(p.name)+1];
		strcpy(this->name,name);
//		this->name = strdup(p.name);
	}
	// = ������ �����ε�
	Person &operator = (const Person &p)	// ���� ���縦 �ϴ� ���� ������
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
		cout << "���� : " << age << endl;
		cout << "�̸� : " << name << endl;
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
	Person p1(10,"��ö��");
	Person p2(20,"�迵��");

	Person p3(p1);

	p1 = p2;	// ���� �����ڿ� ���� ���� �߻�

	cout << p1 << endl;
}*/