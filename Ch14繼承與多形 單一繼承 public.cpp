#include <iostream>

using namespace std;

class car
{
	public:
		void go()
		{
			cout<<"�T���ҰʤF"<<endl; 
		}
		void stop()
		{
			cout<<"�T�X�����F"<<endl; 
		}
		
};

class freighter: public car{};

int main()
{
	freighter ft;
	
	ft.stop();
	cout<<"======================="<<endl;
	
	ft.go();
	cout<<"======================="<<endl;
	//ft�Ofreighter���O���@�Ӫ���.�]���~�����Y,�ҥH�i�H�ϥ�go()�Mstop���
	
	
	return 0; 
}
