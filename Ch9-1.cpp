double factorial(int n)	//���h���
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
 } 

double Cnk(int n,int k)	//Cnk��� 
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}
 
