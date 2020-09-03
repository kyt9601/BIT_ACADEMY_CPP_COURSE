// 객체 배열의 예

#include <iostream>

using namespace std;

// 도서관 프로그램
// - 도서 추가
// - 도서 삭제
// - 도서 검색
// - 도서 목록 출력

// 팁
// 1) 문제 (시나리오) 안에서 명사를 찾는다 (도서관, 도서)
// 2) 문제 (시나리오) 안에서 동사를 찾는다 (추가, 삭제, 검색, 출력)
// 3) 클래스로 지정할 것들을 정한다
// 4) 클래스와 동사를 연결한다 (추가, 삭제, 검색, 출력 은 도서관의 행동)

// 책 클래스
class Book
{
private :
	char BookName[200];		// 제목
	char BookWriter[20];	// 저자
public :
	char* getBookName() { return BookName; }
	char* getBookWriter() { return BookWriter; }
	void setBookName(char* bookname) { strcpy(BookName,bookname); }				// 생성자에서 setter 를 호출
	void setBookWriter(char* bookwriter) { strcpy(BookWriter,bookwriter); }		// 생성자에서 setter 를 호출

	Book(char* bookname = "", char* bookwriter = "")
	{
		setBookName(bookname);			// 생성자에서 setter 를 호출
		setBookWriter(bookwriter);		// 생성자에서 setter 를 호출
	}
	void Show()
	{
		cout << "제목 : " << BookName << endl << "저자 : " << BookWriter << endl;
	}

	~Book() {}
};

// 도서관 클래스
class LIB
{
private :
	char LibName[200];		// 도서관 이름
	int num;
	int count;
	Book BookList[200];		// 도서 200권 객체 배열
public :
	// getter, setter
	char* getLibName() { return LibName; }
	void setLibName(char* libname) { strcpy(LibName,libname); }

	// 생성자
	LIB(char *libname = "") : count(1) { strcpy(LibName,libname); }

	// 행동
	void AddBook()			// 도서 추가
	{
		char bookname[200];
		char bookwriter[200];
		cout << "제목 : "
		cin >> bookname;
		cout << "저자 : "
		cin >> bookwriter;
		BookList[count].setBookName(bookname);
		BookList[count].setBookWriter(bookwriter);
		count++;
	}
	void DelBook()			// 도서 삭제
	{
		cin >> num;
		for (int i=num; i<count-1; i++)
		{
			BookList[i] = BookList[i+1];
		}
	}
	void SeekBook()			// 도서 검색
	{
		cin >> bookname;
		for (int i=0; i<200; i++)
			if (bookname == BookList[i].getBookName())
				cout << "번호 : " << i << endl << "저자 : " << BookList[i].getBookWriter() << endl << "제목 : " << BookList[i].getBookName() << endl;
	}
	void PrintBook()			// 도서 목록 출력
	{
		for (int i=0; i<count-1; i++)
			BookList[i].Show();
	}

	// 소멸자
	~LIB() {}
};

void main()
{
	LIB lib("도서관1");
	cout << lib.getLibName() << endl;

	lib.setLibName("도서관2");
	cout << lib.getLibName() << endl;

	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
}