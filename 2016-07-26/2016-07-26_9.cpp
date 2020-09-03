/*// C++ 에서 추가된 STL

// C, C+ 에서의 문자열
// char name[20]; char *str = "ABC";


// STL (Standard Template Library)
// String 클래스 : 문자열을 추상화 한 클래스

#include <iostream>
#include <string>

using namespace std;

void main()
{
	string str1 = "ABC";	// 생성자
	string str2 = "DEF";	// 생성자
	cout << str1 << str2 << endl;

	string str3 = str1 + str2;	// + 연산자 오버로딩
	cout << str3 << endl;

	str1 += str2;
	cout << str1 << endl;

	if (str1 != str2) { cout << "같지 않다" << endl; }	// == 연산자 오버로딩

	// 크기를 지정해 놓을 필요가 없다
	string str4;
	cin >> str4;
	cout << str4 << endl;
}*/