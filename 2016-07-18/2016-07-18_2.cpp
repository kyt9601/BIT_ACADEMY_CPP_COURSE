/*// C����� ����ü �迭 ����

// ����ü : �⺻ Ÿ������ ǥ���ϱ� ����� ������ �����͸� ������ ��
// - C++ �� Ŭ������ ������ ����

#include <iostream>

using namespace std;

// ��ǥ
struct Point
{
	// - ����ü ���� ���� (����̾�Ʈ)
	// ������ �����ϱ� ����
	// ���� �� ���� ū �͸�ŭ ��� �޸𸮰� �Ҵ�� (6byte * 4 = 24byte)
	// �迭�� ����
	int x;
	char a;
	short c;
	int y;
	char b;
};
struct Pt
{
	// �޸� ���� ���� ����, ������ ���� ��Ƽ� �����Ѵ�
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