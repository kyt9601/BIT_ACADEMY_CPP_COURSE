/*// ���� �� �ڵ��� �� ����

// is - a ����
// Bus is a Car.

// �ڵ����� �����̴� (X)
// ������ �ڵ����̴� (O)

// �ڵ��� - �θ�
// ���� - �ڽ�

#include <iostream>

using namespace std;

class Car				// �θ� Ŭ���� (����, ���, �⺻, Base, Super, Classic)
{
public :
	int CarNo;		// ���� ��ȣ
};

// ���
class Bus : public Car	// �ڽ� Ŭ���� (����, �Ļ�)
{
private :
	int LineNo;		// �뼱 ��ȣ
};

void main()
{
	Bus b;
	cout << b.CarNo << endl;
}*/