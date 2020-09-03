/*// [] 연산자 오버로딩 ==> 인덱서

// 배열의 가장 큰 특징 : 인덱스를 통한 랜덤 엑세스 가능

// 배열
// - 속성 : 저장 공간 , 배열의 크기
// - 행동 : [] 을 통한 접근, 값 대입, 값 삭제

#include <iostream>
#include <vector>

using namespace std;

// STL

// capacity : 5
// size : 0
// [ ] [ ] [ ] [ ] [ ]

// capacity : 5
// size : 5
// [1] [2] [3] [4] [5]

// 배열을 추상화 한 클래스

class Array
{
private :
	int	*buffer;
	int	size;		// 현재 값의 개수
	int capacity;	// 배열의 전체 용량
public :
	Array(int capacity = 10)
	{
		this->capacity = capacity;
		buffer = new int[capacity];
		size = 0;
	}
	Array(const Array &arr)
	{
		this->capacity = arr.capacity;
		buffer = new int[arr.capacity];
		this->size = size;
		memcpy(this->buffer,arr.buffer,_msize(arr.buffer));
//		memcpy(this->buffer,arr.buffer,sizeof(int)*(arr.capacity));
	}
	Array &operator = (const Array &arr)
	{
		this->capacity = arr.capacity;

		delete []buffer;

		buffer = new int[arr.capacity];
		this->size = size;
		memcpy(this->buffer,arr.buffer,_msize(arr.buffer));	
		return (*this);
	}
	// [] 연산자 오버로딩
//	int operator [] (int index)
	int &operator [] (int index)
	{
		if (0>index || index>size) { cout << "Index Exception !!" << endl; exit(0); }
		else { return buffer[index]; }
	}

	int getSize() { return size; }
	int getCapacity() { return capacity; }

	// 데이터 삽입, 삭제
	void push_back(int data)
	{
		// 자동 증가 배열 기능
		if (size  == capacity)
		{
			int newSize = capacity;
			newSize += capacity/2;
			int *temp = new int[capacity];
			memcpy(temp,buffer,sizeof(int)*capacity);

			capacity = newSize;

			delete []buffer;
			buffer = temp;
		}
		buffer[size++] = data;
	}
	void pop_back()
	{
		if (0 < size) { size--; }
	}


	~Array() { delete []buffer; }
};

void main()
{
	Array arr1(3);

	arr1.push_back(10);
	arr1.push_back(20);
	arr1.push_back(30);
	arr1.push_back(40);

	for (int i=0; i<arr1.getSize(); i++)
	{
		cout << arr1[i] << endl;
		cout << "Size : " << arr1.getSize() << endl;
		cout << "Capacity : " << arr1.getCapacity() << endl;
	}
}*/