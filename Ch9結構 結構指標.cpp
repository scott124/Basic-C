#include <iostream>

using namespace std;

	struct circle
	{
		float r;
		float pi;
		float area;
	}; 					//�ŧicircle���c 
int main(){

	struct circle myCircle;
	struct circle *getdata;
	
	getdata=&myCircle;	//���VmyCircle 
	
	myCircle.r=5;		//��b�g
	myCircle.pi=3.14159;//��P�v
	myCircle.area=myCircle.r*myCircle.r*myCircle.pi; 
	
	
	//�Ĥ@�ص��c�ŧi�覡 
	cout<<"getdata->r="<<getdata->r<<endl;
	cout<<"getdata->pi="<<getdata->pi<<endl;
	cout<<"getdata->area="<<getdata->area<<endl;
	cout<<"---------------------------------------"<<endl;
	
	//�ĤG��
	cout<<"(*getdata).r"<<(*getdata).r<<endl;
	cout<<"(*getdata).pi"<<(*getdata).pi<<endl;
	cout<<"(*getdata).area"<<(*getdata).area<<endl;
		
 
 
 	return 0;
  }
  
