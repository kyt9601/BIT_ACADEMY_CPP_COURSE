/*// 연관 컨테이너 (트리) : 계층적인 자료구조

// map, multimap
// 키와 값을 한 쌍으로 pair 구조체를 저장한다

//		Key		Value
// [	1	:	김철수	]
// [	2	:	김영수	]

#include <iostream>

#include <map>
#include <string>

using namespace std;

void main()
{
	// map 은 Key, Value 2개가 필요하다
	map <int,string> m;

	// vector 처럼 인덱스를 통한 접근이 가능하다
	m[0] = "김철수";
	m[1] = "홍길동";
	cout << m[0] << endl;

	map <string,string> sm;

	sm["k1"] = "김철수";
	sm["k2"] = "홍길동";
	cout << sm["k2"] << endl;

	// map 의 insert() 는
	// make_pair() , Key, Value 를 이용한다
	sm.insert(make_pair("k3","김영희"));
	cout << sm["k3"] << endl;

	sm["k2"] = "이민수";	// Key 값이 같으면, Value 가 바뀐다
	cout << sm["k2"] << endl;

	sm.insert(make_pair("k2","김영희"));	// map 은 중복값을 허용하지 않기 때문에, insert() 로는 변경되지 않는다
	cout << sm["k2"] << endl;

	for (map <string,string> ::iterator p=sm.begin(); p!=sm.end(); p++)
	{
		cout << p->first << ":" << p->second << endl;
	}
}*/