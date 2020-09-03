/*// 다형성과 포인터 배열

// 다형성은 항상
// 객체 포인터 배열과 함께한다

#include <iostream>

using namespace std;

// 동물원
class Animal
{
private :
	int age;
public :
//			void Move() { cout << "동물이 움직이다" << endl; }
	virtual void Move() { cout << "동물이 움직이다" << endl; }		// 오버 라이딩이 안되는것에 대한 해결책
};
class Tiger : public Animal
{
private :
public :
	void Move() { cout << "사자가 움직이다" << endl; }
};
class Eagle : public Animal
{
private :
public :
	void Move() { cout << "독수리가 날아가다" << endl; }
};

void main()
{
	// 호랑이를 동물로 가리키다
	Animal *pAni1 = new Tiger;			// 호랑이는 동물이다

	// 독수리를 동물로 가리키다
	Animal *pAni2 = new Eagle;			// 독수리는 동물이다

	Animal *Zoo[5];		// Animal 의 주소값을 저장 가능한, 객체 포인터 배열

//	Zoo 에 저장 가능한 주소값 => Animal, Tiger, Zoo

	// 부모의 개념으로 자식을 참조할 수 있다
	Zoo[0] = new Animal;
	Zoo[1] = new Tiger;
	Zoo[2] = new Eagle;

	// 부모 클래스 는 부모클래스 의 멤버만 사용할 수 있다
	// => 오버라이딩이 안된다
	// => 해결첵 : 부모 클래스에서 virtual void Move() {}
	Zoo[0]->Move();
	Zoo[1]->Move();
	Zoo[2]->Move();
}*/