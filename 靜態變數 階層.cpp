#include <iostream>

using namespace std;

int Factorial(int); //顶糷笲衡ㄧ计
static int fact_no; //繰篈场跑计 
int main()
{
	int number,answer;
	
	cout<<"叫块计:";
	cin>>number;
	answer=Factorial(number); //㊣Factorial()ㄧ计
	cout<<number<<"!="<<answer<<endl;
	cout<<"fact_no="<<fact_no<<endl; //ヘ玡count 
	 
	
	return 0; 
}

//ま计:number计秈︽顶糷笲衡

int Factorial(int number)
{
	int i;
	fact_no=1;
	for(i=1;i<=number;i++)
		fact_no=fact_no*i;
	
	return fact_no;
 } 

