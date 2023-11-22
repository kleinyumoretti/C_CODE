#include <stdio.h>
int main()
{
	int arr1[8];
	int arr2[8];
	int i=0;
	int j=0;

	for(i=0;i<=7;i++)
		scanf("%d",&arr1[i]);
	for(i=0;i<=7;i++)
	{
		int sum=0;
		for(j=0;j<=i;j++)
		{
			sum+=arr1[j];
		}
		arr2[i]=sum;
	}
	for(i=0;i<=7;i++)
		printf("%4d",arr1[i]);
		printf("\n");
	for(i=0;i<=7;i++)
		printf("%4d",arr2[i]);
	return 0;
}
