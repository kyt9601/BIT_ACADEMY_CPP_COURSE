// �˰���

#include <iostream>

#include <vector>
#include <algorithm>
#include <numeric>	// accumulate ���

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

	// �� ã��
	cout << *find(v1.begin(),v1.end(),20) << endl;	// find(����,��,��) ���ͷ����� ��ȯ 
	cout << endl;

	v1.erase(find(v1.begin(),v1.end(),30));		// 30 �� ã�Ƽ� ������

	vector <int> v2;

	v2.push_back(20);
	v2.push_back(40);

	// �κ� ���� �˻� : �κ����� �����̳� ã��
	cout << *search(v1.begin(),v1.end(),v2.begin(),v2.end()) << endl;	// search(ã�� ���� ����, ã�� �� ����,����,��) ã�� ���� �ּ� ��ȯ
	cout << endl;

	// ���ۺ��� ������ ������� ���� ���� �Լ��� ȣ��
	for_each(v1.begin(),v1.end(),foo);	// for_each(����,��,�Լ�)
	cout << endl;

	// ���� �ּҺ��� ���� ����
	copy(v2.begin(),v2.end(),v1.begin());	// copy(������ ���� ����, ������ �� ����, ����)
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

	// ���������� ����
	sort(v2.begin(),v2.end());	// sort(����,��)
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

	// v1 �� ���� v2 �� �̾���δ�
	v1.insert(v1.end(),v2.begin(),v2.end());
	for_each(v1.begin(),v1.end(),foo);
	cout << endl;

//	merge(v1.begin(),v1.end(),v2.begin(),v2.end(),3);
//	for_each(v1.begin(),v1.end(),foo);
//	cout << endl;

//	cout << accumulate(v1.begin(),v1.begin(),20) << endl;
//	cout << endl;
}