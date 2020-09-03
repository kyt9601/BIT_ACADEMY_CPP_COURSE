#include <iostream>

using namespace std;

#ifndef __BOOK_H_
#define __BOOK_H_

class Book
{
	private :
		char bookname[200];	// 제목
		int bookpages;		// 전체 페이지
		int bookpage;		// 현재 페이지

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