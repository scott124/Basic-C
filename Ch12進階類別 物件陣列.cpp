#include <iostream>

using namespace std;

class Baseball
{
	private:
		char player[20];
		int fires;		//�������� 
		int safes;		//�w������
		
		float countsafe(void); //�ŧi�p�Ψ禡����countsafe�p�⥴���v
	
	public:
		void inputplayer();
		void showplayer();		 
 };
 void Baseball::inputplayer(void)
 {
 	cout<<"������:";
 	cin>>player;
 	cout<<"��������:";
 	cin>>fires;
 	cout<<"�w������:";
 	cin>>safes;
 }
 
 void Baseball::showplayer(void)
 {
 	float fs;
 	fs=countsafe();		//�z�Lcountsafe�禡�����p��^�ǥ����v
	cout<<"======================"<<endl;
	cout<<"������:"<<player<<endl;
	cout<<"��������"<<fires<<endl;
	cout<<"�w������"<<safes<<endl;
	cout<<"�����v"<<fs<<endl;
 }
 float Baseball::countsafe()
 {
 	float counts;
 	counts=(float(safes)/float(fires));
 	return counts;
 }
 int main()
 {
 	Baseball b[3];
 	int i;
 	cout<<"��J���"<<endl;
	cout<<"======================"<<endl;
	
	for(i=0;i<3;i++)		//b[3]= 3�������̸��,�ҥH��for 
	{
		b[i].inputplayer();
	}
	
	for(i=0;i<3;i++)		 
	{
		b[i].showplayer();
	}
	
	return 0;
	 
 }
 
