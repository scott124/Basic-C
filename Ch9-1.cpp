double factorial(int n)	//¶¥¼h¨ç¼Æ
{
	if(n==1)
		return 1;
	else
		return n*factorial(n-1);
 } 

double Cnk(int n,int k)	//Cnk¨ç¼Æ 
{
	return factorial(n)/(factorial(k)*factorial(n-k));
}
 
