#include "chef.h"
using namespace std;
//有参构造
Chef::Chef(string name, string num)
{
	my_name = name;
	my_num = num;
}
//无参
Chef::Chef()
{
	;
}
//登录界面
void Chef::loginMenu()
{
	cout << "-----------------------------------------欢迎进入厨师界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        登录" << endl;
	cout << "\t\t\t\t" << "2.        注册" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//厨师子菜单
void Chef::chefMenu()
{
	cout << "-----------------------------------------欢迎进入厨师界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        查看订单" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//厨师子系统
void Chef::chefSystem()
{
	Chef user;
	Ordermanager order("order.txt");
	while (1)
	{
		user.chefMenu();
		int input;
		cin >> input;
		system("cls");
		switch (input)
		{
		case 1:
		{
			cout << "\t\t---------------------------------------------查看订单--------------------------------------------" << endl;
			order.showOrder();
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