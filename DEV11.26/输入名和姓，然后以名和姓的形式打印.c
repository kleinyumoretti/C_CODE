#include <stdio.h>
int main()
{
	char firstname[40];
	char lastname[40];
	printf("Please input your first name\n");
	scanf("%s",&firstname);
	printf("Please input yourn last name\n");
	scanf("%s",&lastname);
	printf("Hello,%s,%s",firstname,lastname);
	return 0;
}
