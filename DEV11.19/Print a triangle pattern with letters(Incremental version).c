#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	char c='A';
	for(i=1;i<=6;i++)
	{
	
		for(j=1;j<=i;j++)
		{
			
			printf("%c",c);
			c++;
		}
		printf("\n");
	}
	return 0;
}
