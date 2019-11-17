#include <iostream>

using namespace std;


inline int funl(int a,int b,int c)//︽ずㄧ计﹚竡 
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"块:";
	cin>>a>>b>>c;
	
	if(funl(a,b,c)%2==0)
		
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"案计"<<endl;
	
	else
	
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"计"<<endl;
		
		
	return 0; 
		
}
