#include <stdio.h>
int main()
{
	int lower,upper;
	printf("Enter lower and upper integer limits:");
	scanf("%d%d",&lower,&upper);
	while(upper>lower)
	{
		int sum=0;
		int i=0;
		for(i=lower;i<=upper;i++)
		{
			sum=sum+i*i;
		}
		printf("%d",sum);
		scanf("%d%d",&lower,&upper);
	}
	return 0;
}
