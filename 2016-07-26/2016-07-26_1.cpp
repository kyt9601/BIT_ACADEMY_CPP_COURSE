/*//================================================================
//  1. ������  -->  ex) ������ 
//  2. ��Ÿ    -->  ���� ���� 
//  -  �߻�Ŭ���� ���� 
//	-  �������̽� ��� Ŭ���� 
//================================================================
#include <iostream>

using namespace std; 

class Animal // �߻�Ŭ���� !!
{
private :
	int age;		// ���� 
	int weight;  // ����
	int height;   // ����
public: 
	virtual  void breeding() = 0; // ���� 
	virtual  void feeding() = 0;   //�Դ�
	virtual  void move()    = 0;   //�̵�	
	virtual  void sleep()   = 0;    //���ڴ� 
};

class IFly	// ���� 
{
	virtual void flying() = 0; 
};	
//					is-a(�������)   �������̽� ��� !! 
class Bird :	public Animal ,  public IFly 
{	
public : 
	void breeding(){ cout << "������ ���� ���´�!!" << endl;  }	
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

class IWater// ���� ��Ȱ 
{
	virtual void Swiming() = 0;
	virtual void Diving()   = 0; 
};
		///    is - a ���� ���   �������̽� ��� !! 
class Fish : public Animal , public IWater 
{			

};


class Zoo // ������ Ŭ���� 
{
private: 
	// ������ 
	Animal * AnimalList[1024]; 
	// ������ 
	IWater * SwimerList[1024];	
	// ���� 
	Bird * BirdList[1024]; 	
}; 

class INight //���༺ ���� 
{
	virtual void OnSleep() = 0; 
};	

// ������ ���ư����ϴ� �Լ� !! 
void flying( IFly * p ) 
{
	p->flying(); 
}


class SpawningGround // ����� 
{	
public : 
	// ����忡 ������ 
	void input( Bird * e) 
	{
		e->breeding();	// ���� !! 
	}  
	// ����忡�� ������ 
	void output(){} 
};


void main()
{
	Egles * e	=	new Egles();
	SpawningGround sg;  // ������ 1������ ��������� �̵� !! 
	sg.input( (Bird*)e ); 

}

*/


