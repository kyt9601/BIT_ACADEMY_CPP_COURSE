/*// �ʱ�ȭ ����Ʈ (�̴ϼȶ�����)
// ��ü�� ��������� ���� �ʱ�ȭ ��

#include <iostream>

using namespace std;

// ��ǥ
class Point
{
	// ��� ����
private :
	int x;
	int y;
//-	const int z;

public :

	// getter, setter
	int getX() { return x; }
	int getY() { return y; }
	void setX(int x) { this->x = x; }
	void setY(int y) { this->y = y; }

	// ������
	Point() : x(100), y(200) //-, z(300)	// �ʱ�ȭ ����Ʈ (�̴ϼȶ�����) - ��ü�� ��������� ��
	{
		Point(0,0);							// ������ - ��ü�� ������� ��
	}
	Point(int x, int y) //- : z(300)
	{
		this->x = x;
		this->y = y;
	}

	// ��� �Լ�
	void Show()
	{
		cout << "x : " << x << endl << "y : " << y << endl;
	}
};

void main()
{
	Point pt = Point(); // �ʱ�ȭ ����Ʈ (�̴ϼȶ�����)

	pt.Show();
}*/