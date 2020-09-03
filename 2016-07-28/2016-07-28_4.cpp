/*// list

// 이중 연결 리스트 (더미 노드 방법) 를
// 템플릿으로 구현한 클래스

// 데이터의 양이 정해지지 않은 경우

#include <iostream>

#include <list>
#include <algorithm>
#include <string>

using namespace std;

void main()
{
	list <string> l(5,"BBB");
	list <string> slist(l.begin(), l.end());	// l 복사

	// 리스트 전체 출력
	list <string> ::iterator p;

	for (p=slist.begin(); p!=slist.end(); p++) { cout << *p << endl; }
	cout << endl;

	list <string> SList;
	SList.push_back("AAA");	// 맨뒤에 대입
	SList.push_front("BBB");	// 맨앞에 대입
	SList.insert(SList.end(),"CCC");	// 끝에 CCC 추가

	for (p=SList.begin(); p!=SList.end(); p++) { cout << *p << endl; }
	cout << endl;

	SList.reverse();	// 값 반대로 정렬

	for (p=SList.begin(); p!=SList.end(); p++) { cout << *p << endl; }
	cout << endl;

	list <string> ::reverse_iterator rp;	// 반대로 가는 이터레이터

	for (rp=SList.rbegin(); rp!=SList.rend(); rp++) { cout << *rp << endl; }	// rbegin, rend 는 각각 반대로
	cout << endl;
}*/