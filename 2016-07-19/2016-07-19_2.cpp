/*// this �������� ����� ����

// ����Լ��� ȣ���� ��ü�� �ǹ�
// this ��ü�� �ּҰ� (������)
// this pointer

#include <iostream>

using namespace std;

class Bird
{
private :
	int age;	// ����
	int sex;	// ����
public :
	void Fly()
	{
		cout << "this : " << this << endl;
	}
	void Feed(Bird *pthis)	// Bird ��ü�� �ּҰ��� ����
	{
		cout << "pthis : " << pthis << endl;
		cout << "this : " << this << endl;
	}
};

void main()
{
	Bird Eagles;	// ������
	Bird Duck;		// ����
	// ��� ������ �� �ν��Ͻ����� ����������

	// ��� �Լ��� ���� �ν��Ͻ����� �ϳ��� �����Ͽ� ����Ѵ�
	// (�ڵ����� Eagles, Bird �� �����ּ� (this) �� �Ű������� �Ѿ��)
	// Eagles.Fly(&Eagles) => Eagles.Fly(this) => Eagles.Fly()
	// (*this).age == this->age

	cout << "Eagles : " << &Eagles << endl;
	Eagles.Fly();
	Eagles.Feed(&Eagles);
	cout << "Duck : " << &Duck << endl;
	Duck.Fly();
	Duck.Feed(&Duck);
}*/