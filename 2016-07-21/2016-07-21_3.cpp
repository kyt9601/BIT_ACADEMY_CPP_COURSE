/*//			     직원				:		모든 직원들의 공통적인 속성과 행동
//		   /      ㅣ      \
//		 임원 일반직 파트 타임	:		각각의 특징적인 속성과 행동을 구현

#include <iostream>

using namespace std;

class Emp
{
private :
	int EmpNo;			// 사원 번호
	char EmpName[20];	// 이름
	char Job[20];		// 직종
	char dept[20];		// 부서
	int year;			// 계약 기간
public :
	void work() { cout << "Work" << endl; }
};

// Emp 클래스로 부터 상속
class PartEmp : public Emp
{
private :
	int TimeCount;		// 근무 시간
	int Pay;			// 시급
public :
	void getSalary() {}
};

void main()
{
	PartEmp e;
	e.work();
}*/