/*// ��� : ������ Ŭ������ �����޾Ƽ� �����ϴ� ��

// Emp Ŭ������ ����  PartTime Ŭ������ ���
// class PartEmp : public Emp

// public, private, protected �� ����
// class PartEmp : private Emp
// class PartEmp : protected Emp

// ���뼺

// ȸ��
// - �ӿ�
// - ������
// - ��Ʈ Ÿ��

class exc
{
private :
	int empno;			// ��� ��ȣ
	char ename[20];		// �̸�
	char job[20];		// ����
	char dept[20];		// �μ�
	int year;			// ��� �Ⱓ
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};
class emp
{
private :
	int empno;			// ��� ��ȣ
	char ename[20];		// �̸�
	char job[20];		// ����
	char dept[20];		// �μ�
	int salary;			// ����
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};
class PartTime
{
private :
	int empno;			// ��� ��ȣ
	char ename[20];		// �̸�
	char job[20];		// ����
	char dept[20];		// �μ�
	int timecount;		// ���� �ð�
	int pay;			// �ñ�
public :
	void vacation() {}
	void work() {}
	void getsalary() {}
};*/