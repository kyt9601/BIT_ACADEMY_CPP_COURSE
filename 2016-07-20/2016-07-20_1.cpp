/*// this : �ڵ����� ��ü�� �ּҰ��� ������
// const : ���� ���� ������ �� ����
// static : stack �� ���� �� ������, static ������ ����
// => ĸ��ȭ �ϼ�

#include <iostream>

using namespace std;

// �Ｚ���� ���忡�� ��������� Galaxy S7
class Galaxy7
{
private :
	// const ��, static �� �϶��� ����� �ʱ�ȭ�� �Ұ���������
const	static	int display = 5;		// ���� ũ�� - �ٲ��� �ʰ�, ��� �����ϴ�
	// const static �� �� �������� ����ÿ� �ʱ�ȭ�� �����ϴ�
		static	int price;			// ����
const			int serialno;		// �Ϸ� ��ȣ - �ٲ��� �ʰ�, ��� �ٸ���
const	static	int memory = 2;			// �޸� - �ٲ��� �ʰ�, ��� �����ϴ�
				char phoneNo[14];	// �޴��� ��ȣ
				char telecom[20];	// ��Ż�
public :
	Galaxy7(char *phoneno = "", char *telecom = "") : serialno(205392145)	// const ��� ������ "������" �̴ϼȶ�����!!
	{
		strcpy(this->phoneNo,phoneno);
		strcpy(this->telecom,telecom);
	}

	void Show() const
	{
		cout << "ȭ�� : " << display << endl;
		cout << "���� : " << price << endl;
		cout << "�Ϸ� ��ȣ : " << serialno << endl;
		cout << "�޸� : " << memory << endl;
		cout << "�޴��� ��ȣ : " << phoneNo << endl;
		cout << "��Ż� : " << telecom << endl;
	}
};
// static ��� ������ "�ݵ��" �ܺο��� �ʱ�ȭ!!
int Galaxy7::price = 90;

void main()
{
	Galaxy7 g7("010-1234-5678","SKT");
	g7.Show();
}*/