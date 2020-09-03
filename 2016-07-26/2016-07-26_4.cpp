/*// 기본적인 연산자 오버로딩

#include <iostream>

using namespace std;

// x, y 좌표 저장
class Point
{
private :
	int x;
	int y;
public :
	Point(int x = 0, int y = 0) { this->x = x; this->y = y; }

	void Show() const	// 출력만 하니까
	{
		cout << "x : " << x << endl << "y : " << y << endl;
	}
	// 호출한 객체에 다른 객체의 값을 더해준다
	void add(const Point &p)
	{
		this->x += p.x;
		this->y += p.y;
	}
	// Point 의 객체 2개를 더해주는 함수를 만드는 방법
	// 1) 멤버 함수로 add 작성
	void operator += (const Point &p)
	{
		this->x += p.x;
		this->y += p.y;	

	}
	Point operator + (const Point &p) // 복사본을 만들땐 Point & 가 아니라 그냥 Point
	{
		this->x += p.x;
		this->y += p.y;	

		return (*this);
	}

	//	선언된 함수, 클래스에서는 private 멤버에 접근이 가능하다
	friend Point operator + (const Point &p1, const Point &p2);
};

// Point 의 객체 2개를 더해주는 함수를 만드는 방법
// 2) 전역 함수로 add 작성
Point operator + (const Point &p1, const Point &p2)	// 복사본을 만들땐 Point & 가 아니라 그냥 Point
{
	Point newPoint(p1.x + p2.x, p1.y + p2.y);
	return newPoint;
}

void main()
{
	Point p1(10,20);
	Point p2(10,20);

	// 두 좌표를 더해라

	p1.add(p2);
	p1.Show();

	p1.operator += (p2);
	p1.Show();

	p1 += p2;
	p1.Show();

	p1 = p1 + p2;	// 멤버 함수를 우선해서 호출한다
	p1.Show();
}
*/