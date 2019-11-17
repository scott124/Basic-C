#include <iostream>

using namespace std;

#define NEWLINE cout<<endl;
#define COPYRIGHT owner();

void owner();

int main()
{
	COPYRIGHT;	//呼叫巨集 
	NEWLINE;
	COPYRIGHT;

 } 
void owner()
{
		cout<<"JOJO ADVENTURE"<<endl;
		cout<<"製作人:JOJO"<<endl;
		cout<<"日期:未知"<<endl;
}
