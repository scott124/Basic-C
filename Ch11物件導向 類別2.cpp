#include <iostream>
#include <cstdlib>
using namespace std;

class student  
{
	private:	
		int stuID;
		
	public:		
		void input_data();
		void show_data();
};


void student::input_data()		//實作input_data函數 
{
	cout<<"輸入您的成績:";
	cin>>stuID;
}


void student::show_data()
{
	cout<<"成績是:"<<stuID<<endl; 
}

int main()
{
	student stu1;
	stu1.input_data();
	stu1.show_data();
	
	return 0;
}
 
