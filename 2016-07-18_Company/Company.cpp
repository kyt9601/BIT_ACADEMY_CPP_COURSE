// ȸ��

#include <iostream>

using namespace std;

// ��� Ŭ����
class Emp
{
private :
	int Sno;		// ��� ��ȣ
	char Sname[20];		// ��� �̸�
public :
	int getSno() { return Sno; }
	void setSno(int Sno) { this->Sno = Sno; }
	char* getSname() { return Sname; }
	void setSname(char *Sname) { strcpy(this->Sname, Sname); }

	void Work() { cout << "�� �Ѵ�" << endl; }
	// ...

	Emp(int Sno = 1000, char *Sname = "ȫ�浿")
	{
		this->Sno = Sno;
		strcpy(this->Sname, Sname);
	}

	~Emp() {}
};

// ȸ�� Ŭ����
class Company
{
private :
	char *Cname;		// ȸ�� �̸�
	Emp EmpList[100];	// ��� 100�� ��ü �迭 - ���԰��� has-a
public :
	Company(char *Cname = "�ֽ�ȸ��")
	{
		// �Ű������� ���޵Ǿ��� Cname �� ���ڿ� ���̸�ŭ ���� �޸� �Ҵ� ('\0' ���� +1)
		this->Cname = new char[strlen(Cname)+1];

		// ������ ���� �޸𸮿� ���ڿ� ����
		strcpy(this->Cname, Cname);
	}

	void work()
	{
		for (int i=0; i<100; i++)
			EmpList[i].Work();
	}

	~Company()
	{
		// �����ڿ��� �Ҵ�� ���� �޸𸮸� ����
		delete []Cname;
	}
};

void main()
{
	
}