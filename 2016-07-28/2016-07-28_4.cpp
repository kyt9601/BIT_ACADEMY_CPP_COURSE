/*// list

// ���� ���� ����Ʈ (���� ��� ���) ��
// ���ø����� ������ Ŭ����

// �������� ���� �������� ���� ���

#include <iostream>

#include <list>
#include <algorithm>
#include <string>

using namespace std;

void main()
{
	list <string> l(5,"BBB");
	list <string> slist(l.begin(), l.end());	// l ����

	// ����Ʈ ��ü ���
	list <string> ::iterator p;

	for (p=slist.begin(); p!=slist.end(); p++) { cout << *p << endl; }
	cout << endl;

	list <string> SList;
	SList.push_back("AAA");	// �ǵڿ� ����
	SList.push_front("BBB");	// �Ǿտ� ����
	SList.insert(SList.end(),"CCC");	// ���� CCC �߰�

	for (p=SList.begin(); p!=SList.end(); p++) { cout << *p << endl; }
	cout << endl;

	SList.reverse();	// �� �ݴ�� ����

	for (p=SList.begin(); p!=SList.end(); p++) { cout << *p << endl; }
	cout << endl;

	list <string> ::reverse_iterator rp;	// �ݴ�� ���� ���ͷ�����

	for (rp=SList.rbegin(); rp!=SList.rend(); rp++) { cout << *rp << endl; }	// rbegin, rend �� ���� �ݴ��
	cout << endl;
}*/