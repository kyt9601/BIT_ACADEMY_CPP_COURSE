/*// const ��� ����
// Ŭ������ ��� ������ �߿��� ���� ����� ���

#include <iostream>

using namespace std;

class Person
{
private :
	int age;
	const char btype;			// ������
//	const char birthday[20];	// ����
	const	 char *birthday;
public :	// const ��� ������ �ʱ�ȭ �Ҷ���, �ݵ�� "�ʱ�ȭ ����Ʈ" �� ���
	Person() : btype('A'), birthday("1996-01-04") // birthday("1996-01-04")
	{
		age = 1;
		// btype = 'A';
		// birthday = "1996-01-04";		�Ұ���
		// strcpy(birthday,"1996-01-04");
	}
};

// const �� ����� ���ڿ��� ��Ե� �ʱ�ȭ�� �Ұ���
// => const ���ڿ��� ������, �̴ϼȶ����� ��
//	const	 char *birthday;
//	birthday("1996-01-04")

void main()
{
	Person sh;
}*/