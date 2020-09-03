// 객체의 초기화 작업	: 생성자
// 객체의 정리 작업	: 소멸자

// 소멸자 : 객체가 활동하는 동안 할당한 메모리, 여러작업 들을 정리해준다

// 1) 클래스와 이름이 동일
// 2) ~ 를 붙여 생성자와 구별
// 3) 리턴이 없다
// 4) 매개변수 가 없다 (오버로딩이 안된다)

#include <iostream>

using namespace std;

// - C 에서 문자열
// 1) 정적 배열 (자릿수가 일정)
// char name[20] = "abcdef"
// 2) 동적 배열 (자릿수가 변함)
// char *name = (char*)malloc(sizeof(char)*strlen("abcdef")+1);
// strcpy(name,"abcdef");

class Post	// 게시물
{
private :
	char Title[200];	// 제목
	char *Content;		// 내용 (동적)

public :
	Post()
	{
		// Title 배열 200개를 전부 0으로 초기화
		memset(Title, 0, 200);	// memset 은 메모리 초기화
		Content = NULL;
	}
	void WritePost()
	{
		char tempbuf[4096];	// 임시 저장소
		cout << "제목 : ";
		cin >> Title;
		cout << "내용 : ";
		cin >> tempbuf;		// 임시 저장소에 내용 저장
		Content = new char[strlen(tempbuf)+1];	// tempbuf 에 입력받은 문자열의 길이 만큼 동적 메모리 생성
		strcpy(Content, tempbuf);	// 복사
	}
	void Show()
	{
		cout << "제목 : " << Title << endl;
		cout << "내용 : " << Content << endl;
	}

	~Post()		// 소멸자
	{
		if (Content != NULL)
			delete []Content;
	}
};

void foo()
{
	Post NewPost;
	NewPost.WritePost();
	NewPost.Show();
}

void main()
{
	foo();
	foo();
	foo();
}