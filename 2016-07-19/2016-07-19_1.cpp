/*// ��ü ������ �迭

#include <iostream>

using namespace std;

class Student
{
private :
	int Sno;		// �й�
	int Score;		// ����
	char Sname[20];	// �̸�
public :
	Student(int sno = 0, int score = 0, char *sname = "")
	{
		Sno = sno;
		Score = score;
		strcpy(Sname,sname);
	}

	void Show()
	{
		cout << "�й� : " << Sno << endl;
		cout << "���� : " << Score << endl;
		cout << "�̸� : " << Sname << endl;
	}
};

// ex) StudentList �迭�� ���޹޾Ƽ�
// ��ü �л� ����� ����ϴ� �Լ�
void ShowAll(Student *(*StudentList))	// * �� ����� �𸦶��� ����, ���� ����
{										// &, *, [] �� ������ ����
	for (int i=0; i<5; i++)
	{
		if (StudentList[i] != NULL)
			StudentList[i]->Show();
	}
}

void main()
{
	Student s[5];		// ��ü �迭
	Student *sList[5];	// ��ü ������ �迭

	cout << sizeof(s) << endl;
	cout << sizeof(sList) << endl;	// "Student Ÿ���� ��ü" �� �ּҰ��� �����ϱ� ���� ������ 5��

	Student *StudentList[5] = {NULL};	// NULL �� ������ ������ �ƹ� �ּҰ��� ����Ű�� ���� ���� ����
	StudentList[0] = new Student(4885, 100, "��ö��");
	StudentList[0]->Show();

	ShowAll(StudentList);
}*/