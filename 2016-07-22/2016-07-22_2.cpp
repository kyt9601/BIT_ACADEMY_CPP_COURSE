/*// ����� 3���� ����
// public ���, protected ���, private ���

#include <iostream>

using namespace std;

//					(�������)		public		protected		private
//	(���)
//	private		a					���ٱ���	���ٱ���		���ٱ���
//	protected	b					protected	protected		private
//	public		c					public		protected		private

// private > protected > public ������ ���ϴ�

// pubic ����� private ���� ��������� ������, private ����� �ȴ�
// protected ����� public ���� ��������� ������, �״�� protected ����̴�

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