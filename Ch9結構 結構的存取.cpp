#include <iostream>

using namespace std;

int main(){

	struct student
	{
		char name[10];
		int score;
	}s1,s2; 		//���c���A�ŧi�P�w�q
 
 cout<<"�ǥͩm�W:";
 
 cin>>s1.name;		//��Js1���c�ܼƪ�name���� 
 
 cout<<"��J���Z:";
 
 cin>>s1.score;		//��Js1���c�ܼƪ�score����
 
 s2=s1; 			//���c�ܼƶ������w�B�� 
 
 cout<<"s1.name ="<<s1.name<<endl;
 cout<<"s1.score ="<<s1.score<<endl;
 cout<<"s2.name ="<<s2.name<<endl;
 cout<<"s2.score ="<<s2.score<<endl;
 
 
 	return 0;
  }
  
