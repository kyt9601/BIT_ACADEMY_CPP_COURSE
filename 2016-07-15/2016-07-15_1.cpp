/*// �����ڿ� �Ҹ���

// ������ (constructor)

// ��ü�� ������ �� �ڵ����� ȣ��Ǿ�
// ��ü�� ��� ������ �ʱ�ȭ �����ִ� �Լ�
// CreaetEmp() �� �������� ������ �ϳ�, ��ü�� ������ ���ÿ� �ʱ�ȭ���� �ʴ´�

// 1) �������� �̸��� Ŭ������ �̸��� �����ϴ�
// 2) �����ڴ� �Լ� - ��ȯ Ÿ���� ���� �ʴ´�
// 3) ���ϰ��� ���� �Լ��̴�
// 4) ���α׷��Ӱ� �ۼ����� ������, �����Ϸ��� �ƹ��͵� �����ʴ� ����Ʈ �����ڸ� ȣ���Ѵ�

// ȸ���� ���� Ŭ����

#include <iostream>

using namespace std;

class Emp
{
// ��� ����
private :
	int EmpNo;		// ��� ��ȣ
	int Salary;		// ����
	char Name[20];	// �̸�

public :
// ������
	Emp()
	{
		cout << "==============Emp()==============" << endl;
	}
// �����ε��� ������
	Emp(int no, int salary, char* name)
	{
		EmpNo = no;
		Salary = salary;
		strcpy(Name, name);
	}

// getter, setter
	int getEmpNo() { return EmpNo; }
	int getSalary() { return Salary; }
	void setSalary(int NewSalary) { Salary = NewSalary; }
	char* getName() { return Name; }

// ��� �Լ�
	void CreateEmp(int no, int sal, char* name)	// ��ü�� ��� ������ �ʱ�ȭ �����ش�
	{
		EmpNo = no;
		Salary = sal;
		strcpy(Name, name);
	}

	void Work() { cout << "�� �Ѵ�" << endl; }
	void Show() { cout << "��� : " << EmpNo << endl << "���� : " << Salary << endl << "�̸� : " << Name << endl; }
};

void main()
{
// C++ ����� �ʱ�ȭ (class)
	Emp emp(4885,3000,"ȫ�浿");			// �����ڸ� �̿�
	//emp.setSalary(3000);					// setter �� �̿�
	//emp.CreateEmp(4885,3000,"ȫ�浿");	// ��� �Լ��� �̿�

// C ����� �ʱ�ȭ (struct)
	// strcpy(emp.Name,"ȫ�浿");
	// emp.EmpNo = 4885;
	// emp.Salary = 3000;

	emp.Show();
}*/