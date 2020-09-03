// 회사

#include <iostream>

using namespace std;

// 사원 클래스
class Emp
{
private :
	int Sno;		// 사원 번호
	char Sname[20];		// 사원 이름
public :
	int getSno() { return Sno; }
	void setSno(int Sno) { this->Sno = Sno; }
	char* getSname() { return Sname; }
	void setSname(char *Sname) { strcpy(this->Sname, Sname); }

	void Work() { cout << "일 한다" << endl; }
	// ...

	Emp(int Sno = 1000, char *Sname = "홍길동")
	{
		this->Sno = Sno;
		strcpy(this->Sname, Sname);
	}

	~Emp() {}
};

// 회사 클래스
class Company
{
private :
	char *Cname;		// 회사 이름
	Emp EmpList[100];	// 사원 100명 객체 배열 - 포함관계 has-a
public :
	Company(char *Cname = "주식회사")
	{
		// 매개변수로 전달되어진 Cname 의 문자열 길이만큼 동적 메모리 할당 ('\0' 까지 +1)
		this->Cname = new char[strlen(Cname)+1];

		// 생성된 동적 메모리에 문자열 복사
		strcpy(this->Cname, Cname);
	}

	void work()
	{
		for (int i=0; i<100; i++)
			EmpList[i].Work();
	}

	~Company()
	{
		// 생성자에서 할당된 동적 메모리를 정리
		delete []Cname;
	}
};

void main()
{
	
}