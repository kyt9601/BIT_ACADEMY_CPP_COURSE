// OOP (객체 지향)

// 객체란?

// 속성 (데이터) 과 행동 (메소드) 으로 나타낼 수 있는 것
// 고유한 속성이 있어야 함
/*// 그 속성을 유지하기 위한 행동이 있어야 함

// 1) 추상화 : 현실 세계에 실존하는 객체를 관찰하고 표현하는 방법
// 현실 세계의 객체를 프로그램에서 필요한 만큼의 속성과 행동으로 추출하는 기법

// ex) 휴대폰
// 속성 : 전화번호, 일련번호, CPU, 화면크기, 제조사, 모델명, 카메라
// 행동 : 발신, 수신, 촬영, 웹서핑, 문자송신

// C 언어 에서는 구조체를 이용하여 추상화
// #include <stdio.h>
// 
// struct Car
// {
// 	int CarSpeed;		// 차량 속도
// 	int CarNo;			// 차량 번호
// 	char CarNmae[20];	// 차량 이름
// };


#include <iostream>

using namespace std;

// 자동차의 속성
struct Car
{
	int CarSpeed;		// 차량 속도
	int CarNo;			// 차량 번호
	char CarNmae[20];	// 차량 이름
};

// 자동차의 정보를 출력
void ShowCar(int CarSpeed, int CarNo, char *CarNmae)
{
	cout << CarSpeed << " " << CarNo << " " << CarNmae << endl;
}
void ShowCar(Car MyCar)
// void ShowCar(struct Car MyCar)
{
	cout << MyCar.CarSpeed << " " << MyCar.CarNo << " " << MyCar.CarNmae << endl;
}

void main()
{
	Car YourCar,MyCar = {100, 4885, "그렌저"}; // YourCar, MyCar 라는 구조체를 Car 형식으로 만들고나서 MyCar 를 초기화 해주었다
	// struct Car YourCar, MyCar;
	ShowCar(MyCar);
}*/