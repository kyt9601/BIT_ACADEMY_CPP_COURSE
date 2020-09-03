/*// stack �� queue (Adapter)

// stack �α��� �ⱸ�� ���� �� (���Լ���)
// queue �Ա��� �ⱸ�� �ٸ� �� (���Լ���)

// list �� �̿��ϸ�, stack �� queue �� ���� �� �ִ�

#include <iostream>

#include <deque>

using namespace std;

// Adapter Class

// template <class T = deque>	����Ʈ �Ķ����
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