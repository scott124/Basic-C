#include <iostream>

using namespace std;

typedef int JOJO;		//JOJO定義成int型態 
typedef char MISTA[20]; //MISTA定義成長度為20字元陣列 

typedef struct hotel
{
	JOJO roomnumber;
	MISTA hotelname;
} hotel_info;			//以typedef指令將hotel結構,重新定義成hotel_info 

int main()
{
	hotel_info myhotel;	//重新定義結構,不必加上struct保留字 
	cout<<"旅館名稱:";
	cin>>myhotel.hotelname;
	cout<<"房間數目:";
	cin>>myhotel.roomnumber;
	cout<<"-------------------------"<<endl;
	cout<<"旅館名稱:"<<myhotel.hotelname<<endl;
	cout<<"房間數目:"<<myhotel.roomnumber<<endl;
	 
	
	return 0;
 } 
