/*// static �� class

// 1) static ��� ���� => ��� ��ü���� �����ϴ� ����
// - ���� �ν��Ͻ����� 1���� �����Ͽ� �����

// 2) static ��� �Լ� => ��ü ���� ȣ�� ������ �Լ�
// - ��ü�� �ൿ�� �ƴ� Ŭ������ �ൿ

#include <iostream>

using namespace std;

// ����
class Bus	// �⺻���� private
{
public :
static	char *Parking;	// ������ - class �� 1���� ���������

		int LineNo;		// �뼱 ��ȣ

};
char *Bus::Parking = "���絿";
// static ��� ������ �ݵ�� class �ܺο��� �ٽ� ���� ���־�� �Ѵ�

// �츮�� �л���
class CppStudent
{
private :
		char name[20];			// �̸�
static	char subject[20];		// �����
static	char instructor[20];	// �����
};
char CppStudent::subject[20] =		"C++";		// ����� �ݵ�� ���� ���־�� �Ѵ�
char CppStudent::instructor[20] =	"�强��";	// [20] ����

void main()
{
	char* name = "fdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdgfdg";
	cout << name << endl;

	cout << Bus::Parking << endl;
	// ��ü ����, Ŭ���� �̸����� �ٷ� ������ ����
}*/