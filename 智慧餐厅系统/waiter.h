#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Waiter :public User
{
public:
	//有参构造
	Waiter(string name, string num);
	//无参
	Waiter();
	//登录界面
	void loginMenu();
	//服务员子菜单
	void waiterMenu();
	//服务员子系统
	void waiterSystem();
};