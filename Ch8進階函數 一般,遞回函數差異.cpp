#include <iostream>

using namespace std;


double rec_factorial(int ); //���j��ƭ쫬�ŧi
double factorial(int ); 

int main()
{
	int n;
	cout<<"�п�J�p�ⶥ�h��:";
	cin>>n;
	cout<<"���^���:"<<n<<"!="<<rec_factorial(n)<<endl;
	cout<<"�@��j����:"<<factorial(n)<<endl; 
	 
	
	return 0; 
}

//���j��� 

double rec_factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*rec_factorial(n-1); //���а���L�{
		 
}
//�@��j���� 
double factorial(int n)
{
	int i;
	double sum=1;
	for(i=1;i<=n;i++)
		sum*=i;
	
	return sum;	 
}

 
