#include <iostream>

using namespace std;

class Student
{
	friend int operator+(Student&,Student&);	//宣告朋友operator+()運算子函數

private:
	
	int Score;
	
public:
	Student(int S_Score)
	{
		Score=S_Score;
	} 
};

int operator+(Student& a,Student& b)	//加法運算子函數
{
	return (a.Score+b.Score);
} 

int main()
{
	Student x(90);		//定義Student 物件x 
	Student y(75);
	cout<<"x+y="<<x+y<<endl;
	
	return 0;
}
