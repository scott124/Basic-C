#include <iostream>

using namespace std;

class testN
{
	int no[20];
	int i;
	
	public:
		testN()
		{
			int i;
			for(i=0;i<10;i++)
				no[i]=i;
			cout<<"建構子執行完成."<<endl;
		}
		~testN()	//解構子宣告
		{
			cout<<"解構子被呼叫. \n顯示陣列內容:";
			for(i=0;i<10;i++)
				cout<<no[i]<<" ";
			cout<<"解構子已執行完成."<<endl;
		} 
};

int show_result()
{
	testN test1;	//物件離開城市區塊前,會自動呼叫解構子 
		
	return 0;
}
int main()
{
	show_result();	//呼叫有testN列別物件的函數 
	
	return 0;
}
