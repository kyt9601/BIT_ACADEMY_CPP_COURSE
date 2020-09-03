// 객체 포인터 배열
// 저장공간이 없으므로 역참조 불가능
// malloc, new 가 필요하다

// pts[0] = new Point;
// pts[0] = (Point*)malloc(sizeof(Point))

#include <iostream>

using namespace std;

// 시간 클래스
class Time
{
private :
	int hour;
	int minute;
	int second;
public :
	Time() { cout << "Time()" << endl; }
};

void main()
{
	Time	 time1[5];		// 객체 배열						(객체가 생성된다)

	Time	*time2[5];		// 객체 포인터 배열				(객체가 생성되지 않는다)
	time2[0] = new Time;	// 이래야 객체가 1번 생성된다		(객체가 생성된다)
}