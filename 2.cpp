#include <iostream>

using namespace std;

float square(float);

int main(void)
{
	float number;
	cout<<"輸入平方數字:";
	cin>>number;
	cout<<number<<"的平方為"<<square(number)<<endl; 
	
	return 0; 
}
float square(float number)
{
	return (number*number);
}
