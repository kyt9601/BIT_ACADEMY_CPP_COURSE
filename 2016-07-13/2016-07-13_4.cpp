/*// C++ 에서의 객체

// 클래스
// struct 를 대체하는, 객체를 정의하는 방법

// 접근 지정자의 차이
// struct 는 접근이 자유 ==> public	(밖에서도 쓸 수 있다)
//			class		==>	private		(클래스 안에서만 쓸 수 있다)
// 캡슐화

#include <iostream>

using namespace std;

class Car
{
	// 속성
	int speed;	// 차량 속도
	int fuel;	// 차량 연료
	int km;		// 주행 거리

	// 행동
	void Acc() // 자동차의 엑셀레이트 기능
	{
		speed++;
		fuel--;
		km++;
	}

	// 차량 정보 출력
	void Show()
	{
		cout << "차량 정보 : " << speed << " " << fuel << " " << km << endl;
	}
};

void main()
{
	Car car;
	car.Acc();
}*/