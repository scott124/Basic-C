#include <iostream>

using namespace std;

int main(){

	struct student
	{
		char name[10];
		int score;
	}s1,s2; 		//結構型態宣告與定義
 
 cout<<"學生姓名:";
 
 cin>>s1.name;		//輸入s1結構變數的name成員 
 
 cout<<"輸入成績:";
 
 cin>>s1.score;		//輸入s1結構變數的score成員
 
 s2=s1; 			//結構變數間的指定運算 
 
 cout<<"s1.name ="<<s1.name<<endl;
 cout<<"s1.score ="<<s1.score<<endl;
 cout<<"s2.name ="<<s2.name<<endl;
 cout<<"s2.score ="<<s2.score<<endl;
 
 
 	return 0;
  }
  
