#include <iostream>

using namespace std;

class Baseball
{
	private:
		char player[20];
		int fires;		//打擊次數 
		int safes;		//安打次數
		
		float countsafe(void); //宣告私用函式成員countsafe計算打擊率
	
	public:
		void inputplayer();
		void showplayer();		 
 };
 void Baseball::inputplayer(void)
 {
 	cout<<"打擊者:";
 	cin>>player;
 	cout<<"打擊次數:";
 	cin>>fires;
 	cout<<"安打次數:";
 	cin>>safes;
 }
 
 void Baseball::showplayer(void)
 {
 	float fs;
 	fs=countsafe();		//透過countsafe函式成員計算回傳打擊率
	cout<<"======================"<<endl;
	cout<<"打擊者:"<<player<<endl;
	cout<<"打擊次數"<<fires<<endl;
	cout<<"安打次數"<<safes<<endl;
	cout<<"打擊率"<<fs<<endl;
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
 	cout<<"輸入資料"<<endl;
	cout<<"======================"<<endl;
	
	for(i=0;i<3;i++)		//b[3]= 3筆打擊者資料,所以用for 
	{
		b[i].inputplayer();
	}
	
	for(i=0;i<3;i++)		 
	{
		b[i].showplayer();
	}
	
	return 0;
	 
 }
 
