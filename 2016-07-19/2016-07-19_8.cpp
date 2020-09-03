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

	// 현재 시간 출력
	void Show() const	// 객체의 속성값들에 대한 무분별한 접근 및 변경을 막기 위함
	{
		// hour++;		// 불가능
		// setHour(3);	// 불가능
		cout << hour << " : " << minute << " : " << second << endl;
	}
	void setHour(int hour)
	{
		this->hour = hour;
		Show();			// 가능
	}
};

void main()
{
	Time time(12,0,0);

	time.Show();
	time.setHour(2);
}

// 일반 함수에서 const 멤버 함수 호출이 가능하다
// const 멤버 함수에서는 const 멤버 함수만 호출이 가능하다
*/