/*//================================================================
//  1. 동물원  -->  ex) 수족관 
//  2. 스타    -->  마린 유닛 
//  -  추상클래스 개념 
//	-  인터페이스 상속 클래스 
//================================================================
#include <iostream>

using namespace std; 

class Animal // 추상클래스 !!
{
private :
	int age;		// 나이 
	int weight;  // 무게
	int height;   // 길이
public: 
	virtual  void breeding() = 0; // 번식 
	virtual  void feeding() = 0;   //먹다
	virtual  void move()    = 0;   //이동	
	virtual  void sleep()   = 0;    //잠자다 
};

class IFly	// 공중 
{
	virtual void flying() = 0; 
};	
//					is-a(구현상속)   인터페이스 상속 !! 
class Bird :	public Animal ,  public IFly 
{	
public : 
	void breeding(){ cout << "새들은 알을 낳는다!!" << endl;  }	
};

class Egles : public Bird
{
private: 
public :
	void feeding() {} 
	void flying(){} 
	void move(){} 
	void sleep(){}
};

class IWater// 수중 생활 
{
	virtual void Swiming() = 0;
	virtual void Diving()   = 0; 
};
		///    is - a 구현 상속   인터페이스 상속 !! 
class Fish : public Animal , public IWater 
{			

};


class Zoo // 동물원 클래스 
{
private: 
	// 동물원 
	Animal * AnimalList[1024]; 
	// 수족관 
	IWater * SwimerList[1024];	
	// 새장 
	Bird * BirdList[1024]; 	
}; 

class INight //야행성 동물 
{
	virtual void OnSleep() = 0; 
};	

// 새들을 날아가게하는 함수 !! 
void flying( IFly * p ) 
{
	p->flying(); 
}


class SpawningGround // 산란장 
{	
public : 
	// 산란장에 들어오기 
	void input( Bird * e) 
	{
		e->breeding();	// 번식 !! 
	}  
	// 산란장에서 나가기 
	void output(){} 
};


void main()
{
	Egles * e	=	new Egles();
	SpawningGround sg;  // 독수리 1마리를 산란장으로 이동 !! 
	sg.input( (Bird*)e ); 

}

*/


