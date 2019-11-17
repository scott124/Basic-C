#include <iostream>

using namespace std;

class student
{
	private:
		int stuID;
		float English,Math,Total,Average;
	public:
		
		student();	//預設建構子,可省略 
		student(int id,float E,float M)	//宣告建構子
		{
			stuID=id;
			English=E;
			Math=M;
			Total=E+M;
			Average=(E+M)/2;
			
			cout<<"----------------------------"<<endl;
			cout<<"學生學號:"<<stuID<<""<<endl;
			cout<<"英文成績:"<<E<<endl;
			cout<<"數學成績:"<<M<<endl;
			cout<<"總分:"<<E+M<<endl;

		} 
		 
};

int main()
{
	student stud1(920101,80,90);
	student stud2(920102,60,70);
	cout<<"----------------------------"<<endl;
	
	return 0;
}
