#include <stdio.h>
#include <string.h>
#include <windows.h>//sleep的头文件
#include <stdlib.h>

int main()
{
	char arr1[] = "Y H D N B";
	char arr2[] = "#########";
	int left = 0;
	int right = strlen(arr1) - 1;
	while (left <= right)
	{
		arr2[left] = arr1[left];
		arr2[right] = arr1[right];
		Sleep(1000);
		system("cls");
		printf("%s\n", arr2);
		left++;
		right--;
	}
	return 0;
}
