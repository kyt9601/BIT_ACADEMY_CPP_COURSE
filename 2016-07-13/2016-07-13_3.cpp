/*// ��ü ������ ���

// ���Ǹ� ��üȭ �غ���
// �л�, ����

#include <iostream>

using namespace std;

typedef struct Stu Student;
typedef struct Inst Instructor;

struct Stu
{
	// �Ӽ�
	int sno;		// �й�
	int level;		// ���뵵
	char name[20];	// �̸�

	// �ൿ
	void study() // ����
	{
		level++;
	}
	void q(Instructor teacher) // ����
	{
		teacher.qna();
		level++;
	}
	void listen()
	{
		cout << "�˰ڽ��ϴ�" << endl;
	}
};
struct Inst
{
	int major;	// ����
	int hp;		// ü��

	void speak(Student listener) // ����
	{
		listener.listen();
		hp--;
	}
	void qna() // ��������
	{
		cout << "ã���� �� ���Ϳ�" << endl;
	}
};

struct Lecture // ����
{
	int roomno;					// ���ǽ� ��ȣ
	char subject[20];			// ����
	Instructor teacher;			// ����
	Student studentlist[30];	// ������

	void start()
	{
		int time = 0;
		while (time <= 60) // ?�ð� ����
		{
			for (int i=0; i<30; i++)
			{
				teacher.speak(studentlist[i]);

				if (rand()%7 == 3)
					studentlist[i].q(teacher); // �����ϰ� ����
			}
			time++;
		}

	}
};

void main()
{
	Lecture cpp;
	cpp.start();
}*/