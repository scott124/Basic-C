#include <iostream>

using namespace std;

float square(float);

int main(void)
{
	float number;
	cout<<"��J����Ʀr:";
	cin>>number;
	cout<<number<<"�����謰"<<square(number)<<endl; 
	
	return 0; 
}
float square(float number)
{
	return (number*number);
}
