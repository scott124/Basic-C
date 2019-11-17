#include <iostream>

using namespace std;

int main()
{
	struct grade
	{
		struct
		{
			const char *name;				
			int height;
			int weight;
		} std[3]; 										//省略內層結構名稱定義,直接用grade結構定義
		const char *teacher;
	} g1={"John",174,65,"Justin",188,45,"Butt",99,99,"Mary"}; //設定結構變數g1初始值 
	
	int i;
	
	cout<<"老師:"<<g1.teacher<<endl;
	cout<<"------------------------------"<<endl;
	cout<<"學生姓名,身高,體重如下:"<<endl;
	
	for(i=1;i<3;i++)
		cout<<g1.std[i].name<<" "<<g1.std[i].height<<" "<<g1.std[i].weight<<endl;	//多一層結構就要多一個小數點
		
		return 0;
}
