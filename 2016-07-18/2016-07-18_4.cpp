/*// 포인터 배열 : 포인터들의 집합

// - 주소값들의 배열
// - 전체 크기 = 포인터 크기 * 배열의 크기
// - 실제 데이터 저장 공간이 생성되는 것이 아니고, 포인터 변수만 생성된다

#include <iostream>

using namespace std;

// 좌표
struct Point
{
	int x;
	int y;
};

void main()
{
	Point point;	// 8byte 만큼 할당
	printf("%d\n",sizeof(point));		// 8

	Point *p;	// 포인터 변수
	printf("%d\n",sizeof(p));			// 4

	Point pt[5];
	printf("%d\n",sizeof(pt));			// 40

	pt[0].x = 0;
	pt[0].y = 0;

	Point *pts[5];		// 구조체의 포인터 배열 (Point 구조체를 가리키는 5개의 포인터 배열)
	printf("%d\n",sizeof(pts));			// 20

//	(*pts[0]).x = 1;
//	(*pts[0]).y = 1;
//	pts[0]->x = 1;
//	pts[0]->y = 1;

	// 포인터 배열은 값을 저장하기 전에
	// 저장 공간을 할당 (초기화) 해주어야 한다

	pts[0] = new Point;
	// pts[0] = (Point*)malloc(sizeof(Point))
	pts[0]->x = 1;
	pts[0]->y = 1;
	printf("x : %d, y : %d\n",pts[0]->x,pts[0]->y);
	delete pts[0];
}*/