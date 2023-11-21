#include <stdio.h>
int main()
{
	int arr[8];
	int i=0;
	for(i=0;i<8;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<4;i++)
	{
		int tmp=0;
		tmp=arr[i];
		arr[i]=arr[7-i];
		arr[7-i]=tmp;
	}
	for(i=0;i<8;i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
