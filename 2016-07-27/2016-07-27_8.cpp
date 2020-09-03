/*// STL (Standard Template Library)

// 구성 요소

// 1) 컨테이너 : 데이터들을 모아두고 관리할 수 있는 자료구조
//    => 기존 C,C++ 은 자료구조를 지원하지 않았다 (연결 리스트, 스택, 큐, 트리)
//	  => STL 에서는 미리 만들어진 클래스 형태로 지원

// 2) 이터레이터 (반복자) : 컨테이너를 순회하면서 각각의 테이터 요소를 접근하여 사용

// 3) 알고리즘 (함수들)
//	  ex) sort, copy, search ...

// STL 짜보기
#include <iostream>
#include <vector>

using namespace std;

// VECTOR (동적 배열)
template <class T>
class vector
{
private :
	T *data;		// 데이터 저장 공간
	int capacity;	// 용량
	int size;		// 사용중인 개수
public :
	vector(int capa = 10)
	{
		capacity = capa;
		data = new T[capacity];
		size = 0;
	}

	T &operator [] (int index)
	{
		if (index<0 || size-1<index)
		{
			cout << "ERROR" << endl;
			exit(0);
		}

		return data[index];
	}

	int getSize(){ return size; }

	void Insert(int index, T val)
	{
		if (size == index)
		{	// 용량이 가득차면, 자동 증가
			Resize();
		}
		if (size < index)
		{
			cout << "Index ERROR" << endl;
			exit(0);
		}
		
		for (int i=size+1; index<=i; i--) { data[i] = data[i-1]; }

		data[index] = val;
		size++;
	}
	void InsertBack(T val)
	{
		Insert(size,val);
	}

	void Resize()
	{
	
	}

	void Erase(int index)	// index 번째에 있는 데이터 삭제
	{
	
	}
	void pop_back()
	{
		erase(size);
	}
};

void main()
{
	vector <int> v(5);

	v.InsertBack(10);
	v.InsertBack(20);
	v.InsertBack(30);

	v.Insert(0,40);

	for (int i = 0; i<v.getSize(); i++) {cout << v[i] << endl; }
}*/