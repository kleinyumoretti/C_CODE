#include <string.h>
#include <stdio.h>
void tongji(char arr[],int sz)
{	
	int count_lit=0;
	int count_num=0;
	int blank=0;
	int others=0;
	int i=0;
	for(i=0;i<sz;i++)
	{
		if(arr[i]>='A'&&arr[i]<='Z'||arr[i]>='a'&&arr[i]<='z')
		{
		count_lit++;
		}
		else if(arr[i]>='0'&&arr[i]<='9')
		{
		count_num++;	
		}
		else if(arr[i]==' ')
		{
		blank++;
		}
		else
		{
		others++;
		} 
	} 
		printf("a-z,A-Z:%d\n0-9:%d\n¿Õ¸ñ:%d\nother:%d",count_lit,count_num,blank,others);
	
 } 

int main()
{

	char arr[50]={0};
	int sz=0;
	gets(arr);
	sz=strlen(arr);
	tongji(arr,sz);
	return 0;
}
