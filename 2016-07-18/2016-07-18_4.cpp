/*// ������ �迭 : �����͵��� ����

// - �ּҰ����� �迭
// - ��ü ũ�� = ������ ũ�� * �迭�� ũ��
// - ���� ������ ���� ������ �����Ǵ� ���� �ƴϰ�, ������ ������ �����ȴ�

#include <iostream>

using namespace std;

// ��ǥ
struct Point
{
	int x;
	int y;
};

void main()
{
	Point point;	// 8byte ��ŭ �Ҵ�
	printf("%d\n",sizeof(point));		// 8

	Point *p;	// ������ ����
	printf("%d\n",sizeof(p));			// 4

	Point pt[5];
	printf("%d\n",sizeof(pt));			// 40

	pt[0].x = 0;
	pt[0].y = 0;

	Point *pts[5];		// ����ü�� ������ �迭 (Point ����ü�� ����Ű�� 5���� ������ �迭)
	printf("%d\n",sizeof(pts));			// 20

//	(*pts[0]).x = 1;
//	(*pts[0]).y = 1;
//	pts[0]->x = 1;
//	pts[0]->y = 1;

	// ������ �迭�� ���� �����ϱ� ����
	// ���� ������ �Ҵ� (�ʱ�ȭ) ���־�� �Ѵ�

	pts[0] = new Point;
	// pts[0] = (Point*)malloc(sizeof(Point))
	pts[0]->x = 1;
	pts[0]->y = 1;
	printf("x : %d, y : %d\n",pts[0]->x,pts[0]->y);
	delete pts[0];
}*/