#include <iostream>

using namespace std;

void print_word1(const char*); //ㄧ计 
void print_word2(const char*);

int main(void)
{
	void (*ptr)(const char*); //ㄧ计夹
	
	ptr=print_word1;		  //盢print_word1癘拘砰﹚倒ptrㄧ计夹
	
	ptr("Hello");
	cout<<"-----------------------------"<<endl;
	ptr=print_word2;
	ptr("Good Bye!"); 


	return 0; 
}
void print_word1(const char *str)
{
	cout<<"硂琌print_word1ㄧ计"<<endl;
	cout<<str<<endl;
}
void print_word2(const char *str)
{
	cout<<"硂琌print_word2ㄧ计"<<endl;
	cout<<str<<endl;
}
