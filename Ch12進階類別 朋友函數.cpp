#include <iostream>

using namespace std;

class Student
{
	friend float add_score(Student);	//�ŧiadd_score��Ƭ��٦���
	
	private:
		int stuID;
		float English,Math,Total;
		 
	public:
		Student(int id,float E,float M)	//�ŧi�غc�l 
		{
			stuID=id;
			English=E;
			Math=M;
			Total=E+M;
			cout<<"�ǥ;Ǹ�:"<<stuID<<""<<endl;
			cout<<"�`��:"<<Total<<"��"<<endl; 
		} 
};
float add_score(Student a)	//�w�qadd_score��� 
{
	a.Total+=30;
	return a.Total;
}
int main()
{
	
	Student stud1(920101,80,90);	//��stud1������
	cout<<"�[30����,�`����:"<<add_score(stud1)<<"��"<<endl;
	
	return  0;
	
}	 
 
 
