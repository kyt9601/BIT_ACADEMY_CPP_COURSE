// ������ ��ü�� �Ӽ��� �ൿ�� ����ü or Ŭ���� �� �ۼ��غ�����

// Ŀ��

// ���

// ����
class army
{
	// �Ӽ�
	int happiness=100;	// ���
	int hungry=50;		// ���
	int remain=500;		// ���� ������

	// �ൿ
	void work() // �۾�
	{
		happiness--;
		hungry++;
	}
	void eat() // �Ļ�
	{
		happiness++;
		hungry--;
	}
	void sleep() // ��ħ
	{
		happiness++;
		remain--;
	}
};

// Ȳ��
class yellowdust
{
	// �Ӽ�
	int amount=40;		// �Ը�
	int relation=100;	// �ش籹�� ���� ����
	int	pay=50;			// ���� �����

	// �ൿ
	void start() // Ȳ�� ����
	{
		for (int i=0; i<aomunt; i++)
			relation--;
	}
	void pay() // ȯ�� �ı� ���� ����
	{
		for (int i=0; i<pay; i++)
			relation++;
	}
};