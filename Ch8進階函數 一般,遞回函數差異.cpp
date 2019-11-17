#include <iostream>

using namespace std;


double rec_factorial(int ); //遞迴函數原型宣告
double factorial(int ); 

int main()
{
	int n;
	cout<<"請輸入計算階層數:";
	cin>>n;
	cout<<"遞回函數:"<<n<<"!="<<rec_factorial(n)<<endl;
	cout<<"一般迴圈函數:"<<factorial(n)<<endl; 
	 
	
	return 0; 
}

//遞迴函數 

double rec_factorial(int n)
{
	if(n==1)
		return 1;
	else
		return n*rec_factorial(n-1); //反覆執行過程
		 
}
//一般迴圈函數 
double factorial(int n)
{
	int i;
	double sum=1;
	for(i=1;i<=n;i++)
		sum*=i;
	
	return sum;	 
}

 
