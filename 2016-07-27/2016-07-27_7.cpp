/*// 스마트 포인터 (Template) : * 연산자 오버로딩

// 포인터를 추상화 한 클래스
// 동적 할당과 해제를 담당해준다

#include <iostream>

using namespace std;

class Point
{
private :
	int x;
	int y;
public :
	Point(int x = 0, int y = 0) : x(x), y(y) { cout << "Point()" << endl; }
	~Point() { cout << "~Point()" << endl; }

	void setXY(int x, int y) { this->x = x; this->y = y; }

	void show() const { cout << "x : " << x << endl << "y : " << y << endl; }
};

ostream &operator << (ostream &os, const Point &p)
{
	p.show();
	return os;
}

// Point 클래스의 동적 할당과 해제를 담당해주는 '스마트 포인터' 클래스
class SmartPtr
{
private :
	Point *point;
public :
	SmartPtr(Point *p) : point(p) {}
	~SmartPtr() { delete point; }

	Point &operator * () const
	{
		return *point;
	}
	Point *operator -> () const
	{
		return point;
	}
};

template <class T>
class SmartPtrTem
{
private :
	T *ptr;
public :
	SmartPtrTem(T *p) : ptr(p) {}
	~SmartPtrTem() { delete ptr; }

	T &operator * () const
	{
		return *ptr;
	}
	T *operator -> () const
	{
		return ptr;
	}
};

class Time
{
public :
	int h;
	int m;
	int s;
public :
	Time(int h = 12, int m = 0, int s = 0) : h(h), m(m), s(s) {}

	bool operator == (const Time &t)
	{
		if ((h == t.h) && (m == t.m) && (s == t.s)) { return true; }
		else { return false; }
	}

	void show() const
	{
		cout << "h : " << h << endl;
		cout << "m : " << m << endl;
		cout << "s : " << s << endl;
	}


	~Time() { cout << "~Time()" << endl; }
};

ostream &operator << (ostream &os, const Time &p)
{
	p.show();
	return os;
}

void main()
{
	SmartPtr p1(new Point(10,20));
	cout << *p1 << endl;

	p1->setXY(100,200);
	cout << *p1 << endl;

	SmartPtrTem <Point> p2(new Point(30,40));
	cout << *p2 << endl;

	p1->setXY(300,400);
	cout << *p2 << endl;

	SmartPtrTem <Time> p3(new Time(12,3,59));
	cout << *p3 << endl;
}*/