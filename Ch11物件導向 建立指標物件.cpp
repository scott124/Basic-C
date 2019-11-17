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
			cout<<"%%%%執行建構子%%%%"<<endl;	
		}	
		~student()
		{
			cout<<"####執行解構子####"<<endl; 
		}
		
		void input_data()
		{
			cout<<"**輸入學號&各科成績**"<<endl;
			cout<<"學號:";
			cin>>stuID; 
		}
		void show_data()
		{
			cout<<"輸入英文成績:"; //實作input_data函數
			cin>>English;
			cout<<"輸入數學成績:"; //實作input_data函數
			cin>>Math;
		
			Total=English+Math;
			Average=(English+Math)/2;
		
			cout<<"==================="<<endl;	//實作data函數
			
			cout<<"學生學號:"<<stuID<<""<<endl;
			cout<<"總分:"<<Total<<"分,平均"<<Average<<"分"<<endl;
			 
			cout<<"==================="<<endl;			
		}
};
int main()
{
	student *stud1=new student;		//宣告student類別的指標物件,並呼叫建構子 
	stud1->input_data();			//呼叫input_data成員函數
	stud1->show_data();
	delete stud1; 
}
