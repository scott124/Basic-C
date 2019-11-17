#include <iostream>

using namespace std;

int getData(int);
float getData(float);
double getData(double);

int main()
{
	int ival=2004;
	float fval=2.3f;
	double dval=2.123;
	cout<<"°õ¦æ int getData(int)	=>	"<<getData(ival)<<endl; 
	cout<<"°õ¦æ int floatData(float)	=>	"<<getData(fval)<<endl;	
	cout<<"°õ¦æ int doubleData(int)	=>	"<<getData(dval)<<endl;
	
	return 0; 
}

int getData(int ival)
{
	return ival;
}
float getData(float fval)
{
	return fval;
}
double getData(double dval)
{
	return dval;
}



