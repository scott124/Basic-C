#include <iostream>

using namespace std;

class student
{
	private:
		char stuID[8];
		float English,Math,Total,Average;
	
	public:
		student()
		{
			cout<<"%%%%����غc�l%%%%"<<endl;	
		}	
		~student()
		{
			cout<<"####����Ѻc�l####"<<endl; 
		}
		
		void input_data()
		{
			cout<<"**��J�Ǹ�&�U�즨�Z**"<<endl;
			cout<<"�Ǹ�:";
			cin>>stuID; 
		}
		void show_data()
		{
			cout<<"��J�^�妨�Z:"; //��@input_data���
			cin>>English;
			cout<<"��J�ƾǦ��Z:"; //��@input_data���
			cin>>Math;
		
			Total=English+Math;
			Average=(English+Math)/2;
		
			cout<<"==================="<<endl;	//��@data���
			
			cout<<"�ǥ;Ǹ�:"<<stuID<<""<<endl;
			cout<<"�`��:"<<Total<<"��,����"<<Average<<"��"<<endl;
			 
			cout<<"==================="<<endl;			
		}
};
int main()
{
	student *stud1=new student;		//�ŧistudent���O�����Ъ���,�éI�s�غc�l 
	stud1->input_data();			//�I�sinput_data�������
	stud1->show_data();
	delete stud1; 
}
