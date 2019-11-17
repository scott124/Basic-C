#include <iostream>

using namespace std;

class student
{
	private:
		int age;
	
	protected:
		int lang;
	
	public:
		int math;
	
	student() //建構子 
	{
		age=0;
		lang=0;
		math=0;	
	}
	
	void set_age(int a1)
	{
		age=a1;
	}
	
	void show_age()
	{
		cout<<"age="<<age<<endl;	
	}	
};

//以private型別自類別student繼承成為新的類別s1

class s1:private student
{
	public:
		void set_lang(int v3)
		{
			lang=v3;
		}	
		
		void set_math(int v4)
		{
			math=v4;
		}
		void setage(int v5)
		{
			set_age(v5);
		}
		void show_data()
		{
			
			show_age();
			
			cout<<"lang="<<lang<<endl;
			
			cout<<"math="<<math<<endl;
			
		}
};

int main()
{
	s1 obj1;
	
	obj1.setage(35);
	obj1.set_lang(100);
	obj1.set_math(95);
	obj1.show_data();
	
	return 0;
}
