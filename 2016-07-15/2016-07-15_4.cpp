/*// �������� Ȱ��
// private ������

// ������ ����

// �̱��� (Singleton)

#include <iostream>

using namespace std;

class Bank
{
private :
	int money;
	static Bank *pBank; // �ڱ� ���� Ŭ����
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