/*// STL (Standard Template Library)

// ���� ���

// 1) �����̳� : �����͵��� ��Ƶΰ� ������ �� �ִ� �ڷᱸ��
//    => ���� C,C++ �� �ڷᱸ���� �������� �ʾҴ� (���� ����Ʈ, ����, ť, Ʈ��)
//	  => STL ������ �̸� ������� Ŭ���� ���·� ����

// 2) ���ͷ����� (�ݺ���) : �����̳ʸ� ��ȸ�ϸ鼭 ������ ������ ��Ҹ� �����Ͽ� ���

// 3) �˰��� (�Լ���)
//	  ex) sort, copy, search ...

// STL ¥����
#include <iostream>
#include <vector>

using namespace std;

// VECTOR (���� �迭)
template <class T>
class vector
{
private :
	T *data;		// ������ ���� ����
	int capacity;	// �뷮
	int size;		// ������� ����
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
		{	// �뷮�� ��������, �ڵ� ����
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

	void Erase(int index)	// index ��°�� �ִ� ������ ����
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