#include <iostream>

using namespace std;

class String
{
private :
	char *str;
	int len;
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
		len = s.len;
		str = new char[strlen(s.str)+1];
		strcpy(str,s.str);	
	}
	String operator + (const String &s)
	{
		String Str;

		char *temp;
		temp = new char[strlen(str)+strlen(s.str)+1];
		strcpy(temp,str);
		strcat(temp,s.str);

		Str.len = len + s.len;
		Str.str = new char[strlen(temp)+1];
		strcpy(Str.str,temp);

		delete []temp;
		
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
	String &operator += (const String &s)
	{
		char *temp;
		temp = new char[strlen(str)+strlen(s.str)+1];
		strcpy(temp,str);
		strcat(temp,s.str);

		delete []str;

		len += s.len;
		str = new char[strlen(temp)+1];
		strcpy(str,temp);

		delete []temp;
		
		return (*this);
	}
	String &operator += (const char *s)
	{
		char *temp;
		temp = new char[strlen(str)+strlen(s)+1];
		strcpy(temp,str);
		strcat(temp,s);

		delete []str;

		len += strlen(s);
		str = new char[strlen(temp)+1];
		strcpy(str,temp);

		delete []temp;
		
		return (*this);
	}

	void Show()
	{
		cout << str << endl;
	}
	void Input()
	{
		char temp[1024];
		cin >> temp;

		if (str != NULL) { delete []str; }

		len = strlen(temp);
		str = new char[strlen(temp)+1];
		strcpy(str,temp);

		delete []temp;
	}

	~String()
	{
		if (str != NULL) { delete []str; }
	}
};

ostream &operator << (ostream &os, String &p)
{
	p.Show();

	return os;
}
void operator >> (ostream &os, String &p)
{
	p.Input();
}

void main()
{
	String s1 = "ABC";
	String s2 = "ABC";
	String s3 = "DEF";

	cout << (s1 == s2) << endl;
	cout << (s1 != s2) << endl;

	String s4(s1 + s2);
	cout << s4;

	s2 += s3;
	cout << s2;

	s3 += "GHI";
	cout << s3;

	String s5;
	cin >> s5;
	cout << (s5 + s1);
}