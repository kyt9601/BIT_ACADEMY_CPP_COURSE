/*// getter (�б�)
// int getScore() { return m_score; }
	
// setter (����)
// void setScore(int newscore) { m_score = newscore; }

// private ��� ������ �����ϴ� ����� ����

#include <iostream>

using namespace std;

class student
{
// �Ӽ� : ��� ����
private :
	int m_no;			// �й�
	int m_score;		// ����
	int m_grade;		// �г�
	char m_name[20];	// �̸�

// �ൿ : ��� �Լ�
public :
	// getter, setter
	int getNo() { return m_no; }					// �й� ��ȸ
	int getScore() { return m_score; }				// ���� ��ȸ
	int getGrade() { return m_grade; }				// �г� ��ȸ
	void setScore(int newscore)						// ���� ����
	{
		if (0 <= newscore && newscore <= 100)
		m_score = newscore;
	}
	void setGrade(int newgrade)						// �г� ����
	{
		if (0 <= newgrade && newgrade <= 4)
		m_grade = newgrade;
	}
	char* getName(){ return m_name; }				// �̸� ��ȸ
	// ���ڿ��� ��ȯ������ *char �� �޾ƾ� �Ѵ�

	void create(int no, int score, int grade, char *name)
	{
		m_no = no;
		m_score = score;
		m_grade = grade;
		strcpy(m_name,name);
	}
};

void main()
{
	student s1;

	s1.create(4885, 0, 1, "��ö��");
}*/