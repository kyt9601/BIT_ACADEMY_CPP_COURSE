/*// [] ������ �����ε� ==> �ε���

// �迭�� ���� ū Ư¡ : �ε����� ���� ���� ������ ����

// �迭
// - �Ӽ� : ���� ���� , �迭�� ũ��
// - �ൿ : [] �� ���� ����, �� ����, �� ����

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

// �迭�� �߻�ȭ �� Ŭ����

class Array
{
private :
	int	*buffer;
	int	size;		// ���� ���� ����
	int capacity;	// �迭�� ��ü �뷮
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
	// [] ������ �����ε�
//	int operator [] (int index)
	int &operator [] (int index)
	{
		if (0>index || index>size) { cout << "Index Exception !!" << endl; exit(0); }
		else { return buffer[index]; }
	}

	int getSize() { return size; }
	int getCapacity() { return capacity; }

	// ������ ����, ����
	void push_back(int data)
	{
		// �ڵ� ���� �迭 ���
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