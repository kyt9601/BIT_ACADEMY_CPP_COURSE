/*// 생성자와 소멸자

// 생성자 (constructor)

// 객체가 생성될 때 자동으로 호출되어
// 객체의 멤버 변수를 초기화 시켜주는 함수
// CreaetEmp() 는 생성자의 역할은 하나, 객체의 생성과 동시에 초기화되지 않는다

// 1) 생성자의 이름은 클래스의 이름과 동일하다
// 2) 생성자는 함수 - 반환 타입은 쓰지 않는다
// 3) 리턴값이 없는 함수이다
// 4) 프로그래머가 작성하지 않으면, 컴파일러는 아무것도 하지않는 디폴트 생성자를 호출한다

// 회사의 직원 클래스

#include <iostream>

using namespace std;

class Emp
{
// 멤버 변수
private :
	int EmpNo;		// 사원 번호
	int Salary;		// 연봉
	char Name[20];	// 이름

public :
// 생성자
	Emp()
	{
		cout << "==============Emp()==============" << endl;
	}
// 오버로딩된 생성자
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

// 멤버 함수
	void CreateEmp(int no, int sal, char* name)	// 객체의 멤버 변수를 초기화 시켜준다
	{
		EmpNo = no;
		Salary = sal;
		strcpy(Name, name);
	}

	void Work() { cout << "일 한다" << endl; }
	void Show() { cout << "사번 : " << EmpNo << endl << "연봉 : " << Salary << endl << "이름 : " << Name << endl; }
};

void main()
{
// C++ 방식의 초기화 (class)
	Emp emp(4885,3000,"홍길동");			// 생성자를 이용
	//emp.setSalary(3000);					// setter 를 이용
	//emp.CreateEmp(4885,3000,"홍길동");	// 멤버 함수를 이용

// C 방식의 초기화 (struct)
	// strcpy(emp.Name,"홍길동");
	// emp.EmpNo = 4885;
	// emp.Salary = 3000;

	emp.Show();
}*/