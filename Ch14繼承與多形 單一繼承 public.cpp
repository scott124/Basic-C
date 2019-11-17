#include <iostream>

using namespace std;

class car
{
	public:
		void go()
		{
			cout<<"汽車啟動了"<<endl; 
		}
		void stop()
		{
			cout<<"汽出熄火了"<<endl; 
		}
		
};

class freighter: public car{};

int main()
{
	freighter ft;
	
	ft.stop();
	cout<<"======================="<<endl;
	
	ft.go();
	cout<<"======================="<<endl;
	//ft是freighter類別的一個物件.因為繼承關係,所以可以使用go()和stop函數
	
	
	return 0; 
}
