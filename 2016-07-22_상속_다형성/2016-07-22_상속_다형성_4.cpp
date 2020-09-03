// ���� �Լ� (virtual)

// �ڽ� Ŭ�������� ������ �� ���ɼ��� �ִ� �Լ�

// �θ� Ŭ������ �ൿ������
// �ڽ� Ŭ�������� ������ �� ���ɼ��� �ִ� �Լ�

// ��� ���� ���α׷�
#include <iostream>

using namespace std;

class Emp
{
protected :
		int Sno;		// ���
		int Monthly;	// ����
public :
		void work() { cout << "��� ����� ������ ���Ѵ�" << endl; }
		void getSalary() { cout << "Emp::getSalary()" << endl; }
virtual	void vgetSalary() { cout << "Emp::vgetSalary()" << endl; }
};

class PartTime : public Emp
{
private :
	int WorkTime;	// �ٹ� �ð�
	int TimePay;	// �ñ�
public :
	void getSalary() { Monthly = WorkTime * TimePay; }
};
class GenEmp : public Emp
{
private :
	int Yearly;			// ����
	int VacationCount;	// ���� �ް�
public :
	void getSalary() { cout << "GenEmp::getSalary()" << endl; Monthly = Yearly / 13; }
	void vgetSalary() { cout << "GenEmp::vgetSalary()" << endl; Monthly = Yearly / 13; }
};

class Company
{
private :
//	�������� ���ٸ�
//	GenEmp genemp[1024];
//	PartTime parttime[1024];

// �������� �����Ƿ�
Emp *EmpList[1024];	
//	EmpList �� �� �� �ִ� �ּҰ� => Emp, PartTime, GenEmp
public :
	// ��� �߰�, ����, �˻�, ���� �ֱ�
	void CalcSalary()
	{
		for (int i=0; i<1024; i++) { EmpList[i]->getSalary(); }
		//	EmpList[0] = new Emp;
		//	EmpList[1] = new PartTime;
		//	EmpList[2] = new GenEmp;

		//	EmpList[0]->getSalary();
		//	EmpList[1]->getSalary();
		//	EmpList[2]->getSalary();

		// �����Ϳ� ������ ��ü�� ����,
		// ȣ��Ǵ� �Լ��� ���� �ٸ���

		// ������ : ���� �޼����� ���� �ٸ��� �����Ѵ�
	}
};

void main()
{
	GenEmp e;
	e.getSalary();

	GenEmp ve;
	ve.vgetSalary();

	Emp *emp = new GenEmp;
	emp->getSalary();

	Emp *vemp = new GenEmp;
	vemp->vgetSalary();
}