// ����� ����

// 1) is-a ������ ���� (�Ϲ����� ��� ���� ����)
// - ����� �����̴�
// - ������ ���̴�

// 2) has-a ������ ���� (���԰��� �� ����)
// - ������ ���� ������ �ִ�
// - 

class Mp3{};
class Camera{};
class Phone{};
class Navi{};
class Internet{};

// �ָ��Ҷ���, ���� ����Ѱ��� ���

class SmartPhone : public Phone	// ���
{
private :	//  ���԰���
	Mp3 mp3;
	Camera camera;
	Navi navi;
	Internet internet;
};