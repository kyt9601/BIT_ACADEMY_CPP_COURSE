/*// Ŭ���� ���ø�

// Ư�� Ÿ�Կ� �������� Ŭ������ �ƴ϶�, � Ÿ���̵� ������ Ŭ������ Ʋ

// Ŭ���� ���ø� => Ŭ���� => ��ü

#include <iostream>

using namespace std;

template <typename TYPE>
class Array
{
private :
	TYPE *data;	// ������ ���� ����
	int	len;	// �迭�� ũ��
public :
	Array(int size)
	{
		len = size;
		data = new TYPE[len];
		memset(data,NULL,_msize(data));
	}

	TYPE &operator [] (int index)
	{
		if (index<0 || len-1<index)
		{
			cout << "ERROR" << endl;
			exit(0);
		}
		return data[index];
	}

	int getLen() { return len; }

	~Array()
	{
		delete []data;
	}
};

void main()
{
	Array <char> arr1(10);
	arr1[0] = 'a';
	arr1[1] = 'b';

	for (int i=0; i<arr1.getLen(); i++)
	{
		if (arr1[i] != NULL)
			cout << arr1[i] << endl;
		else
			cout << "NULL" << endl;
	}

	Array <char*> arr2(10);
	arr2[0] = "��ö��";
	arr2[1] = "�迵��";

	for (int i=0; i<arr2.getLen(); i++)
	{
		if (arr2[i] != NULL)
			cout << arr2[i] << endl;
		else
			cout << "NULL" << endl;
	}
}*/