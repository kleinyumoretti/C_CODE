#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep的头文件
#include <stdlib.h>//system的头文件

int main()
{
	int i = 0;
	int password[20] = { 0 };
		for (i = 1; i <= 3; i++)
		{
			printf("请输入密码：>");
			scanf("%s", &password);
			if (strcmp(password, "123456") == 0)
			{
				printf("输入正确\n");
				break;
			}
			else
			{
				printf("请重新输入\n");
			}
		}
			return 0;
}

