#include <iostream>

using namespace std;
int encode(int);
int decode(int);
int main()
{
	int pwd;
	cout<<"請輸入密碼:";
	cin>>pwd; pwd=encode(pwd);
	cout<<"加密後:"<<pwd<<endl;
	pwd=decode(pwd);
	cout<<"解密後:"<<pwd<<endl; 



	return 0;
} //引述:未加密的密碼
	//傳回值:加密後的密碼 
	
int encode(int pwd)
{
	int i;
	union	//和struct不同的是union是共用記憶體空間 
	{
		int num;
		char c[sizeof(int)];
	}u1;
	
	u1.num=pwd;
	
	for(i=0;i<sizeof(int);i++)
		u1.c[i] += 32;
		
	return u1.num;
}
int decode(int pwd)
{
	int i;
	union
	{
		int num;
		char c[sizeof(int)];
	}u1;
	
	u1.num=pwd;
	for(i=0;i<sizeof(int);i++)
		u1.c[i]-=32;
		
	return u1.num;
}
