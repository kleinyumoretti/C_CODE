#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Chef :public User
{
public:
	//有参构造
	Chef(string name, string num);
	//无参
	Chef();
	//登录界面
	void loginMenu();
	//厨师子菜单
	void chefMenu();
	//厨师子系统
	void chefSystem();
};