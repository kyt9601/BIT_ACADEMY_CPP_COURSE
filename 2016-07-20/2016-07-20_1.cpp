/*// this : 자동으로 객체의 주소값을 전달함
// const : 절대 값을 변경할 수 없다
// static : stack 에 저장 될 변수가, static 영역에 저장
// => 캡슐화 완성

#include <iostream>

using namespace std;

// 삼성전자 공장에서 만들어지는 Galaxy S7
class Galaxy7
{
private :
	// const 만, static 만 일때는 선언시 초기화가 불가능하지만
const	static	int display = 5;		// 액정 크기 - 바뀌지 않고, 모두 일정하다
	// const static 둘 다 있을때는 선언시에 초기화가 가능하다
		static	int price;			// 가격
const			int serialno;		// 일련 번호 - 바뀌지 않고, 모두 다르다
const	static	int memory = 2;			// 메모리 - 바뀌지 않고, 모두 일정하다
				char phoneNo[14];	// 휴대폰 번호
				char telecom[20];	// 통신사
public :
	Galaxy7(char *phoneno = "", char *telecom = "") : serialno(205392145)	// const 멤버 변수는 "무조건" 이니셜라이저!!
	{
		strcpy(this->phoneNo,phoneno);
		strcpy(this->telecom,telecom);
	}

	void Show() const
	{
		cout << "화면 : " << display << endl;
		cout << "가격 : " << price << endl;
		cout << "일련 번호 : " << serialno << endl;
		cout << "메모리 : " << memory << endl;
		cout << "휴대폰 번호 : " << phoneNo << endl;
		cout << "통신사 : " << telecom << endl;
	}
};
// static 멤버 변수는 "반드시" 외부에서 초기화!!
int Galaxy7::price = 90;

void main()
{
	Galaxy7 g7("010-1234-5678","SKT");
	g7.Show();
}*/