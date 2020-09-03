/*// 생성자의 활용
// private 생성자

// 디자인 패턴

// 싱글톤 (Singleton)

#include <iostream>

using namespace std;

class Bank
{
private :
	int money;
	static Bank *pBank; // 자기 참조 클래스
private :
	Bank(int Money)
	{
		money = Money;
	}

public :
	static Bank *getInstance()
	{
		if(pBank == NULL)
			pBank = new Bank(1000);

		return pBank;
	}
	void InputMoney() {}
	void OutputMoney() {}
};

Bank *Bank::pBank = NULL;

void main()
{
	Bank *p = Bank::getInstance(); 

	p->InputMoney();
	p->OutputMoney();
}*/