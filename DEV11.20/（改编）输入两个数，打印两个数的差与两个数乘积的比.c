#include <stdio.h>
float ans(float a,float b)
{
	return (a-b)/(a*b);
}
int main()
{
	float a,b;
	float i;
	while(scanf("%f%f",&a,&b)==2)
	{
	i=ans(a,b);
	printf("%f",i);
	}
	printf("\n");
	return 0;
}
