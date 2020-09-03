/*// this 포인터의 개념과 이해

// 멤버함수를 호출한 객체를 의미
// this 객체의 주소값 (포인터)
// this pointer

#include <iostream>

using namespace std;

class Bird
{
private :
	int age;	// 나이
	int sex;	// 성별
public :
	void Fly()
	{
		cout << "this : " << this << endl;
	}
	void Feed(Bird *pthis)	// Bird 객체의 주소값을 전달
	{
		cout << "pthis : " << pthis << endl;
		cout << "this : " << this << endl;
	}
};

void main()
{
	Bird Eagles;	// 독수리
	Bird Duck;		// 오리
	// 멤버 변수는 각 인스턴스마다 생성되지만

	// 멤버 함수는 여러 인스턴스들이 하나를 공유하여 사용한다
	// (자동으로 Eagles, Bird 의 시작주소 (this) 가 매개변수로 넘어간다)
	// Eagles.Fly(&Eagles) => Eagles.Fly(this) => Eagles.Fly()
	// (*this).age == this->age

	cout << "Eagles : " << &Eagles << endl;
	Eagles.Fly();
	Eagles.Feed(&Eagles);
	cout << "Duck : " << &Duck << endl;
	Duck.Fly();
	Duck.Feed(&Duck);
}*/