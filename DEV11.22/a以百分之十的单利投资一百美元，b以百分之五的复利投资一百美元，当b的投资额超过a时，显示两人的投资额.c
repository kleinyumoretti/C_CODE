#include <stdio.h>
int main()
{
	float a=100.0;
	float b=100.0;
	int i=0;
	for(i=1;;i++)
	{
		a=a+100.0*0.1;
		b=b+b*0.05;
		if(b>a)
			break;
	}
	printf("a��Ͷ�ʶ�Ϊ%f,b��Ͷ�ʶ�Ϊ%f",a,b);
	return 0;
}
