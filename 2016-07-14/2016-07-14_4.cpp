// 스타크래프트 마린 클래스
// 극장 예약 클래스
// 회사 직원 클래스
// PC방 PC 클래스

#include <iostream>

using namespace std;

class PC
{
	private :
		int onoff;
		int time;
		int pcNo;

	public :
		int getonoff() { return onoff; }
		int getremaintime() { return time; }
		int getpcNo() { return pcNo; }

		void setonoff();
		void settime();

		void use()
		{
			time--;
		}
		void poweroff()
		{
			time = 0;
			onoff = 0;
		}

};

void PC::setonoff()
{
	if (onoff == 1)
		onoff = 0;
	else
		onoff = 1;
}
void PC::settime()
{
	if (time == 0)
		time = 2;
}

void main()
{

}

// 고속버스의 좌석 클래스