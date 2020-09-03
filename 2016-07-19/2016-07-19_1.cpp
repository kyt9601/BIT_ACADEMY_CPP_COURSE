/*// 객체 포인터 배열

#include <iostream>

using namespace std;

class Student
{
private :
	int Sno;		// 학번
	int Score;		// 점수
	char Sname[20];	// 이름
public :
	Student(int sno = 0, int score = 0, char *sname = "")
	{
		Sno = sno;
		Score = score;
		strcpy(Sname,sname);
	}

	void Show()
	{
		cout << "학번 : " << Sno << endl;
		cout << "점수 : " << Score << endl;
		cout << "이름 : " << Sname << endl;
	}
};

// ex) StudentList 배열을 전달받아서
// 전체 학생 목록을 출력하는 함수
void ShowAll(Student *(*StudentList))	// * 가 몇개인지 모를때는 선언, 전달 에서
{										// &, *, [] 의 개수와 같다
	for (int i=0; i<5; i++)
	{
		if (StudentList[i] != NULL)
			StudentList[i]->Show();
	}
}

void main()
{
	Student s[5];		// 객체 배열
	Student *sList[5];	// 객체 포인터 배열

	cout << sizeof(s) << endl;
	cout << sizeof(sList) << endl;	// "Student 타입의 객체" 의 주소값을 저장하기 위한 포인터 5개

	Student *StudentList[5] = {NULL};	// NULL 은 포인터 변수가 아무 주소값도 가리키고 있지 않은 상태
	StudentList[0] = new Student(4885, 100, "김철수");
	StudentList[0]->Show();

	ShowAll(StudentList);
}*/