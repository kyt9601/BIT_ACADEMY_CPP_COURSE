// ��ü�� �ʱ�ȭ �۾�	: ������
// ��ü�� ���� �۾�	: �Ҹ���

// �Ҹ��� : ��ü�� Ȱ���ϴ� ���� �Ҵ��� �޸�, �����۾� ���� �������ش�

// 1) Ŭ������ �̸��� ����
// 2) ~ �� �ٿ� �����ڿ� ����
// 3) ������ ����
// 4) �Ű����� �� ���� (�����ε��� �ȵȴ�)

#include <iostream>

using namespace std;

// - C ���� ���ڿ�
// 1) ���� �迭 (�ڸ����� ����)
// char name[20] = "abcdef"
// 2) ���� �迭 (�ڸ����� ����)
// char *name = (char*)malloc(sizeof(char)*strlen("abcdef")+1);
// strcpy(name,"abcdef");

class Post	// �Խù�
{
private :
	char Title[200];	// ����
	char *Content;		// ���� (����)

public :
	Post()
	{
		// Title �迭 200���� ���� 0���� �ʱ�ȭ
		memset(Title, 0, 200);	// memset �� �޸� �ʱ�ȭ
		Content = NULL;
	}
	void WritePost()
	{
		char tempbuf[4096];	// �ӽ� �����
		cout << "���� : ";
		cin >> Title;
		cout << "���� : ";
		cin >> tempbuf;		// �ӽ� ����ҿ� ���� ����
		Content = new char[strlen(tempbuf)+1];	// tempbuf �� �Է¹��� ���ڿ��� ���� ��ŭ ���� �޸� ����
		strcpy(Content, tempbuf);	// ����
	}
	void Show()
	{
		cout << "���� : " << Title << endl;
		cout << "���� : " << Content << endl;
	}

	~Post()		// �Ҹ���
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