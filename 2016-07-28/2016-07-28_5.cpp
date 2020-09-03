/*// STL ÀÇ È°¿ë

#include <iostream>

#include <vector>

using namespace std;

class EMP
{
protected :
	int MonthSalary;
public :
	EMP(int ms = 0) : MonthSalary(ms) {}
	int getMS() { return MonthSalary; }
	virtual double getSalary();
};

class CEO : public EMP
{
private :
	int YearSalary;
public :
	CEO(int ms, int ys) : EMP(ms), YearSalary(ys) {}
	double getSalary() { MonthSalary = YearSalary / 12; }
};

class Part : public EMP
{
private :
	int pay;
	int time;
public :
	Part(int p, int t) : pay(p), time(t) {}
	double getSalary() { MonthSalary = pay * time; }
};

class Company
{
private :
	vector <EMP *> EmpList;
public :
	void input()
	{
		EMP * newEmp;
		int input;
		cout << "1. CEO 2. Part : ";
		cin >> input;

		if (input == 1)
			newEmp = new CEO(100,100);
		else
			newEmp = new Part(100,100);

		EmpList.push_back(newEmp);
	}
	void output()
	{
		vector <EMP*> ::iterator p;
		for (p=EmpList.begin(); p!=EmpList.end(); p++)
		{
			if ((*p)->getMS() == 10000)
				EmpList.erase(p);
		}
	}
	void show()
	{}
}

void main()
{
	vector <EMP *> EmpList;
}*/