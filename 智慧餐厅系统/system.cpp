#include "system.h"
using namespace std;
//系统主菜单
void System::systemMenu()
{
	cout << "---------------------------------------欢迎进入智慧餐厅系统----------------------------------------" << endl;
	cout << "\t\t\t\t" << "请选择您的身份：" << endl;
	cout << "\t\t\t\t" << "1.        厨师" << endl;
	cout << "\t\t\t\t" << "2.        服务员" << endl;
	cout << "\t\t\t\t" << "3.        顾客" << endl;
	cout << "\t\t\t\t" << "4.        老板" << endl;
	cout << "\t\t\t\t" << "0.        离开" << endl;
}



//登录
void System::systemLogin(int select)
{
	//加载用户信息
	vector<User> users;
	ifstream ifs ("user.txt");
	string name;
	string num;
	while (ifs >> name, ifs >> num)
	{
		users.push_back(User(name, num));
	}
	ifs.close();


	//检测
	
	//for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//{
	//	cout << it->getname() << " " << it->getnum() << endl;
	//}
	
	
	//system("pause");
	//return;
	
	//写入
	/*ofstream ofs("user.txt",ofstream::app);
	ofs << "商心慈 111" << endl;
	ofs.close();
	return;*/
	User* people;
	int choice;
	
	
	switch (select)
	{
	case 1://厨师
		while (1)
		{
			Chef che;
			people = &che;
			people->loginMenu();
			cin >> choice;
			if (choice == 1)   //登录
			{
				string name;
				string password;
				cout << "请输入姓名" << endl;
				cin >> name;
				cout << "请输入密码" << endl;
				cin >> password;

				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name && it->getnum() == password)
					{
						cout << "登陆成功" << endl;
						Sleep(2000);
						system("cls");
						che.chefSystem();
						//子系统入口
						return;
					}
				}
				cout << "姓名或密码中有错误，请注册或稍后重试" << endl;
				Sleep(3000);
				break;
			}
			else if (choice == 2)	//注册
			{
				string name;
				string password;
				cout << "请输入姓名" << endl;
				cin >> name;
				cout << "请输入密码" << endl;
				cin >> password;
				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name)
					{
						cout << "该用户已注册" << endl;
						Sleep(2000);
						system("cls");
						return;
					}

				}
				ofstream ofs("user.txt", ofstream::app);
				ofs << name << " " << password << endl;
				ofs.close();
				cout << "用户注册成功" << endl;
				Sleep(2000);
				system("cls");
				break;

			}
			else//离开
			{
				return;
			}
		}
	case 2://服务员
		while (1)
		{
			Waiter wai;
			people = &wai;
			people->loginMenu();
			cin >> choice;
			if (choice == 1)   //登录
			{
				string name;
				string password;
				cout << "请输入姓名" << endl;
				cin >> name;
				cout << "请输入密码" << endl;
				cin >> password;

				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name && it->getnum() == password)
					{
						cout << "登陆成功" << endl;
						Sleep(2000);
						system("cls");
						wai.waiterSystem();
						//子系统入口
						return;
					}
				}
				cout << "姓名或密码中有错误，请注册或稍后重试" << endl;
				Sleep(3000);
				break;
			}
			else if (choice == 2)	//注册
			{
				string name;
				string password;
				cout << "请输入姓名" << endl;
				cin >> name;
				cout << "请输入密码" << endl;
				cin >> password;
				for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
				{
					if (it->getname() == name)
					{
						cout << "该用户已注册" << endl;
						Sleep(2000);
						system("cls");
						return;
					}

				}
				ofstream ofs("user.txt", ofstream::app);
				ofs << name << " " << password << endl;
				ofs.close();
				cout << "用户注册成功" << endl;
				Sleep(2000);
				system("cls");
				break;

			}
			else//离开
			{
				return;
			}
		}
	case 3:
		//顾客
		while(1)
		{
		Customer cus;
		people = &cus;
		people->loginMenu();
		cin >> choice;
		if (choice == 1)   //登录
		{
			string name;
			string password;
			cout << "请输入姓名" << endl;
			cin >> name;
			cout << "请输入密码" << endl;
			cin >> password;

			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
			{
				if (it->getname() == name && it->getnum() == password)
				{
					cout << "登陆成功" << endl;
					Sleep(2000);
					system("cls");
					cus.customerSystem();
					//顾客子菜单入口
					return;
				}
			}
			cout << "姓名或密码中有错误，请注册或稍后重试" << endl;
			Sleep(3000);
			break;
		}
		else if (choice == 2)	//注册
		{
			string name;
			string password;
			cout << "请输入姓名" << endl;
			cin >> name;
			cout << "请输入密码" << endl;
			cin >> password;
			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
			{
				if (it->getname() == name)
				{
					cout << "该用户已注册" << endl;
					Sleep(2000);
					system("cls");
					return ;
				}

			}
			ofstream ofs("user.txt",  ofstream::app);
			ofs << name << " " << password << endl;
			ofs.close();
			cout << "用户注册成功" << endl;
			Sleep(2000);
			system("cls");
			break;

		}
		else//离开
		{
			return;
		}
		}
	
	case 4:
	//	while (1)
	//	{
	//		Chef che;
	//		people = &che;
	//		people->loginMenu();
	//		cin >> choice;
	//		if (choice == 1)   //登录
	//		{
	//			string name;
	//			string password;
	//			cout << "请输入姓名" << endl;
	//			cin >> name;
	//			cout << "请输入密码" << endl;
	//			cin >> password;

	//			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//			{
	//				if (it->getname() == name && it->getnum() == password)
	//				{
	//					cout << "登陆成功" << endl;
	//					Sleep(2000);
	//					system("cls");
	//					che.chefSystem();
	//					//子系统入口
	//					return;
	//				}
	//			}
	//			cout << "姓名或密码中有错误，请注册或稍后重试" << endl;
	//			Sleep(3000);
	//			break;
	//		}
	//		else if (choice == 2)	//注册
	//		{
	//			string name;
	//			string password;
	//			cout << "请输入姓名" << endl;
	//			cin >> name;
	//			cout << "请输入密码" << endl;
	//			cin >> password;
	//			for (vector<User>::iterator it = users.begin(); it != users.end(); it++)
	//			{
	//				if (it->getname() == name)
	//				{
	//					cout << "该用户已注册" << endl;
	//					Sleep(2000);
	//					system("cls");
	//					return;
	//				}

	//			}
	//			ofstream ofs("user.txt", ofstream::app);
	//			ofs << name << " " << password << endl;
	//			ofs.close();
	//			cout << "用户注册成功" << endl;
	//			Sleep(2000);
	//			system("cls");
	//			break;

	//		}
	//		else//离开
	//		{
	//			return;
	//		}
	//	}
		break;
	}

}
//离开
void System::systemExit()
{
	cout << "---------------------------------------欢迎进入智慧餐厅系统----------------------------------------" << endl;
	cout << endl<<endl;
	cout << "\t\t\t\t" << "！！！欢迎下次使用！！！" << endl;
}
