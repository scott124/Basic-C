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
		Num=-1;			//�Y�S�]�w��l��,�h��-1 
	}
	
	bool operator !();  //�h���@���B��l ! 

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
		cout<<"Num1�j�󵥩�0"<<endl;
	else 
		cout<<"Num1�p�󵥩�0"<<endl;
		
	return 0;
}
