/*// ������ : �θ� Ŭ������ �����ͷ� �ڽ� ��ü�� ���� �����ϴ�

// �θ��� �������� �ڽ��� ����Ų��
// is-a ���踦 �����ؾ� �Ѵ�

// => ��ü�� ������

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
	// �л��� ����̶�� �θ���
	Person *p = new Student;			// �л��� ����̴�

//	p->Study();		�Ұ���
//	p �� Person �� ����� ����� �� �ִ�
	p->Love();

//	Student *s = new Person;	�Ұ���
//	����� �л��̴� (X)
}*/