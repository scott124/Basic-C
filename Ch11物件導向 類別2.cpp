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


void student::input_data()		//��@input_data��� 
{
	cout<<"��J�z�����Z:";
	cin>>stuID;
}


void student::show_data()
{
	cout<<"���Z�O:"<<stuID<<endl; 
}

int main()
{
	student stu1;
	stu1.input_data();
	stu1.show_data();
	
	return 0;
}
 
