#include <iostream>

using namespace std;

int main(int argc,char *argv[])
{
	int i;
	if(argc == 1) //�u���{���W��,�S��L�Ѽ�
	
		cout<<"�����w�Ѽ�!"<<endl;
	
	else
	{
		cout<<"�ҿ�J�ѼƬ�:"<<endl;
		
		for(i=0;i<argc;i++)
			cout<<argv[i]<<endl; //�C�Largv�}�C�����e 
	}
	 


	return 0; 
}

