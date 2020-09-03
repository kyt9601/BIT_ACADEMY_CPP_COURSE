#include <iostream>

using namespace std;

void Error();
int NumVerify(char *sentence);

#define MAX_TITLE 200

// 게시물
class Article
{
public :
	char title[MAX_TITLE];
	char *content;
	int no;

	Article(int no = 0, char *title = "", char *content = "")
	{
		this->no = no;
		strcpy(this->title,title);
		this->content = new char[strlen(content)+1];
		strcpy(this->content,content);
	}
	Article(const Article &copy)
	{
		no = copy.no;
		strcpy(title,copy.title);
		content = new char[strlen(copy.content)+1];
		strcpy(content,copy.content);
	}

	char* getTitle() { return title; }
	void setTitle()
	{
		cout << "제목 : ";
		char newtitle[200];
		cin >> newtitle;
		strcpy(title,newtitle);
	}
	int getNo() { return no; }
	char* getContent() { return content; }
	void setContent()
	{
		cout << "내용 : ";
		char newcontent[1000];
		cin >> newcontent;
		content = new char[strlen(newcontent)+1];
		strcpy(content,newcontent);
	}

	void showTitle()
	{
		cout << "(" << no << ") " << title << endl;
	}
	void showContent()
	{
		cout << "    " << content << endl;
	}

	~Article()
	{
		delete []content;
	}
};

// 게시판
class Board
{
public :
	static int articleno;
	Article *ArticleList[1024];

	Board() {}

	void CreateArticle()
	{
		ArticleList[articleno] = new Article(articleno);
		ArticleList[articleno]->setTitle();
		ArticleList[articleno]->setContent();
		cout << endl << "(" << articleno  << ")" << " 번 게시물이 작성되었습니다" << endl << endl;

		articleno++;
	}
	int ShowAll()
	{
		if (articleno == 1)
		{
			cout << "작성된 게시물이 없습니다" << endl << endl;
			system("pause");
			return 0;
		}
		else
		{
			for (int i=1; i<articleno; i++)
				ArticleList[i]->showTitle();
			cout << endl;
			return 1;
		}
	}
	void ModArticle()
	{
		if (ShowAll() != 0)
		{
			char TitleChange[MAX_TITLE];
			char *ContentChange;
			int num;

			num = ArticlenoVerify("수정할 게시물 번호 : ");

			strcpy(TitleChange,ArticleList[num]->getTitle());
			ContentChange = new char[strlen(ArticleList[num]->getContent())+1];
			strcpy(ContentChange,ArticleList[num]->getContent());

			cout << "기존 제목 : " << ArticleList[num]->getTitle() << endl;
			cout << "기존 내용 : " << ArticleList[num]->getContent() << endl << endl;

			cout << "수정할 ";
			ArticleList[num]->setTitle();
			cout << "수정할 ";
			ArticleList[num]->setContent();

			if (strcmp(TitleChange,ArticleList[num]->getTitle()) == 0) { cout << endl << "제목이 변경되지 않았습니다" << endl; }
			else { cout << endl << "제목이 변경되었습니다" << endl; }
			if (strcmp(ContentChange,ArticleList[num]->getContent()) == 0) { cout << "내용이 변경되지 않았습니다" << endl << endl; }
			else { cout << "내용이 변경되었습니다" << endl << endl; }

			delete ContentChange;
		}
	}
	void DeleteArticle()
	{
		if (ShowAll() != 0)
		{
			int num = ArticlenoVerify("(0 : 뒤로가기)\n삭제할 게시물 번호 : ");

			if (num == 0)
			{
				return;
			}
			else if (num == articleno-1)
			{
				delete ArticleList[num];
			}
			else
			{
				for (int i=num; i<articleno-1; i++)
				{
					ArticleList[i] = ArticleList[i+1];
					ArticleList[i]->no--;
				}
			}
			cout << "(" << num  << ")" << " 번 게시물이 삭제되었습니다" << endl << endl;

			articleno--;
			system("pause");
		}
	}
	void ShowArticle()
	{
		if (ShowAll() != 0)
		{
			int num = ArticlenoVerify("열람할 게시물 번호 : ");

			ArticleList[num]->showTitle();
			ArticleList[num]->showContent();

			cout << endl;
		}
	}
	int ArticlenoVerify(char *sentence)
	{
		int num = NumVerify(sentence);

		while (articleno <= num)
		{
			cout << "게시물이 존재하지 않습니다" << endl << endl;
			system("pause");
			system("cls");

			ShowAll();
			num = NumVerify(sentence);
		}

		return num;
	}
	~Board() { delete []ArticleList; }
};
int Board::articleno = 1;

void Error()
{
	cout << endl << "잘못 입력하셨습니다" << endl << endl;
	system("pause");
	system("cls");
}
int NumVerify(char *sentence)
{
	int num;

	cout << sentence;

	while (!(cin >> num))
	{
		Error();
		cout << sentence;
	}
	system("cls");

	return num;
}

void main()
{
	Board board;
	int num = -1;

	while (num != 0)
	{
		cout << "[1] 게시물 작성" << endl;
		cout << "[2] 게시물 목록" << endl;
		cout << "[3] 게시물 수정" << endl;
		cout << "[4] 게시물 삭제" << endl;
		cout << "[5] 게시물 열람" << endl;
		cout << "[0] 종료" << endl;

		num = NumVerify("선택 : ");

		if (num<0 || 5<num) { Error(); }

		switch (num)
		{
			case 1 : board.CreateArticle(); system("pause"); break;
			case 2 : board.ShowAll(); system("pause"); break;
			case 3 : board.ModArticle(); system("pause"); break;
			case 4 : board.DeleteArticle(); system("pause"); break;
			case 5 : board.ShowArticle(); system("pause"); break;
		}
		system("cls");
	}

	cout << "종료합니다" << endl << endl;
	system("pause");
}