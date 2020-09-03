#ifndef __PC_H_
#define __PC_H_

class PC
{
public :
	int no;
	int time;
	bool use_bool;
private :
	PC() : no(0), time(0), use_bool(false) {}

	int getNo() { return no; }
	int getTime() { return time; }
	bool getUse() { return use_bool; }
	void setNo(int no) { this->no = no; }
	void setTime(int time);
	void setUse();
};

#endif