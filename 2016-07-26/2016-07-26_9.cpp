/*// C++ ���� �߰��� STL

// C, C+ ������ ���ڿ�
// char name[20]; char *str = "ABC";


// STL (Standard Template Library)
// String Ŭ���� : ���ڿ��� �߻�ȭ �� Ŭ����

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string str1 = "ABC";	// ������
	string str2 = "DEF";	// ������
	cout << str1 << str2 << endl;

	string str3 = str1 + str2;	// + ������ �����ε�
	cout << str3 << endl;

	str1 += str2;
	cout << str1 << endl;

	if (str1 != str2) { cout << "���� �ʴ�" << endl; }	// == ������ �����ε�

	// ũ�⸦ ������ ���� �ʿ䰡 ����
	string str4;
	cin >> str4;
	cout << str4 << endl;
}*/