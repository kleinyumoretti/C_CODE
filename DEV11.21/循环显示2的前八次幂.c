#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main()
{
	int data[8];
	int i=0;
	data[0]=2;
	for(i=1;i<8;i++)
	{
		data[i]=data[i-1]*2;
	}
	i=0;
	do
	{
		printf("%d",data[i]);
		Sleep(1000);
		system("cls");
		i++;
	}while(i<8);
	return 0;
}
