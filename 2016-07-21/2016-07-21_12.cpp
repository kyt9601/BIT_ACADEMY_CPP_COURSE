#include <iostream>

using namespace std;

class Unit
{
private :
	int hp;
	int att;
	int def;
public :
	void hold() {}
	void patrol() {}
	void move() {}
	void attack() {}
};

class Bio : public Unit
{
private :
	int attup;
	int defup;
public :
	void healed() {}
	void steampack() {}
};
class Marin : public Bio
{

};