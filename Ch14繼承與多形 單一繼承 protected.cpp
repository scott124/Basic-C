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
	
	student() //�غc�l 
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

class s1:protected student			//�Hprotected���O�����Ostudent�~�Ӭ��s�����Os1
{
	public:
		void set_lang(int V3)
		{
			lang=V3;			    //�i�����]�w���O��public���������math 
		}
		void set_math(int v4)
		{
			math=v4;
		}
		void setage(int v5)
		{

			set_age(v5);			//�]���L�k�����s��private���O�������age
									//�����ǥѩI�sshow_age()�����禡�ӳ]�wage�Ȩæb�ù��W��� 
		}
		void show_data()
		{
			show_age();				//�P�W 
			
			cout<<"lang="<<lang<<endl;
			cout<<"math="<<math<<endl;
			
		}		
};

int main()
{
	s1 obj1;
	//�ŧi����obj1
	
	obj1.setage(10);
	//�i�ǥѩI�ssetage�����禡�өI�s���Ostudent��public���O�������禡set_age()
	
	obj1.set_lang(90);
	//�i�����s�����Ostudent��protected���O���������lang
	
	obj1.set_math(88);
	//�i�����s�����Ostudent����public���O���������math
	
	obj1.show_data();
	
	return 0;
	
	 
}
