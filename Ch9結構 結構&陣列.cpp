#include <iostream>

using namespace std;

	struct circle
	{
		float r;
		float pi;
		float area;
	}; 					//宣告circle結構 
int main(){

	struct student
	{
		char name[20];
		int score;
	};
	struct student class1[10]={ {"Chorluno", 90},
								{"Boojalatee", 95},
								{"Mista",98},
								{"Waganda",75},
								{"KelimuKing",99}	};
	
	int i;
	cout<<"-----列印student結構陣列成員-----"<<endl;
	for(i=0;i<5;i++)
		cout<<"姓名"<<class1[i].name<<"成績:"<<class1[i].score<<endl; //列印student結構陣列元素 
																		 
	cout<<"-----使用常數指標存取student結構成員-----"<<endl; 
	
 	for(i=0;i<5;i++)
 		cout<<"姓名:"<<(class1+i)->name<<"成績:"<<(class1+i)->score<<endl;  //可以使用指標的觀念來存取student成員	
		  
 
 	return 0;
  }
  
