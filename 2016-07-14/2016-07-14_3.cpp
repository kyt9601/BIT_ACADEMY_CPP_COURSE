/*// getter (읽기)
// int getScore() { return m_score; }
	
// setter (쓰기)
// void setScore(int newscore) { m_score = newscore; }

// private 멤버 변수에 접근하는 방법을 제공

#include <iostream>

using namespace std;

class student
{
// 속성 : 멤버 변수
private :
	int m_no;			// 학번
	int m_score;		// 성적
	int m_grade;		// 학년
	char m_name[20];	// 이름

// 행동 : 멤버 함수
public :
	// getter, setter
	int getNo() { return m_no; }					// 학번 조회
	int getScore() { return m_score; }				// 성적 조회
	int getGrade() { return m_grade; }				// 학년 조회
	void setScore(int newscore)						// 성적 수정
	{
		if (0 <= newscore && newscore <= 100)
		m_score = newscore;
	}
	void setGrade(int newgrade)						// 학년 변경
	{
		if (0 <= newgrade && newgrade <= 4)
		m_grade = newgrade;
	}
	char* getName(){ return m_name; }				// 이름 조회
	// 문자열을 반환했으니 *char 로 받아야 한다

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

	s1.create(4885, 0, 1, "김철수");
}*/