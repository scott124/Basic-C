#include <iostream>

using namespace std;

class student
{
	private:
		int stuID;
		float English,Math,Total,Average;
	public:
		
		student();	//�w�]�غc�l,�i�ٲ� 
		student(int id,float E,float M)	//�ŧi�غc�l
		{
			stuID=id;
			English=E;
			Math=M;
			Total=E+M;
			Average=(E+M)/2;
			
			cout<<"----------------------------"<<endl;
			cout<<"�ǥ;Ǹ�:"<<stuID<<""<<endl;
			cout<<"�^�妨�Z:"<<E<<endl;
			cout<<"�ƾǦ��Z:"<<M<<endl;
			cout<<"�`��:"<<E+M<<endl;

		} 
		 
};

int main()
{
	student stud1(920101,80,90);
	student stud2(920102,60,70);
	cout<<"----------------------------"<<endl;
	
	return 0;
}
