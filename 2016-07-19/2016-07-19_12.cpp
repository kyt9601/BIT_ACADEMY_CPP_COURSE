// static ��� �Լ�

// ��ü ���� ȣ�� ������ �޼ҵ�
// ��ü�� �ƴ�, Ŭ������ �ൿ
// this �� �Ѿ�� �ʴ´�

#include <iostream>

using namespace std;

class Calc
{
// private �� �Լ��� �ܺο��� ����� �Ұ���
public :
static	int plus(int x, int y) { return x + y; }
static	int minus(int x, int y) { return x - y; }
};

class Marin
{
private :
		int hp;			// ü��
static	int AttUp;		// ����
static	int DefUp;		// ���
public :
		void Attack() { cout << "����������" << endl; }
//		void AttUpgrade() { AttUp++; }
//		void DefUpgrade() { DefUp++; }
static 	void AttUpgrade() { AttUp++; }
static	void DefUpgrade() { DefUp++; }

};
// �߿�!!
int Marin::AttUp = 0;
int Marin::DefUp = 0;

void main()
{
	Calc calc;
//	cout << calc.plus(5,15) << endl;
	cout << Calc::plus(5,15) << endl;

	Marin m;
	m.Attack();

//	m.AttUpgrade();				���� 1���� ���׷��̵尡 �ƴ�
	Marin::AttUpgrade();	//	���� Ŭ������ ���׷��̵�
	Marin::DefUpgrade();
//	static ��� �Լ��� this �� �Ѿ�� �ʴ´�

//	�׷��Ƿ�, �Ϲ� ��� ������ ������ �Ұ����ϰ�
//	static ��� ������ ����� �����ϴ�

	m.Attack();
}