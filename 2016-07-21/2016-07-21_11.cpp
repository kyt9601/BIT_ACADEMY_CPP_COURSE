#include <iostream>

using namespace std;

class City
{
private :
	int x;	// x 좌표
	int y;	// y 좌표
	char name[20];
public :
//	void buy() {}
//	void build() {}
};

class GenetalCity : public City
{
private :
	int price;
	Building blist[3];	// 건물들
public :
	void buy() {}		// 구매
	void sell() {}		// 판매
};

class ItemCity : public City
{
private :
	int fee;	// 사용료
public :
	void UseCard() {}
};

void main()
{

}