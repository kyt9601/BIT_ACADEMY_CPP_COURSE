#include <iostream>

using namespace std;

#ifndef __BOOK_H_
#define __BOOK_H_

class Book
{
	private :
		char bookname[200];	// ����
		int bookpages;		// ��ü ������
		int bookpage;		// ���� ������

	public :
		char* getBookname();
		int getBookpages();
		int getBookpage();

		void createBook(char* Bookname, int Bookpages, int Bookpage);
		int open(int Bookpage);
		void close();
		int nextPage();
		int prevPage();
};

#endif