#include <iostream>

using namespace std;

#define RESULT(r1,r2,h) (r1+r2)*h/2.0 //定義巨集函數 

int main()
{
	int r1,r2,h;
	cout<<"-------------------"<<endl;
	cout<<"上底="; //輸入梯形數值
	cin>>r1;
	cout<<"下底="; 
	cin>>r2;
	cout<<"高="; 
	cin>>h; 
	cout<<"梯形面積="<<RESULT(r1,r2,h)<<endl;  //利用巨集函數 
	cout<<"每個參數+2後的";
	cout<<"梯形面積="<<RESULT(r1+2,r2+2,h+2)<<endl;
	
	return 0;
 } 

