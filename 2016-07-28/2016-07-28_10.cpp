// 알고리즘

#include <iostream>

#include <vector>
#include <algorithm>
#include <numeric>	// accumulate 사용

using namespace std;

void foo(int val)
{
	cout << val << endl;
}

void main()
{
	vector <int> v1;

	v1.push_back(10);
	v1.push_back(30);
	v1.push_back(20);
	v1.push_back(40);
	v1.push_back(50);

	// 값 찾기
	cout << *find(v1.begin(),v1.end(),20) << endl;	// find(시작,끝,값) 이터레이터 반환 
	cout << endl;

	v1.erase(find(v1.begin(),v1.end(),30));		// 30 을 찾아서 지워라

	vector <int> v2;

	v2.push_back(20);
	v2.push_back(40);

	// 부분 구간 검색 : 부분집합 컨테이너 찾기
	cout << *search(v1.begin(),v1.end(),v2.begin(),v2.end()) << endl;	// search(찾을 시작 구간, 찾을 끝 구간,시작,끝) 찾은 시작 주소 반환
	cout << endl;

	// 시작부터 끝까지 순서대로 값을 통해 함수를 호출
	for_each(v1.begin(),v1.end(),foo);	// for_each(시작,끝,함수)
	cout << endl;

	// 시작 주소부터 구간 복사
	copy(v2.begin(),v2.end(),v1.begin());	// copy(복사할 시작 구간, 복사할 끝 구간, 시작)
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

	// 작은값부터 정렬
	sort(v2.begin(),v2.end());	// sort(시작,끝)
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

	// v1 의 끝에 v2 를 이어붙인다
	v1.insert(v1.end(),v2.begin(),v2.end());
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

//	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),3);
//	for_each(v1.begin(),v1.end(),foo);
//	cout << endl;

//	cout << accumulate(v1.begin(),v1.begin(),20) << endl;
//	cout << endl;
}