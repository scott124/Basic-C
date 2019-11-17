#include <iostream>
#include <cstring>

using namespace std;

class teacher
{
	friend class Student;	//宣告Student為teacher朋友類別
private:
	
	char tName[10];

public:
	
	void teach(int id)
	{
		if (id==1)
			strcpy(tName,"John");	//指定tName值
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
			cout<<"學生學號:"<<stuID<<endl;
			cout<<"課程編號:"<<Select_C<<endl;
			teacher t;							//呼叫teacher物件 
			t.teach(Select_C);					//呼叫teacher類別的teach函數 
			cout<<"授課教授:"<<t.tName<<endl; 	//呼叫teacher類別的tName成員		 
		}
};

int main()
{
	Student stud1(920101,1);
	Student stud2(920102,1);
	
	
	return 0;
}
