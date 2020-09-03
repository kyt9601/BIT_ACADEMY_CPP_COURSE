// 이중 연결 리스트

#include <iostream>

using namespace std;

template <typename T>
class vector_iterator
{
private :
	T *iter;
public :
	vector_iterator()
	{
		iter = NULL:
	}

	T &operator * ()
	{
		return *iter;
	}
	vector_iterator &operator = (vector_iterator &iter)
	{
		this->iter = iter;
		return (*this);
	}
	bool operator != (vector_iterator &iter)
	{
		return (this->iter != iter.iter) ? false : true;
	}
};
static vector_iterator <T> iterator

template <typename T>
struct node
{
	T *data;
	node <T> *next;
	node <T> *prev;
};

template <typename T>
class list
{
private :
	node <T> *head;
	node <T> *tail;
	int count;
public :
	list() : count(0)
	{	// 중간에 삽입
		head = new node<T>();
		tail = new node<T>();
		head->next = tail;
		head->prev = head;
		tail->next = tail;
		tail->prev = head;
	}
	void Insert(node <T> *Where, int val)
	{	// pos 삽입
		node <T> *NewNode = new node <T>();
		NewNode->data = val;
		NewNode->next = Where->next;
		NewNode->prev = Where;
		Where->next->prev = NewNode;
		Where->next = NewNode;
		this->count++;
	}

	Node <T> *Begin()	// 맨 앞의 노드
	{
		return head->next;
	}
	Node <T> *End()
	{
		return tail->prev;
	}
	void push_back(int val)
	{
		Insert(End(),val);
	}
	void push_front(int val)
	{
		Insert(Begin(),val)
	}
	void find(int key)	// 검색
	{
		
	}
};

void main()
{

}