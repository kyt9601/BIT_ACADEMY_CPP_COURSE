/*// 1) 타입 클래스
// 더하기, 빼기, 크다, 작다

#include <iostream>

using namespace std;

class time
{
private:
	int h;
	int m;
	int s;
public :
	time(int h, int m, int s)
	{
		this->h = h;
		this->m = m;
		this->s = s;
	}

	void Show()
	{
		cout << "h : " << h << endl;
		cout << "m : " << m << endl;
		cout << "s : " << s << endl;
	};

	friend time operator + (const time &p1, const time &p2);
	friend time operator - (const time &p1, const time &p2);
	friend void operator < (const time &p1, const time &p2);
	friend void operator > (const time &p1, const time &p2);
};

time operator + (const time &p1, const time &p2)
{
	time Newtime(p1.h + p2.h, p1.m + p2.m, p1.s + p2.s);
	return Newtime;
}
time operator - (const time &p1, const time &p2)
{
	time Newtime(p1.h - p2.h, p1.m - p2.m, p1.s - p2.s);
	return Newtime;
}
void operator < (const time &p1, const time &p2)
{
	if (p1.h < p2.h)
	{
		cout << "true" << endl;
	}
	else if (p1.h > p2.h)
	{
		cout << "false" << endl;
	}
	else
	{
		if (p1.m < p2.m)
		{
			cout << "true" << endl;
		}
		else if (p1.m > p2.m)
		{
			cout << "false" << endl;
		}
		else
		{
			if (p1.s < p2.s)
			{
				cout << "true" << endl;
			}
			else
			{
				cout << "false" << endl;
			}
		}
	}
}
void operator > (const time &p1, const time &p2)
{
	if (p1.h > p2.h)
	{
		cout << "true" << endl;
	}
	else if (p1.h < p2.h)
	{
		cout << "false" << endl;
	}
	else
	{
		if (p1.m > p2.m)
		{
			cout << "true" << endl;
		}
		else if (p1.m < p2.m)
		{
			cout << "false" << endl;
		}
		else
		{
			if (p1.s > p2.s)
			{
				cout << "true" << endl;
			}
			else
			{
				cout << "false" << endl;
			}
		}
	}
}

void main()
{
	time t1(3,10,20);
	time t2(2,10,30);

	time t3 = t1 + t2;
	t3.Show();

	time t4 = t1 - t2;
	t4.Show();

	t1 < t2;

	t1 > t2;
}*/