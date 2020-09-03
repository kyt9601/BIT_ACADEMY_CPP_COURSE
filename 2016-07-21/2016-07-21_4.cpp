/*// 버스 와 자동차 의 관계

// is - a 관계
// Bus is a Car.

// 자동차는 버스이다 (X)
// 버스는 자동차이다 (O)

// 자동차 - 부모
// 버스 - 자식

#include <iostream>

using namespace std;

class Car				// 부모 클래스 (상위, 기반, 기본, Base, Super, Classic)
{
public :
	int CarNo;		// 차량 번호
};

// 상속
class Bus : public Car	// 자식 클래스 (하위, 파생)
{
private :
	int LineNo;		// 노선 번호
};

void main()
{
	Bus b;
	cout << b.CarNo << endl;
}*/