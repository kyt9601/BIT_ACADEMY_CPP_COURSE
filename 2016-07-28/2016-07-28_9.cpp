/*// ���� �����̳� (Ʈ��) : �������� �ڷᱸ��

// map, multimap
// Ű�� ���� �� ������ pair ����ü�� �����Ѵ�

//		Key		Value
// [	1	:	��ö��	]
// [	2	:	�迵��	]

#include <iostream>

#include <map>
#include <string>

using namespace std;

void main()
{
	// map �� Key, Value 2���� �ʿ��ϴ�
	map <int,string> m;

	// vector ó�� �ε����� ���� ������ �����ϴ�
	m[0] = "��ö��";
	m[1] = "ȫ�浿";
	cout << m[0] << endl;

	map <string,string> sm;

	sm["k1"] = "��ö��";
	sm["k2"] = "ȫ�浿";
	cout << sm["k2"] << endl;

	// map �� insert() ��
	// make_pair() , Key, Value �� �̿��Ѵ�
	sm.insert(make_pair("k3","�迵��"));
	cout << sm["k3"] << endl;

	sm["k2"] = "�̹μ�";	// Key ���� ������, Value �� �ٲ��
	cout << sm["k2"] << endl;

	sm.insert(make_pair("k2","�迵��"));	// map �� �ߺ����� ������� �ʱ� ������, insert() �δ� ������� �ʴ´�
	cout << sm["k2"] << endl;

	for (map <string,string> ::iterator p=sm.begin(); p!=sm.end(); p++)
	{
		cout << p->first << ":" << p->second << endl;
	}
}*/