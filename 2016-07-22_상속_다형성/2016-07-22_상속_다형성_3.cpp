/*// �������� ������ �迭

// �������� �׻�
// ��ü ������ �迭�� �Բ��Ѵ�

#include <iostream>

using namespace std;

// ������
class Animal
{
private :
	int age;
public :
//			void Move() { cout << "������ �����̴�" << endl; }
	virtual void Move() { cout << "������ �����̴�" << endl; }		// ���� ���̵��� �ȵǴ°Ϳ� ���� �ذ�å
};
class Tiger : public Animal
{
private :
public :
	void Move() { cout << "���ڰ� �����̴�" << endl; }
};
class Eagle : public Animal
{
private :
public :
	void Move() { cout << "�������� ���ư���" << endl; }
};

void main()
{
	// ȣ���̸� ������ ����Ű��
	Animal *pAni1 = new Tiger;			// ȣ���̴� �����̴�

	// �������� ������ ����Ű��
	Animal *pAni2 = new Eagle;			// �������� �����̴�

	Animal *Zoo[5];		// Animal �� �ּҰ��� ���� ������, ��ü ������ �迭

//	Zoo �� ���� ������ �ּҰ� => Animal, Tiger, Zoo

	// �θ��� �������� �ڽ��� ������ �� �ִ�
	Zoo[0] = new Animal;
	Zoo[1] = new Tiger;
	Zoo[2] = new Eagle;

	// �θ� Ŭ���� �� �θ�Ŭ���� �� ����� ����� �� �ִ�
	// => �������̵��� �ȵȴ�
	// => �ذ�ý : �θ� Ŭ�������� virtual void Move() {}
	Zoo[0]->Move();
	Zoo[1]->Move();
	Zoo[2]->Move();
}*/