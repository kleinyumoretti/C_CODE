#include <stdio.h>
int main()
{
	int i=0;
	int j=0;
	int num=0;
	char c;
	printf("Enter the core char you want to print(A...Z):");
	scanf("%c",&c);
	char ch='A';
	num=c-'A'+1;
	for(i=1;i<=num;i++)
	{
		for(j=0;j<num-i;j++)
			printf(" ");
		for(ch='A';j<num;j++)
			printf("%c",ch++);
		for(j=1,ch-=2;j<i;j++,ch++)
		printf("%c",ch);
		printf("\n");
	}  
	
}
