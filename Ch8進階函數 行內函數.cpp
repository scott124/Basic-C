#include <iostream>

using namespace std;


inline int funl(int a,int b,int c)//�椺��Ʃw�q 
{
	return a+b+c;
}

int main()
{
	int a,b,c;
	cout<<"��J�T�Ӧr:";
	cin>>a>>b>>c;
	
	if(funl(a,b,c)%2==0)
		
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"������"<<endl;
	
	else
	
		cout<<a<<"+"<<b<<"+"<<c<<"="<<a+b+c<<"���_��"<<endl;
		
		
	return 0; 
		
}
