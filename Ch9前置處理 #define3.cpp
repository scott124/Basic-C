#include <iostream>

using namespace std;

#define RESULT(r1,r2,h) (r1+r2)*h/2.0 //�w�q������� 

int main()
{
	int r1,r2,h;
	cout<<"-------------------"<<endl;
	cout<<"�W��="; //��J��μƭ�
	cin>>r1;
	cout<<"�U��="; 
	cin>>r2;
	cout<<"��="; 
	cin>>h; 
	cout<<"��έ��n="<<RESULT(r1,r2,h)<<endl;  //�Q�Υ������ 
	cout<<"�C�ӰѼ�+2�᪺";
	cout<<"��έ��n="<<RESULT(r1+2,r2+2,h+2)<<endl;
	
	return 0;
 } 

