#include<iostream>
#include"CH9-1.cpp"

using namespace std;

double factorial(int );//��ƭ쫬�ŧi
double Cnk(int ,int);  //��ƭ쫬�ŧi
//�D�{������
int main()
{
	int n,k;
	cout<<"�p��C(n,k)=n!/(k!(n-k)!)"<<endl;
	cout<<"---------------------------"<<endl;
	cout<<"�п�Jn=";
	cin>>n;
	cout<<"�п�Jk=";
	cin>>k;
	cout<<n<<"!"<<"/("<<k<<"!("<<n<<"-"<<k<<")!)="<<Cnk(n,k)<<endl; 	//�L���G
	
	
	return 0; 
 } 
