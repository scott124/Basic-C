#include <iostream>

using namespace std;

struct product
{
	char name[20];				
	int price;
	int number;
};	//�b����d�򤺰��ŧi	
	
int calculate(struct product); //�ǭȩI�s�쫬�ŧi
	
int main() 
{
	struct product book;
	
	cout<<"�ѦW:";
	cin>>book.name;
	cout<<"���:";
	cin>>book.price;
	cout<<"�ƶq:";
	cin>>book.number;
	cout<<"----------------------"<<endl;
	cout<<"�ѦW:"<<book.name<<endl;
	cout<<"��� ="<<book.price<<endl;
	cout<<"�ƶq ="<<book.number<<endl;
	cout<<"�q�ʪ��B ="<<calculate(book)<<endl;
	//�I�s��,�����N���c�ܼƦW�ٶǤJ��ƧY�i
	
	return 0; 
}
int calculate(struct product inbook)
{
	int money;
	money=inbook.price*inbook.number;
	return money;
}
