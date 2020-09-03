/*// const

// 1) const �� ����� ��ü 
// 2) const ��� ���� 
// 3) const ��� �Լ� 

#include <iostream>

using namespace std;

class Score
{
private :
	int C;
	int Cpp;
	float Avg;	// ��հ�
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
	void show()			// �Ϲ� ��ü�� �����ε��� �Ϲ� ��ü�� ���ȴ�
	{
		cout << "C : " << C << endl;
		cout << "Cpp : " << Cpp << endl;
		cout << "Avg : " << Avg << endl;
	}
	void show() const	// const ��ü�� �����ε��� const ��ü�� ���ȴ�
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
	// const �� ����� ��ü
	// 1) score ��ü�� ���� ������ �Ұ��� => ��� ������ ���� ���ȭ
	// 2) �Ϲ� ����Լ��� ȣ�⵵ �Ұ���, const ��� �Լ��� ȣ�� ����

	// score.setC(100)		�Ұ���

	score.showConst();		// ����
	score.show();			// ���� - �����ε�
}*/