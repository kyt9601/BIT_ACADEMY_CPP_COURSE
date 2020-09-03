// 문자열 추상화

// 1) 생성자 : char *생성자
// 2) 복사 생성자
// 3) 소멸자
// 4) 대입 연산자 오버로딩

// 대입 연산자 오버로딩
// 1) +
// 2) +=
// 3) ==, !=
// 4) >>, <<

#include <iostream>

using namespace std;

class String
{
private :
	char *str;	// 문자열 저장 공간
	int len;	// 문자열의 길이
public :
	String()
	{
		str = NULL;
		len = 0;
	}
	String(char *s)
	{
		len = strlen(s);
		str = new char[strlen(s)+1];
		strcpy(str,s);
	}
	String(const String &s)
	{
		len = strlen(s.str);
		delete []this->str;
		str = new char[strlen(s.str)+1];
		strcpy(str,s.str);	
	}
	String operator + (const String &s)
	{
		String Str;
		char *temp = strcat(this->str,s.str);

		Str.len = this->len + s.len;
		Str.str = new char[strlen(temp)+1];
		strcpy(Str.str,temp);
		
		return Str;
	}
	bool operator == (const String &s)
	{
		return strcmp(this->str,s.str) ? false : true;
	}
	bool operator != (const String &s)
	{
		return strcmp(this->str,s.str) ? true : false;
	}
	String &operator += (const char *s)
	{
		return (*this);
	}

	void show()
	{
		cout << str;
	}
	/*void setStr()
	{
		cin >> 
	}*/

	~String()
	{
		if (str != NULL) { delete []str; }
	}
};
// 객체 출력자
ostream &operator << (ostream &os, String &p)
{
	p.show();
	return os;
}/*
ostream &operator >> (ostream &os, String &p)
{
	cin >> p.setStr();
	return os;
}*/

void main()
{
	String s1 = "ABC";
	String s2 = "BBB";

	cout << s1 << endl;

	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;

	String s3 = (s1 + s2);

	//cout << s1 + s2 << endl;

	/*s1 += s2;
	s1 += "CCC";*/
}