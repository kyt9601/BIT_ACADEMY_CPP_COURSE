/*// 클래스 템플릿

// 특정 타입에 종속적인 클래스가 아니라, 어떤 타입이든 가능한 클래스의 틀

// 클래스 템플릿 => 클래스 => 객체

#include <iostream>

using namespace std;

template <typename TYPE>
class Array
{
private :
	TYPE *data;	// 데이터 저장 공간
	int	len;	// 배열의 크기
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
	arr2[0] = "김철수";
	arr2[1] = "김영수";

	for (int i=0; i<arr2.getLen(); i++)
	{
		if (arr2[i] != NULL)
			cout << arr2[i] << endl;
		else
			cout << "NULL" << endl;
	}
}*/