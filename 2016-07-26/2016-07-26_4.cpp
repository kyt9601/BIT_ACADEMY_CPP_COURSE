/*// �⺻���� ������ �����ε�

#include <iostream>

using namespace std;

// x, y ��ǥ ����
class Point
{
private :
	int x;
	int y;
public :
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }

	void Show() const	// ��¸� �ϴϱ�
	{
		cout << "x : " << x << endl << "y : " << y << endl;
	}
	// ȣ���� ��ü�� �ٸ� ��ü�� ���� �����ش�
	void add(const Point &p)
	{
		this->x += p.x;
		this->y += p.y;
	}
	// Point �� ��ü 2���� �����ִ� �Լ��� ����� ���
	// 1) ��� �Լ��� add �ۼ�
	void operator += (const Point &p)
	{
		this->x += p.x;
		this->y += p.y;	

	}
	Point operator + (const Point &p) // ���纻�� ���鶩 Point & �� �ƴ϶� �׳� Point
	{
		this->x += p.x;
		this->y += p.y;	

		return (*this);
	}

	//	����� �Լ�, Ŭ���������� private ����� ������ �����ϴ�
	friend Point operator + (const Point &p1, const Point &p2);
};

// Point �� ��ü 2���� �����ִ� �Լ��� ����� ���
// 2) ���� �Լ��� add �ۼ�
Point operator + (const Point &p1, const Point &p2)	// ���纻�� ���鶩 Point & �� �ƴ϶� �׳� Point
{
	Point newPoint(p1.x + p2.x, p1.y + p2.y);
	return newPoint;
}

void main()
{
	Point p1(10,20);
	Point p2(10,20);

	// �� ��ǥ�� ���ض�

	p1.add(p2);
	p1.Show();

	p1.operator += (p2);
	p1.Show();

	p1 += p2;
	p1.Show();

	p1 = p1 + p2;	// ��� �Լ��� �켱�ؼ� ȣ���Ѵ�
	p1.Show();
}
*/