#include <iostream>

using namespace std;

class Score
{
	private:
		int var1;	//�w�q�ܼ�var1
		
	friend istream& operator>>(istream& inputvar,Score& s1);
	friend ostream& operator<<(ostream& outputvar,Score& s1);
	 
};

istream& operator>>(istream& inputvar,Score& s1)
{
	cout<<"�п�J�@�Ӽƭ�:";
	
	inputvar>>s1.var1;
	return inputvar;
	
} 

//�ŧi<<�B��l�h��
ostream& operator<<(ostream& outputvar,Score& s1)
{
	cout<<"��J���Ȭ�:";
	outputvar<<s1.var1<<endl;
	return outputvar;
} 

int main()
{
	Score st1;
	
	cin>>st1;	//�ϥΦh��>>�B��l�ӿ�J�@���ܼƭ� 
	cout<<st1;
	
	return 0;
}
