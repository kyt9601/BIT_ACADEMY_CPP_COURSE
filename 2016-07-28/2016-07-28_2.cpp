/*// vector �����̳�

// ���� �迭 Ŭ����
// �⺻ũ�� : 10
// ��������, 50% �� �ڵ�����

#include <iostream>

#include <vector>
#include <list>
#include <deque>

// �� ������ �����̳��� ���� �Լ���

// begin() : ���� (���ͷ����� ����)
// end() : ���� ���� (���ͷ����� ����)
// size() : ũ��
// resize() : ũ�� ����
// clear() : �����̳� ����
// empty() : �� �����̳� Ȯ��
// erase() : ���� (���ͷ����� ���)
// sort() : ����

using namespace std;

void main()
{
	vector <int> v;
	list <int> l;
	deque <int> d;

	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	l.push_back(10);
	l.push_back(20);
	l.push_back(30);
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);

	// ���ͷ�����
	// - �����̳� ���θ� ��ȸ�ϸ�, �� ���ҿ� �����ϴ� ������ ����
	// - �����̳ʿ����� ��ġ ����
	vector <int> ::iterator vp;
	list <int> ::iterator lp;
	deque <int> ::iterator dp;

	for (vp=v.begin(); vp!=v.end(); vp++) { cout << *vp << endl; }
	for (lp=l.begin(); lp!=l.end(); lp++) { cout << *lp << endl; }
	for (dp=d.begin(); dp!=d.end(); dp++) { cout << *dp << endl; }

	cout << *v.begin() << endl;
	cout << *l.begin() << endl;
	cout << *d.begin() << endl;

	cout << *(v.end()-1) << endl;
	cout << *(l.end()-1) << endl;
	cout << *(d.end()-1) << endl;
}*/