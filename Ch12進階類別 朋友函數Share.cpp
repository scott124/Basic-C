#include <iostream>

using namespace std;

class Share;
class Friend
{
	public:
		void Access(Share* s);
};
class Share
{
	friend void Friend::Access(Share* s);	//�ŧi�������Access���B�ͨ�� 
	
private:
	int a;
	void printA()
	{
		cout<<"�ϥ�Share��private��k"<<endl; 
	}
protected:
	int b;
	void printB()
	{
		cout<<"�ϥ�Share��protected��k"<<endl; 
	}
public:
	int c;
	Share()
	{
		a=1,b=2,c=3;
	}
	void printC()
	{
		cout<<"�ϥ�Share��public��k"<<endl; 
	}
	};
	void Friend::Access(Share* s)
	{
		s->a=s->b=s->c=5;
		cout<<"a="<<s->a<<" b="<<s->b<<" c="<<s->c<<endl;
		cout<<"------------------------------------------"<<endl;
		s->printA();
		s->printB();
		s->printC();
	}	//�w�q���O��Friend�������Access���e 
	
	int main()
	{
		Share sh;
		Friend fr;
		fr.Access(&sh); //�]���ѼƦ�share���A���������,�ҥH�����ǤJ &sh
		
		return 0;
	}
