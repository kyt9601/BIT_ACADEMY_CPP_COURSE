/*// 상속의 3가지 유형
// public 상속, protected 상속, private 상속

#include <iostream>

using namespace std;

//					(상속지정)		public		protected		private
//	(멤버)
//	private		a					접근금지	접근금지		접근금지
//	protected	b					protected	protected		private
//	public		c					public		protected		private

// private > protected > public 순으로 강하다

// pubic 멤버가 private 으로 상속지정을 받으면, private 멤버가 된다
// protected 멤버가 public 으로 상속지정을 받으면, 그대로 protected 멤버이다

class AAA
{
private :
	int a;
protected :
	int b;
public :
	int c;
};

// class BBB : public AAA
// class BBB : protected AAA
class BBB : private AAA
{
public :
	void bbb() { cout << c << endl; }
};

// class CCC : public AAA
// class CCC : protected BBB
class CCC : private BBB
{
public :
	void ccc() { cout << c << endl; }
};

void main()
{
	CCC c;
	cout << c.c << endl;
}*/