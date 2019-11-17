#include <iostream>

using namespace std;

struct product
{
	char name[20];				
	int price;
	int number;
};	//在全域範圍內做宣告	
	
int calculate(struct product); //傳值呼叫原型宣告
	
int main() 
{
	struct product book;
	
	cout<<"書名:";
	cin>>book.name;
	cout<<"單價:";
	cin>>book.price;
	cout<<"數量:";
	cin>>book.number;
	cout<<"----------------------"<<endl;
	cout<<"書名:"<<book.name<<endl;
	cout<<"單價 ="<<book.price<<endl;
	cout<<"數量 ="<<book.number<<endl;
	cout<<"訂購金額 ="<<calculate(book)<<endl;
	//呼叫時,直接將結構變數名稱傳入函數即可
	
	return 0; 
}
int calculate(struct product inbook)
{
	int money;
	money=inbook.price*inbook.number;
	return money;
}
