#include <iostream>

using namespace std;
int encode(int);
int decode(int);
int main()
{
	int pwd;
	cout<<"�п�J�K�X:";
	cin>>pwd; pwd=encode(pwd);
	cout<<"�[�K��:"<<pwd<<endl;
	pwd=decode(pwd);
	cout<<"�ѱK��:"<<pwd<<endl; 



	return 0;
} //�ޭz:���[�K���K�X
	//�Ǧ^��:�[�K�᪺�K�X 
	
int encode(int pwd)
{
	int i;
	union	//�Mstruct���P���Ounion�O�@�ΰO����Ŷ� 
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
