/*#include <iostream>

using namespace std;

class Time
{
private :
	int h;
	int m;
	int s;
public :
	Time(int h = 12, int m = 0, int s = 0) : h(h), m(m), s(s) {}
	Time operator + (const Time &t)
	{
		Time temp(h + t.h, m + t.m, s + t.s);
		return temp;
	}

	void show() const
	{
		cout << "h : " << h << endl;
		cout << "m : " << m << endl;
		cout << "s : " << s << endl;
	}

//	friend ostream &operator << (ostream &os, const Time &t);
};

// ��ü �����
// cout ��ü�� �����Լ� ������ �����ε��� ���ؼ�
// cout << time ����� �� �ֵ��� ���ش�
ostream &operator << (ostream &os, const Time &t)
{
//	os << t.h << t.m << t.s << endl;
	t.show();
	return os;
}

void main()
{
	Time t1(12,0,0);
	Time t2(3,0,0);

	Time t3 = t1 + t2;	// ���� �����ڿ� ���� ������, = �����ڴ� �� �����ε��� ���־�� �Ѵ�
	t3.show();

	cout << t3 << endl;
}*/