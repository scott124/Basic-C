#include <iostream>

using namespace std;

	struct circle
	{
		float r;
		float pi;
		float area;
	}; 					//宣告circle結構 
int main(){

	struct circle myCircle;
	struct circle *getdata;
	
	getdata=&myCircle;	//指向myCircle 
	
	myCircle.r=5;		//圓半經
	myCircle.pi=3.14159;//圓周率
	myCircle.area=myCircle.r*myCircle.r*myCircle.pi; 
	
	
	//第一種結構宣告方式 
	cout<<"getdata->r="<<getdata->r<<endl;
	cout<<"getdata->pi="<<getdata->pi<<endl;
	cout<<"getdata->area="<<getdata->area<<endl;
	cout<<"---------------------------------------"<<endl;
	
	//第二種
	cout<<"(*getdata).r"<<(*getdata).r<<endl;
	cout<<"(*getdata).pi"<<(*getdata).pi<<endl;
	cout<<"(*getdata).area"<<(*getdata).area<<endl;
		
 
 
 	return 0;
  }
  
