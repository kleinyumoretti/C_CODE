#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep��ͷ�ļ�
#include <stdlib.h>//system��ͷ�ļ�

int main()
{
	int i = 0;
	int password[20] = { 0 };
		for (i = 1; i <= 3; i++)
		{
			printf("���������룺>");
			scanf("%s", &password);
			if (strcmp(password, "123456") == 0)
			{
				printf("������ȷ\n");
				break;
			}
			else
			{
				printf("����������\n");
			}
		}
			return 0;
}

