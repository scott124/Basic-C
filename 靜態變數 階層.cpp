#include <iostream>

using namespace std;

int Factorial(int); //���h�B����
static int fact_no; //�ŧi�R�A�~���ܼ� 
int main()
{
	int number,answer;
	
	cout<<"�п�X�Ʀr:";
	cin>>number;
	answer=Factorial(number); //�I�sFactorial()���
	cout<<number<<"!="<<answer<<endl;
	cout<<"fact_no="<<fact_no<<endl; //�C�L�ثecount�� 
	 
	
	return 0; 
}

//�޼�:number�����ƭȶi�涥�h�B��

int Factorial(int number)
{
	int i;
	fact_no=1;
	for(i=1;i<=number;i++)
		fact_no=fact_no*i;
	
	return fact_no;
 } 

