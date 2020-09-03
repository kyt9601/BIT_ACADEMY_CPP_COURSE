/*// 템플릿 특수화

// 특정 타입에 종속적인 실행 코드가 있다면, 특정 타입만의 함수는 * 로 작성

#include <iostream>

using namespace std;

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
};

// ex) 같으면 ture, 다르면 false
template <class T>
bool compare1(T x, T y)
{
	return x == y;
}
template <>
bool compare1(char* str1, char* str2)
{
	return !(strcmp(str1,str2));
}
// template <>
// bool compare1(Time t1, Time t2)
// {
//		if ((t1.h == t2.h) && (t1.m == t2.m) && (t1.s == t2.s)) { return true; }
//		else { return false; }
// }

// template <class T>
// bool compare2(T x, T y)
// {
//		return !(strcmp(x,y));
// }

void main()
{
	cout << compare1 <int> (10,10) << endl;

	char *str1 = "AAA";
	char *str2 = "BBB";
	cout << compare1 <char*> (str1,str2) << endl;
//	cout << compare2 <char*> (str1,str2) << endl;

	Time t1(12,0,0);
	Time t2(12,0,0);

	cout << compare1 <Time> (t1,t2) << endl;	// 템플릿 특수화 보다는, 연산자 오버로딩으로
}*/