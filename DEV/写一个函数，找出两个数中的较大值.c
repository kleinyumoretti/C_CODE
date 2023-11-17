//写一个函数，找出两个数中的较大值
#include<stdio.h>
int get_max(int x,int y)
{
	if(x>y)
		return x;
	else
		return y;
}
int main()
{
	int a=20;
	int b=10;
	int c=0;
	c=get_max(a,b);
	printf("%d\n",c);
	return 0;
 } 
