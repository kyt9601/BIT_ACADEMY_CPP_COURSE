// 객체 배열의 예

#include <iostream>

using namespace std;

#define MAX_BOOK 200	// 최대 도서 개수

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
	int BookCount;					// 현재 책 개수
	char LibName[200];				// 도서관 이름
	Book BookList[MAX_BOOK];		// 도서 200권 객체 배열
public :
	// 생성자
	LIB(char *libname = "")
	{
		strcpy(LibName,libname);
		BookCount = 0;
	}

	// 행동들
	int add()		// 도서 추가, 추가된 인덱스 반환
	{
		if (MAX_BOOK <= BookCount)
			return -1;		// 추가 실패

		char BookName[200];
		char BookWriter[20];

		cout << "제목 : ";
		cin >> BookName;
		cout << "저자 : ";
		cin >> BookWriter;

		BookList[BookCount].setBookName(BookName);
		BookList[BookCount].setBookWriter(BookWriter);
		BookCount++;
	}

	bool search_book(char *keyword)			// 제목으로 도서 검색
	{
		for (int i=0; i<BookCount; i++)
		{
			if (strcmp(BookList[i].getBookName(),keyword) == 0)
			{
				return true;
			}
			return false;
		}
	}
	int search_index(char *keyword)		// 키워드를 찾으면 인덱스를 반환
	{
		for (int i=0; i<BookCount; i++)
		{
			if (strcmp(BookList[i].getBookName(),keyword) == 0)
			{
				return i;
			}
			return -1;
		}
	}

	void del()		// 삭제할 도서의 이름을 받아 이름을 삭제
	{
		char Dname[200];
		cout << "삭제할 도서 : ";
		cin >> Dname;

		int index = search_index( Dname); 
		if( index != -1) 
		{
			for(int i = index; i< BookCount; i++) 
			{
				BookList[i].setBookName( BookList[i+1].getBookName());
				BookList[i].setBookWriter( BookList[i+1].getBookWriter());
			}
			BookCount--;
		}
	}

	void Show()				// 도서관의 모든 책 출력
	{
		for (int i=0; i<BookCount; i++)
		{
			cout << "제목 : " << BookList[i].getBookName() << endl << "저자 : " << BookList[i].getBookWriter() << endl;
		}
	}

	// getter, setter

	// 행동
	/*
	void AddBook()			// 도서 추가
	{
		cin >> bookname;
		BookList[count].setBookName(bookname);
		count++;
	}
	void DelBook()			// 도서 삭제
	{
		cin >> num;
		for (int i=num; i<199; i++)
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
		for (int i=0; i<200; i++)
			BookList[i].Show();
	}*/

	// 소멸자
	~LIB() {}
};

void main()
{
	LIB library;

	library.add();
	library.Show();
	library.add();
	library.Show();
	library.add();
	library.Show();

	library.del();
	library.Show();
}