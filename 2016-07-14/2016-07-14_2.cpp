/*
// ��ü���� (OOP) �� 3���

// 1) ĸ��ȭ : �л�� �����͸� �ϳ��� ��� �����ϰ� ��ȣ�ϴ� ��
// - ������ ����, ���� ��ȣ

// 2) ��� : ������ ����� �ξ��� �ڵ带 ���� �ϴ� ��

// 3) ������

// ���� ������
// public : ��𼭵� ������ ����
// private : �ڱ��ڽ� �� ������ ����
// protected : �ڱ��ڽ� + ��� ���� ������ ����

#include <iostream>

using namespace std;

class Person // ���
{
private :
// �Ʒ��� �ִ� ����, �Լ� ��ο� ����ȴ�

// �Ӽ� : ��� ���� (���� m_)
	int m_age;			// ����
	char m_name[20];	// �̸�
	char m_phone[14];	//����ó

public :

// �ൿ : ��� �Լ�
	void Create(int age = 1, char *name = "", char *phone = "")
	{
		m_age = age;
//		m_name = name;		// ������ �ּҰ��� �ٲ� ���� ����
//		m_phone = phone;	// ������ �ּҰ��� �ٲ� ���� ����

	}
	void BirthDay()
	{
		m_age++;
	}
};

// �Ϲ����� class �ۼ� ���
// ��� ������ private
// ��� �Լ��� public
/*
void main()
{
	// Person �� ��ü�� 1�� ����
	Person person;

//	person.m_age++;
//	m_age �� ���� �ٲ����� ���ϰ�, BirthDay() �� ���ؼ��� �ٲ� �� �ִ�

	person.Create(1, "��ö��", "010");
	person.BirthDay();
}
*/