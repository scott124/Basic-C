#include <iostream>

using namespace std;

int main()
{
	struct grade
	{
		struct
		{
			const char *name;				
			int height;
			int weight;
		} std[3]; 										//�ٲ����h���c�W�٩w�q,������grade���c�w�q
		const char *teacher;
	} g1={"John",174,65,"Justin",188,45,"Butt",99,99,"Mary"}; //�]�w���c�ܼ�g1��l�� 
	
	int i;
	
	cout<<"�Ѯv:"<<g1.teacher<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"�ǥͩm�W,����,�魫�p�U:"<<endl;
	
	for(i=1;i<3;i++)
		cout<<g1.std[i].name<<" "<<g1.std[i].height<<" "<<g1.std[i].weight<<endl;	//�h�@�h���c�N�n�h�@�Ӥp���I
		
		return 0;
}
