/*// C언어의 구조체 배열 리뷰

// 구조체 : 기본 타입으로 표현하기 어려운 복잡한 데이터를 조합한 것
// - C++ 의 클래스와 개념은 같다

#include <iostream>

using namespace std;

// 좌표
struct Point
{
	// - 구조체 변수 정렬 (얼라이언트)
	// 간격을 유지하기 위해
	// 변수 중 가장 큰 것만큼 모두 메모리가 할당됨 (6byte * 4 = 24byte)
	// 배열은 예외
	int x;
	char a;
	short c;
	int y;
	char b;
};
struct Pt
{
	// 메모리 낭비를 막기 위해, 작은것 부터 모아서 선언한다
	char a;
	char b;
	short c;
	int x;
	int y;
};
class Pit
{
private :
	int x;
	int y;
public :
	Pit(int x = 0, int y = 0) : x(x), y(y) { cout << "Pit" << endl; }
	~Pit() { cout << "~Pit" << endl; }
};

void main()
{
	Point point;
	cout << sizeof(point) << endl;

	Pt pt;
	cout << sizeof(pt) << endl;

	Pit pit[5];
}*/