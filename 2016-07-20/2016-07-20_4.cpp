/*// ��ü�� �޸�

// ���� �����ڰ� �ʿ��� ���
// => ��� ���� �߿� ������ ������ �ִ� ���

// ��� ���� �߿� ������ ������ �ִ� ���
// ���� ������, �Ҹ���
// �ݵ�� �ʿ�

// '���� ����' �� '���� ����'

// ���� ���� : C++ �����Ϸ��� ����Ʈ ���� �����ڸ� ������ (�ܼ� ���� ����)
// this->x = copy.x;
// ...

#include <iostream>

using namespace std;

class Point
{
public :
	int x;
	int y;

	Point(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "init" << endl;
	}
//	Point(const Point &copy)	// ����Ʈ ���� ������
//	{
//		this->x = copy.x;
//		this->y = copy.y;
//	}
	Point(const Point &copy)
	{
		cout << "copy" << endl;
	}
	void show()
	{
		cout << "x : " << x << endl;
		cout << "y : " << y << endl;
	}
};

void main()
{
	Point p1;
	Point p2(p1);
	// ���� �����ڸ� ����� ������, �ڵ����� ���� ������
	// ���� �����ڸ� ���� �Ŀ���, �� ����� ��ǵȴ�

	p1.show();
	p2.show();
}*/