#include <iostream>

using namespace std;

int main()
{
	struct student	//�ŧistudent���c
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
		cout<<"�m�W:"<<s2[i]->name<<'\t';
		cout<<"���Z:"<<s2[i]->score<<endl; 
	} //��ܵ��c����
	
	 
	return 0;
}
