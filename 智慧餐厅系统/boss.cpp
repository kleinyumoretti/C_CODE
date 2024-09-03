#include "boss.h"
using namespace std;
//有参构造
Boss::Boss(string name, string num)
{
	my_name = name;
	my_num = num;
}
//无参
Boss::Boss()
{
	;
}
//登录界面
void Boss::loginMenu()
{
	cout << "-----------------------------------------欢迎进入老板界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        登录" << endl;
	cout << "\t\t\t\t" << "2.        注册" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//老板子菜单
void Boss::bossMenu()
{
	cout << "-----------------------------------------欢迎进入老板界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        查看营业额" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//老板子系统
void Boss::bossSystem()
{
	Boss user;
	Ordermanager order;
	while (1)
	{
		user.bossMenu();
		int input;
		cin >> input;
		system("cls");
		switch (input)
		{
		case 1:
		{
			cout << "\t\t---------------------------------------------查看订单--------------------------------------------" << endl;
			order.showTurnover();
			Sleep(5000);
			system("cls");
			break;
		}

		default://离开
			return;
		}
	}


	return;
}