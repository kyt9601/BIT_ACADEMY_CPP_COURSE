/*// ��Ӱ� ��ü�� ����

#include <iostream>

using namespace std;

class Person	// ���
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
	int sno;	// �й�
public :
//	Student() : Person()		�θ��� �⺻ �����ڸ� �ڵ����� ȣ���Ѵ�
	Student()				// ����
	{ cout << "Student()" << endl; }

	~Student() { cout << "~Student()" << endl; }
};

class pvtStudent : private Person
{
private :
	int sno;	// �й�
public :
	pvtStudent() { cout << "pvtStudent()" << endl; }
};
class prtStudent : protected Person
{
private :
	int sno;	// �й�
public :
	prtStudent() { cout << "prtStudent()" << endl; }
};
class pblStudent : public Person
{
private :
	int sno;	// �й�
public :
	pblStudent() { cout << "pblStudent()" << endl; }
};

void main()
{
	Student s;

	pvtStudent pvts;
	prtStudent prts;
	pblStudent pbls;

	// Person �� Student �����ڰ� ��� ȣ��ȴ�

	// Person ��ü�� ���� �����ǰ�
	// Student ��ü�� Stack ���� ���� �������

	// �θ� ���� ���ܳ���, �ڽ��� ���´�

	// Student �� Person �� �����ϰ� �ִ�
	// �ڽ� ��ü�� �θ��� ���� ������ �ִ�
}*/