// ��ü ������ �迭
// ��������� �����Ƿ� ������ �Ұ���
// malloc, new �� �ʿ��ϴ�

// pts[0] = new Point;
// pts[0] = (Point*)malloc(sizeof(Point))

#include <iostream>

using namespace std;

// �ð� Ŭ����
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
	Time	 time1[5];		// ��ü �迭						(��ü�� �����ȴ�)

	Time	*time2[5];		// ��ü ������ �迭				(��ü�� �������� �ʴ´�)
	time2[0] = new Time;	// �̷��� ��ü�� 1�� �����ȴ�		(��ü�� �����ȴ�)
}