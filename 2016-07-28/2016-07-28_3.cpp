/*// vector

#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;

void main()
{
	// vector 의 생성자
	vector <int> v1(4);	// 크기
	cout << "v[0] : " << v1[0] << " capacity : " << v1.capacity() << " size : " << v1.size() << endl;
																			  
	v1.push_back(10);														  
	cout << "v[0] : " << v1[0] << " capacity : " << v1.capacity() << " size : " << v1.size() << endl;
																			  
	v1.push_back(20);														  
	cout << "v[1] : " << v1[1] << " capacity : " << v1.capacity() << " size : " << v1.size() << endl;
																			  
	v1.push_back(30);														  
	cout << "v[2] : " << v1[2] << " capacity : " << v1.capacity() << " size : " << v1.size() << endl;
																			  
	v1.push_back(40);														  
	cout << "v[3] : " << v1[3] << " capacity : " << v1.capacity() << " size : " << v1.size() << endl;
	cout << endl;

	vector <int> v2(3,10);	// 크기, 초기값
	for (int i=0; i<v2.size(); i++) { cout << v2[i] << endl; }
	cout << endl;

	vector <int> v3(v2.begin(), v2.end());	// v2 복사
	for (int i=0; i<v3.size(); i++) { cout << v3[i] << endl; }
	cout << endl;

	v2.insert(v2.begin()+2, 666);
	vector <int> v4(v2.begin(), find(v2.begin(), v2.end(), 666));	// v2 복사
	for (int i=0; i<v4.size(); i++) { cout << v4[i] << endl; }
	cout << endl;

	// #include <algorithm>
	// find(v2.begin(), v2.end(), 666);
	// v2 의 시작부터 마지막까지 666 을 찾아라

	vector <int> vec;

	vec.push_back(10);	// 뒤에 삽입
	vec.push_back(20);
	vec.push_back(30);

	vec.insert(find(vec.begin(),vec.end(),20)+1, 100);	// 20 뒤에(+1) 100 삽입

	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;

	vec.erase(vec.begin());		// 맨앞 삭제

	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;

	vec.pop_back();				// 맨뒤 삭제

	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;

	vec.erase(find(vec.begin(),vec.end(),100));		// 100 을 지워라

	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;

	vec.clear();	// 전체 삭제
	vec.erase(vec.begin(),vec.end());	// 전체 삭제

	vec.push_back(100);
	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;

	vec.erase(vec.begin(),find(vec.begin(),vec.end(),100)+1);	// 시작부터 100 까지 지워라

	for (int i=0; i<vec.size(); i++) { cout << vec[i] << endl; }
	cout << endl;
}*/