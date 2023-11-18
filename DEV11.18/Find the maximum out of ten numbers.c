//Find the maximum out of ten numbers
#include <stdio.h>
int main()
{
	int arr1[10]={1,2,3,4,5,6,50,8,9,10};
	int max=arr1[0];
	int i=0;
	int sz=sizeof(arr1)/sizeof(arr1[0]);
	for(i=0;i<sz;i++)
	{
		if(arr1[i]>max)
		max=arr1[i];
	}
	printf("%d",max);
	return 0;
}

