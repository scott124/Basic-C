#include <iostream>

using namespace std;


int main()
{
	cout<<"在原始程式第"<<__LINE__<<"行開始使用前置處理巨集";	//_LINE_可印出此巨集的行號
	cout<<endl<<endl;
	cout<<"編譯的城市名稱:"<<__FILE__;	//_FILE_巨集
	cout<<endl<<endl;;
	cout<<"城市編譯日期在"<<__DATE__<<"的"<<__TIME__;
	
	cout<<endl; 
	
	
	return 0;
 } 

