/*// ��ü�� ����/�Ҹ� �� �޸�
// ���� �� �޸�

// ���� ������
// 1) main ���� �Լ� �� ��ü�� ������ ��
// 2) �Լ� ���� main �� ��ü�� ������ ��
// 3) ������ ��ü�� ���ο� ��ü�� ������ ��
// Point(const Point &copyObject)
// {
//		cout << "���纻" << endl;
// }
// ���α׷��Ӱ� �ۼ����� ������, �ڵ����� �⺻ ���� �����ڰ� ȣ��ȴ�

// �����ڰ� ȣ��Ǵ� ����
#include <iostream>

using namespace std;

class Point
{
public :
	int x;
	int y;
public :
	Point(int x = 0, int y = 0)
	{
		this->x = x;
		this->y = y;
		cout << "x : " << x << endl << "y : " << y << endl << endl;
	}
	// ���� ������ : ��ü�� ���纻�� ���������, �ڵ����� ȣ��Ǵ� ������
	Point(const Point &copyObject)	// const ���� ���纻
	{
		cout << "���� ������" << endl;
	}
};

void show (Point p)	// Call by Value (���纻)
{	// ���� ��ü�� ������� ����, �Ϲ� �����ڰ� ȣ����� �ʴ´�
	// - ���� ������ ��� ������ �����ڰ� �ʿ��ϴ�
	cout << "show() x : " << p.x << endl << "show() y : " << p.y << endl << endl;
}
void pshow (Point *p)	// Call by Reference
{
	cout << "pshow() x : " << p->x << endl << "pshow() y : " << p->y << endl << endl;
//	cout << "pshow() x : " << (*p).x << endl << "show() y : " << (*p).y << endl << endl;		����
}
// x, y �� ���޹޾� Point ��ü�� ����� ����
Point CreateObject(int x, int y)
{	// Point ������ ����
	Point p = Point(x,y);
	return p;
}

void main()
{
	Point p1;				// �����ڰ� ȣ��ȴ�
	Point p2();				// ��ü�� �������� �ʴ´�, �����ڰ� ȣ����� �ʴ´�
	Point p3 = Point();		// �����ڰ� ȣ��ȴ� (����� ������ ȣ��)

	Point pt(1);
	Point point(2,2);

	show(p1);
	pshow(&p1);

	Point *p = new Point;						// ��ü�� �����ǰ�, �����ڰ� ȣ��ȴ�
	Point *po = new Point();					// ��ü�� �����ǰ�, �����ڰ� ȣ��ȴ�
	Point *poo = (Point*)malloc(sizeof(Point));	// ��ü�� �����ǳ�, �����ڰ� ȣ����� �ʴ´�
	// malloc �� new �� ���� => ������ ȣ�� ����

	show(*poo);
	pshow(poo);

	Point pi = CreateObject(10,10);

	Point pr1 = Point(100,100);
	Point pr2(pr1);
}*/