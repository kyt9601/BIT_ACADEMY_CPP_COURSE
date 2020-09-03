/*// 함수 오버로딩 (함수 다중 정의)
// 같은 이름의 함수가 여러개 존재할 수 있다 (C 에서는 불가능)

// 타입은 달라도 로직이 같은 경우

// 단, 이름은 같아도
// 매개변수의 개수, 매개변수의 타입은 달라야 한다

#include <iostream>

using namespace std;

int plus(int x, int y)
{
	return x + y;
}
double plus (float x, float y)
{
	return x + y;
}
double plus (int x, float y)
{
	return x + y;
}
double plus (float x, int y)
{
	return x + y;
}

void main()
{
	cout << plus(int(3.14),int(3.14)) << endl;
	cout << plus((float)3.14,(int)3.14) << endl;
	cout << plus(int(3.14),(float)3.14) << endl;
	cout << plus((float)3.14,float(3.14)) << endl;
}*/