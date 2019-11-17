#include <iostream>

using namespace std;

int main()
{
	struct student	//宣告student結構
	{
		char name[10];
		int score;
	};		 
	   struct student s1[5]={	{"JOJO",90},	
								{"Monika",95},
								{"Sayuri",95},
								{"Chocolate",80},
								{"Sonic",99}				
							 };
	struct student *s2[5];
	int i;
	
	for(i=0;i<5;i++)
		s2[i]=&s1[i];
	
	for(i=0;i<5;i++)
	{
		cout<<"姓名:"<<s2[i]->name<<'\t';
		cout<<"成績:"<<s2[i]->score<<endl; 
	} //顯示結構成員
	
	 
	return 0;
}
