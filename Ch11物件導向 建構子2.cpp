#include <iostream>

using namespace std;

class student
{
	private:
		int stuID;
		float English,Math,Total,Average;
	public:
		
		student();	
		student(int id,float E,float M);	//�ŧi�T�ӰѼƪ��غc�l
		void show_data(); 				//�ŧi������ƪ��쫬 
};

student::student()
{
	stuID=920101;
	English=60;
	Math=80;
	
}

student::student(int id,float E,float M)
{
	stuID=id;		//���w���Ѽ� 
	English=E;
	Math=M;	
}
void student::show_data()
{
	Total=English+Math;
	Average=(English+Math)/2;
	cout<<"=================="<<endl;
	cout<<"�ǥ;Ǹ�"<<stuID<<""<<endl;
	cout<<"�`��"<<Total<<"��,����"<<Average<<"��"<<endl; 
}


int main()
{
	student stud;		//�ŧistudent���O������,���ɷ|�I�s�L�Ѽƪ��غc�l 
	stud.show_data();   //�I�sshow_data�����Ѽ�
	 
	student stud1(920102,30,40);  //�ŧistudent�������O������,���ɷ|�I�s�T�ӰѼƪ��غc�l 
	
	stud1.show_data();
	 
	return 0;
}
