#include <iostream>

using namespace std;

class Myclass
{
	public:
		Myclass()
		{
			cout<<"�L����ѼƶǤJ�غc�l"<<endl; 
		}
		Myclass(int a)
		{
			cout<<"�ǤJ�@�ӰѼƭȪ��غc�l"<<endl;
			cout<<"a="<<a<<endl; 
		}
		Myclass(int a,int b)
		{
			cout<<"�ǤJ�G�ӰѼƭȪ��غc�l"<<endl;
			cout<<"a="<<a<<"b="<<b<<endl; 
		}
	
	private:
		//Myclass(){}�Y���Ʃw�q,�sĶ�ɷ|���Ϳ��~ 
		 
};

int main()
{
	int a,b;
	//�H���Ы��A�����O����
	a=100,b=88;
	Myclass myclass1;
	cout<<"--------------------"<<endl;
	Myclass myclass2(a);
	cout<<"--------------------"<<endl;
	Myclass myclass3(a,b);
	cout<<"--------------------"<<endl;
	
	
	return 0;
}
