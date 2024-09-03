#include <iostream>
#include <string>
#include <Windows.h>
#include "system.h"
using namespace std;
int main()
{
	while (1)
	{
	System sys;
	sys.systemMenu();
	int input;
	cin >> input;
	switch (input)
	{
	case 1://厨师
		system("cls");
		sys.systemLogin(input);
		break;
	case 2://服务员
		system("cls");
		sys.systemLogin(input);
		break;
	case 3://顾客
		system("cls");
		sys.systemLogin(input);
		break;
	case 4://老板
		system("cls");
		sys.systemLogin(input);
		break;
	case 0://离开
		system("cls");
		sys.systemExit();
		Sleep(3000);
		return 0;
	}
	system("cls");
	}
}