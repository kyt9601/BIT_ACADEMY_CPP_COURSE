/*// const

// 1) const 로 선언된 객체 
// 2) const 멤버 변수 
// 3) const 멤버 함수 

#include <iostream>

using namespace std;

class Score
{
private :
	int C;
	int Cpp;
	float Avg;	// 평균값
public :

	void setC(int c) { C = c; }

	Score (int c = 60, int cpp = 60)
	{
		C = c;
		Cpp = cpp;
	}
	float getAvg()
	{
		Avg = (C+Cpp) / 2;
		return Avg;
	}
	void show()			// 일반 객체의 오버로딩은 일반 객체만 사용된다
	{
		cout << "C : " << C << endl;
		cout << "Cpp : " << Cpp << endl;
		cout << "Avg : " << Avg << endl;
	}
	void show() const	// const 객체의 오버로딩은 const 객체만 사용된다
	{
		cout << "C : " << C << endl;
		cout << "Cpp : " << Cpp << endl;
		cout << "Avg : " << Avg << endl;
	}
	void showConst() const
	{
		cout << "C : " << C << endl;
		cout << "Cpp : " << Cpp << endl;
		cout << "Avg : " << Avg << endl;
	}
};

void main()
{
	const Score score(100, 100);
	// const 로 선언된 객체
	// 1) score 객체의 값의 변경이 불가능 => 멤버 변수의 값을 상수화
	// 2) 일반 멤버함수는 호출도 불가능, const 멤버 함수만 호출 가능

	// score.setC(100)		불가능

	score.showConst();		// 가능
	score.show();			// 가능 - 오버로딩
}*/