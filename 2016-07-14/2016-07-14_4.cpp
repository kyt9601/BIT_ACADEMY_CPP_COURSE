// ��Ÿũ����Ʈ ���� Ŭ����
// ���� ���� Ŭ����
// ȸ�� ���� Ŭ����
// PC�� PC Ŭ����

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

// ��ӹ����� �¼� Ŭ����