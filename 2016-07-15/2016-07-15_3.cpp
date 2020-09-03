/*// 초기화 리스트 (이니셜라이저)
// 객체가 만들어지기 전에 초기화 됨

#include <iostream>

using namespace std;

// 좌표
class Point
{
	// 멤버 변수
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

	// 생성자
	Point() : x(100), y(200) //-, z(300)	// 초기화 리스트 (이니셜라이저) - 객체가 만들어지기 전
	{
		Point(0,0);							// 생성자 - 객체가 만들어진 후
	}
	Point(int x, int y) //- : z(300)
	{
		this->x = x;
		this->y = y;
	}

	// 멤버 함수
	void Show()
	{
		cout << "x : " << x << endl << "y : " << y << endl;
	}
};

void main()
{
	Point pt = Point(); // 초기화 리스트 (이니셜라이저)

	pt.Show();
}*/