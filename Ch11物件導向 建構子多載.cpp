#include <iostream>

using namespace std;

class Myclass
{
	public:
		Myclass()
		{
			cout<<"無任何參數傳入建構子"<<endl; 
		}
		Myclass(int a)
		{
			cout<<"傳入一個參數值的建構子"<<endl;
			cout<<"a="<<a<<endl; 
		}
		Myclass(int a,int b)
		{
			cout<<"傳入二個參數值的建構子"<<endl;
			cout<<"a="<<a<<"b="<<b<<endl; 
		}
	
	private:
		//Myclass(){}若重複定義,編譯時會產生錯誤 
		 
};

int main()
{
	int a,b;
	//以指標型態的類別物件
	a=100,b=88;
	Myclass myclass1;
	cout<<"--------------------"<<endl;
	Myclass myclass2(a);
	cout<<"--------------------"<<endl;
	Myclass myclass3(a,b);
	cout<<"--------------------"<<endl;
	
	
	return 0;
}
