/*// vector 컨테이너

// 동적 배열 클래스
// 기본크기 : 10
// 가득차면, 50% 씩 자동증가

#include <iostream>

#include <vector>
#include <list>
#include <deque>

// 세 시퀀스 컨테이너의 공통 함수들

// begin() : 시작 (이터레이터 리턴)
// end() : 끝의 다음 (이터레이터 리턴)
// size() : 크기
// resize() : 크기 조정
// clear() : 컨테이너 정리
// empty() : 빈 컨테이너 확인
// erase() : 삭제 (이터레이터 사용)
// sort() : 정렬

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

	// 이터레이터
	// - 컨테이너 내부를 순회하며, 각 원소에 접근하는 포인터 개념
	// - 컨테이너에서의 위치 정보
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