// �׶�

#include <iostream>

using namespace std;

// ���� Ŭ����
class Marin
{
private :
	int hp;		// ü��
	int att;	// ���ݷ�
	int def;	// ����

public :
	// getter, setter
	int getHp() { return hp; }
	void setHp(int hp) { this->hp = hp; }
	int getAtt() { return att; }
	void setAtt(int att) { this->att = att; }
	int getDef() { return def; }
	void setDef(int def) { this->def = def; }

	void Att() { cout << "����" << endl; }
	// ...

	// ������ - ����Ʈ �Ķ���� (��ü�� ������ ��)
	// 1) Ŭ������ �̸�����, ������ ����
	Marin(int hp = 50, int att = 1, int def = 1)
	{
		this->hp = hp;
		this->att = att;
		this->def = def;
	}

	// �Ҹ��� : ��ü�� Ȱ���ϸ鼭 ������ �۾����� �����ϴ� ����
	~Marin() {}
};

// �׶� Ŭ����
class Terran
{
private :
	int TotalUnitCount;	// �� �α���
	int UnitCount;		// ���� �α���
	int Gas;			// ����
	int Mineral;		// �̳׶�

	// ���� ���� : �ϳ��� Ŭ�������� �ٸ� Ŭ������ ��ü�� �����ϴ� ��
	Marin MarinList[200];	// ���� 200�� ��ü �迭

public :
	// getter, setter

	// �ǹ� ����
	// ���� ����
	// ...

	// ������ - �ʱ�ȭ ����Ʈ (��ü�� �����Ǳ� ��)
	Terran() : TotalUnitCount(200), UnitCount(4), Gas(0), Mineral(50) {}

	// �Ҹ���
	~Terran() {}
};

void main()
{

}