/*// const

// 1) const ·Î ¼±¾ðµÈ °´Ã¼ 
// 2) const ¸â¹ö º¯¼ö 
// 3) const ¸â¹ö ÇÔ¼ö 

#include <iostream>

using namespace std;

class Score
{
private :
	int C;
	int Cpp;
	float Avg;	// Æò±Õ°ª
public :

	void setC(int c) { C = c; }

	Score (int c = 60, int cpp = 60)
	{
		C = c;
		Cpp = cpp;
	}
	float getAvg()
	{
		Avg = (C+Cpp) / 2;
		return Avg;
	}
	void show(Score *pthis)
	{
		cout << "== Score ==" << endl;
		cout << "C : " << pthis->C << endl;
		cout << "Cpp : " << pthis->Cpp << endl;
		cout << "Avg : " << pthis->Avg << endl;
	}
	void show(const Score *pthis)
	{
		cout << "== (const Score) ==" << endl;
		cout << "C : " << pthis->C << endl;
		cout << "Cpp : " << pthis->Cpp << endl;
		cout << "Avg : " << pthis->Avg << endl;
	}
	void show(Score *pthis) const
	{
		cout << "== (const Score) ==" << endl;
		cout << "C : " << pthis->C << endl;
		cout << "Cpp : " << pthis->Cpp << endl;
		cout << "Avg : " << pthis->Avg << endl;
	}
};

void main()
{
	Score sc(90,90);
	sc.show(&sc);

	const Score scr(80,80);
	scr.show(&scr);

	Score score(100,100); 
	const Score *pthis = &score; 
	score.show(pthis);
}*/