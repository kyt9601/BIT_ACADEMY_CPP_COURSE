/*// ����Ʈ �Ķ���� (�⺻ �Ű�����)
// �Ű������� �⺻������ �������� �ִ� ��

// ���� C++ ������ ����

#include <iostream>

using namespace std;

// ������� ��ȭ��ȣ
void UserInfo(char *phone = "010")
{
	cout << phone << endl;
}
// void UserInfo(char *phone = "010", int age = 1)
// {
// 	cout << phone << " " << age << endl;
// }
// ������, ���ڿ���, �Ѵ�
// ���ڸ��� ���� �Ұ���
// ��ȣ���� �߻��ϱ� ������ UserInfo("010-9420-2174") �� �Ұ���
void UserInfo(char *phone = 017, int age = 1, int money = 1)
{
	cout << phone << " " << age << " " << money << endl;
}
// ����Ʈ �Ķ���� �� ���ʺ��� ������ �� �ִ�

void main()
{
	char *p = "sdddfsdkflmdkslmfklsdmfklsmfklsmklf";

	cout << p << endl;

	UserInfo();
	UserInfo("010-9420-2174");
}*/