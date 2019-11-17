#include <iostream>

using namespace std;

class IsZero
{
	int Num;

public:
	IsZero(int n)
	{
		Num=n;
	}
	IsZero()
	{
		Num=-1;			//若沒設定初始值,則為-1 
	}
	
	bool operator !();  //多載一元運算子 ! 

};

bool IsZero::operator !()
{
	if (Num>=0)
		return true;
	else
		return false;
} 

int main()
{
	IsZero Num1(3);
	if(!Num1)
		cout<<"Num1大於等於0"<<endl;
	else 
		cout<<"Num1小於等於0"<<endl;
		
	return 0;
}
