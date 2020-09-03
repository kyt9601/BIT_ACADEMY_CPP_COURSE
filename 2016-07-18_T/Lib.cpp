// ��ü �迭�� ��

#include <iostream>

using namespace std;

#define MAX_BOOK 200	// �ִ� ���� ����

// ������ ���α׷�
// - ���� �߰�
// - ���� ����
// - ���� �˻�
// - ���� ��� ���

// ��
// 1) ���� (�ó�����) �ȿ��� ��縦 ã�´� (������, ����)
// 2) ���� (�ó�����) �ȿ��� ���縦 ã�´� (�߰�, ����, �˻�, ���)
// 3) Ŭ������ ������ �͵��� ���Ѵ�
// 4) Ŭ������ ���縦 �����Ѵ� (�߰�, ����, �˻�, ��� �� �������� �ൿ)

// å Ŭ����
class Book
{
private :
	char BookName[200];		// ����
	char BookWriter[20];	// ����
public :
	char* getBookName() { return BookName; }
	char* getBookWriter() { return BookWriter; }
	void setBookName(char* bookname) { strcpy(BookName,bookname); }				// �����ڿ��� setter �� ȣ��
	void setBookWriter(char* bookwriter) { strcpy(BookWriter,bookwriter); }		// �����ڿ��� setter �� ȣ��

	Book(char* bookname = "", char* bookwriter = "")
	{
		setBookName(bookname);			// �����ڿ��� setter �� ȣ��
		setBookWriter(bookwriter);		// �����ڿ��� setter �� ȣ��
	}
	void Show()
	{
		cout << "���� : " << BookName << endl << "���� : " << BookWriter << endl;
	}

	~Book() {}
};

// ������ Ŭ����
class LIB
{
private :
	int BookCount;					// ���� å ����
	char LibName[200];				// ������ �̸�
	Book BookList[MAX_BOOK];		// ���� 200�� ��ü �迭
public :
	// ������
	LIB(char *libname = "")
	{
		strcpy(LibName,libname);
		BookCount = 0;
	}

	// �ൿ��
	int add()		// ���� �߰�, �߰��� �ε��� ��ȯ
	{
		if (MAX_BOOK <= BookCount)
			return -1;		// �߰� ����

		char BookName[200];
		char BookWriter[20];

		cout << "���� : ";
		cin >> BookName;
		cout << "���� : ";
		cin >> BookWriter;

		BookList[BookCount].setBookName(BookName);
		BookList[BookCount].setBookWriter(BookWriter);
		BookCount++;
	}

	bool search_book(char *keyword)			// �������� ���� �˻�
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
	int search_index(char *keyword)		// Ű���带 ã���� �ε����� ��ȯ
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

	void del()		// ������ ������ �̸��� �޾� �̸��� ����
	{
		char Dname[200];
		cout << "������ ���� : ";
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

	void Show()				// �������� ��� å ���
	{
		for (int i=0; i<BookCount; i++)
		{
			cout << "���� : " << BookList[i].getBookName() << endl << "���� : " << BookList[i].getBookWriter() << endl;
		}
	}

	// getter, setter

	// �ൿ
	/*
	void AddBook()			// ���� �߰�
	{
		cin >> bookname;
		BookList[count].setBookName(bookname);
		count++;
	}
	void DelBook()			// ���� ����
	{
		cin >> num;
		for (int i=num; i<199; i++)
		{
			BookList[i] = BookList[i+1];
		}
	}
	void SeekBook()			// ���� �˻�
	{
		cin >> bookname;
		for (int i=0; i<200; i++)
			if (bookname == BookList[i].getBookName())
				cout << "��ȣ : " << i << endl << "���� : " << BookList[i].getBookWriter() << endl << "���� : " << BookList[i].getBookName() << endl;
	}
	void PrintBook()			// ���� ��� ���
	{
		for (int i=0; i<200; i++)
			BookList[i].Show();
	}*/

	// �Ҹ���
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