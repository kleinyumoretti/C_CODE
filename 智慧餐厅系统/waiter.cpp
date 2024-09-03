#include "waiter.h"
using namespace std;
//有参构造
Waiter::Waiter(string name, string num)
{
	my_name = name;
	my_num = num;
}
//无参
Waiter::Waiter()
{
	;
}
//登录界面
void Waiter::loginMenu()
{
	cout << "----------------------------------------欢迎进入服务员界面---------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        登录" << endl;
	cout << "\t\t\t\t" << "2.        注册" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//服务员子菜单
void Waiter::waiterMenu()
{
	cout << "----------------------------------------欢迎进入服务员界面---------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        查看订单" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//服务员子系统
void Waiter::waiterSystem()
{
	Waiter user;
	Ordermanager order("order.txt");
	while (1)
	{
		user.waiterMenu();
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