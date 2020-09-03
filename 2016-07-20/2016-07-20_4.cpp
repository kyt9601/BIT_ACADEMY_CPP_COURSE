/*// 객체와 메모리

// 복사 생성자가 필요한 경우
// => 멤버 변수 중에 포인터 변수가 있는 경우

// 멤버 변수 중에 포인터 변수가 있는 경우
// 복사 생성자, 소멸자
// 반드시 필요

// '얕은 복사' 와 '깊은 복사'

// 얕은 복사 : C++ 컴파일러가 디폴트 복사 생성자를 실행함 (단순 대입 연산)
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
//	Point(const Point &copy)	// 디폴트 복사 생성자
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
	// 복사 생성자를 만들기 전에는, 자동으로 값이 들어가지만
	// 복사 생성자를 만든 후에는, 그 기능이 상실된다

	p1.show();
	p2.show();
}*/