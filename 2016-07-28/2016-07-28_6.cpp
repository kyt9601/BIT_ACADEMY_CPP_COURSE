/*// STL ������ ������ �迭

// STL ������ ������ �迭�� ���� ���������� ����
// vector �� vector �� ����

#include <iostream>

#include <vector>
#include <list>

using namespace std;

void main()
{
	// vector <int> �� 5���� vector
	vector < vector <int> > vec(5);	// >> �پ��־�� �� > >

	vector < vector <int> > v;

	vector <int> v1(5);
	vector <int> v2(5);
	vector <int> v3(5);
	vector <int> v4(5);
	vector <int> v5(5);

	v.push_back(v1);
	v.push_back(v2);
	v.push_back(v3);
	v.push_back(v4);
	v.push_back(v5);

	for (int i=0; i<v.size(); i++)
	{
		for (int j=0; j<v[i].size(); j++)
		{
			cout << "[" << v[i][j] << "]";
		}
		cout << endl;
	}
	cout << endl;

	vector < list <int> > addr;

	list <int> L1(5);
	list <int> L2(3);
	list <int> L3(1);
	list <int> L4(7);
	list <int> L5(9);

	addr.push_back(L1);
	addr.push_back(L2);
	addr.push_back(L3);
	addr.push_back(L4);
	addr.push_back(L5);

	list <int> ::iterator lp;

	// list �� [] ���� �Ұ���
	for (int i=0; i<addr.size(); i++)
	{
		for (lp=addr[i].begin(); lp!=addr[i].end(); lp++)
		{
			cout << "[" << *lp << "]";
		}
		cout << endl;
	}
	cout << endl;
}*/