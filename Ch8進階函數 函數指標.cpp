#include <iostream>

using namespace std;

void print_word1(const char*); //��ƭ쫬�ŧi 
void print_word2(const char*);

int main(void)
{
	void (*ptr)(const char*); //��ƫ��Ыŧi
	
	ptr=print_word1;		  //�Nprint_word1�O�����}���w��ptr��ƫ���
	
	ptr("Hello");
	cout<<"-----------------------------"<<endl;
	ptr=print_word2;
	ptr("Good Bye!"); 


	return 0; 
}
void print_word1(const char *str)
{
	cout<<"�o�Oprint_word1���"<<endl;
	cout<<str<<endl;
}
void print_word2(const char *str)
{
	cout<<"�o�Oprint_word2���"<<endl;
	cout<<str<<endl;
}
