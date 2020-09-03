#include <iostream>

using namespace std;

void Error();
int NumVerify(char *sentence);

#define MAX_TITLE 200

// �Խù�
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
		cout << "���� : ";
		char newtitle[200];
		cin >> newtitle;
		strcpy(title,newtitle);
	}
	int getNo() { return no; }
	char* getContent() { return content; }
	void setContent()
	{
		cout << "���� : ";
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

// �Խ���
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
		cout << endl << "(" << articleno  << ")" << " �� �Խù��� �ۼ��Ǿ����ϴ�" << endl << endl;

		articleno++;
	}
	int ShowAll()
	{
		if (articleno == 1)
		{
			cout << "�ۼ��� �Խù��� �����ϴ�" << endl << endl;
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

			num = ArticlenoVerify("������ �Խù� ��ȣ : ");

			strcpy(TitleChange,ArticleList[num]->getTitle());
			ContentChange = new char[strlen(ArticleList[num]->getContent())+1];
			strcpy(ContentChange,ArticleList[num]->getContent());

			cout << "���� ���� : " << ArticleList[num]->getTitle() << endl;
			cout << "���� ���� : " << ArticleList[num]->getContent() << endl << endl;

			cout << "������ ";
			ArticleList[num]->setTitle();
			cout << "������ ";
			ArticleList[num]->setContent();

			if (strcmp(TitleChange,ArticleList[num]->getTitle()) == 0) { cout << endl << "������ ������� �ʾҽ��ϴ�" << endl; }
			else { cout << endl << "������ ����Ǿ����ϴ�" << endl; }
			if (strcmp(ContentChange,ArticleList[num]->getContent()) == 0) { cout << "������ ������� �ʾҽ��ϴ�" << endl << endl; }
			else { cout << "������ ����Ǿ����ϴ�" << endl << endl; }

			delete ContentChange;
		}
	}
	void DeleteArticle()
	{
		if (ShowAll() != 0)
		{
			int num = ArticlenoVerify("(0 : �ڷΰ���)\n������ �Խù� ��ȣ : ");

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
			cout << "(" << num  << ")" << " �� �Խù��� �����Ǿ����ϴ�" << endl << endl;

			articleno--;
			system("pause");
		}
	}
	void ShowArticle()
	{
		if (ShowAll() != 0)
		{
			int num = ArticlenoVerify("������ �Խù� ��ȣ : ");

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
			cout << "�Խù��� �������� �ʽ��ϴ�" << endl << endl;
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
	cout << endl << "�߸� �Է��ϼ̽��ϴ�" << endl << endl;
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
		cout << "[1] �Խù� �ۼ�" << endl;
		cout << "[2] �Խù� ���" << endl;
		cout << "[3] �Խù� ����" << endl;
		cout << "[4] �Խù� ����" << endl;
		cout << "[5] �Խù� ����" << endl;
		cout << "[0] ����" << endl;

		num = NumVerify("���� : ");

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

	cout << "�����մϴ�" << endl << endl;
	system("pause");
}