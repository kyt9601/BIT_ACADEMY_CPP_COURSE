// ���� ����

#include <iostream>

using namespace std;

// �Խù�
class article
{
private :
	char title[200];	// ����
	char *content;		// ����
	int no;				// ��ȣ
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
		// content = copy.content  =>  ����Ʈ ���� �����ڰ� �ϴ� ���� ����
		content = new char[strlen(copy.content)+1];
		strcpy(content,copy.content);		// ���� ����
		// �ּҰ��� �����ϴ� ���� �ƴ�, �޸𸮸� ���� �Ҵ��Ͽ� �� �ּҰ��� ����
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
		cout << "���� : " << title << endl;
		cout << "���� : " << content << endl;
		cout << "��ȣ : " << no << endl;
	}

	~article()
	{
		delete []content;
	}
};
// �۾���, �۸��, �ۼ���, �ۻ���, �ۺ���

// �Խ���
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

void main()		// stack �� ���߿� ������ ��ü�� ���� �������
{
	article newArticle(1,"���̽�ũ��","����");
	newArticle.show();

	article copyArticle(newArticle);
	copyArticle.show();
	// ����Ʈ ���� �����ڴ�
	// ������ ������ �ּҰ��� ����

	board Board;

	Board.ArticleList[1]->setTitle();
	cout << Board.ArticleList[1]->getTitle() << endl;
}