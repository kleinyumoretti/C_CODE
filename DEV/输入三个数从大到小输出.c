#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep的头文件
#include <stdlib.h>//system的头文件
//a  b  c  
int main()
{
	int tmp = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	else if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	else if (b < c)
	{
		tmp = b;
		b = c;
		c = tmp;
	}
	printf("%d %d %d", a, b, c);
	return 0;
}
