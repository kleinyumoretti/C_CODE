#include "customer.h"
using namespace std;
//有参构造
Customer::Customer(string name, string num)
{
	my_name = name;
	my_num = num;
}
//无参构造
Customer::Customer()
{
	;
}
//登录界面
void Customer::loginMenu()
{
	cout << "-----------------------------------------欢迎进入顾客界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        登录" << endl;
	cout << "\t\t\t\t" << "2.        注册" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}
//顾客子菜单
void Customer::customerMenu()
{
	cout << "-----------------------------------------欢迎进入顾客界面----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择以下操作：" << endl;
	cout << "\t\t\t\t" << "1.        点餐" << endl;
	cout << "\t\t\t\t" << "2.        查看订单" << endl;
	cout << "\t\t\t\t" << "3.        修改订单" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}

void Customer::customerSystem()
{
	Customer user;
	Ordermanager order;
	while (1)
	{
		user.customerMenu();
		Menumanager menu("menu.txt");
		int input;
		cin >> input;
		system("cls");
		switch(input)
		{
		case 1://点餐
		{
			
			cout << "\t\t---------------------------------------------菜单界面--------------------------------------------" << endl;
			menu.displayMenu();
			
			int input;
			cout << endl << "\t\t\t\t\t\t" << "请输入菜品序号" << endl;
			cout << "\t\t\t\t\t\t" << "输入零结束点菜" << endl;
			while (cin >> input, input)
			{
				if (input >= 1 && input <= 8)
					order.addOrder(menu.getMenu()[input-1]);
			}
			cout << "点餐成功" << endl;
			order.showOrder();
			order.saveOrder("order.txt");
			Sleep(5000);
			system("cls");
			break;
		}
		
		case 2://查看订单
			cout << "\t\t---------------------------------------------查看订单--------------------------------------------" << endl;
			order.showOrder();
			Sleep(3000);
			system("cls");
			break;
		case 3://删除订单
			cout << "\t\t---------------------------------------------修改订单--------------------------------------------" << endl;
			order.showOrder();
			cout << "\t\t\t请输入需要删除的序号：" << endl;
			cout << "\t\t\t   " << "输入零结束点菜" << endl;
			while (cin >> input, input)
			{
				if (input >= 1 && input <= 8)
					order.deleteOrder(input-1);
			}
			cout << "修改成功:" << endl;
			order.showOrder();
			order.saveOrder("order.txt");
			Sleep(3000);
			system("cls");
			break;
		default://离开
			return;
		}
	}


	return;
}