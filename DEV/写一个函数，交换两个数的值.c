//写一个函数，交换两个数的值
#include<stdio.h>
void Swap(int*pa,int*pb)
{
	int tmp=*pa;
	*pa=*pb;
	*pb=tmp;
}
int main()
{
	int a=20;
	int b=30;
	int c=0;
	printf("a=%d,b=%d\n",a,b);
	Swap(&a,&b);
	printf("a=%d,b=%d\n",a,b);
 } 
