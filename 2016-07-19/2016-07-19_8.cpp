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

	// ���� �ð� ���
	void Show() const	// ��ü�� �Ӽ����鿡 ���� ���к��� ���� �� ������ ���� ����
	{
		// hour++;		// �Ұ���
		// setHour(3);	// �Ұ���
		cout << hour << " : " << minute << " : " << second << endl;
	}
	void setHour(int hour)
	{
		this->hour = hour;
		Show();			// ����
	}
};

void main()
{
	Time time(12,0,0);

	time.Show();
	time.setHour(2);
}

// �Ϲ� �Լ����� const ��� �Լ� ȣ���� �����ϴ�
// const ��� �Լ������� const ��� �Լ��� ȣ���� �����ϴ�
*/