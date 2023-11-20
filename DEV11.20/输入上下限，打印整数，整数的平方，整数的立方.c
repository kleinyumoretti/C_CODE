#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	int m=0;
	int n=0;
	printf("enter the start number");
	scanf("%d",&i);
	printf("enter the end number");
	scanf("%d",&j);
	for(m=i;m<=j;m++)
		printf("%6d%6d%6d\n",m,m*m,m*m*m);
		
	return 0;
}
