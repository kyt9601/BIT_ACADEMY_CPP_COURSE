// ��ü �迭�� ��

#include <iostream>

using namespace std;

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
	char LibName[200];		// ������ �̸�
	int num;
	int count;
	Book BookList[200];		// ���� 200�� ��ü �迭
public :
	// getter, setter
	char* getLibName() { return LibName; }
	void setLibName(char* libname) { strcpy(LibName,libname); }

	// ������
	LIB(char *libname = "") : count(1) { strcpy(LibName,libname); }

	// �ൿ
	void AddBook()			// ���� �߰�
	{
		char bookname[200];
		char bookwriter[200];
		cout << "���� : "
		cin >> bookname;
		cout << "���� : "
		cin >> bookwriter;
		BookList[count].setBookName(bookname);
		BookList[count].setBookWriter(bookwriter);
		count++;
	}
	void DelBook()			// ���� ����
	{
		cin >> num;
		for (int i=num; i<count-1; i++)
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
		for (int i=0; i<count-1; i++)
			BookList[i].Show();
	}

	// �Ҹ���
	~LIB() {}
};

void main()
{
	LIB lib("������1");
	cout << lib.getLibName() << endl;

	lib.setLibName("������2");
	cout << lib.getLibName() << endl;

	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
	lib.AddBook();
}