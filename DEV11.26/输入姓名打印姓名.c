#include <stdio.h>;
int main()
{
	char name[40];
	int width=0;
	printf("Please input your name.\n");
	scanf("%s",name);
	width=printf("\"%s\".\n",name);
	width-=4;
	printf("\"%20s\".\n",name);
	printf("\"%-20s\".\n",name);
	printf("\"%*s\".\n",(width+3),name);
	return 0;
}
