#include <iostream>

using namespace std;

int main()
{
	enum Drink
	{
		coffee=25,
		milk=20,
		tea=15,
		water
	};	 		//�ŧidrink�C�|���A 
	
	enum Drink c_drink; //�w�qDrink�C�|���A�ܼ� corp_drink
	
	c_drink=coffee;		//���w�ܼ� c_drink�Ȭ�coffee
	cout<<"�C�|���A��coffee��="<<c_drink<<endl;
	 
	c_drink=milk;		
	cout<<"�C�|���A��milk��="<<c_drink<<endl;
	
	c_drink=water;		
	cout<<"�C�|���A��water��="<<c_drink<<endl;
	
	
	
	 
	return 0;
 } 
