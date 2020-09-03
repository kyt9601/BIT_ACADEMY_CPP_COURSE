// 다음의 객체의 속성과 행동을 구조체 or 클래스 로 작성해보세요

// 커피

// 사랑

// 군대
class army
{
	// 속성
	int happiness=100;	// 사기
	int hungry=50;		// 허기
	int remain=500;		// 남은 복무일

	// 행동
	void work() // 작업
	{
		happiness--;
		hungry++;
	}
	void eat() // 식사
	{
		happiness++;
		hungry--;
	}
	void sleep() // 취침
	{
		happiness++;
		remain--;
	}
};

// 황사
class yellowdust
{
	// 속성
	int amount=40;		// 규모
	int relation=100;	// 해당국가 와의 관계
	int	pay=50;			// 피해 보상액

	// 행동
	void start() // 황사 시작
	{
		for (int i=0; i<aomunt; i++)
			relation--;
	}
	void pay() // 환경 파괴 피해 보상
	{
		for (int i=0; i<pay; i++)
			relation++;
	}
};