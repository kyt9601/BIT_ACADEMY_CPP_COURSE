/*// const ��� �Լ�

// const �� �ڿ� �ٴ� �Լ�
// cnost ��� �Լ� �ȿ����� ���� ��� �������� ���� ������ �� ����
// const this �����Ͱ� ���޵ȴ� => this �� ����Ű�� ��ü�� ���� ���ȭ

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