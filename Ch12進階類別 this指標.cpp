#include <iostream>

using namespace std;

class Square	//�w�qSquare���O 
{
	int a;	
	
	public:
	
	Square(int n)
	{
			a=n*n;
	}	//�غc�l�w�q
	
	Square squ_sum(Square b)
	{
		this->a=this->a+b.a;
		return *this; //�z�Lthis���жǦ^Square���O���� 
	} 
	
	int show_data()
	{
		cout<<(*this).a<<endl;	//�C�L�p����Ʀ���a����
		return 0; 
	}
		
};

int main()
{
	int n1,n2;
	
	cout<<"��J�Ĥ@�Ӽ�:";
	cin>>n1;
	cout<<"��J�ĤG�Ӽ�:";
	cin>>n2;
	
	Square first(n1),second(n2),third(0); //����ŧi��l��
	
	third=first.squ_sum(second);		  //�I�sfirst�������,�öǦ^Square����
	
	third.show_data();					  //������ƦC�L���G
	
	return 0; 
	
}
