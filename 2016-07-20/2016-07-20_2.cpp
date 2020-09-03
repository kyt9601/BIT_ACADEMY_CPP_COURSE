/*// 객체의 생성/소멸 과 메모리
// 복사 와 메모리

// 복사 생성자
// 1) main 에서 함수 에 객체를 복사할 때
// 2) 함수 에서 main 에 객체를 리턴할 때
// 3) 기존의 객체로 새로운 객체를 생성할 때
// Point(const Point &copyObject)
// {
//		cout << "복사본" << endl;
// }
// 프로그래머가 작성하지 않으면, 자동으로 기본 복사 생성자가 호출된다

// 생성자가 호출되는 경우들
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
	// 복사 생성자 : 객체의 복사본이 만들어질때, 자동으로 호출되는 생성자
	Point(const Point &copyObject)	// const 참조 복사본
	{
		cout << "복사 생성자" << endl;
	}
};

void show (Point p)	// Call by Value (복사본)
{	// 복사 객체가 만들어질 때는, 일반 생성자가 호출되지 않는다
	// - 복사 생성자 라는 별도의 생성자가 필요하다
	cout << "show() x : " << p.x << endl << "show() y : " << p.y << endl << endl;
}
void pshow (Point *p)	// Call by Reference
{
	cout << "pshow() x : " << p->x << endl << "pshow() y : " << p->y << endl << endl;
//	cout << "pshow() x : " << (*p).x << endl << "show() y : " << (*p).y << endl << endl;		같다
}
// x, y 를 전달받아 Point 객체를 만들고 리턴
Point CreateObject(int x, int y)
{	// Point 형식을 리턴
	Point p = Point(x,y);
	return p;
}

void main()
{
	Point p1;				// 생성자가 호출된다
	Point p2();				// 객체가 생성되지 않는다, 생성자가 호출되지 않는다
	Point p3 = Point();		// 생성자가 호출된다 (명시적 생성자 호출)

	Point pt(1);
	Point point(2,2);

	show(p1);
	pshow(&p1);

	Point *p = new Point;						// 객체가 생성되고, 생성자가 호출된다
	Point *po = new Point();					// 객체가 생성되고, 생성자가 호출된다
	Point *poo = (Point*)malloc(sizeof(Point));	// 객체가 생성되나, 생성자가 호출되지 않는다
	// malloc 과 new 의 차이 => 생성자 호출 여부

	show(*poo);
	pshow(poo);

	Point pi = CreateObject(10,10);

	Point pr1 = Point(100,100);
	Point pr2(pr1);
}*/