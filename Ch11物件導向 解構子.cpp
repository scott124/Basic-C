#include <iostream>

using namespace std;

class testN
{
	int no[20];
	int i;
	
	public:
		testN()
		{
			int i;
			for(i=0;i<10;i++)
				no[i]=i;
			cout<<"�غc�l���槹��."<<endl;
		}
		~testN()	//�Ѻc�l�ŧi
		{
			cout<<"�Ѻc�l�Q�I�s. \n��ܰ}�C���e:";
			for(i=0;i<10;i++)
				cout<<no[i]<<" ";
			cout<<"�Ѻc�l�w���槹��."<<endl;
		} 
};

int show_result()
{
	testN test1;	//�������}�����϶��e,�|�۰ʩI�s�Ѻc�l 
		
	return 0;
}
int main()
{
	show_result();	//�I�s��testN�C�O���󪺨�� 
	
	return 0;
}
