/*// 상속 : 기존의 클래스를 물려받아서 재사용하는 것

// Emp 클래스로 부터  PartTime 클래스로 상속
// class PartEmp : public Emp

// public, private, protected 다 가능
// class PartEmp : private Emp
// class PartEmp : protected Emp

// 재사용성

// 회사
// - 임원
// - 정규직
// - 파트 타임

class exc
{
private :
	int empno;			// 사원 번호
	char ename[20];		// 이름
	char job[20];		// 직종
	char dept[20];		// 부서
	int year;			// 계약 기간
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};
class emp
{
private :
	int empno;			// 사원 번호
	char ename[20];		// 이름
	char job[20];		// 직종
	char dept[20];		// 부서
	int salary;			// 연봉
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};
class PartTime
{
private :
	int empno;			// 사원 번호
	char ename[20];		// 이름
	char job[20];		// 직종
	char dept[20];		// 부서
	int timecount;		// 일한 시간
	int pay;			// 시급
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};*/