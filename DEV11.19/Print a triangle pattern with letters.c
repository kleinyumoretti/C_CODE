#include <stdio.h>
int main()
{
	int i=0;
	int j=0;

	for(i=1;i<=6;i++)
	{
		char c='F';
		for(j=1;j<=i;j++)
		{
			
			printf("%c",c);
			c--;
		}
		printf("\n");
	}
	return 0;
}
