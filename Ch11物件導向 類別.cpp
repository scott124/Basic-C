#include <iostream>

using namespace std;

class student   //�ŧistudent���O 
{
	private:	//�ŧi�p�θ�Ʀ��� 
		char stuID[8];
		float scoreE,scoreM,scoreT,scoreA;

	public:		//���θ�Ʀ���
		void input_data()
		{
			cout<<"**��J�Ǹ�&�U�즨�Z**"<<endl;
			cout<<"�Ǹ�:";
			cin>>stuID; 
		} 
		void show_data()
		{
			cout<<"��J�^�妨�Z:";
			cin>>scoreE;
			
			cout<<"��J�ƾǦ��Z:";
			cin>>scoreM;
			
			scoreT=scoreM+scoreE;
			
			scoreA=(scoreM+scoreE)/2;
			
			cout<<"================================"<<endl; //��@show_data���
			
			cout<<"�Ǹ��O:"<<stuID<<'\t'<<endl;
			
			cout<<"�`���O:"<<scoreT<<"��,�����O"<<scoreA<<"��"<<endl; 
			
			cout<<"================================"<<endl;
		}

	
};
int main()
{
	student stud1;  //�ŧistudent���O������
	stud1.input_data();
	stud1.show_data();
	
	return 0; 
}
