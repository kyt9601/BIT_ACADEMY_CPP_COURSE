/*// ���� �����̳� (Ʈ��) : �������� �ڷᱸ��

// set, multiset
// �������� �˻��� ������

#include <iostream>

#include <set>
#include <vector>
#include <list>;

using namespace std;

void main()
{
	set <int> s; 
	
	s.insert(10);
	s.insert(10);
	s.insert(10);

	set <int> ::iterator sp;

	// Ʈ���� [] ������ �Ұ���
	for (sp=s.begin(); sp!=s.end(); sp++) { cout << *sp << endl; }
	// 10 10 10	(X)
	// 10		(O)
	// set �� �ߺ����� ������� �ʴ´�
	cout << endl;

	vector <int> v;
	
	v.push_back(10);
	v.push_back(20);
	v.push_back(10);
	v.push_back(30);
	v.push_back(10);

	vector <int> ::iterator vp;

	for (vp=v.begin(); vp!=v.end(); vp++) { cout << *vp << endl; }
	cout << endl;

	// vector �� �ߺ����� set �� �̿��� �ڵ����� �Ÿ���
	set <int> sv;

	sv.insert(v.begin(),v.end());

	set <int> ::iterator vsp;

	for (vsp=sv.begin(); vsp!=sv.end(); vsp++) { cout << *vsp << endl; }
	cout << endl;

	// multiset ����
	set < list <int> > mulset;
	
	list <int> l;

	l.push_back(10);
	l.push_back(10);
	l.push_back(10);

	mulset.insert(l);
}*/