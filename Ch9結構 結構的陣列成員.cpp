#include <iostream>

using namespace std;

int main()
{
	struct student	//�ŧistudent���c
	{
		char name[10];
		int score[3];
	};		 
	struct student class1[5]={	{"JOJO",90,76,54},	
								{"Monika",95,88,54},
								{"Sayuri",95,77,55},
								{"Chocolate",80,90,54},
								{"Sonic",99,44,60}				
							 };
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<"�m�W:"<<class1[i].name<<'\t'<<"���Z:"<<'\t'<<class1[i].score[0]<<'\t'<<
		class1[i].score[1]<<'\t'<<class1[i].score[2]<<endl;		//�C�L&�s��stident���c�}�C���������� 
	}
	return 0;
}
