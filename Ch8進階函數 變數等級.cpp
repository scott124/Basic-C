#include <iostream>

using namespace std;

int sum(int);
int sum1(int); //�쫬��ƫŧi 
int main()
{
	int n;
	
	cout<<"�Ĥ@���I�s"<<endl;
	cout<<"�@���ܼƨ��"<<sum(5)<<endl;
	cout<<"�R�A�ܼƨ��"<<sum1(5)<<endl;
	
	cout<<"�ĤG���I�s"<<endl;
	cout<<"�@���ܼƨ��"<<sum(10)<<endl; 
	cout<<"�R�A�ܼƨ��"<<sum1(10)<<endl;
	
	cout<<"�ĤT���I�s"<<endl; 
	cout<<"�@���ܼƨ��"<<sum(15)<<endl; 
	cout<<"�R�A�ܼƨ��"<<sum1(15)<<endl;
	
	 
	
	return 0; 
}
int sum(int n)	//�@���ܼƨ�� 
{
	int sum=0;
	sum+=n;
	return sum;
}
int sum1(int n) //�R�A�ܼƪ���� 
{
	static int sum; //�ŧi�R�A�ܼ�sum
	
	sum+=n;
	return sum; 
	
}


