/*//			     ����				:		��� �������� �������� �Ӽ��� �ൿ
//		   /      ��      \
//		 �ӿ� �Ϲ��� ��Ʈ Ÿ��	:		������ Ư¡���� �Ӽ��� �ൿ�� ����

#include <iostream>

using namespace std;

class Emp
{
private :
	int EmpNo;			// ��� ��ȣ
	char EmpName[20];	// �̸�
	char Job[20];		// ����
	char dept[20];		// �μ�
	int year;			// ��� �Ⱓ
public :
	void work() { cout << "Work" << endl; }
};

// Emp Ŭ������ ���� ���
class PartEmp : public Emp
{
private :
	int TimeCount;		// �ٹ� �ð�
	int Pay;			// �ñ�
public :
	void getSalary() {}
};

void main()
{
	PartEmp e;
	e.work();
}*/