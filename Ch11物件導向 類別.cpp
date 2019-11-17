#include <iostream>

using namespace std;

class student   //宣告student類別 
{
	private:	//宣告私用資料成員 
		char stuID[8];
		float scoreE,scoreM,scoreT,scoreA;

	public:		//公用資料成員
		void input_data()
		{
			cout<<"**輸入學號&各科成績**"<<endl;
			cout<<"學號:";
			cin>>stuID; 
		} 
		void show_data()
		{
			cout<<"輸入英文成績:";
			cin>>scoreE;
			
			cout<<"輸入數學成績:";
			cin>>scoreM;
			
			scoreT=scoreM+scoreE;
			
			scoreA=(scoreM+scoreE)/2;
			
			cout<<"================================"<<endl; //實作show_data函數
			
			cout<<"學號是:"<<stuID<<'\t'<<endl;
			
			cout<<"總分是:"<<scoreT<<"分,平均是"<<scoreA<<"分"<<endl; 
			
			cout<<"================================"<<endl;
		}

	
};
int main()
{
	student stud1;  //宣告student類別的物件
	stud1.input_data();
	stud1.show_data();
	
	return 0; 
}
