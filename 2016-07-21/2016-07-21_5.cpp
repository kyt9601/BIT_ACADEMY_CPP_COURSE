/*// private : 접근 금지
// public : 공용 (자유)

// protected : 자기 자신 클래스 + 자기 자식 클래스
// 에서만 접근이 가능한 멤버

#include <iostream>

using namespace std;

class AAA
{
private :
	int a;
protected :
	int b;
public :
	int c;
};
class BBB : public AAA
{
public :
	void show()
	{
		cout << b << endl;
	}
};

void main()
{
	AAA aaa;
	BBB bbb;

//	cout << aaa.a << endl;		private 멤버는 외부에서 출력도 불가능 (접근 불가능)
//	cout << aaa.b << endl;		// 불가능
	cout << aaa.c << endl;

	cout << bbb.a << endl;
	cout << bbb.b << endl;
	cout << bbb.c << endl;

}*/

// 클래스의 외부에서 출력, 접근 가능한 것은 public 만