#include <iostream>

using namespace std;

class City
{
private :
	int x;	// x ��ǥ
	int y;	// y ��ǥ
	char name[20];
public :
//	void buy() {}
//	void build() {}
};

class GenetalCity : public City
{
private :
	int price;
	Building blist[3];	// �ǹ���
public :
	void buy() {}		// ����
	void sell() {}		// �Ǹ�
};

class ItemCity : public City
{
private :
	int fee;	// ����
public :
	void UseCard() {}
};

void main()
{

}