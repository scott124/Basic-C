#include <iostream>

using namespace std;

	struct circle
	{
		float r;
		float pi;
		float area;
	}; 					//�ŧicircle���c 
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
	cout<<"-----�C�Lstudent���c�}�C����-----"<<endl;
	for(i=0;i<5;i++)
		cout<<"�m�W"<<class1[i].name<<"���Z:"<<class1[i].score<<endl; //�C�Lstudent���c�}�C���� 
																		 
	cout<<"-----�ϥα`�ƫ��Цs��student���c����-----"<<endl; 
	
 	for(i=0;i<5;i++)
 		cout<<"�m�W:"<<(class1+i)->name<<"���Z:"<<(class1+i)->score<<endl;  //�i�H�ϥΫ��Ъ��[���Ӧs��student����	
		  
 
 	return 0;
  }
  
