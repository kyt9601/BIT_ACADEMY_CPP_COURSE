/*// 연관 컨테이너 (트리) : 계층적인 자료구조

// set, multiset
// 데이터의 검색이 빠르다

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

	// 트리는 [] 접근이 불가능
	for (sp=s.begin(); sp!=s.end(); sp++) { cout << *sp << endl; }
	// 10 10 10	(X)
	// 10		(O)
	// set 은 중복값을 허용하지 않는다
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

	// vector 의 중복값을 set 을 이용해 자동으로 거른다
	set <int> sv;

	sv.insert(v.begin(),v.end());

	set <int> ::iterator vsp;

	for (vsp=sv.begin(); vsp!=sv.end(); vsp++) { cout << *vsp << endl; }
	cout << endl;

	// multiset 구현
	set < list <int> > mulset;
	
	list <int> l;

	l.push_back(10);
	l.push_back(10);
	l.push_back(10);

	mulset.insert(l);
}*/