/*// stack 과 queue (Adapter)

// stack 인구와 출구가 같은 것 (후입선출)
// queue 입구와 출구가 다른 것 (선입선출)

// list 를 이용하면, stack 과 queue 를 만들 수 있다

#include <iostream>

#include <deque>

using namespace std;

// Adapter Class

// template <class T = deque>	디폴트 파라미터
template <class T>
class STACK
{
private :
	deque <T> Container;
public :
	void push(T val)
	{
		Container.push_back(val);
	}
	T pop()
	{
		T val = Container.back();
		Container.pop_back();

		return val;
	}
};

template <class T>
class QUEUE
{
private :
	deque <T> Container;
public :
	void push(T val)
	{
		Container.push_back(val);
	}
	T pop()
	{
		T val = Container.front();
		Container.pop_front();

		return val;
	}
};

void main()
{
	STACK <int> s;

	s.push(10);
	s.push(20);
	s.push(30);

	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << s.pop() << endl;
	cout << endl;

	QUEUE <int> q;

	q.push(10);
	q.push(20);
	q.push(30);

	cout << q.pop() << endl;
	cout << q.pop() << endl;
	cout << q.pop() << endl;
}*/