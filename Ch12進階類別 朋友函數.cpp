#include <iostream>

using namespace std;

class Student
{
	friend float add_score(Student);	//宣告add_score函數為夥伴函數
	
	private:
		int stuID;
		float English,Math,Total;
		 
	public:
		Student(int id,float E,float M)	//宣告建構子 
		{
			stuID=id;
			English=E;
			Math=M;
			Total=E+M;
			cout<<"學生學號:"<<stuID<<""<<endl;
			cout<<"總分:"<<Total<<"分"<<endl; 
		} 
};
float add_score(Student a)	//定義add_score函數 
{
	a.Total+=30;
	return a.Total;
}
int main()
{
	
	Student stud1(920101,80,90);	//給stud1物件初值
	cout<<"加30分後,總分為:"<<add_score(stud1)<<"分"<<endl;
	
	return  0;
	
}	 
 
 
