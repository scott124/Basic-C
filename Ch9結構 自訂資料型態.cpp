#include <iostream>

using namespace std;

typedef int JOJO;		//JOJO�w�q��int���A 
typedef char MISTA[20]; //MISTA�w�q�����׬�20�r���}�C 

typedef struct hotel
{
	JOJO roomnumber;
	MISTA hotelname;
} hotel_info;			//�Htypedef���O�Nhotel���c,���s�w�q��hotel_info 

int main()
{
	hotel_info myhotel;	//���s�w�q���c,�����[�Wstruct�O�d�r 
	cout<<"���]�W��:";
	cin>>myhotel.hotelname;
	cout<<"�ж��ƥ�:";
	cin>>myhotel.roomnumber;
	cout<<"-------------------------"<<endl;
	cout<<"���]�W��:"<<myhotel.hotelname<<endl;
	cout<<"�ж��ƥ�:"<<myhotel.roomnumber<<endl;
	 
	
	return 0;
 } 
