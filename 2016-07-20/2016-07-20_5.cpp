// 깊은 복사

#include <iostream>

using namespace std;

// 게시물
class article
{
private :
	char title[200];	// 제목
	char *content;		// 내용
	int no;				// 번호
public :
	article(int no = 0, char *title = "", char *content = "")
	{
		this->no = no;
		strcpy(this->title,title);
		this->content = new char[strlen(content)+1];
		strcpy(this->content,content);
	}
	article(const article &copy)
	{
		no = copy.no;
		strcpy(title,copy.title);
		// content = copy.content  =>  디폴트 복사 생성자가 하는 얕은 복사
		content = new char[strlen(copy.content)+1];
		strcpy(content,copy.content);		// 깊은 복사
		// 주소값을 대입하는 것이 아닌, 메모리를 새로 할당하여 그 주소값을 대입
	}

	char* getTitle() { return title; }
	void setTitle()
	{
		char newtitle[200];
		cin >> newtitle;
		strcpy(title,newtitle);
	}
	int getNo() { return no; }
	char* getContent() { return content; }
	void setContent(char *newcontent)
	{
		 content = new char[strlen(newcontent)+1];
		 strcpy(content,newcontent);
	}

	void show()
	{
		cout << "제목 : " << title << endl;
		cout << "내용 : " << content << endl;
		cout << "번호 : " << no << endl;
	}

	~article()
	{
		delete []content;
	}
};
// 글쓰기, 글목록, 글수정, 글삭제, 글보기

// 게시판
class board
{
public :
	static int articleno;
	article *ArticleList[1024];
public :
	board()
	{
		for (int i =1; i<1024; i++)
			ArticleList[i] = new article;
	}
};
int board::articleno = 1;

void main()		// stack 은 나중에 생성된 객체가 먼저 사라진다
{
	article newArticle(1,"아이스크림","누가");
	newArticle.show();

	article copyArticle(newArticle);
	copyArticle.show();
	// 디폴트 복사 생성자는
	// 포인터 변수의 주소값을 복사

	board Board;

	Board.ArticleList[1]->setTitle();
	cout << Board.ArticleList[1]->getTitle() << endl;
}