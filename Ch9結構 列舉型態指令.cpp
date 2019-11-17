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
	};	 		//宣告drink列舉型態 
	
	enum Drink c_drink; //定義Drink列舉型態變數 corp_drink
	
	c_drink=coffee;		//指定變數 c_drink值為coffee
	cout<<"列舉型態的coffee值="<<c_drink<<endl;
	 
	c_drink=milk;		
	cout<<"列舉型態的milk值="<<c_drink<<endl;
	
	c_drink=water;		
	cout<<"列舉型態的water值="<<c_drink<<endl;
	
	
	
	 
	return 0;
 } 
