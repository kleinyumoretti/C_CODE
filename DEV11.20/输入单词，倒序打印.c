#include <stdio.h>
#include <string.h>
int main()
{
	char arr[10];
	int i;
	int right;
	scanf("%s",&arr);
	right=strlen(arr);
	for(i=right-1;i>=0;i--)
	 printf("%c",arr[i]);
	 return 0;
	
}
