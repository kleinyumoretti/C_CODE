//打印一百到两百之间所有的素数 
#include<stdio.h>
int is_prime(int x)
{
	int j=0;
	for(j=2;j<=x;j++)
	{
		if(x%j!=0)
		return 1;
		else
		return 0;
	}
}
int main()
{
	int i=0;
	{
		for(i=100;i<=200;i++)
		{
			if(is_prime(i)==1)
				printf("%d ",i); 
		}
	 } 
	 return 0;
}
