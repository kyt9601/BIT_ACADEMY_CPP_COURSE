// 상속의 조건

// 1) is-a 관계의 성립 (일반적인 상속 으로 구현)
// - 사람은 동물이다
// - 버스는 차이다

// 2) has-a 관계의 성립 (포함관계 로 구현)
// - 군인은 총을 가지고 있다
// - 

class Mp3{};
class Camera{};
class Phone{};
class Navi{};
class Internet{};

// 애매할때는, 가장 비슷한것을 상속

class SmartPhone : public Phone	// 상속
{
private :	//  포함관계
	Mp3 mp3;
	Camera camera;
	Navi navi;
	Internet internet;
};