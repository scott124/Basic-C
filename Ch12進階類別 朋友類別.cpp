#include <iostream>
#include <cstring>

using namespace std;

class teacher
{
	friend class Student;	//�ŧiStudent��teacher�B�����O
private:
	
	char tName[10];

public:
	
	void teach(int id)
	{
		if (id==1)
			strcpy(tName,"John");	//���wtName��
		else
			strcpy(tName,"Andy"); 
	 } 
};
class Student
{
	private:
	
		int stuID,Select_C;
	
	public:
		Student(int id,int C)
		{
			stuID=id;
			Select_C;
			cout<<"�ǥ;Ǹ�:"<<stuID<<endl;
			cout<<"�ҵ{�s��:"<<Select_C<<endl;
			teacher t;							//�I�steacher���� 
			t.teach(Select_C);					//�I�steacher���O��teach��� 
			cout<<"�½ұб�:"<<t.tName<<endl; 	//�I�steacher���O��tName����		 
		}
};

int main()
{
	Student stud1(920101,1);
	Student stud2(920102,1);
	
	
	return 0;
}
