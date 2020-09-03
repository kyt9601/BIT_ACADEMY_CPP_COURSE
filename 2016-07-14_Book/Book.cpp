#include "Book.h"

char* Book::getBookname()
{
	return bookname;
}
int Book::getBookpages()
{
	return bookpages;
}
int Book::getBookpage()
{
	return bookpage;
}
int Book::open(int Bookpage)
{
	if (1<=Bookpage && Bookpage<=bookpages)
		bookpage = Bookpage;
	return bookpage;
}
void Book::close()
{
	bookpage = 0;
}
int Book::nextPage()
{
	if (bookpage < bookpages)
		bookpage++;
	return bookpage++;
}
int Book::prevPage()
{
	if (1 < bookpage)
		bookpage--;
	return bookpage++;
}
void Book::createBook(char *Bookname = "", int Bookpages = 100, int Bookpage = 1)
{
	strcpy(this->bookname,Bookname);
	bookpages = Bookpages;
	bookpage = Bookpages;
}