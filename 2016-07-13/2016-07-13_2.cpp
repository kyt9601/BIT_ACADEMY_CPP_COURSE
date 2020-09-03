// 객체 = 속성 + 행동
// C 는 함수 중심의 언어
// 구조체의 기능 : 데이터 저장, 이동, 보관 가능

// C 언어처럼 C++ 작성하기
/*
#include <iostream>

using namespace std;

// 자동차
struct Car
{
	int speed;	// 차량 속도
	int fuel;	// 차량 연료
	int km;		// 주행 거리
};

// 엑셀레이트
void Acc(Car &car) // Call by Reference
{
	car.speed++;
	car.km++;
	car.fuel--;
}
// void Acc(Car car) // Call by Value
// {
//		car.speed++;
//		car.km++;
//		car.fuel--;
// }

// 차량 정보 출력
void Show(Car car)
{
	cout << "차량정보 : " << car.speed << " " << car.km << " " << car.fuel << endl;
}

// 자동차 경주 게임
void main()
{
	// 플레이어의 자동차
	Car car = {0, 0, 100};

	// 출발
	Acc(car); // car 구조체 (또는 주소값) 를 보냄
	Show(car);
}
*/

// C++ 답게 작성하기
#include <iostream>

using namespace std;

// 자동차
struct Car
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

// 자동차 경주 게임
void main()
{
	// 플레이어의 자동차
	Car car = {0, 100, 0};

	car.Show();
	car.Acc();
	car.Show();
}

// 함수중심 에서 객체중심 으로 바뀌었다