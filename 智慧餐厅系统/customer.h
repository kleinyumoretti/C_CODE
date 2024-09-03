#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Customer :public User
{
public:
	//有参构造
	Customer(string name, string num);
	//无参构造
	Customer();
	//登录界面
	void loginMenu();
	//顾客子菜单
	void customerMenu();
	//顾客子系统
	void customerSystem();
};
