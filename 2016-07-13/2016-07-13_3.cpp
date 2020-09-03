/*// 객체 지향적 사고

// 강의를 객체화 해보자
// 학생, 강사

#include <iostream>

using namespace std;

typedef struct Stu Student;
typedef struct Inst Instructor;

struct Stu
{
	// 속성
	int sno;		// 학번
	int level;		// 성취도
	char name[20];	// 이름

	// 행동
	void study() // 공부
	{
		level++;
	}
	void q(Instructor teacher) // 질문
	{
		teacher.qna();
		level++;
	}
	void listen()
	{
		cout << "알겠습니다" << endl;
	}
};
struct Inst
{
	int major;	// 전공
	int hp;		// 체력

	void speak(Student listener) // 수업
	{
		listener.listen();
		hp--;
	}
	void qna() // 질의응답
	{
		cout << "찾으면 다 나와요" << endl;
	}
};

struct Lecture // 강의
{
	int roomno;					// 강의실 번호
	char subject[20];			// 과목
	Instructor teacher;			// 강사
	Student studentlist[30];	// 수강생

	void start()
	{
		int time = 0;
		while (time <= 60) // ?시간 동안
		{
			for (int i=0; i<30; i++)
			{
				teacher.speak(studentlist[i]);

				if (rand()%7 == 3)
					studentlist[i].q(teacher); // 랜덤하게 질문
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