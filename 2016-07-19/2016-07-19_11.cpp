/*// static 과 class

// 1) static 멤버 변수 => 모든 객체들이 공유하는 변수
// - 여러 인스턴스들이 1개를 공유하여 사용함

// 2) static 멤버 함수 => 객체 없이 호출 가능한 함수
// - 객체의 행동이 아닌 클래스의 행동

#include <iostream>

using namespace std;

// 버스
class Bus	// 기본값은 private
{
public :
static	char *Parking;	// 차고지 - class 당 1개가 만들어진다

		int LineNo;		// 노선 번호

};
char *Bus::Parking = "양재동";
// static 멤버 변수는 반드시 class 외부에서 다시 선언 해주어야 한다

// 우리반 학생들
class CppStudent
{
private :
		char name[20];			// 이름
static	char subject[20];		// 과목명
static	char instructor[20];	// 강사명
};
char CppStudent::subject[20] =		"C++";		// 선언과 반드시 같게 써주어야 한다
char CppStudent::instructor[20] =	"장성훈";	// [20] 포함

void main()
{
	char* name = "fdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdg";
	cout << name << endl;

	cout << Bus::Parking << endl;
	// 객체 없이, 클래스 이름으로 바로 접근이 가능
}*/