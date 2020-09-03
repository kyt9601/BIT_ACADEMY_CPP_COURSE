/*// const 멤버 함수

// const 가 뒤에 붙는 함수
// cnost 멤버 함수 안에서는 절대 멤버 변수들의 값을 변경할 수 없다
// const this 포인터가 전달된다 => this 가 가리키는 객체의 값을 상수화

#include <iostream>

using namespace std;

class Time
{
private :
	int hour;
	int minute;
	int second;
public :
	Time(int h = 0, int m = 0, int s = 0) : hour(h), minute(m), second(s) {}

	void setHour(Time &pthis, int h)
	{
		this->hour = hour;
	}
	void Show(const Time *pthis)
	{
		setHour(*pthis , 3);
		cout << hour << " : " << minute << " : " << second << endl;
	}
};

void main()
{
	Time time(12,0,0); 
	const Time *pthis = &time;

	time.Show(pthis);
}*/