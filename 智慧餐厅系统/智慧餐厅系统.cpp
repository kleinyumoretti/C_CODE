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
	case 1://��ʦ
		system("cls");
		sys.systemLogin(input);
		break;
	case 2://����Ա
		system("cls");
		sys.systemLogin(input);
		break;
	case 3://�˿�
		system("cls");
		sys.systemLogin(input);
		break;
	case 4://�ϰ�
		system("cls");
		sys.systemLogin(input);
		break;
	case 0://�뿪
		system("cls");
		sys.systemExit();
		Sleep(3000);
		return 0;
	}
	system("cls");
	}
}