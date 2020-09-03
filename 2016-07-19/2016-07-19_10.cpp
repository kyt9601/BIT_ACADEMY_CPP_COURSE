/*// static (정적)

// C 에서
// - 전역 변수를 선언할 때
// - 함수의 지역 변수를 소멸하지 않을 때

#include <iostream>

using namespace std;

// 함수가 호출된 횟수를 화면에 출력
void IncreateCount()
{
	int count = 1;
	static int cnt = 1;
	// 지역 변수 => stack
	// static 영역에 저장 : 전역변수 => 정적변수 - 계속해서 메모리에 상주하는 변수

	cout << "count : " << count++ << endl;
	cout << "static cnt : " << cnt++ << endl;
}

void main()
{
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
	IncreateCount();
}*/