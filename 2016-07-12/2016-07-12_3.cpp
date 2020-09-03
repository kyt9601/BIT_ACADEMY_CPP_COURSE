// 인라인 함수는
// C 에서의 매크로 (자주 사용되어지는 코드를 묶어서 간단하게 사용)

/*#include <iostream>

#define SQUARE(x) x*x // #define 은 ; 가 필요없다

using namespace std;

// C 에서 상수를 만드는 방법
#define MIN 1
#define SIZE 1024
#define COUNT 10

// C 에서의 inline
#define MAXIMUM(x,y) if (x>y) cout << x << endl; else cout << y << endl
#define MINIMUM(x,y) if (x<y) cout << x << endl; else cout << y << endl

// 인라인 (inline) : 함수가 호출되는것이 아니라, 실행코드가 복사되는 것

// 일반적인 함수의 호출
int add (int x, int y)
{
	return x + y;
}

// 인라인 을 이용한 함수의 호출
// 실제로는 실행되는 것이 아니라, 실행 코드가 복사되는 것 (함수호출보다 속도에서 이득)
inline int mul (int x, int y)
{
	x * y;
}

inline void print()
{
	cout << "BIT C++" << endl;
}

void main()
{
	MAXIMUM(20,10);
	MINIMUM(20,10);
	cout << SQUARE(10) << endl;
	cout << add(10,20) << endl;
	print();
}*/