// 테란

#include <iostream>

using namespace std;

// 마린 클래스
class Marin
{
private :
	int hp;		// 체력
	int att;	// 공격력
	int def;	// 방어력

public :
	// getter, setter
	int getHp() { return hp; }
	void setHp(int hp) { this->hp = hp; }
	int getAtt() { return att; }
	void setAtt(int att) { this->att = att; }
	int getDef() { return def; }
	void setDef(int def) { this->def = def; }

	void Att() { cout << "공격" << endl; }
	// ...

	// 생성자 - 디폴트 파라미터 (객체가 생성된 후)
	// 1) 클래스와 이름동일, 리턴이 없다
	Marin(int hp = 50, int att = 1, int def = 1)
	{
		this->hp = hp;
		this->att = att;
		this->def = def;
	}

	// 소멸자 : 객체가 활동하면서 수행한 작업드을 정리하는 역할
	~Marin() {}
};

// 테란 클래스
class Terran
{
private :
	int TotalUnitCount;	// 총 인구수
	int UnitCount;		// 현재 인구수
	int Gas;			// 가스
	int Mineral;		// 미네랄

	// 포함 관계 : 하나의 클래스에서 다른 클래스의 객체를 포함하는 것
	Marin MarinList[200];	// 마린 200개 객체 배열

public :
	// getter, setter

	// 건물 생성
	// 유닛 생성
	// ...

	// 생성자 - 초기화 리스트 (객체가 생성되기 전)
	Terran() : TotalUnitCount(200), UnitCount(4), Gas(0), Mineral(50) {}

	// 소멸자
	~Terran() {}
};

void main()
{

}