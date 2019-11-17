#include <iostream>

using namespace std;

class student
{
	private:
		int stuID;
		float English,Math,Total,Average;
	public:
		
		student();	
		student(int id,float E,float M);	//把计篶
		void show_data(); 				//Θㄧ计 
};

student::student()
{
	stuID=920101;
	English=60;
	Math=80;
	
}

student::student(int id,float E,float M)
{
	stuID=id;		//﹚把计 
	English=E;
	Math=M;	
}
void student::show_data()
{
	Total=English+Math;
	Average=(English+Math)/2;
	cout<<"=================="<<endl;
	cout<<"厩ネ厩腹"<<stuID<<""<<endl;
	cout<<"羆だ"<<Total<<"だ,キА"<<Average<<"だ"<<endl; 
}


int main()
{
	student stud;		//student摸ン,穦㊣礚把计篶 
	stud.show_data();   //㊣show_dataΘ把计
	 
	student stud1(920102,30,40);  //studentン摸ン,穦㊣把计篶 
	
	stud1.show_data();
	 
	return 0;
}
