#include <stdio.h>
int main()
{
	float a,b;
	float i;
	while(scanf("%f%f",&a,&b)==2)
	{
		i=(a-b)/(a*b);
		printf("%f",i);
	}
	printf("\n");
	return 0;
}
