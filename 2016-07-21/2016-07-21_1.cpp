/*#include <iostream>

using namespace std;

// 게시물
class article
{
private :
	char title[200];	// 제목
	char *content;		// 내용
	int no;				// 번호
public :
	article(int no, char *title = "", char *content = "") : no(0)
	{
		strcpy(this->title,title);
		this->content = new char[strlen(content)+1];
		strcpy(this->content,content);
	}
	article(int no, const article &copy)
	{
		this->no = no;
		no = copy.no;
		strcpy(title,copy.title);

		content = new char[strlen(copy.content)+1];
		strcpy(content,copy.content);
	}

	int getNo() {return no;}
	char* getTitle() { return title; }
	char* getContent() { return content; }
	void setTitle(char *newTitle) { strcpy(title,newTitle); }
	void setContent(char *newContent)
	{
		delete []content;	// 기존의 내용을 지움
		content = new char[strlen(newContent)+1];
		strcpy(content,newContent);
	}

	~article()
	{
		delete []this->content;
	}
};

// 게시판
class board
{
public :
	static int articleno;
	article *ArticleList[10];
public :
	Board() { memset(ArticleList,0,sizeof(article*)*10); }
	void Write()
	{
		char title[200];
		char content[4096];
		cout << "제목 : ";
		cin >> title;
		cout << "내용 : ";
		cin >> content;

		for (int i=0; i<10; i++)
		{
			if (ArticleList[i] == NULL)
			{
				ArticleList[i] = new article(articleno++,title,content);
				return;	
			}
		}
	}
	void showlist()
	{
		for (int i=0; i<10; i++)
		{
			if (ArticleList[i] != NULL)
				ArticleList[i]->show();
			else
			cout << "NULL" << endl; 
		}
	}
};
int board::articleno = 1;

void main()
{
	board Board;

	Board.showlist();
}*/