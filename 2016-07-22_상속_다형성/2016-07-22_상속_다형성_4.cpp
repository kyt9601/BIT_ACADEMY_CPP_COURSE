// 가상 함수 (virtual)

// 자식 클래스에서 재정의 할 가능성이 있는 함수

// 부모 클래스의 행동이지만
// 자식 클래스에서 재정의 할 가능성이 있는 함수

// 사원 관리 프로그램
#include <iostream>

using namespace std;

class Emp
{
protected :
		int Sno;		// 사번
		int Monthly;	// 월급
public :
		void work() { cout << "모든 사원은 열심히 일한다" << endl; }
		void getSalary() { cout << "Emp::getSalary()" << endl; }
virtual	void vgetSalary() { cout << "Emp::vgetSalary()" << endl; }
};

class PartTime : public Emp
{
private :
	int WorkTime;	// 근무 시간
	int TimePay;	// 시급
public :
	void getSalary() { Monthly = WorkTime * TimePay; }
};
class GenEmp : public Emp
{
private :
	int Yearly;			// 연봉
	int VacationCount;	// 연차 휴가
public :
	void getSalary() { cout << "GenEmp::getSalary()" << endl; Monthly = Yearly / 13; }
	void vgetSalary() { cout << "GenEmp::vgetSalary()" << endl; Monthly = Yearly / 13; }
};

class Company
{
private :
//	다형성이 없다면
//	GenEmp genemp[1024];
//	PartTime parttime[1024];

// 다형성이 있으므로
Emp *EmpList[1024];	
//	EmpList 에 들어갈 수 있는 주소값 => Emp, PartTime, GenEmp
public :
	// 사원 추가, 삭제, 검색, 월급 주기
	void CalcSalary()
	{
		for (int i=0; i<1024; i++) { EmpList[i]->getSalary(); }
		//	EmpList[0] = new Emp;
		//	EmpList[1] = new PartTime;
		//	EmpList[2] = new GenEmp;

		//	EmpList[0]->getSalary();
		//	EmpList[1]->getSalary();
		//	EmpList[2]->getSalary();

		// 포인터에 지정된 객체에 따라,
		// 호출되는 함수가 각각 다르다

		// 다형성 : 같은 메세지에 대해 다르게 반응한다
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