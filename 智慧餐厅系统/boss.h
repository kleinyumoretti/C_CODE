#pragma once
#include "user.h"
#include "menumanager.h"
#include "ordermanager.h"
#include <string>
#include <iostream>
#include <vector>
#include <Windows.h>
using namespace std;
class Boss :public User
{
public:
	//有参构造
	Boss(string name, string num);
	//无参
	Boss();
	//登录界面
	void loginMenu();
	//老板子菜单
	void bossMenu();
	//老板子系统
	void bossSystem();
};
