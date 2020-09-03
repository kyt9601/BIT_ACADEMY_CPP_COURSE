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

// 객체 출력자
// cout 객체와 전역함수 연산자 오버로딩을 통해서
// cout << time 사용할 수 있도록 해준다
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

	Time t3 = t1 + t2;	// 복사 생성자와 같은 문제로, = 연산자는 꼭 오버로딩을 해주어야 한다
	t3.show();

	cout << t3 << endl;
}*/