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

class s1:protected student			//以protected型別自類別student繼承為新的類別s1
{
	public:
		void set_lang(int V3)
		{
			lang=V3;			    //可直接設定型別為public的成員資料math 
		}
		void set_math(int v4)
		{
			math=v4;
		}
		void setage(int v5)
		{

			set_age(v5);			//因為無法直接存取private型別成員資料age
									//必須藉由呼叫show_age()成員函式來設定age值並在螢幕上顯示 
		}
		void show_data()
		{
			show_age();				//同上 
			
			cout<<"lang="<<lang<<endl;
			cout<<"math="<<math<<endl;
			
		}		
};

int main()
{
	s1 obj1;
	//宣告物件obj1
	
	obj1.setage(10);
	//可藉由呼叫setage成員函式來呼叫類別student內public型別的成員函式set_age()
	
	obj1.set_lang(90);
	//可直接存取類別student內protected型別的成員資料lang
	
	obj1.set_math(88);
	//可直接存取類別student內的public型別的成員資料math
	
	obj1.show_data();
	
	return 0;
	
	 
}
